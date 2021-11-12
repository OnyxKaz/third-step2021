#include <stdio.h>
#include<math.h>

int main() {
	float rika[20] = { 65 ,80 ,67 ,35 ,58 ,60 ,72 ,75 ,68 ,92 ,36 ,50, 25 ,85 ,46, 42, 78 ,62 ,84 ,70 };
	float engl[20] = { 44 ,87 ,100, 63, 52, 60, 58, 73, 55, 86, 29, 56, 89, 23, 65, 84, 64, 27, 86, 84 };
	float rika_sum = 0;
	float engl_sum = 0;
	float rika_avg, engl_avg, rika_hensa, engl_hensa;
	float r = 0;
	float e = 0;

	for (int i = 0; i < 20; i++) {
		rika_sum += rika[i];
		engl_sum += engl[i];
	}
	rika_avg = rika_sum / 20;
	engl_avg = engl_sum / 20;

	printf("理科の合計点：%f、平均点：%f\n", rika_sum, rika_avg);
	printf("英語の合計点：%f、平均点：%f\n", engl_sum, engl_avg);

	for (int i = 0; i < 20; i++) {
		r += (rika[i] - rika_avg) * (rika[i] - rika_avg);
		e += (engl[i] - engl_avg) * (engl[i] - engl_avg);
	}

	printf("理科の標準偏差：%f\n", sqrt(r / 20));
	printf("英語の標準偏差：%f\n", sqrt(e / 20));

	return 0;
}
