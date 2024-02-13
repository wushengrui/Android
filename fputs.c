#include <stdio.h>
int main(int argc, const char *argv[])
{
	FILE *fp1,*fp2;
	//1.检查命令行参数个数
	if (argc != 3){
		printf("input error, try again\n");
		printf("usage: ./a.out srcfile destfile\n");
		return -1;
	}
	//2.只读方式打开源文件，只写方式打开目标文件
	if((fp1 = fopen(argv[1], "r")) == NULL){
		printf("fopen error\n");
		return -1;
	}
	if((fp2 = fopen(argv[2], "w")) == NULL){
		printf("fopen error\n");
		return -1;
	}
	//3.循环从源文件中读字符，向目标文件中写字符
	char s[50];
	while(fgets(s, sizeof(s), fp1)){
		fputs(s, fp2);
	}
	//4.关闭文件
	fclose(fp1);
	fclose(fp2);
	return 0;
}
