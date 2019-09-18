#include<bits/stdc++.h>
using namespace std; 

string s;
int n;

void vitripos()
{
	cout << "Moi ban nhap chuoi :  ";
	cin.ignore();
	getline(cin,s);
	cout << "Nhap vi tri pos : ";
	int pos;
	cin >> pos;
	for(int i = pos; i < s.size(); i++)
		cout << s[i];
	cout << endl;
}
void xoakhoangtrang()
{
	for(int i = 0; i < s.size(); i++){
		if(s[i] != ' ') cout << s[i];	
	}
	cout<<endl;
}
void chuongtrinhchuoi()
{
	cout << "In cac chu tu tren moi dong: " << endl;
	int maxx = 0, dem = 0;
	stringstream ss (s);
	string f;
	// su dung stringstream truyen vao buffer qua bien f, tu dong tach khoang trang
	while (ss >> f)
	{
		// Gan bien maxx bang ki tu co ki tu dai nhat
		maxx = f.size() > maxx ? f.size() : maxx;
		cout << f << endl;
		dem++;// Dem xem co bao tu
	}
	
	cout << "Co " << dem << " tu"<<endl;
	cout << "Tu co do dai lon nhat la: " << maxx << endl;
}

void vietbangchu()
{
	long long  n, x, f, e, d, c, b, a;
	cout << "Moi nhap so can doc: ";
	cin >> n;
	cout << n << " Doc la: "; 
	x = n;
	f = n%10; n /= 10;
	e = n%10; n /= 10;
	d = n%10; n /= 10;
	c = n%10; n /= 10;
	b = n%10;
	a = n/=10;
	switch(a)
	{
		case 1: cout << "mot tram "; break;
		case 2: cout << "hai tram "; break;
		case 3: cout << "ba tram "; break;
		case 4: cout << "bon tram "; break;
		case 5: cout << "nam tram "; break;
		case 6: cout << "sau tram "; break;
		case 7: cout << "bay tram "; break;
		case 8: cout << "tam tram "; break;
		case 9: cout << "chin tram "; break;
		case 0: break;
	}
	switch(b)
	{
		case 1: cout << "muoi "; break;
		case 2: cout << "hai muoi "; break;
		case 3: cout << "ba muoi "; break;
		case 4: cout << "bon muoi "; break;
		case 5: cout << "nam muoi "; break;
		case 6: cout << "sau muoi "; break;
		case 7: cout << "bay muoi "; break;
		case 8: cout << "tam muoi "; break;
		case 9: cout << "chin muoi "; break;
		case 0: if (x>100000 && c>0) cout << " le"; break;
	}
	switch(c)
	{
		case 1: cout << "mot nghin "; break;
		case 2: cout << "hai nghin "; break;
		case 3: cout << "ba nghin "; break;
		case 4: cout << "bon nghin "; break;
		case 5: if (b==0) cout << "nam nghin "; 
					else cout << "lam nghin "; break;
		case 6: cout << "sau nghin "; break;
		case 7: cout << "bay nghin "; break;
		case 8: cout << "tam nghin "; break;
		case 9: cout << "chin nghin "; break;
		case 0: if (x>10000) cout << "nghin "; break;
	}
	switch(d)
	{
		case 1: cout << "mot tram "; break;
		case 2: cout << "hai tram "; break;
		case 3: cout << "ba tram "; break;
		case 4: cout << "bon tram "; break;
		case 5: cout << "nam tram "; break;
		case 6: cout << "sau tram "; break;
		case 7: cout << "bay tram "; break;
		case 8: cout << "tam tram "; break;
		case 9: cout << "chin tram "; break;
		case 0: if (x>1000 && (f>0 || e>0)) cout << "khong tram "; break;
	}
	switch(e)
	{
		case 1: cout << "muoi "; break;
		case 2: cout << "hai muoi "; break;
		case 3: cout << "ba muoi "; break;
		case 4: cout << "bon muoi "; break;
		case 5: cout << "nam muoi "; break;
		case 6: cout << "sau muoi "; break;
		case 7: cout << "bay muoi "; break;
		case 8: cout << "tam muoi "; break;
		case 9: cout << "chin muoi "; break;
		case 0: if (x>100 && f>0) cout << "le "; break;
	}
	switch(f)
	{
		case 1: cout << "mot "; break;
		case 2: cout << "hai "; break;
		case 3: cout << "ba "; break;
		case 4: cout << "bon "; break;
		case 5: if (e==0) cout << "nam ";  else cout<<"lam "; break;
		case 6: cout << "sau "; break;
		case 7: cout << "bay "; break;
		case 8: cout << "tam "; break;
		case 9: cout << "chin "; break;
	}
	if (x==0) cout << "khong";
	
	cout << endl;
	
	return;
}

int main()
{

	
	int chon = 0;
	do
    {
        system("cls");
        cout<<"                    Nguyen Ngoc Minh - D18PM01 - 1824801030015          "<<endl;
		cout<<"\t------------------------------------------------------------------"<<endl;
        printf("\t\t ====================MENU========================\n");
        printf("\t\t |1. Vi tri pos                                 |\n");
        printf("\t\t |2. Xoa khoang trang                           |\n");
        printf("\t\t |3. Chuong trinh chuoi                         |\n");
        printf("\t\t |4. Xuat ho ,ten, ten dem                      |\n");
        printf("\t\t |5. Viet bang chu                              |\n");
        printf("\t\t |0. Thoat                                      |\n");
        printf("\t\t ================================================\n");
        printf("Ban chon: ");
        scanf("%d", &chon);
        switch(chon)
        {
            case 1:
                vitripos();
                system("pause");
                break;
            case 2:
                xoakhoangtrang();
                system("pause");
                break;
            case 3:
                chuongtrinhchuoi();
                system("pause");
                break;
            
            case 5:
                vietbangchu();
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
