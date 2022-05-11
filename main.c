#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "func.h"

int main(void)
{
	//시험 응시자의 정보(이름, 학과, 학번) 입력
	get_user_id();

	//사전에 파일로 저장된 답안 불러오기
	//import_answer();

	//1~4번 문제 풀이
	/*
	question_1();
	question_2();
	question_3();
	question_4();
	*/
	//점수 계산
	void calculate();

	//외부 파일로 결과 내보내기
	void export_result();

	//시험 종료한 뒤 안내 문구 출력
	void closing();

	return 0;
}