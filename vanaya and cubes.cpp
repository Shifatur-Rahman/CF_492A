#include <iostream>
using namespace std;
int main(){

int n, sum=0, temp=0, count=0;
cin>>n;

for(int i=1; i<=n; i++){
	sum+=i;
	temp+=sum;

	if(temp>n){
		break;
	}
	count++;
}

cout<<count<<endl;


}
