#include<stdio.h>
int main(){
	char sentence[] = "Nguyen Thi Kim Le";
	char word;
	int index = 0;
	int length = sizeof(sentence)/sizeof(char);
	printf("Moi ban nhap ki tu : ");
	scanf("%c", &word);
	for(int i = 0; i < length -1; i++){
		if(word == sentence[i]){
			index ++;
		} 
	}
	printf("So lan xuat hien cua ki tu %c la %d", word, index); 
	return 0;

}
