#include<stdio.h>
#include<string.h>

int main()
{
    char inputstring[1000];
    char words[100][100];
    int i,wordIndex=0,totalWords=0;


    //Request string input from user
    printf("Input a string: ");
    fgets(inputstring,sizeof inputstring,stdin);

    //loop through each character in the string

    for(i=0;i<=strlen(inputstring);i++)
    {
        //if current character is space or null
        if(inputstring[i]==' '||inputstring[i]=='\0')
        {
             //Append the null character to the current word
             words[totalWords][wordIndex]='\0';

             //increment total words found
             totalWords++;

             //Reset the index to zero for the next word
             wordIndex=0;
        }
        //Found a character of a word
        else
        {
            //copy the character of a word
            words[totalWords][wordIndex]=inputstring[i];

            //Increment the index for the word
            wordIndex++;
        }
    }
    printf("\nWords from the string are:\n");

    //Loop through all the words that were copied

    for(i=0;i<totalWords;i++)
    {
        //print each word
        printf("%s\n",words[i]);
    }
    return 0;


}
