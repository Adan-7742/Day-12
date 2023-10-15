// Day 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//=======================================================================================================
//                                                                                                      =
//............................................Pointers .................................................=
//                                                                                                      =
//=======================================================================================================


#include <iostream>
using namespace std;

//pointers are used to store the adrees of a variable 
//special type of variable 
// ---------------------------------------------------------------------------------------------------|
//                                                                                                    |
//.....................................Declering and using pointers...................................|
//                                                                                                    |
//----------------------------------------------------------------------------------------------------|

int point() {
	cout << "================================================================================================================" << endl;
	// we cannot store the adress of other type to another type just as 
	//we cannot store double variable to int variable
	//it will give compiler error

	// estaric * sign is used to decleare a pointer 

	int* p_num{ }; // will initilize with null pointer
	double* p_fact{};

	//BOTH these are variales that can only store adress 

	//explicity decleare with nulptr
	int* p_num1{ nullptr };
	double* p_fact1{ nullptr };

	// pointer on different variable are of same size

	cout << "sizeof(int)  : " << sizeof(int) << endl;  //  4

	cout << "sizeof(double)  : " << sizeof(double) << endl;  //  8

	cout << "sizeof(int*)  : " << sizeof(int*) << endl;

	cout << "sizeof(double*)  : " << sizeof(double*) << endl;

	cout << "sizeof(p_num1)  : " << sizeof(p_num1) << endl;

	cout << "sizeof(p_fact1)  : " << sizeof(p_fact1) << endl;

	// it does not matter where you put * symbol on data type or on variable  
	cout << "================================================================================================================" << endl;


	int* p_nummber{ nullptr };
	int* p_nummber1{ nullptr };
	int* p_nummber2{ nullptr };

	//........................................

	int* p_nume{}, p_var{};

	int* p_nume1{}, p_var_other{};//it is confusing statement 
	//confuse us weather pvar is also a pointer or not
	// it is not 
	// the structiure is exctly same as the pprevious statement
	cout << "sizeof(p_nume)  : " << sizeof(p_nume) << endl;

	cout << "sizeof(p_var)  : " << sizeof(p_var) << endl;

	cout << "sizeof(p_nume1)  : " << sizeof(p_nume1) << endl;

	cout << "sizeof(p_var_other)  : " << sizeof(p_var_other) << endl;

	cout << "================================================================================================================" << endl;

	// decleare them on a different number 
	// here
	int* p_nume2{};
	int p_varrr{};  // here we now that which variable is pointer 
	              // or witch is not



	// initilizing pointer and assiging them a value then 
	// we know that pointer store adress of a variable 

	int var_int0{ 10 };
	int* p_int{ &var_int0 };  // thr adress of operator and  

	cout << "var_ int  " << var_int0 << endl;

	cout << "p_int{ adress of variable in memory }  ;  " << p_int << endl;

	// we can also chane the adress in the pointer any time
	int var_int1{ 20 };

	p_int = &var_int1;  // assign different adress to the pointer

	cout << "p_int{ different adress of variable in memory }  ;  " << p_int << endl;

	cout << "================================================================================================================" << endl;

	// can not store assign to different tyoe of variables
	//...........................example
	// 
	//                 eg.         p_int=& p_fact;
	// 
	// we will get a compiler error


	// ...............................................Derefrencing a pointer ..............................

	int var_int{ 10 };
	int* p_int0{ &var_int };  // thr adress of operator and  

	// if we use hestaric sign in our code for out put it will print the value of 
	// that variable

	cout << "p_int{ will get the value of var_int }  ;  " << *p_int << endl;


	return 0;
}


// ---------------------------------------------------------------------------------------------------|
//                                                                                                    |
//.....................................Pointer to char or character...................................|
//                                                                                                    |
//----------------------------------------------------------------------------------------------------|

