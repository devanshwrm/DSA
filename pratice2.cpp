/* #include <iostream>
using namespace std;
int main()
{
    int date,pm=3000;
    for(date=1;date<=31;date++)
    {
        if (date%2==0)
        {
            continue;
        }
        if (pm==0)
        {
            cout<<date<<". Neha will not go on date with her bf"<<endl;
            break;
        }
        cout<<date<<". Neha will go on date with her bf"<<endl;
        pm=pm-300;
    }
    return 0;
} */


/* #include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=0;i<=100;i++)
    {
        if (i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
} */


/* #include<iostream>
using namespace std;
int main()
{
    //body here
    int n,i;
    cin>>n;"\n";
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            cout<<"non prime"<<endl;
            break;
        }
    }
    if (i==n)
    {
        cout<<"prime"<<endl;
    }
    return 0;
} */


/* #include<iostream>
using namespace std;
int main()
{
    //body here
    int a,b,num,i;
    cin>>a>>b;
    cout<<endl;
    for (num=a;num<=b;num++)
    {
        for (i=2;i<num;i++)
        {
            if (num%i==0)
            {
                break;
            }
        }
        if (i==num)
        {
            cout<<num<<endl;
        }
    }
    return 0;
} */



// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int i,n;
//     cin>>n;
//     cout<<endl;
//     for (i=1;i<=n;i++)
//     {
//         if (i%2==0)
//         {
//             continue;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     char button;
//     cin>>button;
//     switch(button)
//     {
//         case 'a':
//         cout<<"hey"<<endl;
//         break;
//         case 'b':
//         cout<<"mf"<<endl;
//         break;
//         case 'c':
//         cout<<"nigga"<<endl;
//         break;
//         case 'd':
//         cout<<"f u"<<endl;
//         break;
//         case 'e':
//         cout<<"sus"<<endl;
//         break;
//         default:
//         cout<<"i like u"<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     float n1,n2;
//     char op;
//     cout<<"Enter the numbers"<<endl;
//     cin>>n1>>n2;
//     cout<<"Enter the operator"<<endl;
//     cin>>op;
//     switch (op)
//     {
//     case('+'):
//     cout<<n1+n2<<endl;
//         break;
//         case('-'):
//     cout<<n1-n2<<endl;
//         break;
//         case('*'):
//     cout<<n1*n2<<endl;
//         break;
//         case('/'):
//     cout<<n1/n2<<endl;
//         break;
    
//     default:
//     cout<<"nigga"<<endl;
//         break;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main()
// {
//     char c;
//     cout<<"Enter the alphabet"<<endl;
//     cin>>c;
//     switch(c)
//     {
//         case('a'):
//         cout<<"vowel"<<endl;
//         break;
//         case('e'):
//         cout<<"vowel"<<endl;
//         break;
//         case('i'):
//         cout<<"vowel"<<endl;
//         break;
//         case('o'):
//         cout<<"vowel"<<endl;
//         break;
//         case('u'):
//         cout<<"vowel"<<endl;
//         break;
//         default:
//         cout<<"consonant"<<endl;

