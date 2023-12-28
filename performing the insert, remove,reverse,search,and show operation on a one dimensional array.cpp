#include <iostream>
#include <stdio.h>
#include <string.h>
#define TOTAL 8
class Book_Array{
	private:
	string C[TOTAL];
	public:
	Book_Array();
	void insert(int pos,string book_name);
	void remove(int pos);
	void reverse();
	void search(string book_name);
	void show();
};
Book_Array::Book_Array(){}
/*insert() function to insert a given book at given position*/
void Book_Array::insert(int pos,string book_name){
	//shift book to right
	int i;
	for(i=TOTAL-1;i>=pos;i--){
		C[i]=C[i-1];
	}
	C[i]=book_name;
}
/*remove() function to remlve a given book from a given position*/
void Book_Array::remove(int pos){
	int i;
	for(i=pos;i<TOTAL;i++){
		C[i-1]=C[i];
	}
	C[i-1]=" ";
}
//reverse() function to reverse the order of the books
void Book_Array::reverse(){
	int i;
	for(i=0;i<TOTAL/2;i++){
		string temp=C[i];
		C[i]=C[TOTAL-1-i];
		C[TOTAL-1-i]=temp;
	}
}
/*search() function searches the 'c' compartment of 'programming'
bookshelf for a given book*/
void Book_Array::search(string book_name){
	int i;
	for(i=0;i<TOTAL;i++){
		if(C[i]==book_name){
			cout<<endl<<"The "<<book_name<<"book is present at ";
			cout<<i+1<<"Th position. \n";
			return;
		}
	}
	if(i==TOTAL)
	cout<<endl<<"the "<< book_name<<" book is not present in the bookshelf. "<<endl;
}
/*show() function to display the books contained in the 'c' 
compartment of the 'programming' bookshelf */
void Book_Array::show(){
	for(int i=0;i<TOTAL;i++){
		cout<<"\t ("<<i+1")" << C[i]<<endl;
	}
}
int main(){
	Book_Array book_array;
	book_array.insert(1,"Let  us C");
	book_array.insert(2,"Programming in C");
	book_array.insert(3,"Mastering C");
	book_array.insert(4," C in Depth");
	book_array.insert(5,"Ansi C");
	book_array.insert(6,"Programming FAQs");
	book_array.insert(7,"Advanced C programming");
	book_array.insert(8,"Objective C");
	cout<<endl<<"Total books placed in 'c' compartment of 'Programming' bookshelf : "<<endl;
	book_array.show();
	book_array.remove(1);
	book_array.remove(1);
	cout<<endl<<"After removing first two books: "<<endl;
	book_array.show();
	book_array.insert(7,"Let us C");
	book_array.insert(8,"programmin in C ");
	cout<<endl<<"After placing the two removed books back at the end : "<<endl;
	book_array.show();
	book_array.reverse();
	cout<<endl<<"After reversing the order of books : "<<endl;
	book_array.show();
	book_array.search("Advanced C programming ");
	book_array.search("Data structures and Algorithm in C");
	return 0;
}
