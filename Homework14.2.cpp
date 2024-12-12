#include<stdio.h>
int main(){
	char sentence[] = "Hello world";
	int length = sizeof(sentence)/sizeof(char);
	printf("Chuoi gia tri ban moi nhap la:\n") 
	for(int i = 0; i < length -1; i++){
		printf("%c ", sentence[i]);
	} 
	return 0;

}
