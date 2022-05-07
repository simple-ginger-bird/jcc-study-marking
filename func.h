#ifndef _HEADER_H_
#define _HEADER_H_
#include <stdio.h>
#include <stdlib.h>

char get_user_id(char, char, char);

void question_1(int* p);

void question_2(int* p);

void question_3(int* p);

void question_4(int* p);

int calculate();

void export_result();

void closing();



char name[10];
char stdnum[20];
char wclass[10];

int ans1[11] = { 0 };
int ans2[16] = { 0 };
char ans3[11][501];
char ans4[2][501];

int score1 = 0;
int score2 = 0;

int i;

int rans1[11] = { 1,2,4,3,3,1,4,1,2,1,2 };
int rans2[16] = { 1,3,4,2,2,1,3,4,3,2,1,1,3,3,4 };


#endif