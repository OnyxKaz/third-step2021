#include <stdio.h>
#include<math.h>

void swap(int* x, int* y) {
	int temp;    

	temp = *x;
	*x = *y;
	*y = temp;
}


void bubble_sort(int array[], int array_size) {
	int i, j;

	for (i = 0; i < array_size - 1; i++) {
		for (j = array_size - 1; j >= i + 1; j--) {  
			if (array[j] > array[j - 1]) { swap(&array[j], &array[j - 1]); }
		}
	}
}

int main() {
	int rika[20] = { 65 ,80 ,67 ,35 ,58 ,60 ,72 ,75 ,68 ,92 ,36 ,50, 25 ,85 ,46, 42, 78 ,62 ,84 ,70 };
	int engl[20] = { 44 ,87 ,100, 63, 52, 60, 58, 73, 55, 86, 29, 56, 89, 23, 65, 84, 64, 27, 86, 84 };
	float rika_sum = 0;
	float engl_sum = 0;
	float rika_avg, engl_avg;
	float r = 0;
	float e = 0;
	float hensa_r[20];
	float hensa_e[20];

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

	for (int i = 0; i < 20; i++) {
		hensa_r[i] = (10 * (rika[i] - rika_avg) / sqrt(r / 20)) + 50;
		hensa_e[i] = (10 * (engl[i] - engl_avg) / sqrt(r / 20)) + 50;
		printf("%d番目の人の偏差値：理科%f、英語%f\n", i + 1, hensa_r[i], hensa_e[i]);
	}
	bubble_sort(rika, 20);
	bubble_sort(engl, 20);
	printf("理科の得点降順\n");
	for (int i = 0; i < 20; i++) {
		printf("%d,",rika[i]);	
		
	}
	printf("\n");
	printf("英語の得点降順\n");
	for (int i = 0; i < 20; i++) {
		printf("%d,", engl[i]);

	}
	
	printf("\n");
	return 0;
}
