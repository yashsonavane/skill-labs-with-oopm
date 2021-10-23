//Write a C++ program to overload the ‘+’ operator so that it can add two matrices.



# include<iostream>

using namespace std;



class matrices

{

	int a[2][2];

	int b[2][2];

	int c[2][2];

	public:

		void get_elements();	//take numbers from user

		matrices operator +(matrices m2);	//operator overloading

		void display();	//print the result

};



//functions outside class, using scope resolution



void matrices::get_elements()

{

	cout<<"enter the elements";

	for(int i=0;i<2;i++)	//for row

	{

		for(int j=0;j<2;j++)	//for columns

			cin>>a[i][j];

	}

}



void matrices:: display()

{

	for(int i=0;i<2;i++)

	{

		for(int j=0;j<2;j++)

			cout<<a[i][j]<<"  ";

		cout<<endl;

	}

}



matrices matrices::operator+(matrices m2)

{

	matrices m3;

	for(int i=0;i<2;i++)

	{

		for(int j=0;j<2;j++)

			m3.a[i][j]=a[i][j]+m2.a[i][j];

	}	

	return(m3);

}



int main()

{

	matrices ob1,ob2;

	ob1.get_elements();

	ob2.get_elements();

	cout<<"\nMatrix 1:\n";

	ob1.display();

	cout<<"\nMatrix 2:\n";

	ob2.display();

	ob1=ob1+ob2;

	cout<<"\nResult:\n";

	ob1.display();

}
