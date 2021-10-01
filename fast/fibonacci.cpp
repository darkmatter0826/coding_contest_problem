#include<bits/stdc++.h>
using namespace std ;

int fib_nth( int n ) {
	int a = 0 ,b=1 ;
	while ( n >1) {
		swap( a,b) ;
		b = a+b;
	}
	return b ;
}

int main(){
   
	int n;
	cin>>n;
	cout<<fib_nth(n)<<endl;
	return 0;
}
