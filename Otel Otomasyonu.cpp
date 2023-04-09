#include<iostream>
#include<cstring>
#include<conio.h>

using namespace std;


int main()

{
    
    int miktar;
    int secim;

    int oda=0;
    int pasta=0;
    int burger=0;
    int noodles=0;
    int shake=0;
    int chicken=0;
    int soda=0;
    
    int Soda=0;
    int Spasta=0;
    int Sburger=0;
    int Snoodles=0;
    int Sshake=0;
    int Schicken=0;
    int Ssoda=0;

    int Toplam_oda=0;
    int Toplam_pasta=0;
    int Toplam_burger=0;
    int Toplam_noodles=0;
    int Toplam_shake=0;
    int Toplam_chicken=0;
    int Toplam_soda=0;

    system("color 20");

    cout<<"Otel Otomasyonuna Hosgeldiniz"<<endl;
    cout<<"\n Oda Numarasi:";
    cin>>oda;

    cout<<"\n Pasta Miktari:";
    cin>>pasta;

    cout<<"\n Burger Miktari:";
    cin>>burger;

    cout<<"\n Noodles Miktari:";
    cin>>noodles;

    cout<<"\n Shake Miktari:";
    cin>>shake;

    cout<<"\n Chicken Miktari:";
    cin>>chicken;

    cout<<"\n Soda Miktari:";
    cin>>soda;
  
    m:
    cout<<"\n\t\t\t Lutfen istediginiz  numarasini giriniz."<<endl;
    cout<<"\n\t\t\t [1].Oda"<<endl;
    cout<<"\n\t\t\t [2].Pasta"<<endl;
    cout<<"\n\t\t\t [3].Burger"<<endl;
    cout<<"\n\t\t\t [4].Noodles"<<endl;
    cout<<"\n\t\t\t [5].Shake"<<endl;
    cout<<"\n\t\t\t [6].Chicken"<<endl;
    cout<<"\n\t\t\t [7].Soda"<<endl;
    cout<<"\n\t\t\t [8].Satis ve Tahsilat Bilgileri"<<endl;
    cout<<"\n\t\t\t [9].Cikis"<<endl;

    cout<<"\n\t\t\t Seciminiz:";
    cin>>secim;

    switch(secim)

    {


    cout<<"\n\n Lutfen istediginiz odanin numarasini giriniz:";
      
    cin>>oda;
    if (oda-Soda >= miktar)

    {

        Soda=Soda+miktar;
        Toplam_oda = Toplam_oda + miktar*1200;
        cout<<"\n\n\t\t\t Odaniz rezerve edilmistir."<<endl;
        
    }

    else

    {

        cout<<"\n\n Sadece " << "oda-Soda" << " adet oda kalmistir."<<endl;

        break;

    }

    case 2:
    
    cout<<"\n\n Lutfen istediginiz pastanin miktarini giriniz:";
    
    cin>>miktar;

    if(pasta-Spasta >=miktar)

    {
            
            Spasta=Spasta+miktar;
            Toplam_pasta = Toplam_pasta + miktar*15;
            cout<<"\n\n\t\t\t Pasta siparisiniz alinmistir."<<endl;
            
        }
    
        else
    
        {
    
            cout<<"\n\n Sadece " << "pasta-Spasta" << " adet pasta kalmistir."<<endl;
            
            break;
       }

    case 3:

    cout<<"\n\n Lutfen istediginiz burgerin miktarini giriniz:";

    cin>>miktar;
    if (burger-Sburger >= miktar)

    {

        Sburger=Sburger+miktar;
        Toplam_burger = Toplam_burger + miktar*20;
        cout<<"\n\n\t\t\t Burger siparisiniz alinmistir."<<endl;
        
    }

    else

    {

        cout<<"\n\n Sadece " << "burger-Sburger" << " adet burger kalmistir."<<endl;

        break;

    }

    case 4:
    
    cout<<"\n\n Lutfen istediginiz noodel miktarini giriniz:";

    cin>>miktar;

    if (noodles-Snoodles >= miktar)

    {

        Snoodles=Snoodles+miktar;
        Toplam_noodles = Toplam_noodles + miktar*25;
        cout<<"\n\n\t\t\t Noodles siparisiniz alinmistir."<<endl;
        
    }

    else

    {

        cout<<"\n\n Sadece " << "noodles-Snoodles" << " adet noodles kalmistir."<<endl;
        
        break;
        
    }

    case 5:

    cout<<"\n\n Lutfen istediginiz shake miktarini giriniz:";

    cin>>miktar;
    
    if (shake-Sshake >= miktar)

    {

        Sshake=Sshake+miktar;
        Toplam_shake = Toplam_shake + miktar*30;
        cout<<"\n\n\t\t\t Shake siparisiniz alinmistir."<<endl;
        
    }

    else

    {

        cout<<"\n\n Sadece " << "shake-Sshake" << " adet shake kalmistir."<<endl;
        
        break;
        
    }
    
    case 6:

    cout<<"\n\n Lutfen istediginiz chicken miktarini giriniz:";

    cin>>miktar;

    if (chicken-Schicken >= miktar)

    {

        Schicken=Schicken+miktar;
        Toplam_chicken = Toplam_chicken + miktar*35;
        cout<<"\n\n\t\t\t Chicken siparisiniz alinmistir."<<endl;
        
    }

    else

    {

        cout<<"\n\n Sadece " << "chicken-Schicken" << " adet chicken kalmistir."<<endl;

        break;

    }

    case 7:

    cout<<"\n\n Lutfen istediginiz soda miktarini giriniz:";

    cin>>miktar;

    if (soda-Ssoda >= miktar)

    {

        Ssoda=Ssoda+miktar;
        Toplam_soda = Toplam_soda + miktar*5;
        cout<<"\n\n\t\t\t Soda siparisiniz alinmistir."<<endl;
        
    }

    else

    {

        cout<<"\n\n Sadece " << "soda-Ssoda" << " adet soda kalmistir."<<endl;
        
        break;
        
    }

    case 8:
 
    cout<<"\n\n\t\t\t Toplam Tahsilat:"<<Toplam_oda+Toplam_pasta+Toplam_burger+Toplam_noodles+Toplam_shake+Toplam_chicken+Toplam_soda<<endl;
    cout<<"\n\n\t\t\t Toplam Oda Tahsilat:"<<Toplam_oda<<endl;
    cout<<"\n\n\t\t\t Toplam Pasta Tahsilat:"<<Toplam_pasta<<endl;
    cout<<"\n\n\t\t\t Toplam Burger Tahsilat:"<<Toplam_burger<<endl;
    cout<<"\n\n\t\t\t Toplam Noodles Tahsilat:"<<Toplam_noodles<<endl;
    cout<<"\n\n\t\t\t Toplam Shake Tahsilat:"<<Toplam_shake<<endl;
    cout<<"\n\n\t\t\t Toplam Chicken Tahsilat:"<<Toplam_chicken<<endl;
    cout<<"\n\n\t\t\t Toplam Soda Tahsilat:"<<Toplam_soda<<endl;
    cout<<"\n\n\t\t\t Toplam Oda Satilan:"<<oda<<endl;
    cout<<"\n\n\t\t\t Toplam Pasta Satilan:"<<pasta<<endl;
    cout<<"\n\n\t\t\t Toplam Burger Satilan:"<<burger<<endl;
    cout<<"\n\n\t\t\t Toplam Noodles Satilan:"<<noodles<<endl;
    cout<<"\n\n\t\t\t Toplam Shake Satilan:"<<shake<<endl;
    cout<<"\n\n\t\t\t Toplam Chicken Satilan:"<<chicken<<endl;
    cout<<"\n\n\t\t\t Toplam Soda Satilan:"<<soda<<endl;
    cout<<"\n\n\t\t\t Toplam Oda Kalan:"<<oda-Soda<<endl;
    cout<<"\n\n\t\t\t Toplam Pasta Kalan:"<<pasta-Spasta<<endl;
    cout<<"\n\n\t\t\t Toplam Burger Kalan:"<<burger-Sburger<<endl;
    cout<<"\n\n\t\t\t Toplam Noodles Kalan:"<<noodles-Snoodles<<endl;
    cout<<"\n\n\t\t\t Toplam Shake Kalan:"<<shake-Sshake<<endl;
    cout<<"\n\n\t\t\t Toplam Chicken Kalan:"<<chicken-Schicken<<endl;
    cout<<"\n\n\t\t\t Toplam Soda Kalan:"<<soda-Ssoda<<endl;
    cout<<"\n\n\t\t\t Toplam Oda Siparis:"<<Soda<<endl;
    cout<<"\n\n\t\t\t Toplam Pasta Siparis:"<<Spasta<<endl;
    cout<<"\n\n\t\t\t Toplam Burger Siparis:"<<Sburger<<endl;
    cout<<"\n\n\t\t\t Toplam Noodles Siparis:"<<Snoodles<<endl;
    cout<<"\n\n\t\t\t Toplam Shake Siparis:"<<Sshake<<endl;
    cout<<"\n\n\t\t\t Toplam Chicken Siparis:"<<Schicken<<endl;
    cout<<"\n\n\t\t\t Toplam Soda Siparis:"<<Ssoda<<endl;

    break;


    case 9:

    exit(0);

    cout<<"\n\n\t\t\t Programdan cikiliyor..."<<endl;

    break;

    default:

    cout<<"\n\n\t\t\t Yanlis secim yaptiniz."<<endl;

    break;



}

goto m;
    
   return 0;

} 







     

















