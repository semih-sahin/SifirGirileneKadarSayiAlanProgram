#include <iostream>
#include <conio.h>
using namespace std;
// SEMIH SAHIN - SIFIR GIRILENE KADAR SAYILAR ALAN VE BU SAYILARDAN ENK ENB BULUP EKRANA YAZAN PROG
int main(){
	int sayi, enb, enk;
	cout << "Sayi giriniz: ";
	cin >> sayi;
	enb=sayi;
	enk=sayi;
	while (sayi!=0){
		cout << "Sayi giriniz: ";
		cin >> sayi;
		if (sayi==0)	goto A10;
		if (sayi>enb)	enb=sayi;
		if (sayi<enk)	enk=sayi;
		A10:;
	}
	system("cls");
	cout << "En buyuk sayi = " << enb << endl;
	cout << "En kucuk sayi = " << enk;
	getch();
	return 0;
}
