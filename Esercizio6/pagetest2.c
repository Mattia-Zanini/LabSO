#define ROWS 256
#define COLS 1024

int main(void) {

	int data[ROWS][COLS];

	int i, j, n;

	for (n = 0; n < 100; n++)
		for (j = 0; j < COLS; j++)
			for (i = 0; i < ROWS; i++)
				data[i][j] = 0;

	return 0;
}
