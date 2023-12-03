#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 10

typedef struct {
    char name[50];
    int score;
} Student;

void ClassifyStudents(Student* students, int numStudents, char targetGrade) {
    printf("학생 성적 분류:\n");
    char grade = ' ';
    for (int i = 0; i < numStudents; i++) {
        if (students[i].score >= 90) {
            grade = 'A';
        }
        else if (students[i].score >= 80) {
            grade = 'B';
        }
        else if (students[i].score >= 70) {
            grade = 'C';
        }
        else if (students[i].score >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }
        if (targetGrade == grade) {
            printf("%s 학생은 %c 점수를 받았습니다.\n", students[i].name, targetGrade);
        }
    }
}

int SumScores(Student* students, int numStudents) {
    int sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum += students[i].score;
    }
    return sum;
}

double AverageScores(Student* students, int numStudents) {
    int sum = SumScores(students, numStudents);
    double average = (double)sum / (double)numStudents;
    return average;
}

void PrintRanks(Student* students, int numStudents) {
    int ranks[MAX_STUDENTS];
    for (int i = 0; i < numStudents; i++) {
        ranks[i] = 1;
        for (int j = 0; j < numStudents; j++) {
            if (students[j].score > students[i].score) {
                ranks[i]++;
            }
        }
        printf("%s의 등수는 %d입니다.\n", students[i].name, ranks[i]);
    }
}

int main() {
    int numStudents;
    printf("학생 수를 입력하세요: ");
    if (scanf_s("%d", &numStudents) != 1) {
        printf("입력 오류가 발생하였습니다.\n");
        return 1;
    }

    // 동적으로 학생 구조체 배열 생성
    Student* students = (Student*)malloc(numStudents * sizeof(Student));

    // 학생 정보 입력받기
    for (int i = 0; i < numStudents; i++) {
        printf("학생 이름을 입력하세요: ");
        if (scanf_s("%s", students[i].name, sizeof(students[i].name)) != 1) {
            printf("입력 오류가 발생하였습니다.\n");
            free(students);
            return 1;
        }
        printf("학생 점수를 입력하세요: ");
        if (scanf_s("%d", &students[i].score) != 1) {
            printf("입력 오류가 발생하였습니다.\n");
            free(students);
            return 1;
        }
    }

    char targetGrade;
    printf("학점을 선택하세요 (A, B, C, D, F): ");
    if (scanf_s(" %c", &targetGrade, sizeof(targetGrade)) != 1) {
        printf("입력 오류가 발생하였습니다.\n");
        free(students);
        return 1;
    }

    ClassifyStudents(students, numStudents, targetGrade);

    int sum = SumScores(students, numStudents);
    double average = AverageScores(students, numStudents);
    printf("학생들 점수의 총합은 %d이고, 평균 값은 %.2f입니다.\n", sum, average);

    PrintRanks(students, numStudents);

    // 동적으로 할당한 메모리 해제
    free(students);

    return 0;
}
