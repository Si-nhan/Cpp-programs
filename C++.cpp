													//Phân tích một số thành số nguyên tố:

#include <iostream>
using namespace std;
int Prime(int n)
{
	int i, x=1;
	if(n==1) return 0;
	for(i=2; i<n; i++)
		if(n%i) continue; 
		else {
		   x=0;
		   break;
		}
	
    if(x) return 1;
}
main()
{
	int n, j;
	cout<<"Nhap so n: ";
	cin>>n;
	cout<<"Ket qua phan tich thanh so nguyen to:\n";
	for(int i=2; i<=n; i++) 
	   if(Prime(i)) {
	   	  j=0;
	 	  while(n%i==0) {
		   	n=n/i;
		   	j++;
	   	}
	   if(j) cout<<"so "<<i<<" voi so mu "<<j<<"\n";
    }
}

														//Danh sách sinh viên:

/*#include <iostream>
#include <string>
using namespace std;
struct sinhvien
{
	string hoten;
	string maso;
	double dtb;
} temp, sv[5];
void sapxep(struct sinhvien *a)
{
	int i,j;
	for(i=0; i<5; i++)
		for(j=4; j>i; j--)
			if(a[j].dtb>a[i].dtb) {
				temp=*(a+i);
			    *(a+i)=*(a+j);
				*(a+j)=temp;
			}
}
main()
{
	cout<<"Nhap thong tin cac sinh vien: ";
	for(int i=0; i<5; i++)
		cin>>sv[i].hoten>>sv[i].maso>>sv[i].dtb;
	sapxep(sv);
	cout<<"Danh sach sinh vien sau khi xep hang:"<<endl;
	for(int i=0; i<5; i++)
	    cout<<sv[i].hoten<<" "<<sv[i].maso<<" "<<sv[i].dtb<<endl;*/

															//OOP athletes:

/*#include<iostream>
#include<string>
using namespace std;
class VanDongVien
{
    private:
        string hoten, monthidau;
        int tuoi;
        float cannang, chieucao;
    public:
        VanDongVien()
        {
            hoten=x; monthidau=y;
            tuoi=23;
            cannang=75.3; chieucao=1.8;
        }
        VanDongVien(string ht, string mtd, int t, float cn, float cc)
        {
            hoten=ht; monthidau=mtd;
            tuoi=t;
            cannang=cn; chieucao=cc;
        }
        ~VanDongVien()
        {
            hoten=monthidau="";
            tuoi=0;
            cannang=0; chieucao=0;
        }
        void nhap()
        {
            cout<<"Nhap ho ten: ";
            cin>>hoten;
            cout<<"Nhap mon thi dau: ";
            cin>>monthidau;
            cout<<"Nhap so tuoi: ";
            cin>>tuoi;
            cout<<"Nhap can nang: ";
            cin>>cannang;
            cout<<"Nhap chieu cao: ";
            cin>>chieucao;
        }
}
main()
{
    VanDongVien p("anhhung", "bongda", 23, 75.6, 1.83);
    cout<<p;
    p.VanDongVien();
    cout<<p;
}*/

														//OOP phanso:

/*#include <iostream>
#include <string>
using namespace std;
int UCLN(int a, int b)
{
	for(int i=a<b?a:b; i>0; i--)
		if(a%i==0 && b%i==0) 
			return i;
}
class phanso
{
	private:
		int tuso, mauso;
	public:
		void nhap()
		{
			cout<<"Nhap tu so: ";
			cin>>tuso;
			cout<<"Nhap mau so: ";
			cin>>mauso;
		}
		void print()
		{
			cout<<"Phan so vua nhap la: "<<tuso<<"/"<<mauso<<"="<<tuso/UCLN(tuso, mauso)<<"/"<<mauso/UCLN(tuso, mauso)<<endl;
		}
		void cong(phanso ps1, phanso ps2)
		{
			int a, b;
			a=ps1.tuso*ps2.mauso+ps1.mauso*ps2.tuso;
			b=ps1.mauso*ps2.mauso;
			if(a%b)
				cout<<"Ket qua phep cong: "<<a/UCLN(a,b)<<"/"<<b/UCLN(a,b)<<endl;
			else
				cout<<"Ket qua phep cong: "<<a/b<<endl;
		}
		void nhan(phanso ps1, phanso ps2)
		{
			int a ,b;
			a=ps1.tuso*ps2.tuso;
			b=ps1.mauso*ps2.mauso;
			if(a%b)
				cout<<"Ket qua phep nhan: "<<a/UCLN(a,b)<<"/"<<b/UCLN(a,b)<<endl;
			else
				cout<<"Ket qua phep nhan: "<<a/b<<endl;
		}
};
main()
{
	phanso ps1, ps2, ps3;
	ps1.nhap();
	ps1.print();
	ps2.nhap();
	ps2.print();
	ps3.cong(ps1, ps2);
	ps3.nhan(ps1, ps2);	
}*/

                                                            //Đổi tiền:

