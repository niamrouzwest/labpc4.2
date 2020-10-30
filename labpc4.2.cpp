#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct MARSH {
  
    char    BEC5T[255];    /* название начального пункта маршрута */
    char    TERM[255];        /* название конечного пункта */
    int     NUMER  ;        /* номер маршрута */
             };
             
int main(){


MARSH TRAFIC[8]={

	
	 {"Talin","Kishinev",1 }, 
	 {"Kipr","Sevastopoli",2 },
	 {"Sofia","Stambul",3},
	 {"Saint-Petersburg","Ufa",4 },
	 {"Vatra","Anenii-Noi",5},
 	 {"Moskva","Vladivostok",6},
 	 {"Lviv","Kiev",7},
 	 {"Irkutsk","Sizrani",8},
};
//VVOD S KLAVI//
/*for (int i = 0; i < 8; i++)
    {
        printf("NOMER MARSHRUTA #%d:\n\t NAZVANIE NAC.PUNCTA MARSHRUTA: ", i);
        scanf("%s",&TRAFIC[i].BEC5T);
        printf("\tNAZVANIE CON.PUNKTA ");
        scanf("%s", &TRAFIC[i].TERM);
    }
*/
int n;
    char k[255];
    int dan=0;
    printf ("Skoliko marshrutov vam nado? \n");
    scanf("%d",&n);
     for (int j=0;j <n ;j++) {
	 
      printf ("vvedite punkt naznacenia \n");
      scanf ("%s",k);
      		 for (int i=0; i<8; i++) {
	   
       		   int m =strcmp(k,TRAFIC[i].BEC5T);
       		   int m2=strcmp(k,TRAFIC[i].TERM);
       		   
       		   if (m==0 || m2==0) 
         	     
         	     printf ("Nomer marshruta #%d, nazvanie nac.puncta %s i nazvanie con.punkta %s \n",TRAFIC[i].NUMER,TRAFIC[i].BEC5T,TRAFIC[i].TERM );
         		 else
         		 dan--;
		  }
		  if (dan==-8)
		  	printf ("NET nujnih vam MARSHRUTOV \n");
		  	dan=0;
      }
























}
