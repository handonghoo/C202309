#include <stdio.h>
#define STUDENTS 5
// 학생들의 성적을 분류하는 함수를 작성합니다.
void ClassifyStudents(int *scores, char targetGrade)
{ // 입력받은 성적에따라 ABCDEF로 분류!
    printf("학생성적분류 : \n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
        if (*(scores+i) >= 90) {
            grade = 'A';
        }
        else if (*(scores+i) >= 80) {
            grade = 'B';
        }
        else if (*(scores+i) >= 70) {
            grade = 'C';
        }
        else if (*(scores+i) >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }// 학생들의 점수를 표시합니다. 
        if (targetGrade == grade) {
            printf("%d학생은 %c 점수를 받았습니다.\n ", i + 1, targetGrade);
        }
    }
}
// 학생들의 점수합계를 표시하는 함수를 작성합니다. 
int SumScores(int *scores) {
    int sum = 0;
    for (int i = 0; i < STUDENTS; i++) {
        sum += *(scores+i);
    }
    return sum;
}
// 학생의 총 점수를 계산하는 함수를 작성합니다 .
double AverageScores(int *scores) {
    int sum = SumScores(scores);
    double average = (double)sum / (double)STUDENTS;
    return average;
}
// 학생들의 등수를 나열하는 함수를 작성합니다. 
void PrintRanks(int *scores) {
    int ranks[STUDENTS];
    for (int i = 0; i < STUDENTS; i++) {
        ranks[i] = 1;
        for (int j = 0; j < STUDENTS; j++) {
            if (*(scores+j) > *(scores+i)) {
                ranks[i]++;
        }
        }
        printf("학생 %d의 등수는 %d입니다.\n", i+1, ranks[i]);
    }
    
}

int main() {
    int scores[STUDENTS];
    // 학생들의 성적을 입력받는 부분
    for (int i = 0; i < STUDENTS; i++) {
        printf("학생 %d의 성적을 입력하세요: ", i + 1);
        scanf_s("%d", scores+i);
    }

    char ch = getchar();// 버퍼 임시 저장 변수, 엔터 지우기 위해

    // 해당 학점을 받은 학생을 출력합니다. 
    char targetGrade;
    printf("학점을 선택하세요 (A, B, C, D, F): ");
    scanf_s("%c", &targetGrade);
    //점수 평균, 총합, 순위를 출력합니다. 
    ClassifyStudents(scores, targetGrade);
    int sum = SumScores(scores);
    double average = AverageScores(scores);
    printf("학생들 점수의 총합은 %d이고, 평균 값은 %.2f입니다.\n", sum, average);
    PrintRanks(scores);
    return 0;
}
