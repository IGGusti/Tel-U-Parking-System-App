#include "iostream"
#include "string.h"
#include "conio.h"
#include "fstream"
#include "stdio.h"
#include "stdlib.h"
#include "windows.h"

using namespace std;

struct Kendaraan_Member {
	string NomPoli;
};

struct Mobil_Motor {
	string NoPol;
	int JAMM, MENITM;
};


int main() {
	int l;
	char ch;
	Kendaraan_Member KeMe[100];
	Mobil_Motor MoMo[100];
	int i, j, n, k, p, total, lama, JAMK, MENITK;
	string Pilih, x, a, Jeken, NomorPolisi, user, pass;
	
	cout<<" |--------------------------------------------------|"<<endl;
	cout<<" |                    TUGAS BESAR                   |"<<endl;
	cout<<" |             PEMROGRAMAN BERBASIS OBJEK           |"<<endl;
	cout<<" |--------------------------------------------------|"<<endl;
	cout<<" | >>>>>>>>>>>>>>>>> SISTEM PARKIR <<<<<<<<<<<<<<<< |"<<endl;
	cout<<" |--------------------------------------------------|"<<endl;
	cout<<""<<endl;
	cout<<"                     by Kelompok 4"<<endl;
	cout<<""<<endl;
	
	for (l=1; l<=3; l++) {
    	user = "";
    	pass = "";
    	cout<<"    ~ Username : "; cin>>user;
    	cout<<"    ~ Password : ";
    	ch=_getch();
    	while(ch!=13) {
    		pass.push_back(ch);
        	cout<<'*';
        	ch=_getch();
        }
     	if (user == "kelompok4" && pass == "hahafergugus") {
    		cout<<"\n\n  Anda berhasil login.\n"<<endl;
    		cout<<"                                        *press ENTER"<<endl;                       
      		
      		getch();
      		
			goto MyLabel5;	
    	}
		else {
			cout<<""<<endl;
    		cout<<"\n\n  Maaf, Username / Password anda masukan salah.\n\n";
    		cout<<""<<endl;  	
		}
   	} while (l<=3);
   	
   	system("cls");
   	
	cout<<" |--------------------------------------------------|"<<endl;
	cout<<" |                    TUGAS BESAR                   |"<<endl;
	cout<<" |             PEMROGRAMAN BERBASIS OBJEK           |"<<endl;
	cout<<" |--------------------------------------------------|"<<endl;
	cout<<" | >>>>>>>>>>>>>>>>> SISTEM PARKIR <<<<<<<<<<<<<<<< |"<<endl;
	cout<<" |--------------------------------------------------|"<<endl;
	cout<<""<<endl;
	cout<<"                      Kelompok 4"<<endl;
	cout<<""<<endl;
   	cout<<" # Anda telah 3x memasukan Username & Password yang salah.\n";
   	cout<<" # Mohon maaf aplikasi anda kami tutup untuk sementara.\n";
   	cout<<" # Silahkan hubungi Manager Parkir, Terima Kasih...";
   	cout<<""<<endl;
   	cout<<""<<endl;
   	
   	getch();
   	
	goto MyLabel4;
	
	MyLabel5:
	
	i=0;
	j=0;
	
	MyLabel1:
	
	system("cls");	
	
	cout<<" ----------------------------------------------------"<<endl;
	cout<<" |                 TELKOM APARTEMENT                |"<<endl;
	cout<<" |                Jl. Telekomunikasi                |"<<endl;
	cout<<" ----------------------------------------------------"<<endl;
	cout<<""<<endl;
	
	MyLabel2:
	
	cout<<"   Pilih :"<<endl;
	cout<<"   1. Daftar Member"<<endl;
	cout<<"   2. Kendaraan Masuk"<<endl;
	cout<<"   3. Kendaraan Keluar"<<endl;
	cout<<"   4. Keluar Aplikasi"<<endl;
	cout<<"  Masukkan pilihan (1/2/3/4) ? "; cin>>a;
		
	system("cls");
	
	if (a=="1") {
		do {
			cout<<" ----------------------------------------------------"<<endl;	
			cout<<" |                 TELKOM APARTEMENT                |"<<endl;
			cout<<" |                Jl. Telekomunikasi                |"<<endl;
			cout<<" ----------------------------------------------------"<<endl;
			cout<<""<<endl;
			cout<<"    Inputan Daftar Member"<<endl;
			cout<<"    ---------------------"<<endl;
			
			i=i+1;
			
			cout<<"     ~ No. Pol <max 4 digit>       : "; cin>>KeMe[i].NomPoli;
						
			ofstream pile;
			pile.open("WeW.txt", ios::app);
  			pile.write((char*) &KeMe[i].NomPoli, sizeof(KeMe[i].NomPoli));
  			pile.close();
  			
  			cout<<""<<endl;
  			cout<<"                        Ingat!!!"<<endl;
  			cout<<" Pelanggan dikenakan biaya Rp. 250.000,- untuk mendaftar"<<endl;			
			cout<<""<<endl;
			
			cout<<" Apakah anda ingin menginput daftar member lagi (Y/T) ? "; cin>>x;
			
			system("cls");
			
		} while ((x=="Y") || (x=="y") || (x=="YA") || (x=="ya") || (x=="Ya"));
		
		goto MyLabel1;
		
	}
	else if (a=="2") {		
		do {
			cout<<" ----------------------------------------------------"<<endl;	
			cout<<" |                 TELKOM APARTEMENT                |"<<endl;
			cout<<" |                Jl. Telekomunikasi                |"<<endl;
			cout<<" ----------------------------------------------------"<<endl;
			cout<<""<<endl;
			cout<<"    Inputan Kendaraan Masuk"<<endl;
			cout<<"    -----------------------"<<endl;
			
			j=j+1;
			
			cout<<"     ~ No. Pol <max 4 digit>       : "; cin>>MoMo[j].NoPol;
			cout<<"     ~ Masuk JAM (0-24)            : "; cin>>MoMo[j].JAMM;
			cout<<"             MENIT (0-60)          : "; cin>>MoMo[j].MENITM;
			cout<<""<<endl;
			
			p=j+1;
			
			cout<<" Apakah anda ingin menginput kendaraan masuk lagi (Y/T) ? "; cin>>x;
			
			system("cls");
			
		} while ((x=="Y") || (x=="y") || (x=="YA") || (x=="ya") || (x=="Ya"));
		
		goto MyLabel1;
		
	}
	else if (a=="3") {
		do {
			cout<<" ----------------------------------------------------"<<endl;	
			cout<<" |                 TELKOM APARTEMENT                |"<<endl;
			cout<<" |                Jl. Telekomunikasi                |"<<endl;
			cout<<" ----------------------------------------------------"<<endl;
			cout<<""<<endl;
			cout<<"    Inputan Kendaraan Keluar"<<endl;
			cout<<"    ------------------------"<<endl;
			cout<<"     Jenis Kendaraan"<<endl;
			cout<<"           (a) MOTOR"<<endl;
			cout<<"           (b) MOBIL"<<endl;
			cout<<"     ~ Pilih Jenis Kendaraan (a/b) : "; cin>>Pilih;
			
			MyLabel3:
			
			if (Pilih!="A" && Pilih!="a" && Pilih!="MOTOR" && Pilih!="motor" &&
		   	   Pilih!="Motor" && Pilih!="B" && Pilih!="b" && Pilih!="MOBIL" && 
			   Pilih!="mobil" && Pilih!="Mobil") {
				system("cls");
				
				cout<<" ----------------------------------------------------"<<endl;	
				cout<<" |                 TELKOM APARTEMENT                |"<<endl;
				cout<<" |                Jl. Telekomunikasi                |"<<endl;
				cout<<" ----------------------------------------------------"<<endl;
				cout<<""<<endl;
				cout<<"    Maaf, anda salah input!!!"<<endl;
				cout<<""<<endl;
				cout<<"    Inputan Kendaraan Keluar"<<endl;
				cout<<"    ------------------------"<<endl;
				cout<<"     Jenis Kendaraan"<<endl;
				cout<<"           (a) MOTOR"<<endl;
				cout<<"           (b) MOBIL"<<endl;
				cout<<"     ~ Pilih Jenis Kendaraan (a/b) : "; cin>>Pilih;
				goto MyLabel3;
			
			}
			else {
				cout<<"     ~ No. Pol <max 4 digit>       : "; cin>>NomorPolisi;
				cout<<"     ~ Keluar JAM (0-24)           : "; cin>>JAMK;
				cout<<"              MENIT (0-60)         : "; cin>>MENITK;
				cout<<""<<endl;
			}
			
			
			// memilah nomor pilisi keluarnya member bukan
			i=0;
			
		   	ifstream pile;
			pile.open("WeW.txt");
			while (pile.read((char*)&KeMe[i].NomPoli, sizeof(KeMe[i].NomPoli))) {
				i=i+1;
				if (KeMe[i].NomPoli==NomorPolisi) {	
					KeMe[i].NomPoli=NomorPolisi;
					break;
				}		
			} 
			pile.close(); 		
			
			// memilah nomor polisi keluar ada dalam nomor polisi masuk bukan			
			p=j+1;
			
			for (j=0; j<p; j++) {
				if (MoMo[j].NoPol==NomorPolisi) {
					break;
				}
			}			
			
			system("cls");
						
			// Outputan Untuk Member
			if (KeMe[i].NomPoli==NomorPolisi) {
				
				// memilah nomor polisi keluar ada dalam nomor polisi masuk bukan
				p=j+1;	
			
				for (j=0; j<p; j++) {
					if (MoMo[j].NoPol==NomorPolisi) {
						goto MyLabel6;
					}
				}	
				
				goto MyLabel7;
				
				MyLabel6:
				
				cout<<" ===================================================="<<endl;	
				cout<<" |                TELKOM APARTEMENT                 |"<<endl;
				cout<<" |                Jl. Telekomunikasi                |"<<endl;
				cout<<" ===================================================="<<endl;
				cout<<""<<endl;
		   		cout<<"                                             *Member"<<endl;
		   		
		   		j=0;
		   		
		   		x="Tidak";
		   		while (x=="Tidak") {
		   			j=j+1;
		   			if(KeMe[i].NomPoli==MoMo[j].NoPol) {
		   				x="Ya";	
		   			}
		   		}
		   		
		   		if (Pilih=="A" || Pilih=="a" || Pilih=="MOTOR" || Pilih=="motor" ||
		   		   Pilih=="Motor") {
		   		   	cout<<"     Kendaraan     : Member, Motor"<<endl;
		   		}
		   		else {
		   			cout<<"     Kendaraan     : Member, Mobil"<<endl;
		   		}
		   		cout<<"     No. POL       : "<<KeMe[i].NomPoli<<endl;
		   		cout<<"     Masuk         : Member, "<<MoMo[j].JAMM<<" : "<<MoMo[j].MENITM<<endl;
		   		cout<<"     Keluar        : Member, "<<JAMK<<" : "<<MENITK<<endl;
		   		
		   		if (JAMK<MoMo[j].JAMM) {
		   			JAMK=JAMK+24;
					lama=((JAMK*60)+MENITK)-((MoMo[j].JAMM*60)+MoMo[j].MENITM);
		   		}
		   		else {
		   			lama=((JAMK*60)+MENITK)-((MoMo[j].JAMM*60)+MoMo[j].MENITM);
		   		}
		   		
		   		cout<<"     Parkir selama : Member, "<<lama<<" menit"<<endl;
		   		cout<<"     Tarif Parkir  : Member "<<endl;
		   		cout<<""<<endl;
		   		cout<<" =======++++ Terima Kasih & Selamat Jalan ++++======="<<endl;
			}
			
			// Outputan Untuk Non Member
			else if (NomorPolisi==MoMo[j].NoPol) {
				if (Pilih=="A" || Pilih=="a" || Pilih=="MOTOR" || Pilih=="motor" ||
		   		   Pilih=="Motor") {
		   			cout<<" ===================================================="<<endl;	
					cout<<" |                TELKOM APARTEMENT                 |"<<endl;
					cout<<" |                Jl. Telekomunikasi                |"<<endl;
					cout<<" ===================================================="<<endl;
					cout<<""<<endl;
		   			cout<<"                                         *Non Member"<<endl;
		   			
		   			j=0;
		   			
					x="Tidak";
		   			while (x=="Tidak") {
		   				j=j+1;
		   				if(NomorPolisi==MoMo[j].NoPol) {
		   					x="Ya";
		   				}
		   			}
		   			
		   			cout<<"     Kendaraan     : Motor"<<endl;
		   			cout<<"     No. POL       : "<<NomorPolisi<<endl;
		   			cout<<"     Masuk         : "<<MoMo[j].JAMM<<" : "<<MoMo[j].MENITM<<endl;
		   			cout<<"     Keluar        : "<<JAMK<<" : "<<MENITK<<endl;
		   			
			   		if (JAMK<MoMo[j].JAMM) {
			   			JAMK=JAMK+24;
						lama=((JAMK*60)+MENITK)-((MoMo[j].JAMM*60)+MoMo[j].MENITM);
			   		}
		   			else {
		   				lama=((JAMK*60)+MENITK)-((MoMo[j].JAMM*60)+MoMo[j].MENITM);
		   			}
		   			
		   			total=lama*25;
		   			
		   			cout<<"     Parkir selama : "<<lama<<" menit"<<endl;
		   			cout<<"     Tarif Parkir  : Rp."<<total<<",-"<<endl;
		   			cout<<""<<endl;
		   			cout<<" =======++++ Terima Kasih & Selamat Jalan ++++======="<<endl;
    			}
	 	   		else {		   
					cout<<" ===================================================="<<endl;	
					cout<<" |                TELKOM APARTEMENT                 |"<<endl;
					cout<<" |                Jl. Telekomunikasi                |"<<endl;
					cout<<" ===================================================="<<endl;
					cout<<""<<endl;
		   			cout<<"                                         *Non Member"<<endl;
		   			
		   			j=0;
		   			
		   			x="Tidak";
		   			while (x=="Tidak") {
		   				j=j+1;
		   				if(NomorPolisi==MoMo[j].NoPol) {
		   				x="Ya";
		   				}
		   			}
		   			
		   			cout<<"     Kendaraan     : Mobil"<<endl;
		   	 		cout<<"     No. POL       : "<<NomorPolisi<<endl;
		   			cout<<"     Masuk         : "<<MoMo[j].JAMM<<" : "<<MoMo[j].MENITM<<endl;
		   			cout<<"     Keluar        : "<<JAMK<<" : "<<MENITK<<endl;
		   			
			   		if (JAMK<MoMo[j].JAMM) {
			   			JAMK=JAMK+24;
						lama=((JAMK*60)+MENITK)-((MoMo[j].JAMM*60)+MoMo[j].MENITM);
			   		}
		   			else {
		   				lama=((JAMK*60)+MENITK)-((MoMo[j].JAMM*60)+MoMo[j].MENITM);
		   			}
		   			
		   			total=lama*75;
		   			
		   			cout<<"     Parkir selama : "<<lama<<" menit"<<endl;
		   			cout<<"     Tarif Parkir  : Rp."<<total<<",-"<<endl;
		   			cout<<""<<endl;
		   			cout<<" =======++++ Terima Kasih & Selamat Jalan ++++======="<<endl;
				}
			}
			
			// Outputan Untuk Kendaraan ILEGAL
			else {
				
				MyLabel7:
				
				cout<<" ===================================================="<<endl;	
				cout<<" |                TELKOM APARTEMENT                 |"<<endl;
				cout<<" |                Jl. Telekomunikasi                |"<<endl;
				cout<<" ===================================================="<<endl;
		   		cout<<""<<endl;
				cout<<"  Belum ada data masuk, kendaraan terindikasi ILEGAL!!!"<<endl;
				cout<<"     Kendaraan     : Mobil"<<endl;
		   		cout<<"     No. POL       : "<<NomorPolisi<<endl;
		   		cout<<"     Masuk         : - : -"<<endl;
		   		cout<<"     Keluar        : "<<JAMK<<" : "<<MENITK<<endl;
		   		cout<<"     Parkir selama : - menit"<<endl;
		   		cout<<"     Denda Parkir  : Rp. 150.000,-"<<endl;
		   		cout<<""<<endl;
		   		cout<<"               (Dengan menunjukkan STNK)"<<endl;
		   		cout<<""<<endl;
		   		cout<<" =======++++ Terima Kasih & Selamat Jalan ++++======="<<endl;
			}
			
			cout<<" Apakah anda ingin menginput kendaraan lagi (Y/T) ? "; cin>>x;
			
			system("cls");
			
		} while ((x=="Y") || (x=="y") || (x=="YA") || (x=="ya") || (x=="Ya"));
		
		goto MyLabel1;
		
	}
	else if (a=="4") {
		
		MyLabel4:
		
		exit(4);
	}
	else {
		cout<<" ----------------------------------------------------"<<endl;	
		cout<<" |                 TELKOM APARTEMENT                |"<<endl;
		cout<<" |                Jl. Telekomunikasi                |"<<endl;
		cout<<" ----------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<" Anda salah menginput pilihan!!!"<<endl;

		goto MyLabel2;
	}	
}
