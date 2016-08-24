#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Recebe a data de nascimento e a data atual em mês e dia, e calcula a idade do indivíduo em anos, meses e dias, considerando anos bissextos.

// http://stackoverflow.com/questions/15630821/qa-how-do-i-figure-out-what-the-last-day-of-the-month-is
int maxDia(int year, int month)
{
	month -= 1;
	if(month == 0 || month == 2 || month == 4 || month == 6 || month == 7 || month == 9 || month == 11)
        return 31;
    else if(month == 3 || month == 5 || month == 8 || month == 10)
        return 30;
    else {
        if(year % 4 == 0) {
            if(year % 100 == 0) {
                if(year % 400 == 0)
                    return 29;
                return 28;
            }
            return 29;
        }
        return 28;
    }
}

// http://stackoverflow.com/questions/19377396/c-get-day-of-year-from-date
inline int isBissexto(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

inline int diasNoAno(int year)
{
    return 334 + isBissexto(year);
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int anoi, mesi, diai, anof, mesf, diaf, anot, mest, diat;
	
	printf("Insira o ano inicial: ");
	scanf("%i", &anoi);
	do
	{
		printf("Insira o mês inicial: ");
		scanf("%i", &mesi);
	} while(mesi < 0 || mesi > 12);
	do
	{
		printf("Insira o dia inicial: ");
		scanf("%i", &diai);
	} while(diai < 0 || diai > maxDia(anoi, mesi));
	printf("Insira o ano final: ");
	scanf("%i", &anof);
	do
	{
		printf("Insira o mês final: ");
		scanf("%i", &mesf);
	} while(mesf < 0 || mesf > 12);
	do
	{
		printf("Insira o dia final: ");
		scanf("%i", &diaf);
	} while(diaf < 0 || diaf > maxDia(anof, mesf));
	
	anot = anof - anoi;
	mest = mesf - mesi;
	if(mest < 0)
	{
		++anot;
		mest+= 12;
	}
	diat = diaf - diai;
	if(diat < 0)
	{
		diat+= maxDia(anot, mest);
		++mest;
	}
	if(diat > maxDia(anot, mest))
	{
		diat-= maxDia(anot, mest);
		++mest;
	}

	printf("%i anos, %i meses e %i dias.", anot, mest, diat);

	getch();

	return 0;
}