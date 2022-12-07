#include"array.h"
void Input(int n, int a[maxlen])
{
	for (int i=0; i<n; i++)
	{
		cin >> a[i];
	}
}
//P01: Tim so chan lon nhat va so le nho nhat
// testcase 1
// input:
// output:
void Array1()
{
	int n, a[maxlen]; 
	cin >> n;
	Input(n, a);
	int MaxEven = a[0], MinOdd = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			if (a[i] > MaxEven) MaxEven = a[i];
		}
		else if (a[i] < MinOdd) MinOdd = a[i];
		
	}
	cout << MaxEven << " " << MinOdd;
}
//P02: Trung binh cong cua cac so chan
// testcase 1
// input:
// output:
float Array2()
{
	int n, a[maxlen]; cin >> n;
	float sum = 0, count = 0;
	Input(n, a);
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0) {
			sum += a[i]; count++;
		}
	}
	float x= sum / count;
	return x;
}
//P04: Tim cac so nguyen to co trong mang
// testcase 1
// input:
// output:
void Array3()
{
	int n, a[maxlen]; cin >> n;
	Input(n, a);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1) continue;
		else
		{
			int count = 0;
			for (int j = 2; j <= sqrt(a[i]); j++)
			{

				if (a[i] % j == 0) count++;
			}
			if (count == 0) cout << a[i]<<" ";
		}
		

	}
}

//P05: Xep cac so chan theo thu tu tang dan
// testcase 1
// input:
// output:
void Array4()
{

}
//P06: Xet tinh tang dan, giam dan cua mang
// testcase 1
// input:
// output:
void Array5()
{
	int n, a[1000], IncrFalse = 0, DecrFalse = 0;
	cin >> n;
	Input(n, a);
	for (int i = 1; i < n; i++)
	{
		int innercount = 0;
		for (int j = 0; j < i; j++)
		{
			if (a[i] <= a[j]) IncrFalse++;
			if (a[i] >= a[j]) DecrFalse++;
		}
	}
	if (IncrFalse != 0 && DecrFalse != 0) cout << "khong tang khong giam";
	else if (IncrFalse == 0) cout << "tang";
	else cout << "giam";

}
//P09: Dem cac phan tu khac nhau trong mang
// testcase 1
// input:
// output:
int Array6()
{
	int n, a[1000], count = 1;
	cin >> n;
	Input(n, a);
	for (int i = 1; i < n; i++)
	{
		int innercount = 0;
		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j]) innercount++;
		}
		if (innercount == 0) count++;
	}
	return count;
}
//P12: Tim phan tu lon thu hai cua mang
// testcase 1
// input:
// output:
int Array7()
{
	int n, a[maxlen]; cin >> n;
	Input(n, a);
	int max1 = a[0], max2=a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max1) { swap(max1, max2); max1 = a[i]; }
	}
	return max2;
}
//P15
// testcase 1
// input:
// output:
void Array8()
{
	int n; cin >> n;
	int a[maxlen];
	Input(n, a);
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}
}
//P25
// testcase 1
// input:
// output:
void Array9()
{

}
//P26
//testcase 1
// input:
// output:
void Array10()
{

}