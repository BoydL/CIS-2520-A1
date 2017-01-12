#include <stdio.h>
#include <stdlib.h>
void Carbon()
{
	int numStrings=0;/*counts number of times a string is outputed*/
	int c;
	int a;
	int r;
	int b;
	int o;
	int n;
	char string[] = "carbon";
	for(c=0; c<6; c++){
		for(a=0; a<6; a++){
			for(r=0; r<6; r++){
				for(b=0; b<6; b++){
					for(o=0; o<6; o++){
						for(n=0; n<6; n++){
							if(n!=o && n!=b && n!=r && n!=a && n!=c && b!=a && b!=r && b!=o && b!=c && r!=o && r!=a && r!=c && a!=c && a!=o && c!=o){
								printf("%c %c %c %c %c %c\n",string[c],string[a],string[r],string[b],string[o],string[n]);
								numStrings++;
							}
						}
					}
				}
			}
		}
	}
	printf("%d is the number of possible strings",numStrings);
}