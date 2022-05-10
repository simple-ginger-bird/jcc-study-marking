#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "func.h"

void test() {
	printf("Hello test()!\n");
}

void get_user_id(char in_stdName, char in_stdNum, char in_stdMajor){
	printf("JCC 스터디 신청 테스트입니다!!\n");

	printf("이름을 입력한 뒤, Enter 키를 눌러주세요.\n");
	printf("예시 : 홍길동");
	gets(in_stdName);

	printf("학번을 입력한 뒤, Enter 키를 눌러주세요.\n");
	printf("예시 : 12345678");
	gets(in_stdNum);

	printf("학과를 입력한 뒤, Enter 키를 눌러주세요.");
	printf("예시 : 컴퓨터공학과");
	gets(in_stdMajor);
}

/*
void import_answer() {
	/*
	1. 사전에 txt 또는 .csv로 문제의 답안을 저장해 둔다.	
	-> 수작업 또는 파일 작성이 가능한 프로그램 작성?

	2. 해당 .txt, .csv 파일에서 답만을 추출한다.
	ex. void read_answer_from_file();

	3. 파일에서 추출한 답안을 배열에 저장한다.
	ex. void save_answer();
	
}

void question_1(int* p)
{

	//첫 번째 문제들 
	printf("\n\n\n1. 주어진 히라가나를 보고, 히라가나와 일치하는 로마자에 맞는 번호를 입력해주세요.\n");
	printf("(정답이 1번이라고 생각한다면, 1만을 입력 후 엔터. 다른 문자나 답은 오답 처리됩니다.)\n\n");

	//문제 형태를 구조체로 구현?
	printf("(1-1)きく\n");
	printf("1-kiku\n");
	printf("2-sora\n");
	printf("3-chizu\n");
	printf("4-kabe\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[0]);

	printf("\n\n(1-2)のり\n");
	printf("1-tataku\n");
	printf("2-nori\n");
	printf("3-syumi\n");
	printf("4-kae\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[1]);

	printf("\n\n(1-3)ふう\n");
	printf("1-zettai\n");
	printf("2-koto\n");
	printf("3-furi\n");
	printf("4-fuu\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[2]);

	printf("\n\n(1-4)ゆき\n");
	printf("1-akane\n");
	printf("2-sei\n");
	printf("3-yuki\n");
	printf("4-jiyu\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[3]);

	printf("\n\n(1-5)わたし\n");
	printf("1-sonzai\n");
	printf("2-kiru\n");
	printf("3-watashi\n");
	printf("4-sasimi\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[4]);

	printf("\n\n(1-6)かがみ\n");
	printf("1-kagami\n");
	printf("2-kore\n");
	printf("3-keitai\n");
	printf("4-syapu\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[5]);

	printf("\n\n(1-7)なみだ\n");
	printf("1-nishino\n");
	printf("2-uze\n");
	printf("3-keisatsu\n");
	printf("4-namida\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[6]);

	printf("\n\n(1-8)きょり\n");
	printf("1-kyori\n");
	printf("2-kapuseru\n");
	printf("3-ebi\n");
	printf("4-agari\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[7]);

	printf("\n\n(1-9)じしょ\n");
	printf("1-houtai\n");
	printf("2-jisyo\n");
	printf("3-ryounin\n");
	printf("4-hon\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[8]);

	printf("\n\n(1-10)ざっし\n");
	printf("1-zasshi\n");
	printf("2-monaru\n");
	printf("3-kokoro\n");
	printf("4-tenisu\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[9]);

	printf("\n\n(1-11)けんり\n");
	printf("1-uchyuu\n");
	printf("2-kenri\n");
	printf("3-sigoto\n");
	printf("4-tsubame\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[10]);

}

void question_2(int* p)
{
	//두 번째 문제들 

	printf("\n\n\n2.다음 한자에 올바른 발음을 고르시오.\n");
	printf("(정답이 1번이라고 생각한다면, 1만을 입력 후 엔터. 다른 문자나 답은 오답 처리됩니다.)\n\n");

	printf("\n\n(2-1)世\n");
	printf("1-よ\n");
	printf("2-か\n");
	printf("3-し\n");
	printf("4-つ\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[0]);

	printf("\n\n(2-2)目標\n");
	printf("1-きょうふ\n");
	printf("2-かみなり\n");
	printf("3-もくひょう\n");
	printf("4-じっか\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[1]);

	printf("\n\n(2-3)猫\n");
	printf("1-え\n");
	printf("2-たつ\n");
	printf("3-こども\n");
	printf("4-ねこ\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[2]);

	printf("\n\n(2-4)汚す\n");
	printf("1-かくす\n");
	printf("2-よごす\n");
	printf("3-しめす\n");
	printf("4-めざす\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[3]);

	printf("\n\n(2-5)差し出す\n");
	printf("1-ましらす\n");
	printf("2-さしだす\n");
	printf("3-かしもうす\n");
	printf("4-ちゃしです\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[4]);

	printf("\n\n(2-6)無難\n");
	printf("1-むなん\n");
	printf("2-こんらん\n");
	printf("3-ほく\n");
	printf("4-じんせい\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[5]);

	printf("\n\n(2-7)果たす\n");
	printf("1-めたす\n");
	printf("2-さしたす\n");
	printf("3-はたす\n");
	printf("4-こたす\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[6]);

	printf("\n\n(2-8)余裕\n");
	printf("1-はいしん\n");
	printf("2-ほうび\n");
	printf("3-なんじゃく\n");
	printf("4-よゆう\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[7]);

	printf("\n\n(2-9)描く\n");
	printf("1-はく\n");
	printf("2-ねこく\n");
	printf("3-かく\n");
	printf("4-さく\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[8]);

	printf("\n\n(2-10)目指す\n");
	printf("1-もくじす\n");
	printf("2-めざす\n");
	printf("3-いくす\n");
	printf("4-ななす\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[9]);

	printf("\n\n(2-11)買う\n");
	printf("1-かう\n");
	printf("2-うたう\n");
	printf("3-そろう\n");
	printf("4-くう\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[10]);

	printf("\n\n(2-12)足\n");
	printf("1-あし\n");
	printf("2-ぞく\n");
	printf("3-ぱる\n");
	printf("4-ふと\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[11]);

	printf("\n\n(2-13)確信\n");
	printf("1-はいしん\n");
	printf("2-はくなん\n");
	printf("3-かくしん\n");
	printf("4-じぶん\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[12]);

	printf("\n\n(2-14)落ち着く\n");
	printf("1-かちちゃく\n");
	printf("2-ほうび\n");
	printf("3-おちつく\n");
	printf("4-もうちかく\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[13]);

	printf("\n\n(2-15)成り立つ\n");
	printf("1-はりまつ\n");
	printf("2-こりゆく\n");
	printf("3-おりかつ\n");
	printf("4-なりたつ\n");
	printf("5-잘 모르겠음\n");
	printf("정답:");
	scanf("%d", &p[14]);

	getchar();
}

void question_3(int* p)
{
	//세 번째 문제들 

	printf("\n\n\n3. 다음 문장을 읽고, 한국어로 번역하시오.\n");
	printf("(직접 타이핑해주세요.)\n");
	printf("ex) ３/1000の男はたった３回のこうげきで1000匹の物理鬼を倒した。\n");
	printf("정답 : 3/1000의 사나이는 단 3번의 공격으로 1000마리의 물리귀를 쓰러뜨렸다.\n\n");

	printf("(3-1)經濟だけでなく、法律にも詳しいのが彼の强みだ。\n");
	printf("정답:");
	gets(&p[0]);

	printf("\n\n(3-2)わが校の特色は國際交流に力を入れていることだ。\n");
	printf("정답:");
	gets(&p[1]);

	printf("\n\n(3-3)驛で友だちとわかれて家に歸りました。\n");
	printf("정답:");
	gets(&p[2]);

	printf("\n\n(3-4)家族みんなで新年のおいわいをしました。\n");
	printf("정답:");
	gets(&p[3]);

	printf("\n\n(3-5)猫は人家に住み着きながらも、完全に自立している。\n");
	printf("정답:");
	gets(&p[4]);

	printf("\n\n(3-6)變化とは、新しく生まれた感情により古いかちかんが衰退し、新しいかちかんが生まれることである。\n");
	printf("정답:");
	gets(&p[5]);

	printf("\n\n(3-7)不治の病に冒された子どもに希望をあたえるうそは、罪ではない。\n");
	printf("정답:");
	gets(&p[6]);

	printf("\n\n(3-8)彼女の樣子がおかしいのが心配だ。\n");
	printf("정답:");
	gets(&p[7]);

	printf("\n\n(3-9)かつては目新しかったものも、いずれは通常のものへと取りこまれていく。\n");
	printf("정답:");
	gets(&p[8]);

	printf("\n\n(3-10)東京なうやけど、15分もまたされとる。そいつ、近くにおったらええやねん。\n");
	printf("정답:");
	gets(&p[9]);

	printf("\n\n(3-11)彼に告られたとしても、浮氣者ってうわさがあるから氣をつけてね。\n");
	printf("정답:");
	gets(&p[10]);

}

void question_4(int* p) {
	//네 번째 문제들
	printf("4. 다음 문제들은 듣기 문제들입니다.\n\n");
	printf("듣기 문제는 한 번만 들려주지만, 동영상을 되감기하여 여러 번 들을 수 있습니다.\n");
	printf("다음 URL에 접속하여 내용을 듣고, 문제를 풀어주시기 바랍니다.\n\n");
	printf("https://youtu.be/mM47Rkkixig  \n\n");
	printf("혹은, ,JCC카페에서 'JCC 듣기테스트 영상'이라고 검색해주세요.\n\n");


	printf("\n\n(4-1) 다음을 듣고 우리말로 해석하시오.(한 줄에 해석을 모두 적어주신 후 엔터를 눌러주세요. 그렇지 않으면, 바로 다음문제로 넘어갑니다.)\n");
	printf("정답:");
	gets(ans4[0]);
	printf("\n\n(4-2) 다음을 듣고 우리말로 해석하시오.(한 줄에 해석을 모두 적어주신 후 엔터를 눌러주세요. 그렇지 않으면, 바로 다음으로 넘어갑니다.)\n");
	printf("정답:");
	gets(ans4[1]);
}

void calculate() {
	for (i = 0; i < 11; i++) {
		if (ans1[i] == 5) {
			score1 = score1 + 0;
		}
		else if (ans1[i] == rans1[i]) {
			score1 = score1 + 2;
		}
		else {
			score1--;
		}
	}

	for (i = 0; i < 15; i++) {
		if (ans2[i] == 5) {
			score2 = score2 + 0;
		}
		else if (ans2[i] == rans2[i]) {
			score2 = score2 + 2;
		}
		else {
			score2--;
		}
	}
}

void export_result() {
	FILE* fp = NULL;
	fp = fopen("JCC_test.txt", "a");
	fprintf(fp, "이름:%s\n", stdName);
	fprintf(fp, "학번:%s\n", stdNum);
	fprintf(fp, "학과:%s\n", stdMajor);
	fprintf(fp, "\n\n");
	fprintf(fp, "1번 문제 점수: %d\n", score1);
	fprintf(fp, "2번 문제 점수: %d\n", score2);
	fprintf(fp, "1,2번 점수 합계: %d\n", score1 + score2);
	fprintf(fp, "\n\n");
	for (i = 0; i < 11; i++) {
		fprintf(fp, "(3-%d)번 문제 정답 : %s\n", i + 1, ans3[i]);
	}
	fprintf(fp, "\n\n");
	for (i = 0; i < 2; i++) {
		fprintf(fp, "(4-%d)번 문제 정답 : %s\n", i + 1, ans4[i]);
	}

	fclose(fp);

}

void closing() {
	printf("\n\n\n\n수고하셨습니다!\n");
	printf("이제, 프로그램을 실행시킨 폴더에 JCC_test라는 이름의 메모파일이 생성되었을 것입니다.\n");
	printf("그 파일을 학습부에게 건네주시면 됩니다.\n");
	printf("본 창은 이제 x를 눌러 끄셔도 좋습니다.\n\n\n\n");
}

*/