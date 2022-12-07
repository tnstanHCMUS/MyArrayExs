#include"array.h"
int main()
{
	cout << "1-P01:Tim so chan lon nhat va so le nho nhat trong mang mot chieu\n"<<
		"2-P02:Tinh trung binh cong cua cac so chan co trong mang\n" << 
		"3-P04:Tim cac so nguyen to trong mang mot chieu\n"	<< 
		"4-P05:Sap xep so chan theo thu tu tang dan trong mang mot chieu\n" << 
		"5-P06:Kiem ra thu tu phan tu trong mang mot chieu\n"<<
		"6-P09:Dem cac phan tu khac nhau trong mang mot chieu\n"<<
		"7-P12:Tim phan tu lon thu hai trong mang mot chieu\n"<<
		"8-P15:In mang dao nguoc\n"<<
		"9-P25:Tron hai mang khong giam\n"<<
		"10-P26:Cac phan tu cung xuat hien tren hai mang\n"<<
		"0-EXIT PROGRAM\n";
	cout << "enter n: "; int n; cin >> n;
	while (n > 10 || n < 0) { cout << "try again"; cin >> n; }
		switch (n)
		{
		case 1: {Array1(); break; }
		case 2: {cout<< fixed << setprecision(2) << Array2(); break; }
		case 3: {Array3(); break; }
		case 4: {}
		case 5: {Array5(); break; }
		case 6: {cout << Array6(); break; }
		case 7: {cout << Array7(); break; }
		case 8: {Array8(); break; }
		case 9: {}
		case 10: {}
		default: {break;}
		}
		return 0;
}