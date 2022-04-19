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
	std::cout << "******************** BÝLÝMSEL HESAP MAKÝNESÝ ******************\n---------------------------------------------------------------\n";
	std::cout << "Basit iþlemler | Trigonometrik Ýþlemler | Logaritmik Ýþlemler";
	std::cout << "\n---------------------------------------------------------------\n1) Toplama\t\t7) Sin\t\t13) Logaritma\n2) Çýkarma\t\t8) Cos\t\t14) 10 Tabanlý Log\n"
	<<"3) Çarpma\t\t9) Tan\n" << "4) Bölme\t\t10) Sinüs Tersi\n5) Karekök Al\t\t11) Kosinüs Tersi\n6) Üs Al\t\t12) Tanjant Tersi";
	std::cout << "\n---------------------------------------------------------------\n";
	std::cout << "Yapmak istediðiniz iþlemi seçiniz: ";
	std::cin >> islem;
		
	switch(islem){
		case 1:
			std::cout << "Birinci Sayýyý Giriniz: ";
			std::cin >> x;
			std::cout << "Ýkinci Sayýyý Giriniz: ";
			std::cin >> y;
			sonuc = x + y;
			std::cout << "Yaptýðýnýz Ýþlemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir Ýþlem Yapmak için 0 Yazýnýz!\nHesap Makinesinden Çýkmak için -1 Yazýnýz!\n";
			std::cin >> z;
			if(z == 0){
				system("CLS");
				goto enbas;	
			}
			if(z == -1)
				exit(EXIT_FAILURE);
			break;
		
		case 2:	
			std::cout << "Birinci Sayýyý Giriniz: ";
			std::cin >> x;
			std::cout << "Ýkinci Sayýyý Giriniz: ";
			std::cin >> y;
			sonuc = x - y;
			std::cout << "Yaptýðýnýz Ýþlemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir Ýþlem Yapmak için 0 Yazýnýz!\nHesap Makinesinden Çýkmak için -1 Yazýnýz!\n";
			std::cin >> z;
			if(z == 0){
				system("CLS");
				goto enbas;	
			}
			if(z == -1)
				exit(EXIT_FAILURE);
			break;
		
		case 3:
			std::cout << "Birinci Sayýyý Giriniz: ";
			std::cin >> x;
			std::cout << "Ýkinci Sayýyý Giriniz: ";
			std::cin >> y;
			sonuc = x * y;
			std::cout << "Yaptýðýnýz Ýþlemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir Ýþlem Yapmak için 0 Yazýnýz!\nHesap Makinesinden Çýkmak için -1 Yazýnýz!\n";
			std::cin >> z;
			if(z == 0){
				system("CLS");
				goto enbas;	
			}
			if(z == -1)
				exit(EXIT_FAILURE);
			break;
		
		case 4:
			std::cout << "Birinci Sayýyý Giriniz: ";
			std::cin >> x;
			std::cout << "Ýkinci Sayýyý Giriniz: ";
			std::cin >> y;
			sonuc = x / y;
			std::cout << "Yaptýðýnýz Ýþlemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir Ýþlem Yapmak için 0 Yazýnýz!\nHesap Makinesinden Çýkmak için -1 Yazýnýz!\n";
			std::cin >> z;
			if(z == 0){
				system("CLS");
				goto enbas;	
			}
			if(z == -1)
				exit(EXIT_FAILURE);
			break;
		
		case 5:
			std::cout << "Kökünü Almak Ýstediðiniz Sayýyý Giriniz: ";
			std::cin >> x;
			sonuc = sqrt(x);
			std::cout << "Yaptýðýnýz Ýþlemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir Ýþlem Yapmak için 0 Yazýnýz!\nHesap Makinesinden Çýkmak için -1 Yazýnýz!\n";
			std::cin >> z;
			if(z == 0){
				system("CLS");
				goto enbas;	
			}
			if(z == -1)
				exit(EXIT_FAILURE);
			break;			
		
		case 6:
			std::cout << "Girmek Ýstediðiniz Sayýyý Giriniz: ";
			std::cin >> x;
			std::cout << "Almak Ýstediðiniz Üs Kuvvetini Giriniz: ";
			std::cin >> y;
			sonuc = pow(x, y);
			std::cout << "Yaptýðýnýz Ýþlemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir Ýþlem Yapmak için 0 Yazýnýz!\nHesap Makinesinden Çýkmak için -1 Yazýnýz!\n";
			std::cin >> z;
			if(z == 0){
				system("CLS");
				goto enbas;	
			}
			if(z == -1)
				exit(EXIT_FAILURE);
			break;
		
		case 7:
			std::cout << "Lütfen Bir Sayý Giriniz: ";
			std::cin >> x;
			sonuc = sin(x);
			std::cout << "Yaptýðýnýz Ýþlemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir Ýþlem Yapmak için 0 Yazýnýz!\nHesap Makinesinden Çýkmak için -1 Yazýnýz!\n";
			std::cin >> z;
			if(z == 0){
				system("CLS");
				goto enbas;	
			}
			if(z == -1)
				exit(EXIT_FAILURE);
			break;
		
		case 8:
			std::cout << "Lütfen Bir Sayý Giriniz: ";
			std::cin >> x;
			sonuc = cos(x);
			std::cout << "Yaptýðýnýz Ýþlemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir Ýþlem Yapmak için 0 Yazýnýz!\nHesap Makinesinden Çýkmak için -1 Yazýnýz!\n";
			std::cin >> z;
			if(z == 0){
				system("CLS");
				goto enbas;	
			}
			if(z == -1)
				exit(EXIT_FAILURE);
			break;
		
		case 9:
			std::cout << "Lütfen Bir Sayý Giriniz: ";
			std::cin >> x;
			sonuc = tan(x);
			std::cout << "Yaptýðýnýz Ýþlemin Sonucu: " << sonuc;
			std::cout << "\nYeni Bir Ýþlem Yapmak için 0 Yazýnýz!\nHesap Makinesinden Çýkmak için -1 Yazýnýz!\n";
			std::cin >> z;
			if(z == 0){
				system("CLS");
				goto enbas;	
			}
			if(z == -1)
				exit(EXIT_FAILURE);
			break;
		
		case 10:
			std::cout << "Sinüs Deðerini Giriniz: ";
			std::cin >> x;
			sonuc = asin(x) * 180 / PI;
			std::cout << "Girdiðiniz Sinüs Deðerinin Tersi: " << sonuc;
			std::cout << "\nYeni Bir Ýþlem Yapmak için 0 Yazýnýz!\nHesap Makinesinden Çýkmak için -1 Yazýnýz!\n";
			std::cin >> z;
			if(z == 0){
				system("CLS");
				goto enbas;	
			}
			if(z == -1)
				exit(EXIT_FAILURE);
			break;
		
		case 11:
			std::cout << "Kosinüs Deðerini Giriniz: ";
			std::cin >> x;
			sonuc = acos(x) * 180 / PI;
			std::cout << "Girdiðiniz Kosinüs Deðerinin Tersi: " << sonuc;
			std::cout << "\nYeni Bir Ýþlem Yapmak için 0 Yazýnýz!\nHesap Makinesinden Çýkmak için -1 Yazýnýz!\n";
			std::cin >> z;
			if(z == 0){
				system("CLS");
				goto enbas;	
			}
			if(z == -1)
				exit(EXIT_FAILURE);
			break;	
		
		case 12:
			std::cout << "Tanjant Deðerini Giriniz: ";
			std::cin >> x;
			sonuc = atan(x) * 180 / PI;
			std::cout << "Girdiðiniz Tanjant Deðerinin Tersi: " << sonuc;
			std::cout << "\nYeni Bir Ýþlem Yapmak için 0 Yazýnýz!\nHesap Makinesinden Çýkmak için -1 Yazýnýz!\n";
			std::cin >> z;
			if(z == 0){
				system("CLS");
				goto enbas;	
			}
			if(z == -1)
				exit(EXIT_FAILURE);
			break;
			
		case 13:
			std::cout << "Lütfen Bir Sayý Giriniz: ";
			std::cin >> x;
			sonuc = log(x);
			std::cout << "Logaritma Sonucu: " << sonuc;
			std::cout << "\nYeni Bir Ýþlem Yapmak için 0 Yazýnýz!\nHesap Makinesinden Çýkmak için -1 Yazýnýz!\n";
			std::cin >> z;
			if(z == 0){
				system("CLS");
				goto enbas;	
			}
			if(z == -1)
				exit(EXIT_FAILURE);
			break;
		
		case 14:
			std::cout << "Lütfen Bir Sayý Giriniz: ";
			std::cin >> x;
			sonuc = log10(x);
			std::cout << "10 Tabanlý Logaritma Sonucu: \n" << sonuc;
			std::cout << "\nYeni Bir Ýþlem Yapmak için 0 Yazýnýz!\nHesap Makinesinden Çýkmak için -1 Yazýnýz!\n";
			std::cin >> z;
			if(z == 0){
				system("CLS");
				goto enbas;	
			}
			if(z == -1)
				exit(EXIT_FAILURE);
			break;
			
		default:
			std::cout << "Yanlýþ Deðer Girdiniz!!!";
			break;									
	}
	
	return 0;
}
