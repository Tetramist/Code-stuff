#include <stdio.h>

int main()
{
	int r1, k1, r2, k2, sum, c, d, f, matrix1[10][10], matrix2[10][10], mult[10][10];

	sum = 0;


		printf("Enter the number of rows & columns of the first matrix:\n");

		scanf("%d%d", &r1, &k1);

		printf("Enter the number of rows & columns of the second matrix:\n");

		scanf("%d%d", &r2, &k2);

		if (k1 != r2)
			printf("Cannot multiply matrices of given dimensions.\n");

		else {

			printf("Enter values of the first matrix:\n");

			for (c = 0; c < r1; ++c)
				for (d = 0; d < k1; d++)
					scanf("%d", &matrix1[c][d]);

			printf("Enter values of the second matrix\n");

			for (c = 0; c < r2; ++c)
				for (d = 0; d < k2; ++d)
					scanf("%d", &matrix2[c][d]);


			for (c = 0; c < r1; ++c) {
				for (d = 0; d < k2; ++d) {
					for (f = 0; f < r2; ++f)
						sum = sum + matrix1[c][f] * matrix2[f][d];

					mult[c][d] = sum;
					sum = 0;
				}
			}

			printf("Product:\n");

			for (c = 0; c < r1; ++c) {
				for (d = 0; d < k2; ++d)
					printf("%d ", mult[c][d]);

				printf("\n");
			}
		}
	return 0;
}
