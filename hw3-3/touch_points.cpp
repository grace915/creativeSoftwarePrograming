#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct {
	double x;
	double y;
}Point;

typedef struct {
	char name[7];
	Point points[3];
}Person;

int main(void) {

	Person person[3];
	int tmp;
	int max[3];

	for (int i = 0; i < 3; i++) {
		tmp = 0;
		cin >> person[i].name;
		for (int j = 0; j < 3; j++) {
			cin >> person[i].points[j].x;
			cin >> person[i].points[j].y;
			int now = person[i].points[j].x * person[i].points[j].x +
				person[i].points[j].y * person[i].points[j].y;
			if (tmp <= now) {
				tmp = now;
				max[i] = j;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%s (%f, %f)\n", person[i].name,
			person[i].points[max[i]].x, person[i].points[max[i]].y);
	}
}
