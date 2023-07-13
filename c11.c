//1
// #include <stdio.h>
//  int main(){
//      int i,j;
//      for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j<=i)
//             printf("*");
//         }
//         printf("\n");
//      }
//      return 0;
//       }



//2
// #include <stdio.h>
//  int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j>=6-i)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
//  }




//3
// #include <stdio.h>
//  int main(){
//      int i,j;
//      for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j<=6-i)
//             printf("*");
//         }
//         printf("\n");
//      }
//      return 0;
//       }





//4
// #include <stdio.h>
//  int main(){
//      int i,j;
//      for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j>=i)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//      }
//      return 0;
//       }




//5
// #include <stdio.h>
//  int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j<=i)
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
//  }



//6
// #include <stdio.h>
//  int main(){
//      int i,j,k;
//      for(i=1;i<=4;i++){
//         k=i;
//         for(j=1;j<=4;j++){
//            if(j<=i){
//             printf("%d",k);
//             k--;
//            }
//         }
//         printf("\n");
//      }
//      return 0;
//  }



//7
// #include <stdio.h>
//  int main(){
//     int i,j,k;
//     for(i=1;i<=5;i++){
//         k=65;
//         for(j=1;j<=5;j++){
//             if(j>=i){
//                 printf("%c",k);
//                 k++;
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
//  }



//8
// #include <stdio.h>
//  int main(){
//      int i,j,k;
//      k=1;
//      for(i=1;i<=4;i++){
//         for(j=1;j<=4;j++){
//             if(j<=i){
//                 printf("%d",k);
//                 k++;
//             }
//         }
//         printf("\n");
//      }
//      return 0;
//  }




//9
// #include <stdio.h>
//  int main(){
//     int i,j,k;
//     for(i=1;i<=5;i++){
//     k=65;
//         for(j=1;j<=5;j++){
//             if(j>=i)
//                 printf("%c",k);
//             else
//             printf(" ");
//             k++;  //ye loop se bahar hoga kyuki chahhe print ho ya nhi hmko increment karna hai
//         }
//         printf("\n");
//     }
//     return 0;
//  }




//10
// #include <stdio.h>
//  int main(){
//      int i,j;
//      for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(i==1 || i==5)
//                 printf("*");
//             if(i==2 || i==3 || i==4){
//                 if(j==1 || j==5)
//                    printf("*");
//                 else
//                 printf(" ");
//             }
//         }
//         printf("\n");
//      }
//      return 0;
//  }