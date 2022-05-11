#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void get_user_id(void);

void import_answer();

void question_1(int* p);

void question_2(int* p);

void question_3(int* p);

void question_4(int* p);

void calculate();

void export_result();

void closing();

/*
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

*/


char stdName[20];
char stdNum[20];
char stdMajor[20];


/*
char* stdName;
char* stdName = 'abcd';
char* stdNum[20];
char* stdMajor[10];
*/