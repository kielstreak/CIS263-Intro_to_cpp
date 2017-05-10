#include <vector>
#include <string>

std::string createString(){
        std::string j("Hello world!");
        return j;
}


std::vector<std::string> createVector(){
        std::vector<std::string> j;
        return j;
}


int putStringsInVector(int num){
        std::vector<std::string> stringVector = createVector();
        for(int i = 0; i < num; i++)
                stringVector.emplace_back(createString());
        return num;
}

void modifyVector(std::vector<int> & vector){
        for(unsigned int i =  0; i < vector.size(); i+=5)
                vector.at(i) = 42;
}

