#include <iostream>
#include <deque>
#include <iterator>

using namespace std;

int main(){

int soni;
cout<<"dek elementlari sonini kiriting";
cin>>soni;

deque<char>myDeque(soni);
 cout<<"dek elementlari sonini kiriting";
for(int i=1;i<=soni;i++){

  cin>>myDeque[soni];
}

if(!myDeque.empty()){
  copy(myDeque.begin(),myDeque.end(),ostream_iterator<char>(cout," "));
}

}