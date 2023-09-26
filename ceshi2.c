#include<stdio.h>
#include<math.h>
int main() {
	FILE* fp;
	errno_t err = fopen_s(&fp, "shuju.bat", "r");
	int *f;
	fread(f, 4, 3, fp);
	printf("%d,%d,%d", f[0], f[1], f[2]);
	return 0;
	fclose(fp);
}