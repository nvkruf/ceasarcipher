#include<stdio.h>
#include<locale.h> 
#include<math.h>


int main()
{
	setlocale(LC_ALL, "Turkish"); 
	
	char message[26], ch;
	int i, key;
	
	printf("�ifrelenmi� c�mleyi giriniz : ");
	gets(message);
	printf("Ka� harf �telenece�ini giriniz : ");
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
	
	printf("��z�mlenmi� c�mleniz: %s", message);
	
	return 0;
}
