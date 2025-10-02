#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){
	enbas:
	setlocale(LC_ALL, "Turkish");
	const float PI = 3.14;
	float x, y, sonuc;
	int islem, z;
	std::cout << "******************** B�L�MSEL HESAP MAK�NES� ******************\n---------------------------------------------------------------\n";
	std::cout << "Basit i�lemler | Trigonometrik ��lemler | Logaritmik ��lemler";
	std::cout << "\n---------------------------------------------------------------\n1) Toplama\t\t7) Sin\t\t13) Logaritma\n2) ��karma\t\t8) Cos\t\t14) 10 Tabanl� Log\n"
	<<"3) �arpma\t\t9) Tan\n" << "4) B�lme\t\t10) Sin�s Tersi\n5) Karek�k Al\t\t11) Kosin�s Tersi\n6) �s Al\t\t12) Tanjant Tersi";
	std::cout << "\n---------------------------------------------------------------\n";
	std::cout << "Yapmak istedi�iniz i�lemi se�iniz: ";
	std::cin >> islem;
		
	switch(islem){
		case 1:
			std::cout << "Birinci Say�y� Giriniz: ";
			std::cin >> x;
			std::cout << "�kinci Say�y� Giriniz: ";
			std::cin >> y;
			sonuc = x + y;
			std::cout << "Yapt���n�z ��lemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir ��lem Yapmak i�in 0 Yaz�n�z!\nHesap Makinesinden ��kmak i�in -1 Yaz�n�z!\n";
			std::cin >> z;
			 
		
		case 2:	
			std::cout << "Birinci Say�y� Giriniz: ";
			std::cin >> x;
			std::cout << "�kinci Say�y� Giriniz: ";
			std::cin >> y;
			sonuc = x - y;
			std::cout << "Yapt���n�z ��lemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir ��lem Yapmak i�in 0 Yaz�n�z!\nHesap Makinesinden ��kmak i�in -1 Yaz�n�z!\n";
			std::cin >> z;
			 
		
		case 3:
			std::cout << "Birinci Say�y� Giriniz: ";
			std::cin >> x;
			std::cout << "�kinci Say�y� Giriniz: ";
			std::cin >> y;
			sonuc = x * y;
			std::cout << "Yapt���n�z ��lemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir ��lem Yapmak i�in 0 Yaz�n�z!\nHesap Makinesinden ��kmak i�in -1 Yaz�n�z!\n";
			std::cin >> z;
			 
		
		case 4:
			std::cout << "Birinci Say�y� Giriniz: ";
			std::cin >> x;
			std::cout << "�kinci Say�y� Giriniz: ";
			std::cin >> y;
			sonuc = x / y;
			std::cout << "Yapt���n�z ��lemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir ��lem Yapmak i�in 0 Yaz�n�z!\nHesap Makinesinden ��kmak i�in -1 Yaz�n�z!\n";
			std::cin >> z;
			 
		
		case 5:
			std::cout << "K�k�n� Almak �stedi�iniz Say�y� Giriniz: ";
			std::cin >> x;
			sonuc = sqrt(x);
			std::cout << "Yapt���n�z ��lemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir ��lem Yapmak i�in 0 Yaz�n�z!\nHesap Makinesinden ��kmak i�in -1 Yaz�n�z!\n";
			std::cin >> z;
			 			
		
		case 6:
			std::cout << "Girmek �stedi�iniz Say�y� Giriniz: ";
			std::cin >> x;
			std::cout << "Almak �stedi�iniz �s Kuvvetini Giriniz: ";
			std::cin >> y;
			sonuc = pow(x, y);
			std::cout << "Yapt���n�z ��lemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir ��lem Yapmak i�in 0 Yaz�n�z!\nHesap Makinesinden ��kmak i�in -1 Yaz�n�z!\n";
			std::cin >> z;
			 
		
		case 7:
			std::cout << "L�tfen Bir Say� Giriniz: ";
			std::cin >> x;
			sonuc = sin(x);
			std::cout << "Yapt���n�z ��lemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir ��lem Yapmak i�in 0 Yaz�n�z!\nHesap Makinesinden ��kmak i�in -1 Yaz�n�z!\n";
			std::cin >> z;
			 
		
		case 8:
			std::cout << "L�tfen Bir Say� Giriniz: ";
			std::cin >> x;
			sonuc = cos(x);
			std::cout << "Yapt���n�z ��lemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir ��lem Yapmak i�in 0 Yaz�n�z!\nHesap Makinesinden ��kmak i�in -1 Yaz�n�z!\n";
			std::cin >> z;
			 
		
		case 9:
			std::cout << "L�tfen Bir Say� Giriniz: ";
			std::cin >> x;
			sonuc = tan(x);
			std::cout << "Yapt���n�z ��lemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir ��lem Yapmak i�in 0 Yaz�n�z!\nHesap Makinesinden ��kmak i�in -1 Yaz�n�z!\n";
			std::cin >> z;
			 
		
		case 10:
			std::cout << "Sin�s De�erini Giriniz: ";
			std::cin >> x;
			sonuc = asin(x) * 180 / PI;
			std::cout << "Girdi�iniz Sin�s De�erinin Tersi: " << sonuc;
			std::cout << "\nYeni Bir ��lem Yapmak i�in 0 Yaz�n�z!\nHesap Makinesinden ��kmak i�in -1 Yaz�n�z!\n";
			std::cin >> z;
			 
		
		case 11:
			std::cout << "Kosin�s De�erini Giriniz: ";
			std::cin >> x;
			sonuc = acos(x) * 180 / PI;
			std::cout << "Girdi�iniz Kosin�s De�erinin Tersi: " << sonuc;
			std::cout << "\nYeni Bir ��lem Yapmak i�in 0 Yaz�n�z!\nHesap Makinesinden ��kmak i�in -1 Yaz�n�z!\n";
			std::cin >> z;
			 	
		
		case 12:
			std::cout << "Tanjant De�erini Giriniz: ";
			std::cin >> x;
			sonuc = atan(x) * 180 / PI;
			std::cout << "Girdi�iniz Tanjant De�erinin Tersi: " << sonuc;
			std::cout << "\nYeni Bir ��lem Yapmak i�in 0 Yaz�n�z!\nHesap Makinesinden ��kmak i�in -1 Yaz�n�z!\n";
			std::cin >> z;
			 
			
		case 13:
			std::cout << "L�tfen Bir Say� Giriniz: ";
			std::cin >> x;
			sonuc = log(x);
			std::cout << "Logaritma Sonucu: " << sonuc;
			std::cout << "\nYeni Bir ��lem Yapmak i�in 0 Yaz�n�z!\nHesap Makinesinden ��kmak i�in -1 Yaz�n�z!\n";
			std::cin >> z;
			 
		
		case 14:
			std::cout << "L�tfen Bir Say� Giriniz: ";
			std::cin >> x;
			sonuc = log10(x);
			std::cout << "10 Tabanl� Logaritma Sonucu: \n" << sonuc;
			std::cout << "\nYeni Bir ��lem Yapmak i�in 0 Yaz�n�z!\nHesap Makinesinden ��kmak i�in -1 Yaz�n�z!\n";
			std::cin >> z;
			 
			
		default:
			std::cout << "Yanl�� De�er Girdiniz!!!";
			break;									
	}
	
	return 0;
}
