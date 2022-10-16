#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main() {
	cout<<"\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
	    <<"\xCB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
		<<"\xCB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
		<<"\xCB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
		<<"\xCB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
		<<"\xCB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB"<<endl;
	
	cout<<"\xBA DEC HEX CHR "
	    <<"\xBA DEC HEX CHR "
		<<"\xBA DEC HEX CHR "
		<<"\xBA DEC HEX CHR "
		<<"\xBA DEC HEX CHR "
		<<"\xBA DEC HEX CHR \xBA"<<endl;
	
	cout <<"\xCC\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
	     <<"\xCE\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
		 <<"\xCE\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
		 <<"\xCE\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
		 <<"\xCE\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
		 <<"\xCE\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xB9"   <<endl;
	
	for (int i = 0 ; i<=42 ; i++){
		if(i==0)		cout <<"\xBA " << setw(3)<< dec << i << setw(4)<<hex << i <<setw(3)<<"\\0";
		else if(i== 1)	cout <<"\xBA " << setw(3)<< dec << i << setw(4)<<hex << i <<setw(3)<<"\\1";
		else if(i== 2)	cout <<"\xBA " << setw(3)<< dec << i << setw(4)<<hex << i <<setw(3)<<"\\2";
		else if(i== 3)	cout <<"\xBA " << setw(3)<< dec << i << setw(4)<<hex << i <<setw(3)<<"\\3";
		else if(i== 4)	cout <<"\xBA " << setw(3)<< dec << i << setw(4)<<hex << i <<setw(3)<<"\\4";
		else if(i== 5)	cout <<"\xBA " << setw(3)<< dec << i << setw(4)<<hex << i <<setw(3)<<"\\5";
		else if(i== 6)	cout <<"\xBA " << setw(3)<< dec << i << setw(4)<<hex << i <<setw(3)<<"\\6";
		else if(i== 7)	cout <<"\xBA " << setw(3)<< dec << i << setw(4)<<hex << i <<setw(3)<<"\\a";
		else if(i== 8)	cout <<"\xBA " << setw(3)<< dec << i << setw(4)<<hex << i <<setw(3)<<"\\b";
		else if(i== 9)	cout <<"\xBA " << setw(3)<< dec << i << setw(4)<<hex << i <<setw(3)<<"\\t";
		else if(i==10)	cout <<"\xBA " << setw(3)<< dec << i << setw(4)<<hex << i <<setw(3)<<"\\n";
		else if(i==11)	cout <<"\xBA " << setw(3)<< dec << i << setw(4)<<hex << i <<setw(3)<<"\\v";
		else if(i==12)	cout <<"\xBA " << setw(3)<< dec << i << setw(4)<<hex << i <<setw(3)<<"\\f";
		else if(i==13)	cout <<"\xBA " << setw(3)<< dec << i << setw(4)<<hex << i <<setw(3)<<"\\r";
		else			cout <<"\xBA " << setw(3)<< dec << i << setw(4)<<hex << i <<setw(3)<<char(i);
		cout  <<"  \xBA " << setw(3)<< dec << i+43  << setw(4)<<hex << i+43  <<setw(3)<<char(i+43)
		      <<"  \xBA " << setw(3)<< dec << i+86  << setw(4)<<hex << i+86  <<setw(3)<<char(i+86)
		      <<"  \xBA " << setw(3)<< dec << i+129 << setw(4)<<hex << i+129 <<setw(3)<<char(i+129)
		      <<"  \xBA " << setw(3)<< dec << i+172 << setw(4)<<hex << i+172 <<setw(3)<<char(i+172);
		if(i+215>255)
			cout <<"  \xBA             \xBA"<<endl;
		else
			cout  <<"  \xBA " << setw(3)<< dec << i+215 << setw(4)<<hex << i+215<<setw(3) <<char(i+215) <<"  \xBA"  << endl;
	}
	cout <<"\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
	     <<"\xCA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
		 <<"\xCA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
	     <<"\xCA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
		 <<"\xCA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
		 <<"\xCA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC"   <<endl;
	cout <<"Press Esc Key to Exit"<<endl;
	while(getch()!='\x1B');
	return 0;
}
