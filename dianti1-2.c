#include<stdio.h>
#include<math.h>
int main() {
	FILE* fp;
    int i;
    int j,k,l;
	fp = fopen("shuju.bat", "r");
    fscanf(fp,"%d,%d,%d",j,k,l);
    for(i=0;i<3;i++){
        printf("%d",fp[i]);
    }
	return 0;
}