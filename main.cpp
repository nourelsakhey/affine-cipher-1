// FCI - programming 1 - 2018 - assignment 2.
// program name : Affine cipher .cpp.
// last modification 1/2/2018.
// Author 1 and ID and group: Nour el hoda khaled 20170320 12.
// Author 1 and ID and group: Mai rady hassan 20170302 12.
// Author 1 and ID and group: Androew emad aziz 20170061 12.
// Teaching assistant : khadeaga khaled and dina mahmoud.
// purpose : to cipher and decipher a message.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char letters[26]={'A','B','C','D','E','F','G','H', 'I','J', 'K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    string word;
    string word2;
    int a,b,c;
    cout<<"Ahlan ya user ya 7abibi" <<endl<< "What do you like to do today"<<endl <<"1-cipher a message" <<endl <<" 2-decipher a message"<<endl<<"3-end"<<endl;
    getline(cin,word2);
    cout<<"enter the message"<<endl;
    getline(cin,word);

    cout<<"put parameters a,b and c"<<endl;
    cout<<"parameter1 is:";
    cin>>a;
    cout<<"parameter2 is";
    cin>>b;
    cout<<"parameter3 is";
    cin>>c;
    while ((a*c)%26!=1){
        cout<<"these parameter cannot be chosen enter another parameters"<<endl;
        cout<<"parameter1 is:";
        cin>>a;
        cout<<"parameter2 is";
        cin>>b;
        cout<<"parameter3 is";
        cin>>c;}


     for (int M=0; M<word.length(); M++)
    {
        word[M]=toupper(word[M]);
    }

    for(int i=0; i< word.length() ;i++){
      for(int j=0;j<26;j++){
        if(word[i]==' '){
        cout<<char(32);
        break;
        }
        else if (word2=="2" && word[i]==letters[j]){
            int z=c*(j-3)%26;
               cout <<letters[z];
               break;

        }


        else if (word2=="1" && word[i]==letters[j]){
              int z=((a*j)+3)%26;
              cout<<letters[z];
              break;

       }

      }



     }



 return 0;
}
