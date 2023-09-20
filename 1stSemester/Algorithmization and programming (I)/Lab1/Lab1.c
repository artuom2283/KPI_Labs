/* Puzenko Artem Andriiovych, hrupa TR-23, variant № 19
Laboratorna robota № 1. Osnovy roboty v seredovyshchi Visual Studio */
#include <stdio.h> /* dyrektyva pidmykannia zaholovochnoho faila 
standartnoi biblioteky stdio.h */
#include <stdlib.h> /* pidmykannia standartnoi biblioteky stdlib.h 
(takozh mozhna vkazaty biblioteku windows.h) */
#define N 255 /* dyrektyva oznachennia makrosu -- vyznachaie 
konstantu z imenem N i znachenniam 255 */
int main()
{ // tilo prohramy
	char st[N]; /* oholoshennia riadkovoi zminnoi st */
	printf("\n\n\n\t\t\tPryvit! Tse -- C\n\n"); /* funktsiia biblioteky
   stdio.h dlia vyvedennia u standartnyi potik; symvol keruvannia
   \n perevodyt kursor na novyi riadok; symvol \t zadaie
   tabuliuvannia na 8 pozytsii */
	printf("Yak tebe zvaty?\n");
	gets_s(st); /* funktsiia biblioteky stdio.h dlia vvedennia riadka tekstu */
	system("color 09"); /* funktsiia biblioteky stdlib.h; parametr zminy
   koloru: 0 - kolir fonu (vid 0 do F), V – kolir shryftu */
	printf("Pryvit, %s!\a", st); /* format %s vkazuie, shcho vyvodytsia
   znachennia riadkovoi zminnoi st, symvol \a zadaie zvukovyi syhnal */
	getchar(); /* funktsiia biblioteky stdio.h dlia vvedennia symvola chy
   zatrymky ekranu — chekaie natyskannia klavishi Enter */
	system("color 05"); printf("Bazhaiu uspikhiv!\n"); getchar();
	return 0; /* povertaie kod zavershennia funktsii main */
}
