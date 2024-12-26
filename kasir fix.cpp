#include <iostream> //buat input
#include <iomanip>  //iomanip buat setw()
using namespace std;
 
int main() {
  cout<<" ---------------------------------------------------------"<<endl;
    cout<<"|                     SISTEM KASIR                        |"<<endl;
    cout<<" ---------------------------------------------------------"<<endl;
 
 //array untuk menyimpan data max 5
  string produk[5]; 
  int harga[5];  
  int jumlah[5];
  int jumlahTotalBarang;
  int sum = 0;
  int jumlah_uang = 0;
 
  cout <<"\n       Masukkan jumlah barang yang ingin dibeli: ";
  cin >> jumlahTotalBarang;
  cout << endl;
 
 //percabanngan jika jumlahTotalBarang = -1 atau 6
  if (jumlahTotalBarang <= 0 || jumlahTotalBarang > 5 ){ 
    cout << "Jumlah barang tidak valid!" << endl;
    return 0;
  }
 
 //looping untuk memasukan data setiap barang
  for (int i = 0; i < jumlahTotalBarang; i++) { 
    cout<<"       Barang ke " << i+1 << endl; 
    cout<<"       Nama produk  : ";
    cin>>produk[i];
    cout<<"       Harga per produk : ";
    cin>>harga[i];
    cout<<"       Jumlah yang dibeli: ";
    cin>>jumlah[i];
    cout<< endl;
  }
  cout << endl;
 
  cout<<" ========================================================="<<endl;
  cout<<"                      Nota Toko Serba                    "<<endl;
  cout<<" ========================================================="<<endl;
  cout<<"   No   Barang    Jumlah     Harga Satuan     Sub Total"<<endl;

//looping untuk memasukan data setiap barang
//setw() dipakai untuk mengatur lebar output agar lebih rapi.
  for (int i = 0; i < jumlahTotalBarang; i++){ 
    cout<<setw(4)<<i+1<<" ";
    cout<<right<<setw(9)<<produk[i];
    cout<<right<<setw(7)<<jumlah[i];
    cout<<setw(18)<<harga[i];
    cout<<setw(15)<<jumlah[i]*harga[i];
    cout<<endl;
    sum = sum + (jumlah[i]*harga[i]);
  }
  cout<<" ========================================================="<<endl;
 
  cout<<setw(50)<<"Total harga :    Rp."<<sum<<endl;
 
  cout<<setw(50)<<"Jumlah Bayar:    Rp.";
  cin  >> jumlah_uang;
 
 //looping ketika hasil dari pengurangan jumlah uang-sum = (-)
  while (jumlah_uang - sum < 0) { 
    cout <<"Maaf, uang anda kurang. Mohon lakukan ulang pembayaran"<<endl;
    cout <<"Jumlah Bayar:    Rp.";
    cin  >>jumlah_uang;
  }
  cout <<setw(50)<<"Kembalian   :    Rp." << jumlah_uang - sum << endl;
}