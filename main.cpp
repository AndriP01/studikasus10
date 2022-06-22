#include <iostream>
using namespace std;

class study10{
public:
void input(); //reza
void proses(); //andri
void output(); //alpin
private:
long *nim;
long nonim[10];
string *nama;
string name[10];
int n;
};


void study10::input(){
  cout<<"Masukkan Jumlah Mahasiswa: ";
  cin>>n;
  cout<<"Input Data Mahasiswa"<<endl;
  for(int i=0;i<n;i++){
    cout<<"Mahasiswa Ke-"<<i+1<<endl;
    cout<<"Masukkan Nama Mahasiswa: ";
    cin>>name[i];
    cout<<"Masukkan NIM Mahasiswa: ";
    cin>>nonim[i];
    cout<<endl;    
  }
}

void study10::proses(){
  nim= new long[5];
  nama=new string[5];
  for (int i=0;i<n;i++){
    *nim=nonim[i];
    nim++;
    *nama=name[i];
    nama++;
  }
}

void study10::output(){

  cout << "=====================================" << endl ;
  cout << "|| List Data Mahasiswa Masuk Final ||" << endl ;
  cout << "=====================================" << endl ; 
  nim -=n;
  nama -=n;
  cout<<"NAMA\t\t| NIM"<<endl;
  for(int i=0;i<n;i++){
  	cout<<"|"<<*nama<<"\t\t|"<<*nim<<"|"<<endl;
	nama++;
	nim++;
  
}
  }



int main() {
  study10 s;
  s.input();
  s.proses();
  s.output();
}