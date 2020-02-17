// Programming1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // English: for cout and cin | Malaysia: untuk cout dan cin
#include<iomanip> // English: to manipulate the output eg: setprecision(x) and fixed | Malaysia: untuk memanipulasi output cth: setprecision(x) dan fixed
#include<cmath> // English: for complex math calculation eg: pow and sqrt | Malaysia: untuk pengiraan matematik yang kompleks cth: pow dan sqrt
#include<cctype> // English: for tolower or toupper function | Malaysia: untuk tolower atau toupper
using namespace std;

void chapter2question1()
{
	cout << "Soalan 1: \n";
	cout << "   *   \n";
	cout << "  ***  \n";
	cout << " ***** \n";
	cout << "*******\n";
}

void chapter2question2v1()
{
	cout << "   *   \n";
}

void chapter2question2v2()
{
	cout << "  ***  \n";
}

void chapter2question2v3()
{
	cout << " ***** \n";
}

void chapter2question2v4()
{
	cout << "*******\n";
}

void chapter2question2()
{
	cout << "Soalan 2: \n";
	chapter2question2v1();
	chapter2question2v2();
	chapter2question2v3();
	chapter2question2v4();
	chapter2question2v3();
	chapter2question2v2();
	chapter2question2v1();
}

void chapter2question3()
{
	cout << "Soalan 3: \n";
	cout << "*********       ***         *          *    \n";
	cout << "*       *      *   *       ***        * *   \n";
	cout << "*       *     *     *     *****      *   *  \n";
	cout << "*       *     *     *       *       *     * \n";
	cout << "*       *     *     *       *      *       *\n";
	cout << "*       *     *     *       *       *     * \n";
	cout << "*       *     *     *       *        *   *  \n";
	cout << "*       *      *   *        *         * *   \n";
	cout << "*********       ***         *          *    \n";
}

void chapter2question4v1()
{
	cout << "* * * * * * * *  \n";
	cout << "  * * * * * * * *\n";
}

void chapter2question4()
{
	cout << "Soalan 4: \n";
	chapter2question4v1();
	chapter2question4v1();
	chapter2question4v1();
	chapter2question4v1();
}

void chapter2question5v1()
{
	cout << "*************************************\n";
}

void chapter2question5()
{
	cout << "Soalan 5: \n";
	chapter2question5v1();
	cout << "*      Tugasan Pengaturcaran 1      *\n";
	cout << "*      Pengaturcaraan Komputer 1    *\n";
	cout << "*      Pengarang: Muhammad Aiman    *\n";
	cout << "*    Tarikh akhir: Khamis, Nov. 22  *\n";
	chapter2question5v1();
}

void chapter2question6v1()
{
	cout << "*****************************\n";
}

void chapter2question6v2()
{
	cout << "=============================\n";
}

void chapter2question6()
{
	cout << "Soalan 6: \n";
	chapter2question6v1();
	chapter2question6v1();
	cout << "******* SELAMAT DATANG ******\n";
	chapter2question6v2();
	chapter2question6v2();
	cout << "********** KE FTMK **********\n";
	chapter2question6v1();
	chapter2question6v1();
}

void chapter2question7v1()
{
	cout << "CCCCCCCCC       ++                 ++      \n";
}

void chapter2question7v2()
{
	cout << "CC              ++                 ++      \n";
}

void chapter2question7v3()
{
	cout << "CC        ++++++++++++++     ++++++++++++++\n";
}

void chapter2question7()
{
	cout << "Soalan 7: \n";
	chapter2question7v1();
	chapter2question7v2();
	chapter2question7v3();
	chapter2question7v3();
	chapter2question7v2();
	chapter2question7v1();

}

void chapter2question8()
{
	cout << "Soalan 8: \n";
	cout << "Gred   ^                    \n";
	cout << "       |                    \n";
	cout << "A      | * * * *            \n";
	cout << "A-     | * * * * * *        \n";
	cout << "B+     | * *                \n";
	cout << "B      | * * * *            \n";
	cout << "       + ------------------>\n";
}

void chapter2question9v1()
{
	cout << "----------     ----------     --------------     --------\n";
}

void chapter2question9()
{
	cout << "Soalan 9: \n";
	cout << "                   Kedai Buku Pintar                  \n\n";
	chapter2question9v1();
	cout << " Kod Item       Kuantiti       Harga Seunit       Jumlah \n";
	chapter2question9v1();
	cout << " B007           7              RM9.00             RM63.00\n";
	cout << " B022           5              RM5.00             RM25.00\n";
	cout << " B028           3              RM6.50             RM19.50\n";
	cout << " B135           1              RM12.00            RM63.00\n";
	cout << " B206           2              RM9.50             RM19.00\n";
}

void chapter2()
{
	cout << "Bab 2 Pengaturcaraan Jujukan: Bahagian I\n";
	chapter2question1();
	cout << "\n";
	chapter2question2();
	cout << "\n";
	chapter2question3();
	cout << "\n";
	chapter2question4();
	cout << "\n";
	chapter2question5();
	cout << "\n";
	chapter2question6();
	cout << "\n";
	chapter2question7();
	cout << "\n";
	chapter2question8();
	cout << "\n";
	chapter2question9();
}

void Panjang1(int& panjang1)
{
	cout << "Masukkan panjang kiub: \t";
	cin >> panjang1;
}

void Lebar1(int& lebar1)
{
	cout << "Masukkan panjang kiub: \t";
	cin >> lebar1;
}

void Tinggi1(int& tinggi1)
{
	cout << "Masukkan tinggi kiub: \t";
	cin >> tinggi1;
}

void Isipadu1(int& isipadu1, int panjang1, int lebar1, int tinggi1)
{
	isipadu1 = panjang1 * lebar1 * tinggi1;
	cout << "Isipadu kiub adalah: \t" << isipadu1 << endl;
}

