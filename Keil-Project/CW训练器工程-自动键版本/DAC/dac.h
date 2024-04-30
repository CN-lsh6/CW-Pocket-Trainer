#ifndef __DAC_H
#define __DAC_H

#include "debug.h"

extern void EarPhone_WAVE(u16 * WAVE, float Volume);
void DAC_BUZZ_Init( void );
void DAC1_DMA_Init( void );
void TIM3_DAC_Init( u16 arr, u16 psc );
void DAC_MUSIC_Init( void );

#define SOUND_SamplesPerSec  (20000)		//Ĭ�ϲ�������Ϊ20K

#define SOUND_LENGTH  (20)

#define DAC_TIM_Freq (72000000)
// 0~4000
extern u16 WAVE_NOW[ SOUND_LENGTH ];
// ���ǲ�
extern u16 WAV_DATA1[ SOUND_LENGTH ];
// ����
extern u16 WAV_DATA2[ SOUND_LENGTH ];
// ���Ҳ�
extern u16 WAV_DATA3[ SOUND_LENGTH ];

// ������ר�ô���
void Play_JI_DIT(void);
void Play_JI_DAH(void);

extern void DAC_SetFreq(int Freq);

#endif 
