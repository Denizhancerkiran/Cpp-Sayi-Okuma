#include <iostream>
#define b break;
using namespace std;
void yazdiryuz (int);
void yazdiron(int a);
void yazdirbir(int a);
int main ()
{
int sayi,bir,on,yuz,binler,milyonlar;
cout<<"Sifir ile yuzmilyon arasinda bir sayi giriniz: ";
cin>>sayi;
if(sayi<0)
	{
	 cout<<"Eksi ";
	 sayi=-1*(sayi);
	 goto go;
	} 
 go:	
 if(sayi>1000000000)
	{
     cout<<"Sifir ile yuzmilyon arasinda bir sayi giriniz.";
    
	}

else if(sayi<=1000000000 && sayi>=1000000) /* sayiyi 10^8 ve 10^6 arasinda milyonlara atadim */
	{
		
     yuz=(sayi/100000000); yazdiryuz(yuz);
     on=(sayi/10000000)%10; yazdiron(on);
     milyonlar=(sayi/1000000)%10; yazdirbir(milyonlar);
     cout<<"milyon ";
     goto devam;
	}
else if(sayi<1000000 && sayi>100)
devam:
	{
	 yuz=(sayi/100000)%10; yazdiryuz(yuz);
	 on=(sayi/10000)%10; yazdiron(on);
	 bir=(sayi/1000)%10; if(bir!=1){ yazdirbir(bir); }  /*binler basamagý*/
	  if(yuz!=0 || on!=0 || bir!=0)
		{
		 cout<<"bin ";
		} goto git;
	}
else if(sayi<=100 && sayi>0)
{ git:
	yuz=(sayi/100)%10; yazdiryuz(yuz);
	 on=(sayi/10)%10; yazdiron(on);
	 bir=(sayi%10); yazdirbir(bir);
}
cout<<"seklinde okunur.";
return 0 ;
}	
void yazdiryuz(int a)
	{
	 switch(a)
	 {
	  case 1: 
	  cout<<"yuz "; b
	  case 2: 
	  cout<<"ikiyuz "; b
	  case 3: 
 	  cout<<"ucyuz "; b
	  case 4: 
	  cout<<"dortyuz "; b
	  case 5: 
	  cout<<"besyuz "; b
	  case 6: 
	  cout<<"altiyuz "; b
	  case 7: 
	  cout<<"yediyuz "; b
	  case 8: 
	  cout<<"sekizyuz "; b
 	  case 9: 
	  cout<<"dokuzyuz "; b
	 }
	}	
void yazdiron(int a)
	{
	 switch(a)
	 {
	  case 1: 
	  cout<<"on "; b
	  case 2: 
	  cout<<"yirmi "; b
	  case 3: 
 	  cout<<"otuz "; b
	  case 4: 
	  cout<<"kirk "; b
	  case 5: 
	  cout<<"elli "; b
	  case 6: 
	  cout<<"atmis "; b
	  case 7: 
	  cout<<"yetmis "; b
	  case 8: 
	  cout<<"seksen "; b
 	  case 9: 
	  cout<<"doksan "; b
	 }
	}	
void yazdirbir(int a)
	{
	 switch(a)
	 {
	  case 1: 
	  cout<<"bir "; b
	  case 2: 
	  cout<<"iki "; b
	  case 3: 
 	  cout<<"uc "; b
	  case 4: 
	  cout<<"dort "; b
	  case 5: 
	  cout<<"bes "; b
	  case 6: 
	  cout<<"alti"; b
	  case 7: 
	  cout<<"yedi "; b
	  case 8: 
	  cout<<"sekiz "; b
 	  case 9: 
	  cout<<"dokuz "; b
	 }
	}	
