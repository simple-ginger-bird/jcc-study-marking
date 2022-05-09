#ifndef _FUNC_H_
#define _FUNC_H_

#include <stdio.h>
#include <stdlib.h>

char get_user_id(char, char, char);

void import_answer();

void question_1(int* p);

void question_2(int* p);

void question_3(int* p);

void question_4(int* p);

int calculate();

void export_result();

void closing();

struct multiple_choice_question {
	//객관식 문제의 1~5번 선지
	char choice_1[];
	char choice_2[];
	char choice_3[];
	char choice_4[];
	char choice_5[];
	
	//객관식 문제의 정답
	int answer() {};
};

struct descriptive_question {
	//서술형 문제의 제시 문장
	char example [] ;
	
	//서술형 문제의 정답
	char answer[];
};

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