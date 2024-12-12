#include<stdio.h>
#include<string.h>
int main(){
	int index = 0;
	char sentence[100];
	printf("Moi ban nhap xau ki tu cua chuoi:\n");
	fgets(sentence, sizeof(sentence), stdin);
	for(int i = 0; i < strlen(sentence) - 1; i++){
		if(sentence[i] == ' '){
			index ++;
		} 
	}
	printf("So tu co trong chuoi la %d", index + 1);
	return 0;

}
