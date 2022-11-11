#include<iostream>
using namespace std;
class stack
{
	public:
		int *arr;
		int top;
		int size;
		
		stack(int size){   //constructer
			this-> size= size;  //initization of size of array
			arr = new int[size]; //providing memory to array
			top=-1;
		}
		void push(int element){
			if(size-top>1){
				top++;
				arr[top]=element;
			}
			else{
				cout<<"Stack over flow"<<endl;
			}
		}
	void pop(){
		if(top>=0){
			top--;
		}
		else{
			cout<<"stack under flow, no element present :("<<endl;
		}
	}	
	int peek(){
		if(top>0){
			return arr[top];
		}
		else{
			cout<<"stack is empty"<<endl; 
		}
	}
	bool isEmpty(){
		if(top == 1){
			cout<<"stack is empty!!:"<<endl;
		}
		else{
			cout<<"stack is not empty!!:"<<endl;
		}
	}
};
int main()
{
	stack st(5);
	st.push(34);
	st.push(89);
		
	cout<<st.peek()<<endl;
	st.pop();
	cout<<st.peek()<<endl;
	st.pop();
	cout<<st.peek()<<endl;
		
	if(st.isEmpty())
		cout<<"Stack is empty :("<<endl;
	else
		cout<<"stck is not empty :)"<<endl;
	return 0;
}
