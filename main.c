#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main(void)
{
	//시험 응시자의 이름, 학번, 학과 입력
	
	test();	//void test(); 하면 오류 생성

	//사전에 파일로 저장된 답안 불러오기
	void import_answer();

	//1~4번 문제 풀이
	void question_1();
	void question_2();
	void question_3();
	void question_4();

	//점수 계산
	void calculate();

	//외부 파일로 결과 내보내기
	void export_result();

	//시험 종료한 뒤 안내 문구 출력
	void closing();

	return 0;
}