#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
	int JamLembur;
	long int GajiPokok = 1000000, GajiKotor, TotalGajiLembur;
	float Pajak, GajiBersih;
	char Nama[50];

	system("cls");
	cout << "Nama Pegawai   : "; cin.get(Nama, 50);
	cout << "Lama Lembur    : "; cin >> JamLembur;

	TotalGajiLembur = (long int)5000 * JamLembur;
	GajiKotor = GajiPokok + TotalGajiLembur;
	Pajak = 0.1 * GajiKotor;
	GajiBersih = GajiKotor - Pajak;

	system("cls");
	cout << "Hasil Penghitungan \n";
	cout << "Nama Pegawai       : " << Nama << endl;
	cout << "Gaji Pokok         : " << GajiPokok << endl;
	cout << "Lama Lembur        : " << JamLembur << " jam" << endl;
	cout << "Total Gaji Lembur  : Rp" << setw(10) << TotalGajiLembur << endl;
	cout << "Gaji Kotor         : " << setw(10) << GajiKotor << endl;
	cout << setiosflags(ios::fixed);
	cout << "Pajak (10%)        : Rp" << setw(10) << setprecision(2) << Pajak << endl;
	cout << "Gaji Bersih        : Rp" << setw(10) << setprecision(2) << Pajak << endl << endl;

	_getch();
	return 0;
}