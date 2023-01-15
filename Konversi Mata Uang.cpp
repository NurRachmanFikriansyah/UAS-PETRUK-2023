#include <iostream>

using namespace std;
 

main()
{
	int opsi,konversi,pilihan,pilihlah;
	int dollar1;
	double dollar,rupiah,won,ringgit,pound,dirham;
	char lain,lainnya;
	do{
	system("cls");
	cout<<"  ============================================== \n ";
	printf ( " PROGRAM KONVERSI MATA UANG \n " );
	cout<<" ============================================== \n ";
	cout<<" Pilih Konversi Mata Uang : \n ";
	cout<<" 1. Konversi Rupiah \n ";
	cout<<" 2. Konversi Dollar \n ";
	cout<<" ============================================== \n ";
	
	cout<< " Pilih Konversi : ";
	cin>> konversi;

	switch (konversi)
	{
		case 1:
    	system("cls");
    	cout<<"  ============================================== \n ";
    	cout<<" 1. Rupiah Ke Dollar \n ";
		cout<<" 2. Rupiah Ke Won \n ";
    	cout<<" 3. Rupiah Ke Ringgit \n";
    	cout<<"  4. Rupiah Ke Pound \n ";
    	cout<<" 5. Rupiah Ke Dirham\n ";
    	cout<<" ============================================== \n ";
    		
			
		 	cout<<"Pilih opsi : ";
    	 	cin>> opsi;
			switch ( opsi ){
        		case 1:
	        		cout <<"  ============================================== \n ";
	        		cout <<" Konversi Rupiah ke Dollar \n ";
	        		cout <<" ============================================== \n ";
	        		cout <<" Masukkan jumlah Rupiah : ";
	        		cin>>rupiah;
	        		dollar=rupiah*0.000064;
	        		cout <<"  Rupiah : Rp. " << rupiah << endl;
	        		cout <<"  Dollar : " << dollar << " $ " <<endl;
	        		cout <<"  ============================================== \n ";
       		 	break;
        		
				case 2:
					cout <<"  ============================================== \n ";
	        		cout <<" Konversi Rupiah ke Won \n ";
	        		cout <<" ============================================== \n ";
	        		cout <<" Masukkan jumlah Rupiah : ";
	        		cin>>rupiah;
	        		won=rupiah*0.082;
	        		cout <<"  Rupiah : Rp." << rupiah << endl;
	        		cout <<"  Won 	 : " << won <<" won " <<endl;
	        		cout <<"  ============================================== \n ";
        		break;
        	
				case 3:
					cout <<"  ============================================== \n ";
	        		cout <<" Konversi Rupiah ke Ringgit \n ";
	        		cout <<" ============================================== \n ";
	        		cout <<" Masukkan jumlah Rupiah : ";
	        		cin>>rupiah;
	        		ringgit=rupiah*0.00028;
	        		cout <<"  Rupiah  : Rp." << rupiah << endl;
	        		cout <<"  Ringgit : " << ringgit <<" RM "  <<endl;
	        		cout <<"  ============================================== \n ";
        		break;
        		
        		case 4:
	        		cout <<"  ============================================== \n ";
	        		cout <<"  Konversi Rupiah ke Pound \n ";
	        		cout <<" =============================================== \n ";
	        		cout <<" Masukkan Jumlah Rupiah : ";
	        		cin>>rupiah;
	        		pound=rupiah*0.000053;
	        		cout <<"  Rupiah : Rp." << rupiah <<endl;
	        		cout <<"  Pound : " << pound <<endl;
	        		cout <<"  ============================================== \n ";
        		break;
        		
        		case 5:
	        		cout <<"  ============================================== \n ";
	        		cout <<" Konversi Rupiah ke Dirham \n ";
	        		cout <<" ============================================== \n ";
	        		cout <<" Masukkan jumlah Rupiah : ";
	        		cin>>rupiah;
	        		dirham=rupiah*0.00024;
	        		cout <<"  Rupiah : Rp." << rupiah << endl;
	        		cout <<"  Dirham : " << dirham <<" DH "  <<endl;
	        		cout <<"  ============================================== \n ";
        		break;
        		
        		default:
				cout <<" Konversi Tidak Ada \n ";
				break;
   			 	}
   			 
   			break;
   		
   			 	
   		case 2:
    	system("cls");
    	cout<<"  ============================================== \n ";
    	cout<<" 1. Dollar Ke Rupiah \n ";
		cout<<" 2. Dollar Ke Won \n ";
    	cout<<" 3. Dollar Ke Ringgit \n";
    	cout<<"  4. Dollar Ke Pound \n ";
    	cout<<" 5. Dollar Ke Dirham\n ";
    	cout<<" ============================================== \n ";
    	cout<<"Pilihlah opsi: ";
    	cin>> pilihlah;
    	
    		switch ( pilihlah ){
        
        		case 1:
	        		system("cls"); // cls
	        		cout <<"  ============================================== \n ";
	        		cout <<" Konversi Dollar ke Rupiah \n ";
	        		cout <<" ============================================== \n ";
	        		cout <<" Masukkan jumlah Dollar : ";
	        		cin>>dollar1;
	        		rupiah=dollar1*15.57540;
	        		cout <<"  Dollar : " << dollar1 << " $ " <<endl;
	        		cout <<"  Rupiah : Rp. " << rupiah <<",00"<< endl;
	        		cout <<"  ============================================== \n ";
       		 	break;
        		
				case 2:
					system("cls");
					cout <<"  ============================================== \n ";
	        		cout <<" Konversi Dollar ke Won \n ";
	        		cout <<" ============================================== \n ";
	        		cout <<" Masukkan jumlah Dollar : ";
	        		cin>>dollar1;
	        		won=dollar1*1.27246;
	        		cout <<"  Dollar : " << dollar1 << " $ " <<endl;
	        		cout <<"  Won 	 : " << won <<" won " <<endl;
	        		cout <<"  ============================================== \n ";
        		break;
        	
				case 3:
				system("cls");
					cout <<"  ============================================== \n ";
	        		cout <<" Konversi Dollar ke Ringgit \n ";
	        		cout <<" ============================================== \n ";
	        		cout <<" Masukkan jumlah Dollar : ";
	        		cin>>dollar1;
	        		ringgit=dollar1*4.40;
	        		cout <<"  Dollar : " << dollar1 << " $ " <<endl;
	        		cout <<"  Ringgit : " << ringgit <<" RM "  <<endl;
	        		cout <<"  ============================================== \n ";
        		break;
        		
        		case 4:
	        		system("cls");
	        		cout <<"  ============================================== \n ";
	        		cout <<" Konversi Dollar ke Pound \n ";
	        		cout <<" ============================================== \n ";
	        		cout <<" Masukkan jumlah Dollar : ";
	        		cin>>dollar1;
	        		pound=dollar1*0.83;
	        		cout <<"  Dollar : " << dollar1 << " $ " <<endl;
	        		cout <<"  Pound : " << pound <<" £ "  <<endl;
	        		cout <<"  ============================================== \n ";
        		break;
        		
        		case 5:
	        		system("cls");
	        		cout <<"  ============================================== \n ";
	        		cout <<" Konversi Dollar ke Dirham \n ";
	        		cout <<" ============================================== \n ";
	        		cout <<" Masukkan jumlah Dollar : ";
	        		cin>>dollar1;
	        		dirham=dollar1*3.67;
	        		cout <<"  Dollar : " << dollar1 << " $ " <<endl;
	        		cout <<"  Dirham : " << dirham <<" DH "  <<endl;
	        		cout <<"  ============================================== \n ";
        		break;
   			 	}
   		break;
   	}		 	
   	cout << "Apakah Anda Ingin Mengulang (y/t) : ";
   	cin >> lain;
   	
} while ( lain== 'Y' || lain== 'y');

	return 0;
}
