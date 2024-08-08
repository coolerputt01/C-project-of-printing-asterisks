/*This code was created by Adekolu Olumide also known as Coolerputt.... on the 8th August,2024.*/
/*This may not be the best version but please support me*/
#include<iostream>
int main(){
    //Give color to the screen.
    system("color 7d");
    //Print out square astericks on the screen based on user input.

    //Variable holds user input
    int user_input;
    //Prints a prompts.
    std::cout<<"\t\t\t\t\t\t\t\t\t\tEnter a value\n";
    //Accepts user input.
    std::cin>>user_input;
    //Controls printing of asterisks with for-loop nesting.
    for(int i = user_input;i > 0; i--){
            //Trying to make the layout better.
        std::cout<<"\t\t\t\t\t\t\t\t\t\t";
        for(int j = user_input; j > 0 ; j--){
                //Prints astersks.
            std::cout<<"* ";
        }
        //Prints a new line at the end of every asterisk print,
        std::cout<<"\n";
    }
    //Following rules....
    return 0;
}
