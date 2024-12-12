#include<stdio.h>
#include<string.h> 
int main() {
	int word = 0, number = 0, index = 0;
    char string[100];
    printf("Moi ban nhap mot chuoi bat ki: ");
    fgets(string, sizeof(string), stdin);
    for (int i = 0; i < strlen(string) - 1; i++) {
        if ((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')){
            word++;
        } else if (string[i] >= '0' && string[i] <= '9'){
        	number++;
		} else {
			index ++;
		}	
    }
    printf("So ki tu la chu cai trong chuoi la: %d\n", word);
    printf("So ki tu la chu so trong chuoi la: %d\n", number);
    printf("So ki tu la ki tu dac biet trong chuoi la: %d\n", index);
    return 0;
}
