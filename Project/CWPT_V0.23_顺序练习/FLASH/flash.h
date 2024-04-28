/***************************************************************** (C) COPYRIGHT  *****************************************************************
 * File Name          : BSP_flash.h
 * Author             : lzx
 * Version            : V1.0.0
 * Date               : 2021/11/25
 * Description        : ���궨�塿  �洢�׵�ַ
 *                      ��ȫ�ֱ����� �豸���ͺ͹̼��汾�� ÿ���޸ĳ�����д�뵽flash��
 *                      ������˵���� BSP_Flash_Init          ��ȡ��ʷ�趨ֵ�����鿴�Ƿ���Ҫд���µ��豸���ͺ͹̼��汾
 *                                  BSP_Flash_Read_Setting  ��ȡ�趨
 *                                  BSP_Flash_Write_Setting д���趨
 ************************************************************************************************************************************************/

#ifndef __FLASH_H
#define __FLASH_H

#include "debug.h"
#include "Timer.h"

// ϵͳ���û���ַ
#define SETTING_START_ADDR ((uint32_t)0x0800E000)

	
// ϵͳ���ýṹ��
typedef struct {
		// 128�ֽ� 
		char software_version[2];				 	// ����汾V[1].[0]
		u16  flash_write_time;						// FLASHд�����
		char user_name[16];								// �û�����/���� 
		// ��������ʹ����20���ֽ�
		char user_speed;     	        		// �û��ķ��ٶȣ�1-4��
    char user_volume;									// �û�����
    char user_future[106];     	      // δ���汾Ԥ��
} System_Setting_Info_TypeDef;

extern System_Setting_Info_TypeDef System_Setting_Info;

extern void Update_System_Setting(void);

void BSP_Flash_Read_Info(void);
void BSP_Flash_Write_Info(void);
void Flash_Read_Setting(void);
void Flash_Write_Setting(void);
void BSP_Flash_Init(void);

#endif