//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main ()
// {
//     int row,col,i,j;
//     cout<<"Enter no. of rows: "<<endl;
//     cin>>row;
//     cout<<"Enter no. of columns: "<<endl;
//     cin>>col;
//     for(i=1;i<=row;i++)
//     {
//         for(j=1;j<=col;j++)
//         {
//             cout<<" *";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int row,col,i,j;
//     cin>>row>>col;
//     for(i=1;i<=row;i++)
//     {
//         for(j=1;j<=col;j++)
//         {
//             if(i==1||i==row||j==1||j==col)
//             {
//                 cout<<"*";
//             }
//             else 
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j;
//     cin>>n;
//     for(i=n;i>=1;i--)
//     {
//         for(j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j;
//     cin>>n;
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,i,j;
//     cin>>n;
//     for (i=1;i<=n;i++)
//     {
//         for (j=0;j<=n;j++)
//         {
//             if (j<=n-i)
//             {
//                 cout<<"  ";
//             }
//             else 
//             {
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j;
//     cin>>n;
//     for (i=1;i<=n;i++)
//     {
//         for (j=1;j<=i;j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j,count=1;
//     cin>>n;
//     for (i=1;i<=n;i++)
//     {
//         for (j=1;j<=i;j++)
//         {
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j,space;
//     cin>>n;
//     for (i=1;i<=n;i++)
//     {
//         for (j=1;j<=i;j++)
//         {
//             cout<<"* ";
//         }
//         space=2*n-2*i;
//         for(j=1;j<=space;j++)
//         {
//             cout<<"  ";
//         }
//         for (j=1;j<=i;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for (i=n;i>=1;i--)
//     {
//         for (j=1;j<=i;j++)
//         {
//             cout<<"* ";
//         }
//         space=2*n-2*i;
//         for(j=1;j<=space;j++)
//         {
//             cout<<"  ";
//         }
//         for (j=1;j<=i;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j;
//     cin>>n;
//     for(i=n;i>=1;i--)
//     {
//         for (j=1;j<=i;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j;
//     cin>>n;
//     for(i=1;i<=n;i++)
//     {
//         for (j=1;j<=i;j++)
//         {
//             if ((i+j)%2==0)
//             {
//             cout<<"1"<<" ";
//             }
//             else 
//             {
//                 cout<<"0"<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j;
//     cin>>n;
//     for (i=1;i<=n;i++)
//     {
//         for (j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         for (j=1;j<=n;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j;
//     cin>>n;
//     for (i=1;i<=n;i++)
//     {
//         for(j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         for(j=1;j<=i;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j;
//     cin>>n;
//     for (i=1;i<=n;i++)
//     {
//         for (j=1;j<=n-i;j++)
//         {
//             cout<<"  ";
//         }
//         for (j=i;j>=1;j--)
//         {
//             cout<<j<<" ";
//         }
//         for(j=2;j<=i;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j;
//     cin>>n;
//     for (i=1;i<=n;i++)
//     {
//         for (j=1;j<=n-i;j++)
//         {
//             cout<<"  ";
//         }
//         for (j=1;j<=2*i-1;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for (i=n;i>=1;i--)
//     {
//         for (j=1;j<=n-i;j++)
//         {
//             cout<<"  ";
//         }
//         for (j=1;j<=2*i-1;j++)
//         {
//         cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j;
//     cin>>n;
//     for (i=1;i<=3;i++)
//     {
//         for (j=1;j<=n;j++)
//         {
//             if (((i+j)%4==0)||((j%4==0)&&i==2))
//             {
//                 cout<<"*  ";
//             }   
//             else 
//             {
//                 cout<<"   ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j;
//     cin>>n;
//     for (i=1;i<=n;i++)
//     {
//         for (j=1;j<=i;j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j;
//     cin>>n;
//     for (i=n;i>=1;i--)
//     {
//         for (j=1;j<=i;j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,i,j;
//     cin>>n;
//     for (i=1;i<=n;i++)
//     {
//         for (j=1;j<=n-i;j++)
//         {
//         cout<<" ";
//         }
//         for(j=1;j<=2*i-1;j++)
//         {
//             if (i==1||j==1||j==2*i-1)
//             {
//                 cout<<"*";
//             }
//             else 
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//         for (i=n;i>=1;i--)
//     {
//         for (j=1;j<=n-i;j++)
//         {
//         cout<<" ";
//         }
//         for(j=1;j<=2*i-1;j++)
//         {
//             if (i==1||j==1||j==2*i-1)
//             {
//                 cout<<"*";
//             }
//             else 
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j;
//     cin>>n;
//     for (i=1;i<=n;i++)
//     {
//         for (j=1;j<=n-i;j++)
//         {
//             cout<<"*";
//         }
//         for (j=1;j<=2*i-1;j++)
//         {
//             if (j==1||j==2*i-1)
//             {
//                 cout<<"*";
//             }
//                 else 
//                 {
//                     cout<<" ";
//                 }
//         }
//         for (j=n-i;j>=1;j--)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for (i=n;i>=1;i--)
//     {
//         for (j=1;j<=n-i;j++)
//         {
//             cout<<"*";
//         }
//         for (j=1;j<=2*i-1;j++)
//         {
//             if (j==1||j==2*i-1)
//             {
//                 cout<<"*";
//             }
//                 else 
//                 {
//                     cout<<" ";
//                 }
//         }
//         for (j=n-i;j>=1;j--)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,i,j;
//     cin>>n;
//     for(i=1;i<=n;i++)
//     {
//         for (j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         for (j=1;j<=n;j++)
//         {
//             if (j==1||j==n||i==1||i==n)
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i,j,space;
//     cin>>n;
//     for (i=1;i<=n;i++)
//     {
//         for (j=1;j<=i;j++)
//         {
//             if (j==1||j==i)
//             {
//                 cout<<"*";
//             }
//             else 
//             {
//                 cout<<" ";
//             }
//         }
//         space=2*n-2*i;
//         for (j=1;j<=space;j++)
//         {
//             cout<<" ";
//         }
//         for (j=1;j<=i;j++)
//         {
//             if (j==1||j==i)
//             {
//                 cout<<"*";
//             }
//             else 
//             {
//                 cout<<" ";
//             }            
//         }
//         cout<<endl;
//     }
//     for (i=n;i>=1;i--)
//     {
//         for (j=1;j<=i;j++)
//         {
//             if (j==1||j==i)
//             {
//                 cout<<"*";
//             }
//             else 
//             {
//                 cout<<" ";
//             }
//         }
//         space=2*n-2*i;
//         for (j=1;j<=space;j++)
//         {
//             cout<<" ";
//         }
//         for (j=1;j<=i;j++)
//         {
//             if (j==1||j==i)
//             {
//                 cout<<"*";
//             }
//             else 
//             {
//                 cout<<" ";
//             }            
//         }
//         cout<<endl;
//     }    

//     return 0;
// }