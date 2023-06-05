#include <iostream>
#include <string>
#include <vector>
using namespace std;

class pengarang;
class penerbit {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;
	penerbit(string pNama) :nama(pNama) {
		cout << "Penerbit \"" << nama << "\" ada\n";
	}
	~penerbit() {
		cout << "Penerbit\"" << nama << "\" tidak ada\n";
	}
	void tambahPengarang(Pengarang*);
	void cetakPengarang();
};

class pengarang {
public:
	string nama;
	vector<penerbit*> daftar_penerbit;
	pengarang(string pNama) :nama(pNama) {
		cout << "Pengarang \"" << nama << "\" ada\n";
	}
	~penerbit() {
		cout << "Pengarang\"" << nama << "\" tidak ada\n";
	}
	void tambahPenerbit(penerbit*);
	void cetakPenerbit();
};

class buku {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;
	buku(string pNama) :nama(pNama) {
		cout << "Buku \"" << nama << "\" ada\n";
	}
	~buku() {
		cout << "Buku\"" << nama << "\" tidak ada\n";
	}
	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

void penerbit::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}

void penerbit::cetakPengarang() {
	cout << "Daftar Penerbit yang diikuti \"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void pengarang::tambahPenerbit(penerbit* pPenerbit) {
	daftar_penerbit.push_back(pPenerbit);

void pengarang::
	cout << "Daftar Pengarang pada Penerbit \"" << this->nama << "\":\n";
	for (auto& a : daftar_penerbit) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void buku::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}

void buku::cetakPengarang() {
	cout << "Daftar Buku yang Dikarang \"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

int main() {
	pengarang* varPengarang1 = new pengarang("Joko");
	pengarang* varPengarang2 = new pengarang("Lia");
	pengarang* varPengarang3 = new pengarang("Giga");
	pengarang* varPengarang4 = new pengarang("Asroni");
	penerbit* varPenerbit1 = new penerbit("Gama Press");
	penerbit* varPenerbit2 = new penerbit("Intan Pariwara");
	buku* varBuku1 = new buku("Fisika");
	buku* varBuku2 = new buku("Algoritma");
	buku* varBuku3 = new buku("Basis Data");
	buku* varBuku4 = new buku("Dasar Pemrograman");
	buku* varBuku5 = new buku("Matematika");
	buku* varBuku6 = new buku("Multimedia 1");

	varPengarang1->tambahPenerbit(varPenerbit1);
	varPengarang2->tambahPenerbit(varPenerbit1);
	varPengarang3->tambahPenerbit(varPenerbit1);
	varPengarang3->tambahPenerbit(varPenerbit2);
	varPengarang4->tambahPenerbit(varPenerbit2);
	varPenerbit1->tambahPengarang(var)

	varPenerbit1->

}