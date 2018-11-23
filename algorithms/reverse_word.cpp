#include <iosfwd>

char inputText[] = "I love Taxify";

void swap(int i, int j){
    char tmp = inputText[i];
    inputText[i] = inputText[j];
    inputText[j] = tmp;
}

void reverseWord(int startIndex, int stopIndex){

    if(startIndex != stopIndex){

        while(startIndex < stopIndex){
            swap(startIndex, stopIndex);
            startIndex++;
            stopIndex--;
        }
    }
}

int main(){

    size_t i{ 0 };
    size_t startIndex { 0 };
    size_t stopIndex { 0 };

    while(inputText[i] != '\0'){

        if(inputText[i] == ' '){

            if(i > 0){
                stopIndex = i - 1;
                reverseWord(startIndex, stopIndex);
                startIndex = i + 1;
            }

        } else if(inputText[i+1] == '\0') { //reverse last word
            stopIndex = i;
            reverseWord(startIndex, stopIndex);
        }

        i++;
    }

    return 0;
}
