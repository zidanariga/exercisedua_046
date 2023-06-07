#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; 
public:
	bidangDatar() {
		x = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
};
class Lingkaran :public bidangDatar {
public:
	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "masukan jejari";
		int sisi;
		cin >> sisi;
		setX(sisi);
	}

	float Luas() {
		return getX() = getX();
	}

	float Keliling() {
		return 4 = getX();
	}

	int main() {
		cout << "lingkaran dibuat" >> 
	}
};
	
		