void chapter3question1()
{
	int panjang1, lebar1, tinggi1;
	int isipadu1;

	Panjang1(panjang1);
	Lebar1(lebar1);
	Tinggi1(tinggi1);
	Isipadu1(isipadu1, panjang1, lebar1, tinggi1);
}

void Pecahan1(int& numerator1, int& denominator1)
{
	cout << "Numerator 1: \t";
	cin >> numerator1;
	cout << "Denominator 1: \t";
	cin >> denominator1;
}

void Pecahan2(int& numerator2, int& denominator2)
{
	cout << "Numerator 2: \t";
	cin >> numerator2;
	cout << "Denominator 2: \t";
	cin >> denominator2;
}

void Darab1(int& darab1, int& darab2, float& bahagi1, int numerator1, int numerator2, int denominator1, int denominator2)
{
	darab1 = numerator1 * numerator2;
	darab2 = denominator1 * denominator2;
	bahagi1 = (float)darab1 / (float)darab2; //English: convert int values to float | Malaysia: menukar nilai int kepada float
	cout << numerator1 << "/" << denominator1 << " * " << numerator2 << "/" << denominator2 << " = " << darab1 << "/" << darab2 << " atau " << bahagi1 << endl;
}

void chapter3question2()
{
	int numerator1, numerator2, denominator1, denominator2;
	int darab1, darab2;
	float bahagi1;

	Pecahan1(numerator1, denominator1);
	Pecahan2(numerator2, denominator2);
	Darab1(darab1, darab2, bahagi1, numerator1, numerator2, denominator1, denominator2);
}

void Input1(int& input1)
{
	cout << "Sila masukkan nombor antara 1,000 hingga 1,000,000: \t";
	cin >> input1;
	while (input1 < 1000 || input1 > 1000000)
	{
		cout << "Input tidak sah. Sila masukkan nombor antara 1,000 hingga 1,000,000: \t";
		cin >> input1;
	}
}

void Output1(int& output1, int& output2, int input1)
{
	if (input1 == 1000000)
	{
		cout << "1,000,000" << endl;
	}
	else
	{
		output1 = input1 / 1000;
		output2 = input1 % 1000;
		if (output2 >= 0 && output2 < 10)
		{
			cout << output1 << ",00" << output2 << endl;
		}
		else if (output2 >= 10 && output2 < 100)
		{
			cout << output1 << ",0" << output2 << endl;
		}
		else
		{
			cout << output1 << "," << output2 << endl;
		}

	}
}

void chapter3question3()
{
	int input1;
	int output1, output2;

	Input1(input1);
	Output1(output1, output2, input1);
}

void HargaKos1(float& hargakos1)
{
	cout << "Masukkan harga kos barang:\tRM";
	cin >> hargakos1;
}

void HargaJualan1(float& hargajualan1, float hargakos1)
{
	hargajualan1 = hargakos1 + (3 * hargakos1 / 5);
	cout << "Harga Jualan adalah:\tRM" << setprecision(2) << fixed << hargajualan1 << endl; 
	//English: setprecision is a decimal precision to format floating-point values on output operations. fixed used for set the decimal point of a float value
	//Malaysia: setprecision ialah ketepatan perpuluhan untuk format nilai float dalam operasi output. fixed digunakan untuk menetapkan titik perpuluhan nilai float
}

void chapter3question4()
{
	float hargakos1;
	float hargajualan1;

	HargaKos1(hargakos1);
	HargaJualan1(hargajualan1, hargakos1);
}

void TriangleLength1(int& a1, int& b1, int& c1)
{
	cout << "a:\t";
	cin >> a1;
	cout << "b:\t";
	cin >> b1;
	cout << "c:\t";
	cin >> c1;
}

void S1(float& s1, int a1, int b1, int c1)
{
	s1 = ((float)a1 + (float)b1 + (float)c1) / 2;
	cout << "s:\t" << s1 << endl;
}

void TriangleArea1(float& trianglearea1, float s1, int a1, int b1, int c1)
{
	trianglearea1 = s1 * ((s1 - a1) * (s1 - b1) * (s1 - c1));
	cout << "Luas segitiga adalah:\t" << trianglearea1 << endl;
}

void chapter3question5()
{
	int a1, b1, c1;
	float s1, trianglearea1;

	TriangleLength1(a1, b1, c1);
	S1(s1, a1, b1, c1);
	TriangleArea1(trianglearea1, s1, a1, b1, c1);
}

void Input2(int& input2)
{
	cout << "Sila masukkan 4 digit nombor positif: \t";
	cin >> input2;
	while (input2 < 1000 || input2 > 9999)
	{
		cout << "Input tidak sah. Sila masukkan 4 digit nombor positif: \t";
		cin >> input2;
	}
}

void Output2(int& thousands2, int& hundreds2, int& tens2, int& ones2, int input2)
{
	thousands2 = input2 / 1000;
	hundreds2 = (input2 / 100) - (thousands2 * 10);
	tens2 = (input2 / 10) - (thousands2 * 100) - (hundreds2 * 10);
	ones2 = input2 - (thousands2 * 1000) - (hundreds2 * 100) - (tens2 * 10);
	cout << thousands2 << "\n" << hundreds2 << "\n" << tens2 << "\n" << ones2 << endl;
}

void chapter3question6()
{
	int input2;
	int thousands2, hundreds2, tens2, ones2;

	Input2(input2);
	Output2(thousands2, hundreds2, tens2, ones2, input2);
}

void JamBekerja1(int& jambekerja1)
{
	cout << "Sila masukkan jam bekerja: \t";
	cin >> jambekerja1;
}

void KiraUpah1(float& upah1, int jambekerja1)
{
	upah1 = (float)jambekerja1 * 8.35;
}

void PaparUpah1(float upah1)
{
	cout << "Jumlah upah bagi pekerja tersebut adalah: \t RM" << setprecision(2) << fixed << upah1 << endl;
}

