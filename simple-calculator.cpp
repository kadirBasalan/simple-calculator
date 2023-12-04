#include <iostream.h>

using namespace std;
 int main()
{
 int sayi1,sayi2;
 char secim;
 char devam;

 while (1)
 {
  cout<<"Lutfen isleminizi giriniz."<<endl;
  cin>>sayi1>>secim>>sayi2;

		switch(secim)
	   {
		case '+':
			cout<<"Sonuc: "<<sayi1+sayi2<<endl;
			break;

		case '-':
			cout<<"Sonuc :"<<sayi1-sayi2<<endl;
			break;

		case '/':
			cout<<"Sonuc :"<<sayi1/sayi2<<endl;
			break;

		case '*':
			cout<<"Sonuc :"<<sayi1*sayi2<<endl;
			break;

	   default:
		cout<<"Yanlis islem"<<endl;
	   }

	   cout<<"Devam etmek ister misiniz? (Devam--->y)";
	   cin>>devam;
	   if (devam!='y')
	   {
	   break;
	   }





 }

	return 0;

}
