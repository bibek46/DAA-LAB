#include<iostream>
using namespace std;
void selectionsort(int a[],int n){
	int imin,temp;
	for(int i=0;i<=n-2; i++){
		imin=i;
		for(int j=i+1; j<=n-1; j++){
			if(a[imin]>a[j])
			imin=j;
				}
				temp=a[i];
				a[i]=a[imin];
				a[imin]=temp;
	}
}
int main(){
	int n;
    int a[100];
    cout<<"enter the number of array";
    cin>>n;
	cout<<"enter the array element";
	for(int j=0;j<n;j++){
		cin>>a[j];
	}
	selectionsort(a,n);
	cout<<"the sorted number is:";
	for(int i=0;i<n;i++){
		cout<<a[i];
		if(i!=n-1)
		cout<<",";
		
	}
}