/*#include <iostream>
using namespace std;
void doitien(int sotien)
{
    int soto, menhgia[]={500,200,100,50,20,10,5,2,1};
    for(int i=0; i<9; i++) {
        if(sotien<=menhgia[i]) continue;
        soto=sotien/menhgia[i];
            cout<<menhgia[i]<<": "<<soto<<" to"<<endl;
        sotien-=soto*menhgia[i];
    }
}
int main() {
    // Write C++ code here
    int sotien;
    cout<<"Nhap so tien can doi: ";
    cin>>sotien;
    cout<<"Ket qua doi tien: "<<endl;
    doitien(sotien);
    return 0;
}*/

                                                    //Tìm ngày có nhiệt độ cao nhất:

/*#include <iostream>
using namespace std;
struct weather
{
	char day[3], month[3], year[5];
	double max_t, min_t, wind;
} we[5];
double av_t(struct weather a) //tinh nhiet do trung binh
{
	return (a.max_t+a.min_t)/2;
	
}
void max_av_t(struct weather a[]) //tim ngay co nhiet do cao nhat
{
	double max=av_t(a[0]);
	int i,j;
	for(i=1; i<5; i++)
		if(av_t(a[i])>max) 	{
			max=av_t(a[i]);
		    j=i;
		}
	cout<<"Ngay co nhiet do cao nhat la "<<a[j].day<<"/"<<a[j].month<<"/"<<a[j].year;
}
main()
{
	cout<<"Nhap thong tin moi ngay: ";
	for(int i=0; i<5; i++)
		cin>>we[i].day>>we[i].month>>we[i].year>>we[i].max_t>>we[i].min_t;
	for(int i=0; i<5; i++)
	    cout<<av_t(we[i])<<endl;
	max_av_t(we);
	cout<<endl;
}*/	

                                                    //Số hoàn hảo:

/*#include <iostream>
#include <string>
using namespace std;
main()
{
	int a, tong=0;
	cout<<"Nhap so a: ";
	cin>>a;
	for(int i=1; i<a; i++)
		if(a%i==0)
			tong+=i;
	if(tong==a)
		cout<<a<<" la so hoan hao!"<<endl;
	else
		cout<<a<<" khong phai so hoan hao!"<<endl;*/

                                            //Tính toán số phức:

/*#include <iostream>
#include <cmath>
using namespace std;
struct com_num
{
	int re, im;
} a,b;
void add(struct com_num a, struct com_num b)
{
	cout<<"Ket qua phep cong: "<<a.re+b.re<<" + "<<a.im+b.im<<"i"<<endl;
}
void sub(struct com_num a, struct com_num b)
{
	cout<<"Ket qua phep tru: "<<a.re-b.re<<" + "<<a.im-b.im<<"i"<<endl;
}
void mul(struct com_num a, struct com_num b)
{
	cout<<"Ket qua phep nhan: "<<a.re*b.re-a.im*b.im<<" + "<<a.re*b.im+a.im*b.re<<"i"<<endl;
}
void div(struct com_num a, struct com_num b)
{
	double c=pow(b.re,2)+pow(b.im,2);
	cout<<"Ket qua phep chia: "<<(a.re*b.re+a.im*b.im)/c<<" + "<<(a.im*b.re-a.re*b.im)/c<<"i"<<endl;
}
main()
{
	cout<<"Nhap so phuc a: ";
	cin>>a.re>>a.im;
	cout<<"Nhap so phuc b: ";
	cin>>b.re>>b.im;
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}*/                                                                                                

                                                    //In tam giác ngược:

/*#include <iostream>
using namespace std;
 
int main()
{
    int soDong;
    cout << "Nhap so dong: ";
    cin >> soDong;
    for(int i = 1; i <= soDong; i++)
    {
        // in ky tu khoang trang
       for(int j = 1; j < i; j++)
            cout <<' ';
 
        // in ky tu ngoi sao
        for(int j = 1; j <= (soDong*2 -(2*i-1)); j++)
            cout <<'*';
 
        // xuong dong ke tiep
        cout << endl;
    }
    return 0;
}*/

                                                //In tam giác xuôi:

/*#include <iostream>
using namespace std;

int main() 
{
    int i, j, n;
    cout<<"Nhap so n: ";
    cin>>n;
 
   for(i=0; i<n-1; i++)
    {
    	for(j=1; j<2*n-1; j++)
    	   if(j==n-i||j==n+i)
    	   		cout<<'*';
    	   else
    	   		cout<<' ';
    	cout<<endl;
	}
	for(i=1; i<=2*n-1; i++)
		cout<<'*';
}

	for(i=0; i<n; i++)
    {
    	for(j=1; j<=2*n-1; j++)
    		if(j<n-i||j>n+i)
    	  	 	cout<<' ';
    	   else
    	   		cout<<'*';
    	cout<<endl;
	}
}     */          