void chapter3question7()
{
	int jambekerja1;
	float upah1;

	JamBekerja1(jambekerja1);
	KiraUpah1(upah1, jambekerja1);
	PaparUpah1(upah1);
}

void Gaji1(int& gaji1)
{
	cout << "Sila masukkan gaji pekerja: \tRM";
	cin >> gaji1;
}

void CarumandanBaki1(float& caruman1, float& baki1, int gaji1)
{
	caruman1 = (float)gaji1 * 0.11;
	baki1 = (float)gaji1 - caruman1;
	cout << "Nilai caruman KWSP: \tRM" << setprecision(2) << fixed << caruman1 << endl;
	cout << "Baki selepas caruman: \tRM" << setprecision(2) << fixed << baki1 << endl;
}

void chapter3question8()
{
	int gaji1;
	float caruman1, baki1;

	Gaji1(gaji1);
	CarumandanBaki1(caruman1, baki1, gaji1);
}

void funA1(double& a1, double& b1, double& c1)
{
	a1 = a1 * 2, b1 = b1 + a1 * c1;
	c1 = a1 - b1;
	cout << a1 << ' ' << b1 << ' ' << c1 << ' ' << '\n';
}

void chapter3question9a()
{
	double x1 = 7.0, y1 = 11.2, z1 = 17.5;
	funA1(x1, y1, z1);
	cout << x1 << ' ' << y1 << ' ' << z1 << ' ' << endl;
	z1 *= x1 + y1;
	cout << x1 << ' ' << y1 << ' ' << z1 << ' ' << endl;
}

void funB1(int x2, int& y2, int z2)
{
	x2 = pow(x2, 3);
	y2 = pow(y2, 2);
	z2 = sqrt(z2);
	//English: pow(x,y) is x^y. sqrt(x) is square root of x
	//Malaysia: pow(x,y) ialah x^y. sqrt(x) ialah punca kuasa dua bagi x
}

void chapter3question9b()
{
	int x2 = 2, y2 = 8, z2 = 6;
	funB1(x2, y2, z2);
	cout << x2 << ' ' << y2 << ' ' << z2 << ' ' << endl;
}

void chapter3question9()
{
	char question9choice1;

	do
	{
		cout << "Sila pilih 'a' untuk soalan 9a atau 'b' untuk soalan 9b: \t";
		cin >> question9choice1;
		if (question9choice1 == 'a')
		{
			cout << "\n";
			chapter3question9a();
			cout << "\n";
		}
		else if (question9choice1 == 'b')
		{
			cout << "\n";
			chapter3question9b();
			cout << "\n";
		}
	} while (question9choice1 == 'a' || question9choice1 == 'b');
}

void chapter3()
{
	int questionchoice1;

	do
	{
		cout << "Bab 3 Pengaturcaraan Jujukan: Bahagian II\n";
		cout << "Sila tekan nombor 1 hingga 9 untuk melihat output soalan, atau nombor lain untuk keluar dari Bab ini: \t";
		cin >> questionchoice1;
		if (questionchoice1 == 1)
		{
			cout << "\n";
			chapter3question1();
			cout << "\n";
		}
		else if (questionchoice1 == 2)
		{
			cout << "\n";
			chapter3question2();
			cout << "\n";
		}
		else if (questionchoice1 == 3)
		{
			cout << "\n";
			chapter3question3();
			cout << "\n";
		}
		else if (questionchoice1 == 4)
		{
			cout << "\n";
			chapter3question4();
			cout << "\n";
		}
		else if (questionchoice1 == 5)
		{
			cout << "\n";
			chapter3question5();
			cout << "\n";
		}
		else if (questionchoice1 == 6)
		{
			cout << "\n";
			chapter3question6();
			cout << "\n";
		}
		else if (questionchoice1 == 7)
		{
			cout << "\n";
			chapter3question7();
			cout << "\n";
		}
		else if (questionchoice1 == 8)
		{
			cout << "\n";
			chapter3question8();
			cout << "\n";
		}
		else if (questionchoice1 == 9)
		{
			cout << "\n";
			chapter3question9();
			cout << "\n";
		}
	} while (questionchoice1 >= 1 && questionchoice1 <= 9);
}


void chapter4question1()
{
	int shapechoice1;

	cout << "1 - Piramid\n";
	cout << "2 - bujur\n";
	cout << "3 - Segi Empat Tepat\n";
	cout << "4 - Bulatan\n";
	cout << "5 - Rombus\n";
	cout << "\n Sila pilih bentuk yang ingin dipaparkan: \t";
	cin >> shapechoice1;

	if (shapechoice1 == 1)
	{
		cout << "    *\n";
		cout << "   * *\n";
		cout << "  *   *\n";
		cout << " *     *\n";
		cout << "*********\n";
	}
	else if (shapechoice1 == 2)
	{
		cout << "  ***\n";
		cout << " *   *\n";
		cout << "*     *\n"; 
		cout << " *   *\n";
		cout << "  ***\n";
	}
	else if (shapechoice1 == 3)
	{
		cout << "**********\n";
		cout << "*        *\n";
		cout << "*        *\n";
		cout << "*        *\n";
		cout << "**********\n";
	}
	else if (shapechoice1 == 4)
	{
		cout << "  *\n";
		cout << " * *\n";
		cout << "*   *\n";
		cout << " * *\n";
		cout << "  *\n";
	}
	else if (shapechoice1 == 5)
	{
		cout << "    *****\n";
		cout << "   *   *\n";
		cout << "  *   *\n";
		cout << " *   *\n";
		cout << "*****\n";
	}
	else
	{
		cout << "Input tidak sah" << endl << endl;
		chapter4question1();
	}
}

