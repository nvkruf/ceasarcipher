#include<stdio.h>
#include<locale.h> 
#include<math.h>


int main()
{
	setlocale(LC_ALL, "Turkish"); 
	
	char message[26], ch;
	int i, key;
	
	printf("Þifrelenmiþ cümleyi giriniz : ");
	gets(message);
	printf("Kaç harf öteleneceðini giriniz : ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("Çözümlenmiþ cümleniz: %s", message);
	
	return 0;
}
