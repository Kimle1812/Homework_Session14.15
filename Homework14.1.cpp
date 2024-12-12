#include<stdio.h>
#include<string.h>
int main(){
	char sentence[100];
	printf("Moi ban nhap xau ki tu cua chuoi:\n");
	fgets(sentence, sizeof(sentence), stdin);
	printf("Do dai cua chuoi ki tu la: %d\n", strlen(sentence));
	printf("Chuoi ki tu ma ban vua nhap la: \n");
	printf("%s", sentence);
	return 0;	
}
