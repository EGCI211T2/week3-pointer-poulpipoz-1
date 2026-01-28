#include <iostream>
#include <iomanip>
#define SIZE 10

using namespace std;

int main(int argc,char *argv[]){
  int *pa = new int;
  int *pb = new int;

  int i, temp;
  int n = argc-1;

  pa=new int[n];
  int *start1 = pa;
  int *start2 = pa;
  int *start3 = pa;

  for(i=0;i<n;i++){

    *start2=atoi(argv[i+1]);

    start2++;

  }
cout<<"Original: ";
for (i=0; i<n-1; i++ ,start1++){
   cout<<setw(3)<<*start1 ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*start1<<endl;


pb = &pa[n-1];
for (i=0; i<n/2; i++)
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
//pb-=n/2;
cout<<"Reversed: ";
for (i=0; i<n-1; i++ ,start3++){
   cout<<setw(3)<<*start3 ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*start3<<endl;

//delete pa;
//delete pb;


return 0;
}
