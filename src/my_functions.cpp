/*****************************************************************
 * Homework 1 solution working with vectors and strings including 
 * references and guards, Basic resuable functions for string and
 * vectors
 *
 * @author Evan Kiel
 * @version 5/9/2017
 * *****************************************************************/

/** Required includes for vectors and strings */
#include <vector>
#include <string>

/** Function to create and return string containing Hello world! */
std::string createString(){
        std::string j("Hello world!");
        return j;
}

/** Fuction to create and return vector containing a string */
std::vector<std::string> createVector(){
        std::vector<std::string> j;
        return j;
}


/*****************************************************************
Creates a vector that that contains num number of strings
Returns the number of strings that was stored            
****************************************************************/
int putStringsInVector(int num){
        std::vector<std::string> stringVector = createVector();
        for(int i = 0; i < num; i++)
                stringVector.emplace_back(createString());
        return num;
}

/*****************************************************************
References a vector and changes every fifth element to 42
Starts at 0 and adds five(0,5,10,15...)
*****************************************************************/
void modifyVector(std::vector<int> & vector){
        for(unsigned int i =  0; i < vector.size(); i+=5)
                vector.at(i) = 42;
}

