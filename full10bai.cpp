#include<bits/stdc++.h>
using namespace std;

#define InSVtb(a,b,c,d,e,f) \
	cout << \
		left << setw(10) << a << left << setw(40) << b <<  right << setw(10) << c << right << setw(10) << d << right << setw(10) << e << right << setw(20) << f <<endl 
#define InSV(a,b,c,d) \
	cout << \
		left << setw(10) << a << left << setw(40) << b <<  right << setw(10) << c << right << setw(10) << d << endl 
#define InSearch(b,c,d) \
	cout << \
		left << setw(40) << b <<  right << setw(10) << c << right << setw(10) << d << endl
		
int n;
string s;

struct quanli {	
	string masoSV;
	string HoTen;
	int diemCS = 0;
	int diemCN = 0;
	float diemTB = 0;
};

struct qldiem {	
	string HoTen;
	int diemTin = 0;
	int diemNN = 0;
	float diemTB = 0;
};

bool sapxep (const qldiem a, const qldiem b)
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
		return "T.Binh";
	else if (diem >= 4)
		return "Yeu";
	else return "Kem";
}

 quanli sv[100];
void NhapDSsv(int &n, quanli sv[]){
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cout << "Nhap Ma Sinh Vien : ";
		cin >> sv[i].masoSV;
		cout << "Nhap Ho va Ten : ";
		cin.ignore();
		getline(cin,sv[i].HoTen);
		cout << "Nhap diem Co So : ";
		cin >> sv[i].diemCS;
		cout << "Nhap diem Chuyen Nghanh : ";
		cin >> sv[i].diemCN;
	}
}
 
 qldiem st[100];

void NhapDSpro(int &n, qldiem st[]){
	
	cout << " Nhap So luong SV : ";
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << "----Nhap thong tin SV---- "<< endl;
		cout<< "Ho va Ten : ";
		cin.ignore();
		getline(cin,st[i].HoTen);
		cout << "Diem Tin : ";
		cin >> st[i].diemTin;
		cout<< "Diem Ngoai ngu : ";
		cin >> st[i].diemNN;
		st[i].diemTB = (st[i].diemTin + st[i].diemNN) / 2.0;
	
 	}
}

void bai1(int &n, quanli sv[]){
	InSV("STT","Ho Ten","Diem CS","DiemCN");
	for(int i = 0; i < n; i++){
		if(sv[i].diemCN < 5 || sv[i].diemCS < 5){
	InSV(i+1,sv[i].HoTen,sv[i].diemCS,sv[i].diemCN);
		}	
	}		
}
 	

void bai2(int n , quanli sv[]){
	string search;
	cout << "Nhap Ma SV can tim : ";
	cin >> search;
	transform(search.begin(),search.end(),search.begin(), :: tolower);
	InSearch("Ho Ten","Diem CS","DiemCN");
	for(int i = 0; i < n; i++){
		if(sv[i].masoSV == search){
		InSearch(sv[i].HoTen,sv[i].diemCS,sv[i].diemCN);
		}	
	}
	
}

void bai3(int n , qldiem st[]){
	
	InSVtb("STT","Ho Ten","Diem Tin","DiemNN","DiemTB","Xep loai");
	for(int i = 0; i < n; i++){
		InSVtb(i+1,st[i].HoTen,st[i].diemTin,st[i].diemNN,st[i].diemTB,XepLoai(st[i].diemTB));
	}
}

void bai4(int n , qldiem st[]){
	int d = 0;
	for(int i = 0; i < n; i++){
		if(st[i].diemTin < 5 || st[i].diemNN < 5){
			d++;
		}
	cout << d;
	}
}

void bai5(int n , qldiem st[]){
	InSVtb("STT","Ho Ten","Diem Tin","DiemNN","DiemTB","Xep loai");
	for(int i = 0; i < n; i++){
		if(st[i].diemTB >= 8){
			InSVtb(i+1,st[i].HoTen,st[i].diemTin,st[i].diemNN,st[i].diemTB,XepLoai(st[i].diemTB));
		}
	}
}

void bai6(int n , qldiem st[]){
	InSVtb("STT","Ho Ten","Diem Tin","DiemNN","DiemTB","Xep loai");
	for(int i = 0; i < n; i++){
		if(st[i].diemTB >= 6.5 && st[i].diemTB <= 8){
			InSVtb(i+1,st[i].HoTen,st[i].diemTin,st[i].diemNN,st[i].diemTB,XepLoai(st[i].diemTB));
		}
	}
}
void bai7(int n , qldiem st[]){
	sort(st , st + n, sapxep);
	InSVtb("STT","Ho Ten","Diem Tin","DiemNN","DiemTB","Xep loai");
	for(int i = 0; i < n; i++){
			InSVtb(i+1,st[i].HoTen,st[i].diemTin,st[i].diemNN,st[i].diemTB,XepLoai(st[i].diemTB));
		}
}
		

int main() {
	
	int chon = 0;
	do
    {
        system("cls");
        cout<<"                    Nguyen Ngoc Minh - D18PM01 - 1824801030015          "<<endl;
		cout<<"\t------------------------------------------------------------------"<<endl;
        printf("\t\t ====================MENU========================\n");
        printf("\t\t |1.        Bai 1                               |\n");
        printf("\t\t |2.        Bai 2                               |\n");
        printf("\t\t |3.        Bai 3                               |\n");
        printf("\t\t |4.        Bai 4                               |\n");
        printf("\t\t |5.        Bai 5                               |\n");
        printf("\t\t |6.        Bai 6                               |\n");
    	printf("\t\t |7.        Bai 7                               |\n");
        printf("\t\t |0.        Thoat                               |\n");
        printf("\t\t ================================================\n");
        printf("Ban chon: ");
        scanf("%d", &chon);
        switch(chon)
        {
            case 1:
                NhapDSsv(n,sv);
                bai1(n,sv);
                system("pause");
                break;
            case 2:
                NhapDSsv(n,sv);
                bai2(n,sv);
                system("pause");
                break;
            case 3:
            	NhapDSpro(n,st);
                bai3(n,st);
                system("pause");
                break;
            case 4:
                NhapDSpro(n,st);
                bai4(n,st);
                system("pause");
                break; 
			case 5:
                NhapDSpro(n,st);
                bai5(n,st);
                system("pause");
                break; 
			case 6:
                NhapDSpro(n,st);
                bai6(n,st);
                system("pause");
                break;
			case 7:
                NhapDSpro(n,st);
                bai7(n,st);
                system("pause");
                break;  	
				   
            case 0:
                break;
            default:
                cout<<"Ban chon sai. Moi ban chon lai MENU!"<<endl;
                break;
        }
        
    }while(chon!=0);
	


    return 0;	
}




