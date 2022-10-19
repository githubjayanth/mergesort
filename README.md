# mergesort
I have implemented merge sort in c++ ,Iam getting a wrong output can anyone help me getting out of it!
#include<iostream>
using  namespace std;
void merge(int a[],int lb,int mid,int up){
	int i=lb;
	int j=mid+1;
	int k=lb;
	int b[k];
	while(i<mid&&j<up){
		if(a[i]<a[j]){
			b[k]=a[i];
			//cout<<b[k]<<"\t";
		i++;k++;}
		else{
			b[k]=a[j];
			//cout<<b[k]<<"\t";
			j++;k++;
		}
		
	}
	if(i>mid){
		while(j<=up){
			b[k]=a[j];
			//cout<<b[k]<<"\t";
			j++;
			k++;
	}}
	else{
		while(i<=mid){
			b[k]=a[i];
			//cout<<b[k]<<"\t";
			i++;
			k++;
	}}
	for(int u=lb;u<up;u++)
		a[u]=b[u];
}
void mergesort(int a[],int lb,int up){
	if(lb<up){
	int mid=(lb+up)/2;
	mergesort(a,lb,mid);
	mergesort(a,mid+1,up);
	merge(a,lb,mid+1,up);
	}
}
int main(){
	int a[]={1,3,96,2,5};
	mergesort(a,0,5);
	for(int u=0;u<5;u++)
		cout<<a[u]<<"\t";
	return 0;
}
	
		
