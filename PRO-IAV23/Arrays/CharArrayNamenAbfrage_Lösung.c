# include<stdio.h>
# include<time.h>

int main()
{
	int schimpfNummer=0;
	char name[40]={0};
	int i=0;
	int zahl1=0;
	int zahl2=0;
	int computerErgebnis=0;
	int userErgebnis=0;
	char ende=0;
	char pass[10]={"abcde"};
	char userPass[10]={0};
	int check=1;
	char beschimpfung[10][100]={"Du Vollidiot, du bl\244der",
								"Du bist so dumm wie ein Meter Feldweg",
								"Wenn Dummheit leuchten w\201rde w\204re es bei dir die ganze Nacht hell",
								"Streng dich mal an du faule Sau",
								"Brot kann schimmeln, was kannst du?",
								"Du kannst aber auch gar nicht!!",
								"lass dich eingraben!!",
								"Geh Kaffe holen du Affe",
								"Dummheit tut weh!!",
								"Aua, deine Mutter ist entt\204uscht von dir"};
	
	


	do{
	check=1;
	printf("Gib das Passwort ein: \n");
	scanf("%s",userPass);
	while(getchar()!='\n');

	for(i=0;i<10;i++)
	{
		if(pass[i]!=userPass[i])
		{check=0;
			break;		}	
	}
	
	}while(check==0);
	



	printf("Gib deinen Namen ein: \n");
	scanf("%s",name);
	while(getchar()!='\n');

	
	printf("\n\nHallo %s\n",name);
	
	srand(time(0));
	
	do{
	
	zahl1=rand()%20+1;
	zahl2=rand()%20+1;
	
	printf("Wieviel ist %i + %i =?\n",zahl1,zahl2);
	scanf("%i",&userErgebnis);
	while(getchar()!='\n');
	
	computerErgebnis=zahl1+zahl2;
	
	if(userErgebnis==computerErgebnis)
	{	printf("Toll gemacht %s! Das ist richtig!\n",name);
	}
	else
	{	schimpfNummer=rand()%10;
	
		printf("%s %s\n",name,beschimpfung[schimpfNummer]);
	}
	
	printf("Willst Du noch einmal rechenen? (j/n)\n");
	scanf("%c",&ende);
	while(getchar()!='\n');
	
	}while(ende!='n');
	
	
	
	
	
	
	
	
	getchar();
	return 0;
}


