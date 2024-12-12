#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char sentence[100];
	char delword;
	printf("Moi ban nhap xau ki tu cua chuoi:\n");
	fgets(sentence, sizeof(sentence), stdin);
	
	printf("Moi ban nhap ki tu muon xoa:\n");
	scanf("%c", &delword); 
	long a = strchr(sentence, delword) - &sentence[0];
	for(int i = a; i < strlen(sentence); i++){
		sentence[i] = sentence[i + 1];
	}
	
	for(int i = 0; i < strlen(sentence) - 1; i++){
		sentence[0] = toupper(sentence[0]);
		if(sentence[i] == ' ' ){
			sentence[i + 1] = toupper(sentence[i + 1]);
		}
	}
	printf("Chuoi ki tu ma ban vua nhap la:\n");
	for(int i = 0; i < strlen(sentence); i++){
		printf("%c", sentence[i]);
	}
	return 0;	
}