/*
void chapter4question1()
{
	int shapechoice1;

	cout << "1 - Piramid\n";
	cout << "2 - bujur\n";
	cout << "3 - Segi Empat Tepat\n";
	cout << "4 - Bulatan\n";
	cout << "5 - Rombus\n";
	cout << "\n Sila pilih bentuk yang ingin dipaparkan: \t";
	cin >> shapechoice1;

	switch (shapechoice1)
	{
	case 1:
		cout << "    *\n";
		cout << "   * *\n";
		cout << "  *   *\n";
		cout << " *     *\n";
		cout << "*********\n";
		break;

	case 2:
		cout << "  ***\n";
		cout << " *   *\n";
		cout << "*     *\n";
		cout << " *   *\n";
		cout << "  ***\n";
		break;

	case 3:
		cout << "**********\n";
		cout << "*        *\n";
		cout << "*        *\n";
		cout << "*        *\n";
		cout << "**********\n";
		break;

	case 4:
		cout << "  *\n";
		cout << " * *\n";
		cout << "*   *\n";
		cout << " * *\n";
		cout << "  *\n";
		break;

	case 5:
		cout << "    *****\n";
		cout << "   *   *\n";
		cout << "  *   *\n";
		cout << " *   *\n";
		cout << "*****\n";
		break;

	default:
		cout << "Input tidak sah" << endl << endl;
		chapter4question1();
	}
}
*/

//English: Please comment one of the same function when testing the different body to avoid errors during debugging.
//Malaysia: Sila letak tanda komen pada salah satu function yang sama apabila mencuba badan lain untuk mengelakkan ralat ketika debugging

void Input3(int& input3, int& input4)
{
	cout << "Sila masukkan nombor pertama: \t";
	cin >> input3;
	cout << "Sila masukkan nombor kedua: \t";
	cin >> input4;
}

void Calculation1(int& calculation1, int input3, int input4)
{
	if (input3 >= input4)
	{
		calculation1 = input3 - input4;
		cout << "Hasil tolak nombor adalah: \t" << input3 << " - " << input4 << " = " << calculation1 << endl;
	}
	else
	{
		calculation1 = input3 + input4;
		cout << "Hasil tambah nombor adalah: \t" << input3 << " + " << input4 << " = " << calculation1 << endl;
	}
}

void chapter4question2()
{
	int input3, input4;
	int calculation1;

	Input3(input3, input4);
	Calculation1(calculation1, input3, input4);
}

void Batu1(int& batumula1, int& batuakhir1)
{
	cout << "Sila masukkan permulaan perbatuan: \t";
	cin >> batumula1;
	cout << "Sila masukkan pengakhiran perbatuan: \t";
	cin >> batuakhir1;
	if (batumula1 >= batuakhir1)
	{
		cout << "Input tidak sah." << endl << endl;
		Batu1(batumula1, batuakhir1);
	}
}

void Gelen1(float& gelen1)
{
	cout << "Sila masukkan jumlah penggunaan bahan api: \t";
	cin >> gelen1;
}

void Output3(int& jumlahperjalanan1, float& jumlahgelen1, int batumula1, int batuakhir1, float gelen1)
{
	jumlahperjalanan1 = batuakhir1 - batumula1;
	jumlahgelen1 = (float)jumlahperjalanan1 / gelen1;
	cout << "Jumlah perjalanan ialah: \t" << jumlahperjalanan1 << " batu" << endl;
	cout << "Penggunaan bahan api dalam batu per gelen ialah: \t" << jumlahgelen1 << endl;
}

void chapter4question3()
{
	int batumula1, batuakhir1;
	float gelen1;
	int jumlahperjalanan1;
	float jumlahgelen1;

	Batu1(batumula1, batuakhir1);
	Gelen1(gelen1);
	Output3(jumlahperjalanan1, jumlahgelen1, batumula1, batuakhir1, gelen1);
}

void JamBekerja2(int& jambekerja2)
{
	cout << "Sila masukkan jam bekerja: \t";
	cin >> jambekerja2;
}

void KiraUpah2v1(float& upah2, int jambekerja2)
{
	upah2 = (float)jambekerja2 * 13.75;
}

void KiraUpah2v2(float& upah2, int jambekerja2)
{
	upah2 = 40 * 13.75 + ((float)jambekerja2 - 40) * 25.85;
}

void PaparUpah2(float upah2)
{
	cout << "Jumlah upah ialah: \tRM" << setprecision(2) << fixed << upah2 << endl;
}

void chapter4question4()
{
	int jambekerja2;
	float upah2;

	JamBekerja2(jambekerja2);
	if (jambekerja2 > 40)
	{
		KiraUpah2v2(upah2, jambekerja2);
	}
	else
	{
		KiraUpah2v1(upah2, jambekerja2);
	}
	PaparUpah2(upah2);
}

void Gaji2(int& gaji2)
{
	cout << "Sila masukkan gaji pekerja: \tRM";
	cin >> gaji2;
}

void Nilaicaruman1(int& nilaicaruman1)
{
	cout << "Sila masukkan nilai caruman (antara 9 hingga 11): \t";
	cin >> nilaicaruman1;
	if (nilaicaruman1 < 9 || nilaicaruman1 > 11)
	{
	cout << "Nilai caruman tidak sah" << endl;
	Nilaicaruman1(nilaicaruman1);
	}
}

void CarumandanBaki2(float& caruman2, float& baki2, int gaji2,int nilaicaruman1)
{
	if (nilaicaruman1 == 9)
	{
		caruman2 = (float)gaji2 * 0.09;
	}
	else if (nilaicaruman1 == 10)
	{
		caruman2 = (float)gaji2 * 0.1;
	}
	else if (nilaicaruman1 == 11)
	{
		caruman2 = (float)gaji2 * 0.11;
	}
	baki2 = (float)gaji2 - caruman2;
}

