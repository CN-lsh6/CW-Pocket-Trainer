#ifndef __OLED_H
#define __OLED_H			  	 

#include "debug.h"   

#define OLED_DC_SET()	          GPIO_SetBits(GPIOB,  GPIO_Pin_14)	//OLED��DC��
#define OLED_DC_CLR()						GPIO_ResetBits(GPIOB,GPIO_Pin_14)
#define OLED_SCK_SET()	        GPIO_SetBits(GPIOB,  GPIO_Pin_13)	//OLED��SCK��
#define OLED_SCK_CLR()				  GPIO_ResetBits(GPIOB,GPIO_Pin_13)
#define OLED_SDA_SET()	        GPIO_SetBits(GPIOB,  GPIO_Pin_12)	//OLED��SDA��
#define OLED_SDA_CLR()				  GPIO_ResetBits(GPIOB,GPIO_Pin_12)
#define OLED_CS_SET()	        	GPIO_SetBits(GPIOA,  GPIO_Pin_8)	//OLED��CS��
#define OLED_CS_CLR()						GPIO_ResetBits(GPIOA,GPIO_Pin_8)

#define OLED_CMD  	                               0			//д����
#define OLED_DATA 	                               1			//д����

extern u8 OLED_GRAM[128][8];	 

void OLED_WR_Byte(u8 dat,u8 cmd);	    
void OLED_Display_On(void);//����OLED��ʾ  
void OLED_Display_Off(void);//�ر�OLED��ʾ  
void OLED_Refresh_Gram(void);//�����Դ浽OLED	(��ÿһ����ʾ�Ľ�βһ��Ҫ�ӣ�ʵʱˢ�£���Ȼ��ʵʱˢ�¾ͻ�һֱ����)	   
							   		    
void OLED_Init(void);//OLED��ʼ������
void OLED_Clear(void);//��������
void OLED_DrawPoint(u8 x,u8 y,u8 t);//���㺯��
void OLED_DrawRect(u8 x1,u8 y1,u8 x2,u8 y2);//��������
void OLED_Fill(u8 x1,u8 y1,u8 x2,u8 y2,u8 dot);//���
void OLED_ShowChar(u8 x,u8 y,char chr,u8 size,u8 mode);//��ʾ�ַ�
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size);//��ʾ����
void OLED_ShowIntNum(u8 x,u8 y,int32_t num,u8 len,u8 size);//��ʾ�з�������
void OLED_Show3FNum(u8 x,u8 y,float num,u8 lenf,u8 lenb,u8 size);//��ʾ�з��Ÿ�������
void OLED_ShowString(u8 x,u8 y,const char *p,u16 size);//
void OLED_ShowCH_16(u8 x,u8 y,u8 no);
void OLED_ShowCH_24(u8 x,u8 y,u8 no);
void OLED_ShowCH_32(u8 x,u8 y,u8 no);
void OLED_Show_MyPic2012(u8 x,u8 y,u8 no);
void OLED_Show_MyPic1616(u8 x,u8 y,u8 no);
void OLED_ShowChar_2216(u8 x,u8 y,char letter);
void OLED_ShowCHStr_16(u8 x,u8 y, u8 mode,char c1,char c2,char c3);
#endif  
	 
