#include <iostream>
using namespace std;

int main(){
  int array[100], i, n;
  float rata, total=0;

  cout << "Masukkan banyaknya elemen array: ";
  cin >> n;
  for(i=0; i<n; i++){
    cout << "Nilai Ke-" << i+1 << " : ";
    cin >> array[i];
    total = total + array[i];
  }
  rata = total/n;
  cout << "Hasil nilai total adalah : " << total << endl;
  cout << "Hasil rata-rata adalah : " << rata << endl;
  return 0;
}
