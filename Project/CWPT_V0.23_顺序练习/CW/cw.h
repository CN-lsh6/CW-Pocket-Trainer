#ifndef __CW_H
#define __CW_H

#include "debug.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// ����Ī˹�������ڵ�Ľṹ��
typedef struct MorseNode {
    char character; // �洢�ַ���Ҷ�ڵ���Ч
		struct MorseNode *left; // �㣨.������
    struct MorseNode *right; // ����-������
} MorseNode;

// ��������
MorseNode* createMorseTree(void);
void insertMorseCode(MorseNode* node, const char* code, char character);
MorseNode* searchMorseCode(MorseNode* node, const char* code);
void freeMorseTree(MorseNode* node);


extern MorseNode MorseTreeRoot;
extern void MorseTree_Init(void);
extern char GetCharFromMorseCode(MorseNode* node, const char* code);
extern const char* MorseDictionary_En[];
extern const char* MorseDictionary_Num[];
extern const char* MorseDictionary_Symb[];
extern const char* MorseStringAsLength[];

#define CW_SEND_QUEUE_LENGTH 10
extern void ClearStr(char *str, size_t length);

extern char CW_Code[7];
extern char CW_Code_last[7];
extern u8 CW_Code_idx;

extern char CW_Letter;
extern void CopyStr(char *dest, const char *src, size_t destSize);

// ����ʱ��
extern int time_dit;
extern int time_dah;
extern int time_space_bit;
extern int time_space_letter;
extern int time_space_word;
// ���Ͷ���
extern u8 CW_Send_Queue_idx;
extern u8 CW_Send_Queue[CW_SEND_QUEUE_LENGTH];

extern int generate_random_number(int min, int max);
extern char num2letter(signed char num);
extern u8 letter2num(char ch);
extern void letter2MorseCode(char ch,char* morsecode);
#endif 
