// Functionality of Double level memory.cpp : This file run program and main functions 
//

#include <iostream>
#include <windows.h>
#include <stdlib.h>     /* srand, rand */
#include <chrono>
#include <thread>
#include <string>
#include <fstream>
using namespace std; 

//array of data from tests
double data_of_test[6] = {0,0,0,0};
//array of data for formula
double data_of_formula[6] = {0,0,0,0}; 

//timer , we need  how many seconds function has started has worked
struct Timer {

std::chrono::time_point < std::chrono::steady_clock> start, end;
std::chrono::duration<float> duration;

Timer() {
    start = std::chrono::high_resolution_clock::now(); //get time now
}
~Timer() {
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;

    double ms = duration.count() * 1000.0f; // give value in seconds
    std::cout << "Timer took" << ms << "s" << std::endl;
    //check speed 
    if (ms >= 5) {
        std::cout << "Warning 1 :: slow expection "<<endl;
    }
    if (ms >= 10) {
       std::cout << "expectation speed is unnormal , call System-Administrator " << endl;
    }
    ms = data_of_test[0];
}
    
};


void get_speed_of_cashe() {
    
    Timer timer;
    double speed_of_cashe = 0 , random_number ,seconds;
    int degree_of_number = rand()%10;
    //get random number 
    random_number = rand() % 124323;
    
    for (int i = 0; i < degree_of_number; i++) {
        random_number = random_number * random_number;
    }
    //get amount of seconds 
    speed_of_cashe = data_of_test[0];
    data_of_formula[0] = speed_of_cashe;

}


void get_text_and_return_it()
{   
    Timer timer;
    double speed_of_function_get_text_and_return_it;
    string str = "qwertyuiopasdfghjklzxcvbnm_keyboard";
    string str1;
    ofstream outfile("speeds_of_accsess_to_memory.txt"); //open file
    outfile << str; //write string variable down in the file
    std::cout << "FILE GET STRING" << endl;
    ifstream infile("speeds_of_accsess_to_memory.txt");
    infile >> str1;
    std::cout << "FILE HAS RETURNED" << endl;
    speed_of_function_get_text_and_return_it = data_of_test[0];
    data_of_formula[1] = speed_of_function_get_text_and_return_it;
}

int main()
{
    Timer timer;
    get_speed_of_cashe();
    get_text_and_return_it();
    
    double H = 1;
    double T_of_high_memory = data_of_formula[0];
    T_of_high_memory = T_of_high_memory + 0, 1;
    double T_of_low_memory = data_of_formula[1];
    T_of_low_memory = T_of_low_memory + 0, 1;
    double Result = H * T_of_high_memory + (1 - H) * (T_of_high_memory + T_of_low_memory);
    cout << "Average Time to access of memory:" << Result << endl;
    double Adjusted_result = Result -1;
    cout << "Adjusted result:" << Adjusted_result << endl;
    

    return 0;
}


