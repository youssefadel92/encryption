// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Cipher.cpp (simple substitution cipher)
// Last Modification Date: 01/03/2018
// Author1 and ID and Group: youssef adel elsayed -20170345-G13
// Author2 and ID and Group: Youssef ahmad Ismail -20170334-G13
// Author3 and ID and Group: xxxxx xxxxx
// Teaching Assistant: xxxxx xxxxx
// Purpose:message encryption
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;
// str1  is the input
// str2 is the output
string ssc(string(str1),string(str2),string(keyword))   //simple substitution cipher
{
        string alphabet="abcdefghijklmnopqrstuvwxyz";
        for (int z=0; z<keyword.length();++z){
                for (int i=0; i<alphabet.length();++i){
                    if (alphabet[i]==keyword[z]){
                        alphabet.erase(i,1);
                    }
                }


        }
        keyword+=alphabet;
        cout << keyword<<endl;
        for (int i=0; i<str1.length();++i){
            if (str1[i]=='a'||str1[i]=='A'){
                char ch=keyword[0];
                str2+=ch;
            }
            else if (str1[i]=='b'||str1[i]=='B'){
                char ch=keyword[1];
                str2+=ch;
            }
            else if (str1[i]=='c'||str1[i]=='C'){
                char ch=keyword[2];
                str2+=ch;
            }
            else if (str1[i]=='d'||str1[i]=='D'){
                char ch=keyword[3];
                str2+=ch;
            }
            else if (str1[i]=='e'||str1[i]=='E'){
                char ch=keyword[4];
                str2+=ch;
            }
            else if (str1[i]=='f'||str1[i]=='F'){
                char ch=keyword[5];
                str2+=ch;
            }
            else if (str1[i]=='g'||str1[i]=='G'){
                char ch=keyword[6];
                str2+=ch;
            }
            else if (str1[i]=='h'||str1[i]=='H'){
                char ch=keyword[7];
                str2+=ch;
            }
            else if (str1[i]=='i'||str1[i]=='I'){
                char ch=keyword[8];
                str2+=ch;
            }
            else if (str1[i]=='j'||str1[i]=='J'){
                char ch=keyword[9];
                str2+=ch;
            }
            else if (str1[i]=='k'||str1[i]=='K'){
                char ch=keyword[10];
                str2+=ch;
            }
            else if (str1[i]=='l'||str1[i]=='L'){
                char ch=keyword[11];
                str2+=ch;
            }
            else if (str1[i]=='m'||str1[i]=='M'){
                char ch=keyword[12];
                str2+=ch;
            }
            else if (str1[i]=='n'||str1[i]=='N'){
                char ch=keyword[13];
                str2+=ch;
            }
            else if (str1[i]=='o'||str1[i]=='O'){
                char ch=keyword[14];
                str2+=ch;
            }
            else if (str1[i]=='p'||str1[i]=='P'){
                char ch=keyword[15];
                str2+=ch;
            }
            else if (str1[i]=='q'||str1[i]=='Q'){
                char ch=keyword[16];
                str2+=ch;
            }
            else if (str1[i]=='r'||str1[i]=='R'){
                char ch=keyword[17];
                str2+=ch;
            }
            else if (str1[i]=='s'||str1[i]=='S'){
                char ch=keyword[18];
                str2+=ch;
            }
            else if (str1[i]=='t'||str1[i]=='T'){
                char ch=keyword[19];
                str2+=ch;
            }
            else if (str1[i]=='u'||str1[i]=='U'){
                char ch=keyword[20];
                str2+=ch;
            }
            else if (str1[i]=='v'||str1[i]=='V'){
                char ch=keyword[21];
                str2+=ch;
            }
            else if (str1[i]=='w'||str1[i]=='W'){
                char ch=keyword[22];
                str2+=ch;
            }
            else if (str1[i]=='x'||str1[i]=='X'){
                char ch=keyword[23];
                str2+=ch;
            }
            else if (str1[i]=='y'||str1[i]=='Y'){
                char ch=keyword[24];
                str2+=ch;
            }
            else if (str1[i]=='z'||str1[i]=='Z'){
                char ch=keyword[25];
                str2+=ch;
            }
            else{
                str2.append(" ");
            }

        }
        return str2;

}
string dssc(string(str1),string(str2),string(keyword))   //simple substitution cipher
{
        string constantalpha= "abcdefghijklmnopqrstuvwxyz";
        string alphabet="abcdefghijklmnopqrstuvwxyz";
        for (int z=0; z<keyword.length();++z){
                for (int i=0; i<alphabet.length();++i){
                    if (alphabet[i]==keyword[z]){
                        alphabet.erase(i,1);
                    }
                }


        }
        keyword+=alphabet;
        for (int i=0;i<str1.length();++i){
            if (str1[i]==' '){
                str2.append(" ");
                continue;
            }
            if (str1[i]==keyword[0]){
                char charachter=constantalpha[0];
                str2+=charachter;
            }
            else if (str1[i]==keyword[1]){
                char charachter=constantalpha[1];
                str2+=charachter;
            }
            else if (str1[i]==keyword[2]){
                char charachter=constantalpha[2];
                str2+=charachter;
            }
            else if (str1[i]==keyword[3]){
                char charachter=constantalpha[3];
                str2+=charachter;
            }
            else if (str1[i]==keyword[4]){
                char charachter=constantalpha[4];
                str2+=charachter;
            }
            else if (str1[i]==keyword[5]){
                char charachter=constantalpha[5];
                str2+=charachter;
            }
            else if (str1[i]==keyword[6]){
                char charachter=constantalpha[6];
                str2+=charachter;
            }
            else if (str1[i]==keyword[7]){
                char charachter=constantalpha[7];
                str2+=charachter;
            }
            else if (str1[i]==keyword[8]){
                char charachter=constantalpha[8];
                str2+=charachter;
            }
            else if (str1[i]==keyword[9]){
                char charachter=constantalpha[9];
                str2+=charachter;
            }
            else if (str1[i]==keyword[10]){
                char charachter=constantalpha[10];
                str2+=charachter;
            }
            else if (str1[i]==keyword[11]){
                char charachter=constantalpha[11];
                str2+=charachter;
            }
            else if (str1[i]==keyword[12]){
                char charachter=constantalpha[12];
                str2+=charachter;
            }
            else if (str1[i]==keyword[13]){
                char charachter=constantalpha[13];
                str2+=charachter;
            }
            else if (str1[i]==keyword[14]){
                char charachter=constantalpha[14];
                str2+=charachter;
            }
            else if (str1[i]==keyword[15]){
                char charachter=constantalpha[15];
                str2+=charachter;
            }
            else if (str1[i]==keyword[16]){
                char charachter=constantalpha[16];
                str2+=charachter;
            }
            else if (str1[i]==keyword[17]){
                char charachter=constantalpha[17];
                str2+=charachter;
            }
            else if (str1[i]==keyword[18]){
                char charachter=constantalpha[18];
                str2+=charachter;
            }
            else if (str1[i]==keyword[19]){
                char charachter=constantalpha[19];
                str2+=charachter;
            }
            else if (str1[i]==keyword[20]){
                char charachter=constantalpha[20];
                str2+=charachter;
            }
            else if (str1[i]==keyword[21]){
                char charachter=constantalpha[21];
                str2+=charachter;
            }
            else if (str1[i]==keyword[22]){
                char charachter=constantalpha[22];
                str2+=charachter;
            }
            else if (str1[i]==keyword[23]){
                char charachter=constantalpha[23];
                str2+=charachter;
            }
            else if (str1[i]==keyword[24]){
                char charachter=constantalpha[24];
                str2+=charachter;
            }
            else if (str1[i]==keyword[25]){
                char charachter=constantalpha[25];
                str2+=charachter;
            }

        }
        return str2;

}
string bc(string(str1),string(str2))   //baconian cipher
{
        for (int i=0; i<str1.length();++i){
            if (str1[i]=='a'||str1[i]=='A'){
                str2.append("aaaaa");
            }
            else if (str1[i]=='b'||str1[i]=='B'){
                str2.append("aaaab");
            }
            else if (str1[i]=='c'||str1[i]=='C'){
                str2.append("aaaba");
            }
            else if (str1[i]=='d'||str1[i]=='D'){
                str2.append("aaabb");
            }
            else if (str1[i]=='e'||str1[i]=='E'){
                str2.append("aabaa");
            }
            else if (str1[i]=='f'||str1[i]=='F'){
                str2.append("aabab");
            }
            else if (str1[i]=='g'||str1[i]=='G'){
                str2.append("aabba");
            }
            else if (str1[i]=='h'||str1[i]=='H'){
                str2.append("aabbb");
            }
            else if (str1[i]=='i'||str1[i]=='I'){
                str2.append("abaaa");
            }
            else if (str1[i]=='j'||str1[i]=='J'){
                str2.append("abaab");
            }
            else if (str1[i]=='k'||str1[i]=='K'){
                str2.append("ababa");
            }
            else if (str1[i]=='l'||str1[i]=='L'){
                str2.append("ababb");
            }
            else if (str1[i]=='m'||str1[i]=='M'){
                str2.append("abbaa");
            }
            else if (str1[i]=='n'||str1[i]=='N'){
                str2.append("abbab");
            }
            else if (str1[i]=='o'||str1[i]=='O'){
                str2.append("abbba");
            }
            else if (str1[i]=='p'||str1[i]=='P'){
                str2.append("abbbb");
            }
            else if (str1[i]=='q'||str1[i]=='Q'){
                str2.append("baaaa");
            }
            else if (str1[i]=='r'||str1[i]=='R'){
                str2.append("baaab");
            }
            else if (str1[i]=='s'||str1[i]=='S'){
                str2.append("baaba");
            }
            else if (str1[i]=='t'||str1[i]=='T'){
                str2.append("baabb");
            }
            else if (str1[i]=='u'||str1[i]=='U'){
                str2.append("babaa");
            }
            else if (str1[i]=='v'||str1[i]=='V'){
                str2.append("babab");
            }
            else if (str1[i]=='w'||str1[i]=='W'){
                str2.append("babba");
            }
            else if (str1[i]=='x'||str1[i]=='X'){
                str2.append("babbb");
            }
            else if (str1[i]=='y'||str1[i]=='Y'){
                str2.append("bbaaa");
            }
            else if (str1[i]=='z'||str1[i]=='Z'){
                str2.append("bbaab");
            }
            else{
                str2.append(" ");
            }

        }
        return str2;

}
string dbc(string(str1),string(str2))   //baconian decipher
{
        for (int i=0; i<str1.length();i=i+5){
            if (str1.substr(i,5)=="aaaaa"){
                str2.append("a");
            }
            else if (str1.substr(i,5)=="aaaab"){
                str2.append("b");
            }
            else if (str1.substr(i,5)=="aaaba"){
                str2.append("c");
            }
            else if (str1.substr(i,5)=="aaabb"){
                str2.append("d");
            }
            else if (str1.substr(i,5)=="aabaa"){
                str2.append("e");
            }
            else if (str1.substr(i,5)=="aabab"){
                str2.append("f");
            }
            else if (str1.substr(i,5)=="aabba"){
                str2.append("g");
            }
            else if (str1.substr(i,5)=="aabbb"){
                str2.append("h");
            }
            else if (str1.substr(i,5)=="abaaa"){
                str2.append("i");
            }
            else if (str1.substr(i,5)=="abaab"){
                str2.append("j");
            }
            else if (str1.substr(i,5)=="ababa"){
                str2.append("k");
            }
            else if (str1.substr(i,5)=="ababb"){
                str2.append("l");
            }
            else if (str1.substr(i,5)=="abbaa"){
                str2.append("m");
            }
            else if (str1.substr(i,5)=="abbab"){
                str2.append("n");
            }
            else if (str1.substr(i,5)=="abbba"){
                str2.append("o");
            }
            else if (str1.substr(i,5)=="abbbb"){
                str2.append("p");
            }
            else if (str1.substr(i,5)=="baaaa"){
                str2.append("q");
            }
            else if (str1.substr(i,5)=="baaab"){
                str2.append("r");
            }
            else if (str1.substr(i,5)=="baaba"){
                str2.append("s");
            }
            else if (str1.substr(i,5)=="baabb"){
                str2.append("t");
            }
            else if (str1.substr(i,5)=="babaa"){
                str2.append("u");
            }
            else if (str1.substr(i,5)=="babab"){
                str2.append("v");
            }
            else if (str1.substr(i,5)=="babba"){
                str2.append("w");
            }
            else if (str1.substr(i,5)=="babbb"){
                str2.append("x");
            }
            else if (str1.substr(i,5)=="bbaaa"){
                str2.append("y");
            }
            else if (str1.substr(i,5)=="bbaab"){
                str2.append("z");
            }
            else{
                str2.append(" ");
                i=i-4;
            }

        }
        return str2;

}
string cc(string(str1),string(str2),int(shift))   //caesar cipher
{
        for (int i=0; i<str1.length();++i){
                int ch=str1[i]+shift;
                char ch2=str1[i];
                if (str1[i]==' '){
                    str2.append(" ");
                    continue;
                }
                if (int(ch)>122&&int(ch2)<122){
                    int fix =122-str1[i];
                    fix =shift-fix; //6
                    ch=96+fix;//102
                    str2=str2+char(ch);
                }
                else if (int(ch)>90&&int(ch2)<90){
                    int fix =90-str1[i];
                    fix =shift-fix;
                    ch=64+fix;
                    str2=str2+char(ch);
                }
                else {
                    str2=str2+char(ch);
                }

        }
        return str2;

}
string dcc(string(str1),string(str2),int(shift))   //caesar decipher
{
        for (int i=0; i<str1.length();++i){
                int ch=str1[i]-shift;
                char ch2=str1[i];
                if (str1[i]==' '){
                    str2.append(" ");
                    continue;
                }
                if (int(ch)<97&&int(ch2)>97){
                    int fix =int(str1[i])-97;
                    fix =shift-fix; //6
                    ch=123-fix;//102
                    str2=str2+char(ch);
                }
                else if (int(ch)<65&&int(ch2)<90){
                    int fix =int(str1[i])-65;
                    fix =shift-fix; //6
                    ch=91-fix;//102
                    str2=str2+char(ch);
                }
                else {
                    str2=str2+char(ch);
                }

        }

        return str2;
}
string ac(string(str1),string(str2),int a,int b,int c)   //affine cipher
{

        for (int i=0; i<str1.length();++i){
                char ch=str1[i];
                if (str1[i]==' '){
                    str2.append(" ");
                    continue;
                }
                if (isdigit(str1[i])){
                    str2+=str1[i];
                    continue;
                }
                if (int(ch)<91&&int(ch)>64){
                    ch=ch-65;
                    ch=(((ch*a)+b) %26);
                    ch=ch+65;
                    str2=str2+ch;
                }
                else {
                    ch=ch-97;
                    ch=(((ch*a)+b) %26);
                    ch=ch+97;
                    str2=str2+ch;
                }

        }
        return str2;

}
string dac(string(str1),string(str2),int a,int b,int c)   //affine decipher
{
        for (int i=0; i<str1.length();++i){
                if (str1[i]==' '){
                    str2.append(" ");
                    continue;
                }
                if (isdigit(str1[i])){
                    str2+=str1[i];
                    continue;
                }
                char ch=str1[i];
                int z;
                if (int(ch)<91&&int(ch)>64){
                    ch=ch-65;
                    ch=ch-b;
                    z=ch;
                    z=z*c;
                    z=z%26;
                    if (z<0){
                        z=26+z;
                    }
                    z=z+65;
                    str2=str2+char(z);
                }
                else {
                    ch=ch-97;
                    ch=ch-b;
                    z=ch;
                    z=z*c;
                    z=z%26;
                    if (z<0){
                        z=26+z;
                    }
                    z=z+97;
                    str2=str2+char(z);
                }

        }
        return str2;

}
string atc(string(str1),string(str2))   //atbash cipher
{

        for (int i=0; i<str1.length();++i){
                char ch=str1[i];
                if (str1[i]==' '){
                    str2.append(" ");
                    continue;
                }
                if (int(ch)<=90){
                    ch=90-int(ch);
                    ch=ch+65;
                    str2=str2+ch;
                }
                else {
                    ch=122-int(ch);
                    ch=ch+97;
                    str2=str2+ch;
                }

        }
        return str2;

}
string datc(string(str1),string(str2))   //atbash decipher
{

        for (int i=0; i<str1.length();++i){
                char ch=str1[i];
                if (str1[i]==' '){
                    str2.append(" ");
                    continue;
                }
                if (int(ch)<90){
                    ch=90-int(ch);
                    ch=ch+65;
                    str2=str2+ch;
                }
                else {
                    ch=122-int(ch);
                    ch=ch+97;
                    str2=str2+ch;
                }

        }
        return str2;

}
string rc(string(str1),string(str2))        //rot13 cipher
{
        for (int i=0; i<str1.length();++i){
                int ch=str1[i]+13;
                char ch2=str1[i];
                if (str1[i]==' '){
                    str2.append(" ");
                    continue;
                }
                if (int(ch)>122&&int(ch2)<122){
                    int fix =122-str1[i];
                    fix =13-fix; //6
                    ch=96+fix;//102
                    str2=str2+char(ch);
                }
                else if (int(ch)>90&&int(ch2)<90){
                    int fix =90-str1[i];
                    fix =13-fix;
                    ch=64+fix;
                    str2=str2+char(ch);
                }
                else {
                    str2=str2+char(ch);
                }

        }
        return str2;

}
int xorc(string(str1),string(str2),char(seckey))    //xor ciphering
{

    for (int i=0;i<str1.length();++i){

        str2+=(char)(int(str1[i])^int(seckey));
        cout<<str2[i];

    }
    cout<<"    hexa:";
    int leng=str2.length();
    for (int i=0;i<leng;++i){
        cout<<setw(2)<<hex<<static_cast<int>(str2[i]);
    }
    return 0;

}
string rfc(string(str1),string(str2),int(key))   // rail fence ciphering
{
    bool ladders=false;
    char keey[key][str1.length()];
    int row=0;
    int column=0;
    for(int i=0; i<key; ++i){
        for(int k=0; k<str1.length(); k++){

            keey[i][k]='.';
        }
    }


    for(int i=0; i<str1.length(); ++i){

        if (row==0 || row==key-1){
            ladders=!ladders;
        }
        column++;
        keey[row][column]=str1[i];


    if(ladders){
        row++;

    }
    else{
        row--;
    }
}
for(int z=0; z<key; ++z){
    for(int k=0; k<str1.length()+1; ++k){
            cout<<keey[z][k];
        if(keey[z][k]!='.'){
                str2.push_back(keey[z][k]);

        }

    }
    cout<<endl;
}
return str2;


return 0;    }
string psc(string(str1),string(str2),char(k1),char(k2),char(k3),char(k4),char(k5))   //Polybius Square Cipher
{
    for (int i=0;i<str1.length();++i){
        if (str1[i]==' '){
            str2.append(" ");
            continue;
        }
        if (str1[i]=='a'){
            str2+=k1;
            str2+=k1;
        }
        else if (str1[i]=='b'){
            str2+=k1;
            str2+=k2;
        }
        else if (str1[i]=='c'){
            str2+=k1;
            str2+=k3;
        }
        else if (str1[i]=='d'){
            str2+=k1;
            str2+=k4;
        }
        else if (str1[i]=='e'){
            str2+=k1;
            str2+=k5;
        }
        else if (str1[i]=='f'){
            str2+=k2;
            str2+=k1;
        }
        else if (str1[i]=='g'){
            str2+=k2;
            str2+=k2;
        }
        else if (str1[i]=='h'){
            str2+=k2;
            str2+=k3;
        }
        else if (str1[i]=='i'){
            str2+=k2;
            str2+=k4;
        }
        else if (str1[i]=='j'){
            str2+=k2;
            str2+=k5;
        }
        else if (str1[i]=='k'){
            str2+=k3;
            str2+=k1;
        }
        else if (str1[i]=='l'){
            str2+=k3;
            str2+=k2;
        }
        else if (str1[i]=='m'){
            str2+=k3;
            str2+=k3;
        }
        else if (str1[i]=='n'){
            str2+=k3;
            str2+=k4;
        }
        else if (str1[i]=='o'){
            str2+=k3;
            str2+=k5;
        }
        else if (str1[i]=='p'){
            str2+=k4;
            str2+=k1;
        }
        else if (str1[i]=='q'){
            str2+=k4;
            str2+=k2;
        }
        else if (str1[i]=='r'){
            str2+=k4;
            str2+=k3;
        }
        else if (str1[i]=='s'){
            str2+=k4;
            str2+=k4;
        }
        else if (str1[i]=='t'){
            str2+=k4;
            str2+=k5;
        }
        else if (str1[i]=='u'){
            str2+=k5;
            str2+=k1;
        }
        else if (str1[i]=='v'){
            str2+=k5;
            str2+=k2;
        }
        else if (str1[i]=='x'){
            str2+=k5;
            str2+=k3;
        }
        else if (str1[i]=='y'){
            str2+=k5;
            str2+=k4;
        }
        else if (str1[i]=='z'){
            str2+=k5;
            str2+=k5;
        }
    }
    return str2;
}
string mcc(string(str1),string(str2))           //morse code cipher
{
    for (int i=0; i<str1.length();++i){
            if (str1[i]=='a'||str1[i]=='A'){
                str2.append(".-");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='b'||str1[i]=='B'){
                str2.append("-...");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='c'||str1[i]=='C'){
                str2.append("-.-.");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='d'||str1[i]=='D'){
                str2.append("-..");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='e'||str1[i]=='E'){
                str2.append(".");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='f'||str1[i]=='F'){
                str2.append("..-.");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='g'||str1[i]=='G'){
                str2.append("--.");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='h'||str1[i]=='H'){
                str2.append("....");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='i'||str1[i]=='I'){
                str2.append("..");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='j'||str1[i]=='J'){
                str2.append(".---");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='k'||str1[i]=='K'){
                str2.append("-.-");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='l'||str1[i]=='L'){
                str2.append(".-..");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='m'||str1[i]=='M'){
                str2.append("--");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='n'||str1[i]=='N'){
                str2.append("-.");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='o'||str1[i]=='O'){
                str2.append("---");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='p'||str1[i]=='P'){
                str2.append(".--.");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='q'||str1[i]=='Q'){
                str2.append("--.-");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='r'||str1[i]=='R'){
                str2.append(".-.");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='s'||str1[i]=='S'){
                str2.append("...");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='t'||str1[i]=='T'){
                str2.append("-");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='u'||str1[i]=='U'){
                str2.append("..-");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='v'||str1[i]=='V'){
                str2.append("...-");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='w'||str1[i]=='W'){
                str2.append(".--");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='x'||str1[i]=='X'){
                str2.append("-..-");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='y'||str1[i]=='Y'){
                str2.append("-.--");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else if (str1[i]=='z'||str1[i]=='Z'){
                str2.append("--..");
                if (str1[i+1]==' '){
                    str2.append("   ");
                }
                else{
                    str2.append(" ");
                }
            }
            else{
                str2.append(" ");
            }

        }
        return str2;

}
string drc(string(str1),string(str2))     //rot13 decipher
{
        for (int i=0; i<str1.length();++i){
                int ch=str1[i]-13;
                char ch2=str1[i];
                if (str1[i]==' '){
                    str2.append(" ");
                    continue;
                }
                if (int(ch)<97&&int(ch2)>97){
                    int fix =int(str1[i])-97;
                    fix =13-fix; //6
                    ch=123-fix;//102
                    str2=str2+char(ch);
                }
                else if (int(ch)<65&&int(ch2)<90){
                    int fix =int(str1[i])-65;
                    fix =13-fix; //6
                    ch=91-fix;//102
                    str2=str2+char(ch);
                }
                else {
                    str2=str2+char(ch);
                }

        }

        return str2;
}
int dxorc(string(str1),string(str2),char(seckey))     //xor deciphering
{
    string newString;
    for(int i=0; i< str1.length(); i+=2)
    {
        string byte = str1.substr(i,2);
        char chr = (char)(int(strtoul(byte.c_str(),nullptr, 16)));
        newString.push_back(chr);
    }
    for (int i=0;i<newString.length()-1;++i){
        str2+=(char)(int(newString[i])^int(seckey));
        cout <<str2[i];
    }
    return 0;

}
string drfc(string str1,string str2, int key)
{
    char keey[key][str1.length()];
    for (int i=0; i < key; i++)
        for (int j=0; j < str1.length(); j++)
            keey[i][j] = '.';
    bool ladders;

    int row = 0, col = 0;

    for (int i=0; i < str1.length(); i++)
    {
        if (row == 0)
            ladders = true;
        if (row == key-1)
            ladders = false;
        keey[row][col++] = '*';
        if (ladders==true){
            row++;
        }
        else{
            row--;
        }
    }
    int index = 0;
    for (int i=0; i<key; i++)
        for (int j=0; j<str1.length(); j++)
            if (keey[i][j] == '*' && index<str1.length())
                keey[i][j] = str1[index++];
    row = 0, col = 0;
    for (int i=0; i< str1.length(); i++)
    {
        if (row == 0)
            ladders = true;
        if (row == key-1)
            ladders = false;
        if (keey[row][col] != '*')
            str2.push_back(keey[row][col++]);

        if (ladders==true){
            row++;
        }
        else{
            row--;
        }
    }
    return str2;
}
string dpsc(string(str1),string(str2),char(k1),char(k2),char(k3),char(k4),char(k5))         //Polybius Square deCipher
{
    for (int i=0;i<str1.length();++i){
/*        if (str1[i]==' ' || str1[i+1]==' '){
            continue;
        }*/
        if (str1[i]==k1&&str1[i+1]==k1){
            str2.append("a");
        }
        else if (str1[i]==k1&&str1[i+1]==k2){
            str2.append("b");
        }
        else if (str1[i]==k1&&str1[i+1]==k3){
            str2.append("c");
        }
        else if (str1[i]==k1&&str1[i+1]==k4){
            str2.append("d");
        }
        else if (str1[i]==k1&&str1[i+1]==k5){
            str2.append("e");
        }
        else if (str1[i]==k2&&str1[i+1]==k1){
            str2.append("f");
        }
        else if (str1[i]==k2&&str1[i+1]==k2){
            str2.append("g");
        }
        else if (str1[i]==k2&&str1[i+1]==k3){
            str2.append("h");
        }
        else if (str1[i]==k2&&str1[i+1]==k4){
            str2.append("i");
        }
        else if (str1[i]==k2&&str1[i+1]==k5){
            str2.append("j");
        }
        else if (str1[i]==k3&&str1[i+1]==k1){
            str2.append("k");
        }
        else if (str1[i]==k3&&str1[i+1]==k2){
            str2.append("l");
        }
        else if (str1[i]==k3&&str1[i+1]==k3){
            str2.append("m");
        }
        else if (str1[i]==k3&&str1[i+1]==k4){
            str2.append("n");
        }
        else if (str1[i]==k3&&str1[i+1]==k5){
            str2.append("o");
        }
        else if (str1[i]==k4&&str1[i+1]==k1){
            str2.append("p");
        }
        else if (str1[i]==k4&&str1[i+1]==k2){
            str2.append("q");
        }
        else if (str1[i]==k4&&str1[i+1]==k3){
            str2.append("r");
        }
        else if (str1[i]==k4&&str1[i+1]==k4){
            str2.append("s");
        }
        else if (str1[i]==k4&&str1[i+1]==k5){
            str2.append("t");
        }
        else if (str1[i]==k5&&str1[i+1]==k1){
            str2.append("u");
        }
        else if (str1[i]==k5&&str1[i+1]==k2){
            str2.append("v");
        }
        else if (str1[i]==k5&&str1[i+1]==k3){
            str2.append("x");
        }
        else if (str1[i]==k5&&str1[i+1]==k4){
            str2.append("y");
        }
        else if (str1[i]==k5&&str1[i+1]==k5){
            str2.append("z");
        }
        else {
            str2.append(" ");
            continue;
        }
        i=i+1;
    }
    return str2;
}
string dmcc(string(str1),string(str2))        //morse code decipher
{
    string tempstring;
    for (int i=0; i<=str1.length();++i){
            if (str1[i]==' '||i==str1.length()){
                if (tempstring==".-"){
                    str2.append("a");
                    tempstring="";
                }
                else if (tempstring=="-.."){
                    str2.append("b");
                    tempstring="";
                }
                else if (tempstring=="-.-."){
                    str2.append("c");
                    tempstring="";
                }
                else if (tempstring=="-.."){
                    str2.append("d");
                    tempstring="";
                }
                else if (tempstring=="."){
                    str2.append("e");
                    tempstring="";
                }
                else if (tempstring=="..-."){
                    str2.append("f");
                    tempstring="";
                }
                else if (tempstring=="--."){
                    str2.append("g");
                    tempstring="";
                }
                else if (tempstring=="...."){
                    str2.append("h");
                    tempstring="";
                }
                else if (tempstring==".."){
                    str2.append("i");
                    tempstring="";
                }
                else if (tempstring==".---"){
                    str2.append("j");
                    tempstring="";
                }
                else if (tempstring=="-.-"){
                    str2.append("k");
                    tempstring="";
                }
                else if (tempstring==".-.."){
                    str2.append("l");
                    tempstring="";
                }
                else if (tempstring=="--"){
                    str2.append("m");
                    tempstring="";
                }
                else if (tempstring=="-."){
                    str2.append("n");
                    tempstring="";
                }
                else if (tempstring=="---"){
                    str2.append("o");
                    tempstring="";
                }
                else if (tempstring==".--."){
                    str2.append("p");
                    tempstring="";
                }
                else if (tempstring=="--.-"){
                    str2.append("q");
                    tempstring="";
                }
                else if (tempstring==".-."){
                    str2.append("r");
                    tempstring="";
                }
                else if (tempstring=="..."){
                    str2.append("s");
                    tempstring="";
                }
                else if (tempstring=="-"){
                    str2.append("t");
                    tempstring="";
                }
                else if (tempstring=="..-"){
                    str2.append("u");
                    tempstring="";
                }
                else if (tempstring=="...-"){
                    str2.append("v");
                    tempstring="";
                }
                else if (tempstring==".---"){
                    str2.append("w");
                    tempstring="";
                }
                else if (tempstring=="-..-"){
                    str2.append("x");
                    tempstring="";
                }
                else if (tempstring=="-.--"){
                    str2.append("y");
                    tempstring="";
                }
                else if (tempstring=="--.."){
                    str2.append("z");
                    tempstring="";
                }
                else{
                    str2.append(" ");
                }

                str2.append(" ");
                continue;
            }
            tempstring+=str1[i];

    }

    return str2;
    }

int main()
{
    while (true){

        int system;     //type of the system
        cout <<"************************"<<endl;
        cout <<"Ahlan Ya User Ya Habeby"<<endl;
        cout << "what do you like to do today?"<<endl;
        cout << "1- Cipher a message"<<endl;
        cout << "2- Decipher a message"<<endl;
        cout << "3- End"<<endl;
        cout << "system type:";
        cin >> system;
        cout <<"************************"<<endl;
        if (system==1){   //ciphering system
            cout<<"Choose the cipher system you want: 1-simple substitution cipher//2-baconian cipher//3-caesar cipher//4-affine cipher//5-atbash cipher//6-rot13 cipher//7-polybius square cipher//8-morse code cipher//9-xor cipher//10-rail-fence cipher"<<endl;
            int choice;
            cout<<"ciphering system:";
            cin >> choice;
            if (choice==1){     //simple substitution cipher
                string str1;
                string str2;
                string keyword;
                cout << "Enter A Message To cipher:";
                getline(cin, str1);
                getline(cin, str1);
                bool tf=false;
                while(tf==false){
                    tf=true;
                    cout << "Enter a 5 unique letter keyword:";
                    cin >> keyword;
                    if (keyword.length()==5){
                        for (int i=0;i<keyword.length();++i){
                            for (int z=0;z<keyword.length();++z){
                                if (z==i){
                                    continue;
                                }
                                if (keyword[i]==keyword[z]){
                                    tf=false;
                                }

                            }
                        }
                    }
                    else{
                        tf=false;
                    }
                }
                cout<<ssc(str1,str2,keyword)<<endl;
            }
            else if(choice==2){     //baconian cipher
                string str1;
                string str2;
                cout << "Enter A Message To cipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout<<bc(str1,str2)<<endl;
            }
            else if (choice==3){    //caesar cipher

                string str1;
                string str2;
                int shift;
                cout << "Enter A Message To cipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout << "Enter The Shift Number:";
                cin >> shift;
                cout << cc(str1,str2,shift)<<endl;
            }
            else if(choice==4){     //affine cipher
                string str1;
                string str2;
                int a,b,c;
                cout << "Enter A Message To cipher:";
                getline(cin, str1);
                getline(cin, str1);
                while (true){
                    cout << "Enter The Keys:"<<endl;
                    cin >> a >> b >>c;
                    if((a * c) % 26 == 1){
                        break;
                    }
                }
                cout<<ac(str1,str2,a,b,c)<<endl;
            }
            else if(choice==5){     //atbash cipher
                string str1;
                string str2;
                cout << "Enter A Message To cipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout<<atc(str1,str2)<<endl;
            }
            else if(choice==6){     //rot13 cipher
                string str1;
                string str2;
                cout << "Enter A Message To cipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout<<rc(str1,str2)<<endl;
            }
            else if(choice==7){     //Polybius Square Cipher
                string str1;
                string str2;
                char k1,k2,k3,k4,k5;
                cout << "Enter A Message To cipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout << "enter in order 5 key numbers:";
                cin >> k1>>k2>>k3>>k4>>k5;
                cout<<psc(str1,str2,k1,k2,k3,k4,k5)<<endl;
            }
            else if(choice==8){     //morsecode cipher
                string str1;
                string str2;
                cout << "Enter A Message To cipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout<<mcc(str1,str2)<<endl;
            }
            else if(choice==9){     //xor cipher
                string str1;
                string str2;
                char seckey;
                cout << "Enter A Message To cipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout << "Enter The Secret key:";
                cin >> seckey;
                cout<<xorc(str1,str2,seckey)<<endl;
            }
            else if(choice==10){     //railfence cipher
                string str1;
                string str2;
                int linees;
                cout << "Enter A Message To cipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout << "enter the key lines:";
                cin >> linees;
                cout<<rfc(str1,str2,linees)<<endl;
            }

        }
        else if (system==2){    //deciphering system
            cout<<"Choose the decipher system you want: 1-simple substitution decipher//2-baconian decipher//3-caesar decipher//4-affine decipher//5-atbash decipher//6-rot13 decipher//7-polybius square decipher//8-morse code decipher//9-xor decipher//10-rail-fence cipher"<<endl;
            int choice;
            cout <<"deciphering system:";
            cin >> choice;
            if (choice==1){ //simple substitution decipher
                string str1;
                string str2;
                string keyword;
                cout << "Enter A Message To cipher:";
                getline(cin, str1);
                getline(cin, str1);
                bool tf=false;
                while(tf==false){
                    tf=true;
                    cout << "Enter a 5 unique letter keyword:";
                    cin >> keyword;
                    if (keyword.length()==5){
                        for (int i=0;i<keyword.length();++i){
                            for (int z=0;z<keyword.length();++z){
                                if (z==i){
                                    continue;
                                }
                                if (keyword[i]==keyword[z]){
                                    tf=false;
                                }

                            }
                        }
                    }
                    else{
                        tf=false;
                    }
                }
                cout<<dssc(str1,str2,keyword)<<endl;
            }
            else if(choice==2){   // baconian decipher
                string str1;
                string str2;
                cout << "Enter A Message To decipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout<<dbc(str1,str2)<<endl;
            }
            else if(choice==3){   // caesar decipher
                string str1;
                string str2;
                int shift;
                cout << "Enter A Message To decipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout << "Enter The Shift Number:";
                cin >> shift;
                cout<<dcc(str1,str2,shift)<<endl;
            }
            else if(choice==4){   // affine decipher
                string str1;
                string str2;
                int a,b,c;
                cout << "Enter A Message To decipher:";
                getline(cin, str1);
                getline(cin, str1);
                while (true){
                    cout << "Enter The Keys:"<<endl;
                    cin >> a >> b >>c;
                    if((a * c) % 26 == 1){
                        break;
                    }
                }
                cout<<dac(str1,str2,a,b,c)<<endl;
            }
            else if(choice==5){   // ATBASH decipher
                string str1;
                string str2;
                cout << "Enter A Message To decipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout<<atc(str1,str2)<<endl;
            }
            else if(choice==6){     //rot13 decipher
                string str1;
                string str2;
                cout << "Enter A Message To decipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout<<drc(str1,str2)<<endl;
            }
            else if(choice==7){     //Polybius Square deCipher
                string str1;
                string str2;
                char k1,k2,k3,k4,k5;
                cout << "Enter A Message To decipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout << "enter in order 5 key numbers:";
                cin >> k1>>k2>>k3>>k4>>k5;
                cout<<dpsc(str1,str2,k1,k2,k3,k4,k5)<<endl;
            }
            else if(choice==8){     //morsecode decipher
                string str1;
                string str2;
                cout << "Enter A Message To decipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout<<dmcc(str1,str2)<<endl;
            }
            else if(choice==9){     //xor decipher
                string str1;
                string str2;
                char seckey;
                cout << "Enter A Message To decipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout << "Enter The Secret key:";
                cin >> seckey;
                cout<<"Deciphered Message:";
                cout<<dxorc(str1,str2,seckey)<<endl;
            }
            else if(choice==10){     //railfence decipher
                string str1;
                string str2;
                int linees;
                cout << "Enter A Message To decipher:";
                getline(cin, str1);
                getline(cin, str1);
                cout << "enter the key lines:";
                cin >> linees;
                cout<<drfc(str1,str2,linees)<<endl;
            }


        }

        else if (system==3){  //end system
            break;
        }
    }
    return 0;
}
