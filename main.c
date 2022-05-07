//사용자 정의 헤더 파일
#include <func.h>

int main(void)
{
	//시험 응시자 정보 입력
	void get_user_id();
	
	//1~4번 문제 풀이
	void question_1();
	void question_2();
	void question_3();
	void question_4();

	//점수 계산 및 외부 파일로 저장(내보내기)
	void calculate();
	void export_result();

	//프로그램 종료
	void closing();
	return 0;
}