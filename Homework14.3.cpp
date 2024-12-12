#include<stdio.h>
int main(){
	char sentence[] = "Hello world";
	int length = sizeof(sentence)/sizeof(char);
	for(int i = length - 2; i >= 0; i--){
		printf("%c ", sentence[i]);
	} 
	return 0;

}
