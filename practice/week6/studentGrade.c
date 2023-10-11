#include <stdio.h>
#define STUDENTS 5
// 학생들의 성적을 분류하는 함수를 작성합니다.
void classifyStudents(int scores[ ], char targetGrade) 

{
    // 입력받은 성적에따라 반복문을 이용해 ABCDEF로 분류합니다. 
    printf("학생성적분류 : \n");
    char grade =  ' ';
    for (int i = 0; i < STUDENTS; i++) {
        if (scores[i] >= 90) {
            grade = 'A';
        }
        else if (scores[i] > 80) {
            grade = 'B';
        }
        else if (scores[i] >= 70) {
            grade = 'C';
        }
        else if (scores[i] >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }// 학생들의 점수를 표시합니다. 
        if (targetGrade == grade) {
            printf("%d학생은 %c 점수를 받았습니다. ", i + 1, targetGrade);
        }
    }
}

int main() {
    int scores[STUDENTS];
    // 학생들의 성적을 입력받습니다. 
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("학생 %d 의 성적을 입력하세요: ", i + 1);
        scanf_s("%d", &scores[i]);
    }
    char ch = getchar();// 버퍼 임시 저장 변수, 엔터 지우기 위해
  //  해당 학점을 받은 인원들을 출력합니다. 
    char target;
    printf("특정점수 (A, B, C, D, E, F)를 입력하시요 : ");
    scanf_s("%c", &target, 1);
    
    
    classifyStudents(scores, target);
    return 0;
}
