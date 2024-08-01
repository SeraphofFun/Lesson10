#include <iostream>
using namespace std;
int main()
{
	/*int const size = 5;
	int myNum[size] = { 1,2,3,4,5 };
	for (unsigned int i = 0; i < size; i++)
	{
		cout << myNum[i]<<" ";
	}
	for (int i : myNum)
		cout << "You are ass;\n";*/

	cout << "tap1" << endl << endl;

	srand(time(NULL));
	
	int myNum[5] = {};
	for (unsigned int i = 0; i < 5; i++)
	{
		cin >> myNum[i];
	}
	for (int i = 4; i >= 0; i--)
	{
		cout << myNum[i]<<" ";
	}
	cout << endl;


	cout << "tap2" << endl << endl;

	int arr[20];
	int min = 0;
	int max = 100;
	for (int i = 0; i < 20; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr[i] = random;
	}
	for (int i = 0; i < 20; i+=2)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
	
	cout << "tap3" << endl << endl;



	int arr3[10] = {};
	min = -20;
	max = 20;
	
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr3[i] = random;
	}
	int mus=0;
	int say = 0;
	for (int i : arr3) {
		if (i > 0) {
			mus += i;
			say++;
		}
		cout << i << " ";

	}

	int edeort = mus / say;
	cout << "\nmusbet ededi orta = " << edeort;


	cout << endl;



	cout << "tap4" << endl << endl;

	int arr4[20] = {};
	min = -5;
	max = 5;

	for (int i = 0; i < 20; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr4[i] = random;
	}
	int sifir=0;
	int menf = 0;
	int musb = 0;
	for (int i : arr4) {
		if (i > 0) {
			musb++;
		}
		else if (i < 0) {
			menf++;
		}
		else
			sifir++;
		cout << i << " ";
	}
	cout << "\nMusbetlerin sayi " << musb << " menfilerin " << menf << " sifirlarin " << sifir;



	cout << endl;
	cout << "tap5" << endl << endl;




	int arr5[10] = {};
	min = 0;
	max = 100;

	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr5[i] = random;
	}
	int tek3 = 0;
	int cut3 = 0;
	int say3 = 0;
	for (int i = 0; i < 10; i++) {
		if (i%2==0)
		{
			cut3+=arr3[i];
		}
		else {
			tek3 += arr3[i];
			say3++;
		}
		cout << arr3[i] << " ";
	}
	int ededort3 = tek3 / say3;
	cout << "tek ededi orta = " << tek3 << "  cut ededlerin cemi =" << cut3;


	cout << endl;



	cout << "tap6" << endl << endl;



	char arrisare[10];
	min = 0;
	max = 255;
	int herf=0;
	int reqem=0;
	int punkt=0;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arrisare[i] = random;
	}

	for (char i: arrisare)
	{
		cout << i<<" ";
		if ((int)i >= 48 && (int)i <= 57)
			reqem++;
		else if (((int)i >= 65 && (int)i <= 90) || ((int)i >= 97 && (int)i <= 122))
			herf++;
		else
			punkt++;
	}
	cout << endl;
	cout << "reqemlerin sayi = " << reqem << endl << "hereflerin sayi" << herf << endl << "punktlarin sayi" << punkt<<endl;

	cout << "tap7" << endl << endl;





	int arr100[50];
	min = 0;
	max = 50;
	for (int i = 0; i < 50; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr100[i] = random;
	}
	int a;
	cin >> a;
	int saya=0;
	for (int i : arr100) {
		cout << i << " ";
		if (a == i)
			saya++;

	}
	cout <<endl<<"eyni ededlerin = "<< saya<<endl;



	cout << "tap8" << endl << endl;

	int arr357[10];
	min = 0;
	max = 100;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr357[i] = random;
	}
	int uce = 0;
	int yeddiye = 0;
	int bese = 0;
	for (int i: arr357)
	{
		if (i%3==0)
		{
			uce++;
		}
		if (i % 5 == 0)
			bese++;
		if (i%7==0)
		{
			yeddiye++;
		}
		cout << i << " ";

	}
	cout << endl << "uce bolunen" << uce << " bese bolunen" << bese << " yediyye " << yeddiye << endl;

	cout << "tap9" << endl << endl;

	int arr3x5[10];
	min = 0;
	max = 100;
	int ucebeseyox = 0;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr3x5[i] = random;
	}
	for (int i : arr357)
	{
		cout << i << " ";
		if (i % 3 == 0&&i%15!=0)
		{
			ucebeseyox++;
		}
	}
	cout << endl << "uce bolunur bese bolunmeyen = " << ucebeseyox;



	cout << "tap10" << endl << endl;


	int arry[10];
	min = -10;
	max = 30; 
	int inde = 0;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arry[i] = random;
	}
	for (int i : arry)
	{
		cout << i << " ";
	}
	for (int i : arry) {
		if (i < 0)
		{
			break;
		}
		inde++;
	}int top = 0;
	for (int i = inde+1; i < 10; i++)
	{
		top += arry[i];
	}
	cout << "toplam = " << top<<endl;


	cout << "tap11" << endl << endl;


	int arry2[10];
	min = -30;
	max = 20;
	int inde2 = 0;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arry2[i] = random;
	}
	for (int i : arry2)
	{
		cout << i << " ";
	}
	for (int i : arry2) {
		if (i > 0)
		{
			break;
		}
		inde2++;
	}
	int top2 = 0;
	for (int i = inde2+1; i < 10; i++)
	{
		top2 += arry2[i];
	}
	cout << "toplam = " << top2<<endl;

	cout << "tap12" << endl << endl;


	int arry3[10];
	min = -100;
	max = 100;
	int inde3 = 0;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arry3[i] = random;
	}
	for (int i : arry2)
	{
		cout << i << " ";
	}
	int maxi = arry3[0];
	int maxind = 0;
	int mini = arry3[0];
	int minid = 0;
	for (int i = 1; i < 10; i++)
	{
		if (maxi<arry3[i])
		{
			maxi = arry3[i];
			maxind = i;
		}
		if (mini > arry3[i])
		{
			mini = arry3[i];
			minid = i;
		}
		cout << arry3[i] << " ";

	}
	cout << endl << " maximum " << maxi << "maximum index" << maxind << " minimum " << mini << " minimum index" << minid;
}