void PaparCarumandanBaki2(float caruman2, float baki2)
{
	cout << "Nilai caruman KWSP: \tRM" << setprecision(2) << fixed << caruman2 << endl;
	cout << "Baki selepas caruman: \tRM" << setprecision(2) << fixed << baki2 << endl;
}

void chapter4question5()
{
	int gaji2, nilaicaruman1;
	float caruman2, baki2;

	Gaji2(gaji2);
	Nilaicaruman1(nilaicaruman1);
	CarumandanBaki2(caruman2, baki2, gaji2, nilaicaruman1);
	PaparCarumandanBaki2(caruman2, baki2);
}

void chapter4question6()
{
	int a2 = 100;

	if (a2 == 100)
	{
		cout << "a == 100 adalah benar" << endl;
	}
	else
	{
		cout << "a == 100 adalah palsu" << endl;
	}

	if (a2 > 100)
	{
		cout << "a > 100 adalah benar" << endl;
	}
	else
	{
		cout << "a > 100 adalah palsu" << endl;
	}
	if (!a2)
	{
		cout << "!a adalah benar" << endl;
	}
	else
	{
		cout << "!a adalah palsu" << endl;
	}

	cout << endl;

	if (a2 == 100 || a2 > 100)
	{
		cout << "a == 100 || a > 100 adalah benar" << endl;
	}
	else
	{
		cout << "a == 100 || a > 100 adalah palsu" << endl;
	}

	if (a2 == 100 && a2 > 100)
	{
		cout << "a == 100 && a > 100 adalah benar" << endl;
	}
	else
	{
		cout << "a == 100 && a > 100 adalah palsu" << endl;
	}

	if (a2 > 100 || !a2)
	{
		cout << "a > 100 || !a adalah benar" << endl;
	}
	else
	{
		cout << "a > 100 || !a adalah palsu" << endl;
	}

	if (a2 > 100 && !a2)
	{
		cout << "a > 100 && !a adalah benar" << endl;
	}
	else
	{
		cout << "a > 100 && !a adalah palsu" << endl;
	}

	cout << endl;

	if (a2 == 100 || a2 > 100 && !a2)
	{
		cout << "a) a == 100 || a > 100 && !a adalah benar" << endl;
	}
	else
	{
		cout << "a) a == 100 || a > 100 && !a adalah palsu" << endl;
	}

	if (a2 == 100 && a2 > 100 && !a2)
	{
		cout << "b) a == 100 ** a > 100 && !a adalah benar" << endl;
	}
	else
	{
		cout << "b) a == 100 && a > 100 && !a adalah palsu" << endl;
	}

	if (a2 == 100 && a2 > 100 || !a2)
	{
		cout << "c) a == 100 && a > 100 || !a adalah benar" << endl;
	}
	else
	{
		cout << "c) a == 100 && a > 100 || !a adalah palsu" << endl;
	}

	if (a2 == 100 || a2 > 100 || !a2)
	{
		cout << "d) a == 100 || a > 100 || !a adalah benar" << endl;
	}
	else
	{
		cout << "d) a == 100 || a > 100 || !a adalah palsu" << endl;
	}
}

void chapter4()
{
	int questionchoice2;

	do
	{
		cout << "Bab 4 Pengaturcaraan Pilihan: if, if...else, if else if...else, nested if dan switch\n";
		cout << "Sila tekan nombor 1 hingga 6 untuk melihat output soalan, atau nombor lain untuk keluar dari Bab ini: \t";
		cin >> questionchoice2;
		if (questionchoice2 == 1)
		{
			cout << "\n";
			chapter4question1();
			cout << "\n";
		}
		else if (questionchoice2 == 2)
		{
			cout << "\n";
			chapter4question2();
			cout << "\n";
		}
		else if (questionchoice2 == 3)
		{
			cout << "\n";
			chapter4question3();
			cout << "\n";
		}
		else if (questionchoice2 == 4)
		{
			cout << "\n";
			chapter4question4();
			cout << "\n";
		}
		else if (questionchoice2 == 5)
		{
			cout << "\n";
			chapter4question5();
			cout << "\n";
		}
		else if (questionchoice2 == 6)
		{
			cout << "\n";
			chapter4question6();
			cout << "\n";
		}
	} while (questionchoice2 >= 1 && questionchoice2 <= 6);
}

void chapter5question1()
{
	float yuran1 = 2700;

	for (int i1 = 0; i1 < 5; i1++)
	{
		cout << "Yuran tahun " << i1 + 1 << ": \tRM" << setprecision(2) << fixed << yuran1 << endl;
		yuran1 += yuran1 * 0.02;
	}
}

void chapter5question2v1(double& input5, double& input6, double& calculation2, char& operation1)
{
	cout << "Sila masukkan nombor pertama: \t";
	cin >> input5;
	cout << "Sila masukkan nombor kedua: \t";
	cin >> input6;
	cout << "Sila masukkan operasi (+, -, *, /): \t";
	cin >> operation1;

	if (operation1 == '+')
	{
		calculation2 = input5 + input6;
		cout << input5 << " " << operation1 << " " << input6 << " = " << calculation2 << endl;
	}
	else if (operation1 == '-')
	{
		calculation2 = input5 - input6;
		cout << input5 << " " << operation1 << " " << input6 << " = " << calculation2 << endl;
	}
	else if (operation1 == '*')
	{
		calculation2 = input5 * input6;
		cout << input5 << " " << operation1 << " " << input6 << " = " << calculation2 << endl;
	}
	else if (operation1 == '/')
	{
		calculation2 = input5 / input6;
		cout << input5 << " " << operation1 << " " << input6 << " = " << calculation2 << endl;
	}
	else
	{
		cout << "Input tidak sah" << endl << endl;
		chapter5question2v1(input5, input6, calculation2, operation1);
	}
}

