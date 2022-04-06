#include<bits/stdc++.h>
using namespace std;

class book
{
	public:
		 int page_no;
		 string book_name;
		 string writer_name;

		 void display()
		{
			cout<< "Page No :" <<page_no<<endl;
			cout<<book_name<<endl;
			cout<<writer_name<<endl;
		}

		void fun_book(int page,string b_name,string w_name)
		{
			page_no = page;
			book_name = b_name;
			writer_name =w_name;

			cout<< "Page No: " <<page_no<<endl;
			cout<<book_name<<endl;
			cout<<writer_name<<endl;
		}
};
int main(){
	book B1;
	B1.page_no=01;
	B1.book_name="Robi";
	B1.writer_name="Sagour Ahmed";

	cout<<B1.page_no<<endl;
	cout<<B1.book_name<<endl;
	cout<<B1.writer_name<<endl;

	book B2;
	B2.page_no=100;
	B2.book_name=" K tumi nondini";
	B2.writer_name="Kajzi najrul Islam";

	book B4;
	B4.fun_book(300,"K Tmi Nondini","Ritu Bissas");

	return 0;
}