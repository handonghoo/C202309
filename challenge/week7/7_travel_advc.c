#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();

int travelDays[NUMCITY][NUMPEOPLE];
double averageDays[NUMCITY];


int getSum(int numArray[],int length); // 각 도시에서 보낸 총일수 계산
double getAverage(double numArray[], int length); // 각 도시에서 보낸 평균일수 계산
int printFamousCity(double dayArray[], int length); // 평균일수를 기반으로 가장 인기 있는 도시를 출력

int main() {
	// 사용자로부터 도시 이름 입력받기
	printf("%d개의 도시명을 차례대로 입력해주세요. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}
	// 사용자로부터 사람 이름 받기
	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}
	// 함수 호출
	calculateTravelDays(names);

	return 0;
}

void calculateTravelDays() {


	// 각 도시에서 각 사람이 보낸 일 수 입력받기
	for (int i = 0; i < NUMPEOPLE; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}

	

	// 각 도시별 총 일 수 및 평균 일 수 계산및 출력


	for (int i = 0; i < NUMPEOPLE; i++) {
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		int totalDay = getSum(travelDays[i], NUMPEOPLE);
		printf("도시%s에서 보낸 총 일수 :%d  ", cities[i], totalDay );
		printf(" 평균 일 수 :%2f\n ", averageDay);
		averageDays[i] = averageDay;
	

}
printFamousCity(averageDays, NUMCITY);
}

int getSum(int numArray[], int length)
{
	// 각 도시별 총 일 수
	int totaldays = 0;
	for (int i = 0; i < length; i++) {
		totaldays += numArray[i];
	}
	return averageDays;
}

 double getAverage(double numArray[],int length)
{
	// 각 도시별 평균 일 수 
	 int totaldays = 0;
	 for (int i = 0; i < length; i++) {
		 totaldays += numArray[i];
	 }
	 double averageDays = (double)totaldays / length;
	 return averageDays;
	}

 int printFamousCity(double dayArray[], int length) {
	 double maxDay = 0;
	 int maxDayIndex = 0;
	 for (int i = 0; i < length; i++) {
		 if (dayArray[i] > maxDay) {
			 maxDay = dayArray[i];
			 maxDayIndex = i;
		 }
	 }
	 printf("평균일 기준으로 가장 인기있었던 도시는 %s입니다. (평균머문일 : %.2f)\n", cities[maxDayIndex], maxDay);
 }