void chapter5question2()
{
	double input5, input6;
	char operation1;
	double calculation2;
	int choice1;

	chapter5question2v1(input5, input6, calculation2, operation1);
	cout << "\n";
	cout << "Adakah anda ingin mencuba sekali lagi? Tekan 1 untuk cuba semula, atau input lain untuk keluar: \t";
	cin >> choice1;
	while (choice1 == 1)
	{
		cout << "\n";
		chapter5question2v1(input5, input6, calculation2, operation1);
		cout << "\n";
		cout << "Adakah anda ingin mencuba sekali lagi? Tekan 1 untuk cuba semula, atau input lain untuk keluar: \t";
		cin >> choice1;
	}
}

void JamBekerja3(int& jambekerja3)
{
	cout << "Sila masukkan jam bekerja: \t";
	cin >> jambekerja3;
}

void KiraUpah3(float& upah3, int jambekerja3)
{
	upah3 = (float)jambekerja3 * 8.35;
}

void PaparUpah3(float upah3)
{
	cout << "Jumlah upah ialah: \tRM" << setprecision(2) << fixed << upah3 << endl;
}

void chapter5question3v1()
{
	int jambekerja3;
	float upah3;

	JamBekerja3(jambekerja3);
	KiraUpah3(upah3, jambekerja3);
	PaparUpah3(upah3);
}

void chapter5question3()
{
	int choice2;

	do
	{
		chapter5question3v1();
		cout << "\n";
		cout << "Adakah anda ingin mencuba sekali lagi? Tekan 1 untuk cuba semula, atau input lain untuk keluar: \t";
		cin >> choice2;
	} while (choice2 == 1);
}

void Gaji3(int& gaji3)
{
	cout << "Sila masukkan gaji pekerja: \tRM";
	cin >> gaji3;
}

void Nilaicaruman2(int& nilaicaruman2)
{
	cout << "Sila masukkan nilai caruman (antara 9 hingga 11): \t";
	cin >> nilaicaruman2;
	if (nilaicaruman2 < 9 || nilaicaruman2 > 11)
	{
		cout << "Nilai caruman tidak sah" << endl;
		Nilaicaruman1(nilaicaruman2);
	}
}

void CarumandanBaki3(float& caruman3, float& baki3, int gaji3, int nilaicaruman2)
{
	if (nilaicaruman2 == 9)
	{
		caruman3 = (float)gaji3 * 0.09;
	}
	else if (nilaicaruman2 == 10)
	{
		caruman3 = (float)gaji3 * 0.1;
	}
	else if (nilaicaruman2 == 11)
	{
		caruman3 = (float)gaji3 * 0.11;
	}
	baki3 = (float)gaji3 - caruman3;
}

void PaparCarumandanBaki3(float caruman3, float baki3)
{
	cout << "Nilai caruman KWSP: \tRM" << setprecision(2) << fixed << caruman3 << endl;
	cout << "Baki selepas caruman: \tRM" << setprecision(2) << fixed << baki3 << endl;
}

void chapter5question4()
{
	int gaji2, nilaicaruman1;
	float caruman2, baki2;
	int choice3;

	do
	{
		Gaji2(gaji2);
		Nilaicaruman1(nilaicaruman1);
		CarumandanBaki2(caruman2, baki2, gaji2, nilaicaruman1);
		PaparCarumandanBaki2(caruman2, baki2);
		cout << "\n";
		cout << "Adakah anda ingin mencuba sekali lagi? Tekan 1 untuk cuba semula, atau input lain untuk keluar: \t";
		cin >> choice3;
	} while (choice3 == 1);
}

void chapter5question5a()
{
	int x3 = 12, y3 = 4, nom1 = 0;
	cout << "Hello!" << endl << endl;

	while (nom1 < 3)
	{
		cout << x3 << y3;
		++nom1;
		y3--;
	}

	do
	{
		cout << "Pengaturcaraan menyeronokkan!";
	} while (nom1 > 3);
}

void chapter5question5b()
{
	int a3 = 7, b2 = 9;

	while (a3 < b2)
	{
		cout << "\nBiru";
		++a3;
	}

	do
	{
		cout << "\nMerah";
		++a3;
	} while (a3 < 8);
	cout << "\n Tamat";
}

void chapter5question5()
{
	char question5choice1;

	do
	{
		cout << "Sila pilih 'a' untuk soalan 5a atau 'b' untuk soalan 5b: \t";
		cin >> question5choice1;
		if (question5choice1 == 'a')
		{
			cout << "\n";
			chapter5question5a();
			cout << endl << endl;
		}
		else if (question5choice1 == 'b')
		{
			cout << "\n";
			chapter5question5b();
			cout << endl << endl;
		}
	} while (question5choice1 == 'a' || question5choice1 == 'b');
}

void chapter5question6()
{
	int x4;

	/*English:for Loop | Malaysia: Gelung for*/
	for (x4 = 25; x4 < 0; x4 /= 5)
	{
		cout << x4 << " ";
	}
	cout << endl;

	/*English: while Loop | Malaysia: Gelung while*/
	while (x4 < 0)
	{
		cout << x4 << " ";
		x4 /= 5;
	}
	cout << endl;

	/*English: do while Loop | Malaysia: Gelung do while*/
	do
	{
		if (x4 < 0)
		{
			cout << x4 << " ";
			x4 /= 5;
		}
	} while (x4 < 0);
}

