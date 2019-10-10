#include<bits/stdc++.h>
using namespace std;

// tim kiem tuan tu
int LinearSearch(int arr[], int n, int x)
{
  	for(int i = 0; i < n; i++){
  		if(arr[i] == x ) return i;
	}
	return -1;
}

// tim kiem tuan tu cai tien
int SequentialSearchPro(int arr[], int x, int n){
	int k = 0;
	arr[n] = x; 
  	while (arr[k] != x)
    	k++;
  	if(k < n) return k;
	 return -1; 
}

//tim kiem nhi phan
int binarySearch(int arr[], int l, int r, int x) {
  	if (r >= l) {
    	int mid = l + (r - l) / 2;
    if (arr[mid] == x) return mid;
    if (arr[mid] > x) return binarySearch(arr, l, mid - 1, x);
    else return binarySearch(arr, mid + 1, r, x);
  }
  return -1;
}


// sap xep chon
void SelectSort(int arr[],int n){
	int i, j, min_idx;  
    for (i = 0; i < n-1; i++)  
    {  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;   
        swap(arr[min_idx], arr[i]);
    }
}

// sap xep chen
void InsertSort(int arr[], int n){
	int k,l;
	
	for(int i = 0; i < n; i++){
		k = i - 1;
		l = arr[i];
		while( k >= 0 && arr[i] > l ){
			arr[k+1] = arr[i];
			k -= 1;
		}
		arr[k + 1] = l;
	}
}

// sap xep doi cho
void InterchangeSort(int arr[],int n){
	for(int i = 0; i < n; i++){
		if(arr[i] >= arr[i+1]) 
			swap(arr[i], arr[i+1]);
	}
} 


// sap xep noi bot
void BubbleSort(int arr[], int n){
    bool reSwap = false;
    for (int i = 0; i < n-1; i++){
        reSwap = false;
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                reSwap = true;
            }
        }
        if(reSwap == false){
            break;
        }
    }
}


// sap xep tron
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
	                                  /* Code by Nguyen Ngoc Minh. All rights reserved */
void MergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
 
        MergeSort(arr, l, m);
        MergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}


// sap xep nhanh
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];  
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && arr[left] < pivot) left++; 
        while(right >= left && arr[right] > pivot) right--; 
        if (left >= right) break; 
        swap(arr[left], arr[right]); 
        left++; 
        right--; 
    }
    swap(arr[left], arr[high]);
    return left; 
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
	}
}

void printArr(int arr[],int n){
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}
int main(){
	
	int n, number[1000];
	cout << "Nhap so luong cac so : "; cin >> n;
	cout << "Nhap day so :";
	for(int i = 0; i < n; i++){
		cin >> number[i];
	}
	
	int x, kq;
	
	int chon = 0;
	do
    {
        system("cls");
        cout<<"                    Nguyen Ngoc Minh - D18PM01 - 1824801030015          "<<endl;
		cout<<"\t------------------------------------------------------------------"<<endl;
        printf("\t\t ====================MENU========================\n");
        printf("\t\t |1.  Tim kiem tuan tu               	        |\n");
        printf("\t\t |2.  Tim kiem tuan tu cai tien                 |\n");
        printf("\t\t |3.  Tim kiem nhi phan                         |\n");
        printf("\t\t |4.  Sap xep chon                              |\n");
        printf("\t\t |5.  Sap xep chen                              |\n");
        printf("\t\t |6.  Sap xep doi cho                           |\n");
        printf("\t\t |7.  Sap xep noi bot                           |\n");
    	printf("\t\t |8.  Sap xep tron                              |\n");
    	printf("\t\t |9.  Sap xep nhanh                             |\n");
        printf("\t\t |0.    Thoat                                   |\n");
        printf("\t\t ================================================\n");
        printf("Ban chon: ");
        scanf("%d", &chon);
        switch(chon)
        {
            case 1:
            	cout << "Nhap so can tim :";
            	cin >> x;
            	kq = LinearSearch(number, n, x);
            	if(kq == -1) cout << "Khong tim thay so can tim !" << endl;
            	else
            		cout << "Vi tri so cam tim la :" << kq + 1 << endl; 
                system("pause");
                break;
            case 2:
                cout << "Nhap so can tim :";
                cin >> x;
                kq = SequentialSearchPro(number, n, x);
                if(kq == -1) cout << "Khong tim thay so can tim !" << endl;
                else 
					cout << "Vi tri so cam tim la :" << kq + 1 << endl;
                system("pause");
                break;
            case 3:
            	cout << "Nhap so can tim :";
            	
                kq = binarySearch(number, 0, n-1, x );
                cout << "Vi tri so cam tim la :" << kq + 1 << endl;
                system("pause");
                break;
            case 4:
            	SelectSort(number,n);
               	cout << "Day so sau khi sap xep chon la :";
				printArr(number,n);
				cout << endl ;
               	
                system("pause");
                break; 
			case 5:
                InsertSort(number,n);
                cout << "Day so sau khi sap xep chon la :";
				printArr(number,n);
				cout << endl ;
                system("pause");
                break; 
			case 6:
                InterchangeSort(number,n);
                cout << "Day so sau khi sap xep chon la :";
				printArr(number,n);
				cout << endl ;
                system("pause");
                break;
			case 7:
                BubbleSort(number,n);
                cout << "Day so sau khi sap xep chon la :";
				printArr(number,n);
				cout << endl ;
                system("pause");
                break;  	
			case 8:
                MergeSort(number,0,n-1);
                cout << "Day so sau khi sap xep chon la :";
				printArr(number,n);
				cout << endl ;
                system("pause");
                break; 
			case 9:
                QuickSort(number,0,n-1);
                cout << "Day so sau khi sap xep chon la :";
				printArr(number,n);
				cout << endl ;
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

