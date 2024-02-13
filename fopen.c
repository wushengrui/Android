#include <stdio.h>
int main(int argc, const char* argv[])
{
	FILE *fp;
	//1.以只写方式打开文件，如果文件不存在回报错
	//if ((fp = fopen("./hello.txt", "r")) == NULL){
	//	printf("fopen file error\n");
	//	return -1;
	//}
	//printf("fopen file success\n");
	if ((fp = fopen("./hello.txt", "w")) == NULL){
		printf("fopen file error\n");
		return -1;
	}
	printf("fopen file sucess\n");
	return 0;
}
