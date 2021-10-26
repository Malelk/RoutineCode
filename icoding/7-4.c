#include<stdio.h>
#include<string.h>

int isChar(char c) {
    if (c>='A'&&c<='Z')
    {
        return 1;
    }
    else return 0;
    
//    (c>='A'&&c<='Z')? return 1:return 0;
}
int tran(char c) {
    switch (c)
    {
    case 'A':
    case 'B':
    case 'C':
        return 2;//2=ABC，3=DEF，4=GHI，5=JKL，6=MNO，7=PQRS，8=TUV，9=WXYZ
        break;
    case 'D':
    case 'E':
    case 'F':
        return 3;
        break;
    case 'G':
    case 'H':
    case 'I':
        return 4;
        break;
    case 'J':
    case 'K':
    case 'L':
        return 5;
        break;       
    case 'M':
    case 'N':
    case 'O':
        return 6;//6=MNO，7=PQRS，8=TUV，9=WXYZ
        break;    
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
        return 7;//6=MNO，7=PQRS，8=TUV，9=WXYZ
        break;
    case 'T':
    case 'U':
    case 'V':
        return 8;//6=MNO，7=PQRS，8=TUV，9=WXYZ
        break; 
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
        return 9;//6=MNO，7=PQRS，8=TUV，9=WXYZ
        break;        
    default:
        return 0;
    }
    return 0;
}

int main() {
    char s[105];
    gets(s);
//    printf("%s",s);
    for(int i = 0;i<strlen(s);i++) {
        if(isChar(s[i])) printf("%d",tran(s[i]) );
        else printf("%c",s[i]) ;
    }
    return 0;
}