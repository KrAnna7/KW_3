#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class String {
	private:
		string napis;
	public:
		String(string n){
			napis=n;
		}
		void show(){
			transform(napis.begin(),napis.end(),napis.begin(),::tolower);// zamienia duże litery na małe	
			char najmlodsza='z';
			char najstarsza='a';
			int i;
			for(i=0;i<=napis.size()-1;i++){
				if(napis[i]>=najstarsza)
					najstarsza=napis[i];
				if (napis[i]<=najmlodsza)
					najmlodsza=napis[i];
			}
			cout<<najmlodsza<<endl;
			cout<<najstarsza<<endl;
		}
};

int main() {
	String n1("ProgramoWAnie Obiektowe");
	n1.show();
	//cout<<(short)n1[0]<<endl;
	return 0;
}
	
	
