#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char *argv[]) {
	
	char*namefile1;
	char*namefile2;
		if(argc > 1) {
			namefile1 = argv[1];
			namefile2 = argv[2];
		}
		else{
			printf("No file name");
			return 1;
		}

	string f, s;
	char c;
	int i,k;
	ifstream fin;
	ofstream fout;
	fin.open(namefile1);
	fout.open(namefile2);

	if (!(fin.is_open())) {
		cout << "FILE №1 NOT OPEN" << endl;
		return 0;
	}
	if (!(fout.is_open())) {
		cout << "FILE №2 NOT OPEN" << endl;
		return 0;
	}
	cout << "Enter symbols:" << endl;
	cin >> c;
	fin >> f >> s;
	k = f.length();//считаем количество символов в строке f

	for (i = 0; i < (k * (s.length()) ); i++) {
		if (f[i] == c) {
			f.replace(i,0,s);
			i = i + s.length();
		}
	}
	fout << f;
	cout << "completed"<< endl;
	fin.close();
	fout.close();
	return 0;

	
}