void chapter5()
{
	int questionchoice3;

	do
	{
		cout << "Bab 5 Pengaturcaraan Pengulangan: Gelung for, while, do while dan gelung nested\n";
		cout << "NOTA: SOALAN 5 TIADA DALAM SISTEM INI. SOALAN 6 DAN 7 DIJADIKAN OUTPUT 5 DAN 6\n";
		cout << "Sila tekan nombor 1 hingga 6 untuk melihat output soalan, atau nombor lain untuk keluar dari Bab ini: \t";
		cin >> questionchoice3;
		if (questionchoice3 == 1)
		{
			cout << "\n";
			chapter5question1();
			cout << "\n";
		}
		else if (questionchoice3 == 2)
		{
			cout << "\n";
			chapter5question2();
			cout << "\n";
		}
		else if (questionchoice3 == 3)
		{
			cout << "\n";
			chapter5question3();
			cout << "\n";
		}
		else if (questionchoice3 == 4)
		{
			cout << "\n";
			chapter5question4();
			cout << "\n";
		}
		else if (questionchoice3 == 5)
		{
			cout << "\n";
			chapter5question5();
			cout << "\n";
		}
		else if (questionchoice3 == 6)
		{
			cout << "\n";
			chapter5question6();
			cout << "\n";
		}
	} while (questionchoice3 >= 1 && questionchoice3 <= 6);
}

void chapter6question1()
{
	const int size1 = 20; //English: setting a constant integers, so value cannot be changed | Malaysia: menetapkan nilai, maka nilai tersebut tidak boleh diubah
	int input7[size1];
	int smallest1, biggest1, average1 = 0;

	cout << "Sila masukkan 20 nilai integer: \n\n";
	for (int i2 = 0; i2 < size1; i2++)
	{
		cout << "Nilai #" << i2 + 1 << ": \t";
		cin >> input7[i2];
	}

	cout << endl;

	for (int j1 = 0; j1 < size1; j1++)
	{
		if (j1 == 0)
		{
			smallest1 = input7[j1];
			biggest1 = input7[j1];
		}
		else
		{
			if (input7[j1] < smallest1)
			{
				smallest1 = input7[j1];
			}
			else if(input7[j1] > biggest1)
			{
				biggest1 = input7[j1];
			}
		}
		average1 += input7[j1];
	}
	
	average1 /= size1;

	cout << "Nombor terkecil: " << smallest1 << endl;
	cout << "Nombor terbesar: " << biggest1 << endl;
	cout << "Purata: " << average1 << endl;
}

void chapter6question2v1()
{
	char shapechoice2[20]; //English: Can insert multiple characters in 1 input depending on limit | Malaysia: Boleh masukkan pelbagai aksara dalam 1 input bergantung kepada had
	int jejari1, panjang2, lebar2, tinggi2, tapak1;
	double pi1 = 3.1415926535897;
	double area1;

	cout << "Sila masukkan bentuk: \t";
	cin >> shapechoice2;
	cout << endl;

	for (int i3 = 0; i3 < strlen(shapechoice2); i3++)
	{
		//English: strlen counts how many character in a string | Malaysia: strlen mengira berapa banyak aksara dalam 1 string
		shapechoice2[i3] = tolower(shapechoice2[i3]); 
		//English: Convert uppercase letters to lowercase letters | Malaysia: Menukarkan aksara besar kepada aksara kecil
	}

	if (strcmp(shapechoice2, "bulatan") == 0)
	{
		//English: strcmp compares two strings for identify whether it is identical
		//Malaysia: strcmp membandingkan dua string untuk semak samada ia serupa
		cout << "Sila masukkan ukuran jejari(cm): \t";
		cin >> jejari1;
		area1 = pow((double)jejari1, 2) * pi1;
		cout << "Luas bentuk bulatan (cm2): \t" << area1 << endl << endl;
	}
	else if (strcmp(shapechoice2, "segiempat") == 0)
	{
		cout << "Sila masukkan ukuran panjang(cm): \t";
		cin >> panjang2;
		area1 = pow((double)panjang2, 2);
		cout << "Luas bentuk segiempat (cm2): \t" << area1 << endl << endl;
	}
	else if (strcmp(shapechoice2, "segiempattepat") == 0)
	{
		cout << "Sila masukkan ukuran panjang(cm): \t";
		cin >> panjang2;
		cout << "Sila masukkan ukuran lebar(cm): \t";
		cin >> lebar2;
		area1 = panjang2 * lebar2;
		cout << "Luas bentuk segiempattepat (cm2): \t" << area1 << endl << endl;
	}
	else if (strcmp(shapechoice2, "segitiga") == 0)
	{
		cout << "Sila masukkan ukuran tapak(cm): \t";
		cin >> tapak1;
		cout << "Sila masukkan ukuran tinggi(cm): \t";
		cin >> tinggi2;
		area1 = tapak1 * tinggi2 / 2;
		cout << "Luas bentuk segitiga (cm2): \t" << area1 << endl << endl;
	}
	else
	{
		cout << "Input tidak sah." << endl << endl;
	}
}

void chapter6question2v2()
{
	char choice3[10];

	cout << "Teruskan(Ya atau Tidak): \t";
	cin >> choice3;

	cout << endl;

	for (int i4 = 0; i4 < strlen(choice3); i4++)
	{
		choice3[i4] = tolower(choice3[i4]);
	}

	if (strcmp(choice3, "ya") == 0)
	{
		chapter6question2v1();
		chapter6question2v2();
	}
	else if (strcmp(choice3, "tidak") < 0 || strcmp(choice3, "tidak") > 0)
	{
		cout << "Input tidak sah." << endl << endl;
		chapter6question2v2();
	}
}

void chapter6question2()
{
	chapter6question2v1();
	chapter6question2v2();
}

void pglPurata1(int(&input8)[10])
{
	cout << "Sila masukkan 10 nombor: \n\n";
	for (int i5 = 0; i5 < 10; i5++)
	{
		cout << "Nombor " << i5 + 1 << ": \t";
		cin >> input8[i5];
	}
}

void pglBawahPurata1(int& average2, int input8[10])
{
	average2 = 0;
	for (int i6 = 0; i6 < 10; i6++)
	{
		average2 += input8[i6];
	}

	average2 /= 10;

	cout << "Purata: \t" << average2 << endl;
	cout << "Elemen bawah purata: \t";

	for (int j2 = 0; j2 < 10; j2++)
	{
		if (average2 > input8[j2])
		{
			cout << input8[j2] << " ";
		}
	}

	cout << endl;
}

