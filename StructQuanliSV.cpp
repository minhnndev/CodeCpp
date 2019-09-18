#include<bits/stdc++.h>
#include <strstream>
#include "TextTable.h"
using namespace std;
#define all 0
#define fail 1
#define well 2
#define top 3
#define reback 4


struct quanli {	
	string HoTen;
	int diemTin = 0;
	int diemNN = 0;
	float diemTB = 0;

};

bool sapxep (const quanli a, const quanli b);
string IswapS (float x);
string XepLoai (float diem);
void nhapDSsv(int &n, quanli sv[]);
void xuatDSsv(int n, quanli sv[], int option);


quanli sv[30];
 
void nhapDSsv(int &n, quanli sv[]){
	
	cout << " Nhap So luong SV : ";
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << "----Nhap thong tin SV---- "<< endl;
		cout<< "Ho va Ten : ";
		cin.ignore();
		getline(cin,sv[i].HoTen);
		cout << "Diem Tin : ";
		cin >> sv[i].diemTin;
		cout<< "Diem Ngoai ngu : ";
		cin >> sv[i].diemNN;
		sv[i].diemTB = (sv[i].diemTin + sv[i].diemNN) / 2.0;
	
 	}
}
string IswapS (float x)
{
	ostrstream out;
	out << fixed << setprecision(2) << x;
	string word = out.str();
	return word;
}
bool sapxep (const quanli a, const quanli b)
{
	return a.diemTB > b.diemTB;
}
string XepLoai (float diem) 
{

	if (diem >= 8)
		return "Gioi";
	else if (diem >= 6.5)
		return "Kha";
	else if (diem >= 5)
		return "Trung Binh";
	else if (diem >= 4)
		return "Yeu";
	else return "Kem";
}

void xuatDSsv(int n , quanli sv[], int option){
	
	TextTable t( '-', '|', '+' );

    t.add( "Ho Ten" );
    t.add( "Diem Tin" );
    t.add( "Diem Ngoai ngu");
    t.add( "Diem T.binh" );
    t.add( "Xep loai" );
    t.endOfRow();
		
	for(int i = 0; i < n; i++){
		
		t.add(sv[i].HoTen);
	    t.add(IswapS(sv[i].diemTin));
	    t.add(IswapS(sv[i].diemNN));
	    t.add(IswapS(sv[i].diemTB));
	    t.endOfRow();
	
	}
	t.add("Ho va Ten");
    t.add("Diem Tin");
    t.add("Diem Ngoai Ngu");
    t.add("Diem Trung Binh");
    switch(option) {
        case fail:
            t.add("Thi Lai Mon");
        default:
            t.add("Xep Loai");
    }
    t.endOfRow();
    
    int stt = n;
    int SVgioi = 3;
    
    switch(option) {
        case top:
            sort(sv, sv + n, sapxep);
            stt = stt > SVgioi ? 3 : stt;
            break;
        case reback:
            sort(sv, sv + n, sapxep);
            break;
    }

	for(int i = 0; i < stt; i++)
	{
        switch(option) {
            case fail:
                if (sv[i].diemTin < 5 || sv[i].diemNN < 5)
                {
                    t.add(sv[i].HoTen);
                    t.add(IswapS(sv[i].diemTin));
                    t.add(IswapS(sv[i].diemNN));
                    t.add(IswapS(sv[i].diemTB));
                    t.add((sv[i].diemTin < 5 ? "Tin Hoc" : "Ngoai Ngu"));
                    t.endOfRow();
                }
                break;
            case well:
                if (sv[i].diemTB >= 8)
                {
                    t.add(sv[i].HoTen);
                    t.add(IswapS(sv[i].diemTin));
                    t.add(IswapS(sv[i].diemNN));
                    t.add(IswapS(sv[i].diemTB));
                    t.add(XepLoai(sv[i].diemTB));
                    t.endOfRow();
                }
                break;
            default:
                t.add(sv[i].HoTen);
                t.add(IswapS(sv[i].diemTin));
                t.add(IswapS(sv[i].diemNN));
                t.add(IswapS(sv[i].diemTB));
                t.add(XepLoai(sv[i].diemTB));
                t.endOfRow();
        }
	}
	
	
	t.setAlignment( 2, TextTable::Alignment::RIGHT );
	switch(option) {
        case fail:
            cout << "Danh sach Sinh Vien Thi Lai" << endl;
            break;
        case well:
            cout << "Danh sach Sinh Vien Xep Loai Gioi" << endl;
            break;
        case top:
            cout << "Danh sach Sinh Vien Gioi Nhat Lop" << endl;
            break;
        case reback:
            cout << "Danh sach Sinh Vien Giam Dan Theo Diem Trung Binh" << endl;
            break;
        default:
            cout << "Tat ca Sinh Vien" << endl;
    }
	cout << t;
	
	cout << endl << endl;
}

int main() {
	
	int n;
	nhapDSsv(n, sv);
	xuatDSsv(n, sv, all);
	xuatDSsv(n, sv, fail);
	xuatDSsv(n, sv, well);
	xuatDSsv(n, sv, top);
	xuatDSsv(n, sv, reback);
	
    return 0;	
}
