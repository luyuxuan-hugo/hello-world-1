#include <stdio.h>
#include <string.h>
int main()
{
    char name[40][3]={"¾©","»¦","½ò","Â³","¼½","½ú","ÃÉ","ÁÉ","¼ª","ºÚ",
				   	"ËÕ","Õã","Íî","Ãö","¸Ó","Ô¥","Ïæ","¶õ","ÔÁ","¹ð",
					"Çí","´¨","¹ó","ÔÆ","²Ø","ÉÂ","¸Ê","Çà","Äþ","ÐÂ",
					"¸Û","°Ä","Ì¨","¹Ò","¾¯","Ñ§","Ê¹","Áì"} ;

    char utf[40][16] = { "E4BAAC","E6B2AA","E6B4A5","E9B281","E58680","E6998B","E89299","E8BEBD","E59089","E9BB91",
                    "E88B8F","E6B599","E79A96","E997BD","E8B5A3","E8B1AB","E6B998","E98482","E7B2A4","E6A182",
                     "E790BC","E5B79D","E8B4B5","E4BA91","E8978F","E99995","E79498","E99D92","E5AE81","E696B0",
                     "E6B8AF","E6BEB3","E58FB0","E68C82","E8ADA6","E5ADA6","E4BDBF","E9A286" };
    char license[40] = { 0 };
    int i = 0;
    int a = 0;
    char code[40][10] = { 0 };
    scanf("%s", license);
    for (i = 0; i < 20; i++) {
        if (license[i] < 0)
        {
            code[a][0] = license[i];
            code[a][1] = license[i + 1];
            i++;
            a++;
        }
        else
        {
            
            code[a][0]= license[i];
            a++;
            
        }
    }
   
    for (a = 0; a < 10; a++) {

        for (i = 0; i <= 40; i++) {
        	
            if (strcmp(code[a], name[i]) == 0) {
            
                printf(" %s ",utf[i]);
                break;

            }
            if (i ==39 ) {
            	
                printf("%2s",code[a]);
            }


        }

    }







    return 0;
}