void chapter6question3()
{
	int input8[10];
	int average2;

	pglPurata1(input8);
	cout << endl;
	pglBawahPurata1(average2, input8);
}

void chapter6question4a()
{
	int i6, j3 = 0;
	int tatasusunanA1[3] = { 0 }, tatasusunanB1[10] = { 2,3,1,2,2,3,1,2,1,3 };

	for (i6 = 0; i6 < 10; i6++)
	{
		if (tatasusunanB1[i6] == 1)
		{
			tatasusunanA1[0]++;
		}
		else if(tatasusunanB1[i6] == 2)
		{
			tatasusunanA1[1]++;
		}
		else if (tatasusunanB1[i6] == 3)
		{
			tatasusunanA1[2]++;
		}

		j3 += tatasusunanB1[i6];
	}

	cout << tatasusunanA1[0] << " " << tatasusunanA1[1] << " " << tatasusunanA1[2] << endl;
}

void chapter6question4b()
{
	char nom1[15] = "Aturcara";
	char nom2[5] = "C++";
	char nom3[30];
	int i7;
	strcpy_s(nom3, nom1); //English: strcpy_s copy the string from source to destination | Malaysia: strcpy_s menekap string dari punca ke destinasi
	i7 = strlen(nom3);

	cout << nom3 << " " << i7 << "\n\n";
	strcat_s(nom3, nom2); //English: strcat_s concats two strings | Malaysia: strcat_s menggabung dua string
	i7 = strlen(nom3);

	cout << nom3 << " " << i7 << endl;
}

void chapter6question4c()
{
	char nom4[] = "Siapakah nama anda?";

	int i8, j4;

	i8 = strlen(nom4);

	for (j4 = 0; j4 < 1; j4++)
	{
		if (nom4[j4] != ' ')
		{
			cout << nom4[j4];
		}
		else
		{
			cout << endl;
		}
	}
}

void chapter6question4()
{
	char question4choice1;

	do
	{
		cout << "Sila pilih 'a' untuk soalan 4a, 'b' untuk soalan 4b, atau 'c' untuk soalan 4c: \t";
		cin >> question4choice1;
		if (question4choice1 == 'a')
		{
			cout << "\n";
			chapter6question4a();
			cout << endl << endl;
		}
		else if (question4choice1 == 'b')
		{
			cout << "\n";
			chapter6question4b();
			cout << endl << endl;
		}
		else if (question4choice1 == 'c')
		{
			cout << "\n";
			chapter6question4c();
			cout << endl << endl;
		}
	} while (question4choice1 == 'a' || question4choice1 == 'b');
}


void chapter6()
{
	int questionchoice4;

	do
	{
		cout << "Bab 6 Tatasusunan\n";
		cout << "NOTA: SOALAN 4 TIADA DALAM SISTEM INI. SOALAN 5 DIJADIKAN OUTPUT 4\n";
		cout << "Sila tekan nombor 1 hingga 4 untuk melihat output soalan, atau nombor lain untuk keluar dari Bab ini: \t";
		cin >> questionchoice4;
		if (questionchoice4 == 1)
		{
			cout << "\n";
			chapter6question1();
			cout << "\n";
		}
		else if (questionchoice4 == 2)
		{
			cout << "\n";
			chapter6question2();
			cout << "\n";
		}
		else if (questionchoice4 == 3)
		{
			cout << "\n";
			chapter6question3();
			cout << "\n";
		}
		else if (questionchoice4 == 4)
		{
			cout << "\n";
			chapter6question4();
			cout << "\n";
		}
	} while (questionchoice4 >= 1 && questionchoice4 <= 4);
}

int main()
{
	int chapterchoice1;
	int exit;
	
	cout << "DIT FTMK UTEM\n\n";
	cout << "Penyelesaian Masalah Pengaturcaraan C++: Pendekatan Contoh Bermodular\n\n";

	do
	{
		cout << "Senarai Bab:\n";
		cout << "1 - Bab 2 Pengaturcaraan Jujukan: Bahagian I\n";
		cout << "2 - Bab 3 Pengaturcaraan Jujukan: Bahagian II\n";
		cout << "3 - Bab 4 Pengaturcaraan Pilihan: if, if...else, if else if...else, nested if dan switch\n";
		cout << "4 - Bab 5 Pengaturcaraan Pengulangan: Gelung for, while, do while dan gelung nested\n";
		cout << "5 - Bab 6 Tatasusunan\n";
		cout << "\n";
		cout << "Sila masukkan 1 hingga 5 untuk memilih bab Pengaturcaraan 1: \t";
		cin >> chapterchoice1;
		if (chapterchoice1 == 1)
		{
			cout << "\n";
			chapter2(); //translation: Sequences Part I
			cout << "\n";
		}
		else if (chapterchoice1 == 2)
		{
			cout << "\n";
			chapter3(); //Translation: Sequences Part II
			cout << "\n";
		}
		else if (chapterchoice1 == 3)
		{
			cout << "\n";
			chapter4(); //Translation: condition if, if...else, if else if...else, nested if and switch
			cout << "\n";
		}
		else if (chapterchoice1 == 4)
		{
			cout << "\n";
			chapter5(); //Translation: for, while, do while loop and nested loop
			cout << "\n";
		}
		else if (chapterchoice1 == 5)
		{
			cout << "\n";
			chapter6(); //Translation: array
			cout << "\n";
		}
	} while (chapterchoice1 >= 1 && chapterchoice1 <= 5);

	cout << "Anda mahu keluar dari sistem? Sila tekan 0 untuk keluar atau input lain untuk batal: \t";
	cin >> exit;
	if (exit != 0)
	{
		cout << endl;
		main();
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