int car_var(){
	cout << "================================================================================================================" << endl;

	// we can use char data type as same we use int and double values
	// pointer in char can do something sepecial"
	//you can initilize it with string value


	//....................................................01.........................................................
	const char* msg{ "Hello" };

	cout << "sizeof(p_nume)  : " << sizeof(msg) << endl;

	cout << "message : " << msg<< endl;

	cout << "message : " << *msg << endl;
	// allow user to modify the string 
	// we can initilize the string in row array

	cout << "================================================================================================================" << endl;

	//....................................................02.........................................................

	char msg1[] { "Hello world !" };
	msg1[0] = 'B';

	cout << "message : " << msg1 << endl;


	//............................................................................................
	//in both these program if you do not want to modify your string then you can you first program
	//if you want to modify if make sure use of an array just as in 2
	//............................................................................................

	return 0;
}

//=======================================================================================================
//                                                                                                      =
//........................................Program memory map............................................=
//                                                                                                      =
//=======================================================================================================


//.......................................virtual memory...............................................

//a trick that fools your program to thinking it is only program that is 
//running on your os and all memory resources belong to it

//................memory range is 0~ 2^n - 1

//program.............>>.................>compiler...........................................>> binary form.............how data is going tobe laidout
// in memory in our program
//binary data run....................>>> execute the program..............>>>>memory management unit or MMU
// 
// 
//mmu :  the entire program is not going to loaded in real memory 
//       only part that are about to executed are loaded making effictive use of memory

// the memory map is strandard format defined by OS
//All program written for that OS must confirm it...........
// usually divided into some sections


// ......................................................Memory Map.......................................................

//                                          system
//                                          stack
//                                          heap
//                                          data
//                                          text


// ........................................stack...................................
// used to store variable and function call

//........................................heap.....................................
//aditional memory that can br quried for at run time



//=======================================================================================================
//                                                                                                      =
//.......................................Dynamic memory allocation......................................=
//                                                                                                      =
//=======================================================================================================


int pointer() {
	//how we have use pointer so far

	cout << "================================================================================================================" << endl;


	int number{ 22 };    // ..................stack........................
	
	int* p_number = &number;

	cout << endl;
	cout << "Declearing pointer and adressing it a number : " << endl;
	cout << "number :" << number << endl;

	cout << "p_number :" << p_number << endl;

	cout << "& number :" << &number << endl;

	cout << "* p_number :" << *p_number << endl;
	 

	cout << "================================================================================================================" << endl;

	int *p_number1{};  // uninitilized pointer containing junk adress

	int number1{ 12 };

	p_number1 = &number1;// make it point to valid adress

	cout << endl;
	cout << "unintilized pointers : " << endl;
	cout << "* p_number1" << *p_number1 << endl; 

	//.....................................Things to Avoid...........................
	//....................................using pointers.............................


	// directly writing into a junk adress is bad compiler is not going to print it 
	// ............as..........p_number=44;................
	//we are just trying to write into a junk adress

	//...........................................................................
	//if we siply initilized  A pointer to no value
	// .......................as.............int * p{}; ..............
	//and now we are storing a value in it so our program is going to crash 
	// this is a bad thing


	//-------------------------------------------------------------------------|
	//........................Dynamic heap memory..............................|
	//_________________________________________________________________________|

	//dynamic......

	cout << "================================================================================================================" << endl;

	int* p_inter{ nullptr };
	p_inter = new int;
	                 // this memory belong to our program from now own
	                 // cant use it for antthing else until we return it 
	                 // after this ine execute we will have a valid memory loacation aocated
	                 // the size of allocatwd meory will be such that it can store
	                 // the type pointed to the pointer



	*p_inter = 77;       // writing into dynamically allocated memory
	cout << endl;
	cout << "dynamicaly allocating memory : " << endl;
	cout << "* p_inter" << *p_inter << endl;

	// return memory to operating sstem
	delete p_inter;
	p_inter = nullptr;
	// if we return a memory then we cant not use it again ti initilize any other value
	//.........................................................................................
	// after returning a value we an again reuse the variablr pointer for storing another value
	//..........................................................................................
	// if we initilize it we have to delete it again
	// and reset into a nul pointer
	//..........................................................................................
	//it is really bad to cal delete a pointer twice
	//......................................................................
	//it will crash the program will not run it properly
	// so dont delete your memory twice ................................


	return 0;


}

int main()
{
	point();
	car_var();
	pointer();
}

