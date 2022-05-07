#include <func.h>

int main(void)
{
	char name[10];
	char stdnum[20];
	char wclass[10];
	int ans1[11]={0};
	int ans2[16]={0};
	char ans3[11][501];
	char ans4[2][501];
	
	int score1 = 0;
	int score2 = 0;
	
	int i;
	
	int rans1[11] = {1,2,4,3,3,1,4,1,2,1,2};
	int rans2[16] = {1,3,4,2,2,1,3,4,3,2,1,1,3,3,4};
	
	printf("JCC 스터디 신청 테스트입니다!!\n");
	printf("이름을 적어주세요.(이름 입력 후 엔터키를 눌러주세요.):");
	gets(name);
	printf("학번을 입력해주세요.(학번 입력 후 엔터키를 눌러주세요.)");
	gets(stdnum);
	printf("학과를 입력해주세요.");
	gets(wclass);
	

	p1(ans1);
	p2(ans2);

	gets(ans3[4]);
	
	printf("\n\n\n");
	
	for(i=0;i<11;i++){
		if(ans1[i]==5){
			score1=score1+0;
		}
		else if(ans1[i]==rans1[i]){
			score1=score1+2;
		}
		else{
			score1--;
		}
	}
	
	for(i=0;i<15;i++){
		if(ans2[i]==5){
			score2=score2+0;
		}
		else if(ans2[i]==rans2[i]){
			score2=score2+2;
		}
		else{
			score2--;
		}
	}
	
	

	FILE *fp = NULL;
	fp = fopen("JCC_test.txt", "a");
	fprintf(fp, "이름:%s\n", name);
	fprintf(fp, "학번:%s\n", stdnum);
	fprintf(fp, "학과:%s\n", wclass);
	fprintf(fp, "\n\n");
	fprintf(fp,"1번 문제 점수: %d\n", score1);
	fprintf(fp,"2번 문제 점수: %d\n", score2);
	fprintf(fp, "1,2번 점수 합계: %d\n", score1 + score2);
	fprintf(fp, "\n\n");
	for (i = 0; i < 11; i++) {
		fprintf(fp,"(3-%d)번 문제 정답 : %s\n",i+1, ans3[i]);
	}
	fprintf(fp, "\n\n");
	for (i = 0; i < 2; i++) {
		fprintf(fp,"(4-%d)번 문제 정답 : %s\n", i+1, ans4[i]);
	}

	fclose(fp);

	printf("\n\n\n\n수고하셨습니다!\n");
	printf("이제, 프로그램을 실행시킨 폴더에 JCC_test라는 이름의 메모파일이 생성되었을 것입니다.\n");
	printf("그 파일을 학습부에게 건네주시면 됩니다.\n");
	printf("본 창은 이제 x를 눌러 끄셔도 좋습니다.\n\n\n\n");

	return 0;
}