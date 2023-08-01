Cơ bản
Câu 1:
#include<iostream>
using namespace std;

int min(int a, int b) {
    return (a < b) ? a : b;
}

int min(int a, int b, int c) {
    return min(min(a, b), c);
}

int main() {
    int n1, n2, n3, n4, n5;

    cout << "Nhap so thu nhat va thu hai: ";
    cin >> n1 >> n2;
    int mina = min(n1, n2);
    cout << "So nho hon trong hai so la: " << mina << endl;

    cout << "Nhap so thu nhat, thu hai va thu ba: ";
    cin >> n3 >> n4 >> n5;
    int minb = min(n3, n4, n5);
    cout << "So nho hon trong ba so la: " << minb << endl;

    return 0;
}
Câu 2:
#include <iostream>
using namespace std;

int UCLN (int& a, int& b){
	while (b!=0 && a!=0){
			int tach = b;
	    b = a % b;
	    a = tach; 
	}
    return a;
}
int BCNN(int& a, int& b){
return (a*b)/ UCLN (a,b); 
}
int main(){
	int s1, s2;
	cout <<"Nhap hai so nguyen duong :";
	cin>> s1>>s2;
	int UCLN (int& a, int& b);
	int BCNN (int& a, int& b);
	cout <<"Uoc chung lon nhat cua "<< s1 << " va "<<s2<<" la:"<<UCLN<< endl;
	cout << "Boi chung nho nhat cua " << s1 << " va "<<s2<<" la:"<<BCNN<< endl;
	return 0; 
	 
}
Câu 3:
#include<iostream>
#include<cmath>
using namespace std;
 
 int giaithualap(int n){
    int giai_thua = 1;
    for (int i = 1; i <= n; i++)
	giai_thua = giai_thua * i;
    return giai_thua;
}
int main(){
	int n; 
    cout<<"Nhap n la so nguyen duong:"; cin>>n; 
    cout<<"Giai thua cua so nguyen duong:"<<n<<"! " <<"la "<<giaithualap(n)<<endl;
    return 0;
    
}
Câu4 :
#include<iostream>
using namespace std;
int Tinh(int x,int n){
	int S=1;
	for(int i=1;i<=n;i++){
		S=S*x;
	}
	return S;
}

int main(){
	int x,n;
	cout<<"Nhap X:";cin>>x;
	cout<<"Nhap n:";cin>>n;
	cout<<"X^n="<<Tinh(x,n);
}
Câu 5:
#include<iostream>
using namespace std;
int GiaiThua(int n){
	int S=1;
	for(int i=1;i<=n;i++){
		S=S*i;
	}
	return S;
}

int ToHop(int n,int k){
	int C;
	C=(GiaiThua(n))/(GiaiThua(k)*GiaiThua(n-k));
}

int main(){
	int n,k;
	cout<<"Nhap n:";cin>>n;
	cout<<"Nhap k:";cin>>k;
	cout<<"C(n,k)="<<ToHop(n,k);
}
Câu 6:
#include<iostream>
using namespace std;
void Ve(int r,int d){
	for(int i=0;i<r;i++){
		for(int j=0;j<d;j++){
			if(i==0||i==r-1||j==0||j==d-1)
				cout<<"* ";
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

int ChuVi(int r,int d){
	return (d+r)*2;
}

int DienTich(int r,int d){
	return d*r;
}

int main(){
	int r,d;
	cout<<"Nhap chieu rong va chieu dai:";cin>>r>>d;
	Ve(r,d);
	cout<<"Chu vi cua hinh chu nhat:"<<ChuVi(r,d)<<endl;
	cout<<"Dien tich hinh chu nhat:"<<DienTich(r,d)<<endl;
}
Câu 7:
Câu 8:
#include<iostream>
using namespace std;
void Tien(int n){
	int NamChuc=n/50000;
	n=n%50000;
	int HaiChuc=n/20000;
	n=n%20000;
	int MotChuc=n/10000;
	n=n%10000;
	int NamNghin=n/5000;
	n=n%5000;
	int HaiNghin=n/2000;
	n=n%2000;
	int MotNghin=n/1000;
	n=n%1000;
	cout<<NamChuc<<"x50.000 "<<HaiChuc<<"x20000 "<<MotChuc<<"x10000 "<<NamNghin<<"x5000 "<<HaiNghin<<"x2000 "<<MotNghin<<"x1000";
}

int main(){
	int n;
	Nhap:
	cout<<"Nhap so tien:";cin>>n;
	if(n<0||n%100!=0){
		cout<<"Khong hop le!";
		goto Nhap;
	}
	Tien(n);
}
Câu 9:
#include<iostream>
using namespace std;
int Dao(int n){
	int S=0;
	while(n>0){
		S=S*10+n%10;
		n=n/10;
	}
	return S;
}

int main(){
	int n;
	cout<<"Nhap n:";cin>>n;
	cout<<"So dao:"<<Dao(n);
}


