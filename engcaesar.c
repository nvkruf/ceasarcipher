#include<stdio.h>
#include<locale.h> 


int main()
{
	setlocale(LC_ALL, "Turkish"); 

	char message[26], ch;
	int i, key;
	
	printf("Þifrelenecek cümleyi giriniz: ");
	gets(message);
	printf("Kaç harf öteleneceðini giriniz : ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = (ch - 'z') + ('a' - 1);
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = (ch - 'Z')+ ('A' - 1);
			}
			
			message[i] = ch;
		}
	}
	
	printf("þifrelenmiþ cümleniz: %s", message);
	
	return 0;
}
