#include<stdio.h>
#include<time.h>
int main()
{
  struct tm *ptr;
  time_t t;
  t = time(NULL);
  ptr = localtime(&t);
  int A=70,B=15,C=15,D=15,E=25,F=25,u,z;
  int G=15,H=35,I=35,J=35,K=40,L=45,M=45,N=45,O=50,P=50;
  int a;

  printf("1.Chole bhature =70\t2.Poha =15\n3.Shira =15\t\t4.Upma =15\n5.Sabudana wada =25\t6.Sabudana khichadi =25\n");
  printf("7.Batata vada =15\t8.Mendu wada =35\n9.Idlli sambar =35\t10.Sada dosa =35\n11.Paper dosa =40\t12.Masala dosa =45\n");
  printf("13.Onion uttapa =45\t14.Tamato uttapa =45\n15.Masala uttapa =50\t16.Maisur uttapa =50 ");
  printf("\nEnter the no. according to dish\n");
  scanf("%d",&z);
  switch(z)
  {
  case 1:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf(" %s",asctime (ptr));
  printf(" price is %d*%d=%d\n ",A,u,(A*u));
  printf("dlivery charge =40 + 18 Persent GST\n");
  A*=u;
  a=(A*18)/100;
  A+=a;
  A+=40;
  printf("Grand total = %d",A);
  break;
  case 2:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf("%s",asctime (ptr));
  printf("price is %d*%d=%d\n ",B,u,(B*u));
  printf("dlivery charge =40  +  18 Persent GST\n");
  B*=u;
  a=(B*18)/100;
  B+=a;
  B+=40;
  printf("\nGrand total = %d",B);
   break;
  case 3:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf("%s",asctime (ptr));
  printf("price is %d*%d=%d\n ",C,u,(C*u));
  printf("dlivery charge =40  +  18 Persent GST\n");
  C*=u;
  a=(C*18)/100;
  C+=a;
  C+=40;
  printf("Grand total = %d",C);
   break;
  case 4:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf("%s",asctime (ptr));
  printf("price is %d*%d=%d\n ",D,u,(D*u));
  printf("dlivery charge =40  +  18 Persent GST\n");
  D*=u;
  a=(D*18)/100;
  D+=a;
  D+=40;
  printf("Grand total = %d",D);
   break;
  case 5:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf("%s",asctime (ptr));
  printf("price is %d*%d=%d\n ",E,u,(E*u));
  printf("dlivery charge =40  +  18 Persent GST\n");
  E*=u;
  a=(E*18)/100;
  E+=a;
  E+=40;
  printf("Grand total = %d",E);
   break;
  case 6:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf("%s",asctime (ptr));
  printf("price is %d*%d=%d\n ",F,u,(F*u));
  printf("dlivery charge =40  +  18 Persent GST\n");
  F*=u;
  a=(F*18)/100;
  F+=a;
  F+=40;
  printf("Grand total = %d",F);
   break;
  case 7:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf("%s",asctime (ptr));
  printf("price is %d*%d=%d\n ",G,u,(G*u));
  printf("dlivery charge =40  +  18 Persent GST\n");
  G*=u;
  a=(G*18)/100;
  G+=a;
  G+=40;
  printf("Grand total = %d",G);
   break;
  case 8:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf("%s",asctime (ptr));
  printf("price is %d*%d=%d\n ",H,u,(H*u));
  printf("dlivery charge =40  +  18 Persent GST\n");
  H*=u;
  a=(H*18)/100;
  H+=a;
  H+=40;
  printf("Grand total = %d",H);
   break;
  case 9:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf("%s",asctime (ptr));
  printf("price is %d*%d=%d\n ",I,u,(I*u));
  printf("dlivery charge =40  +  18 Persent GST\n");
  I*=u;
  a=(I*18)/100;
  I+=a;
  I+=40;
  printf("Grand total = %d",I);
   break;
  case 10:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf("%s",asctime (ptr));
  printf("price is %d*%d=%d\n ",J,u,(J*u));
  printf("dlivery charge =40  +  18 Persent GST\n");
  J*=u;
  a=(J*18)/100;
  J+=a;
  J+=40;
  printf("Grand total = %d",J);
   break;
  case 11:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf("%s",asctime (ptr));
  printf("price is %d*%d=%d\n ",K,u,(K*u));
  printf("dlivery charge =40  +  18 Persent GST\n");
  K*=u;
  a=(K*18)/100;
  K+=a;
  K+=40;
  printf("Grand total = %d",K);
   break;
  case 12:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf("%s",asctime (ptr));
  printf("price is %d*%d=%d\n ",L,u,(L*u));
  printf("dlivery charge =40  +  18 Persent GST\n");
  L*=u;
  a=(L*18)/100;
  L+=a;
  L+=40;
  printf("Grand total = %d",L);
   break;
  case 13:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf("%s",asctime (ptr));
  printf("price is %d*%d=%d\n ",M,u,(M*u));
  printf("dlivery charge =40  +  18 Persent GST\n");
  M*=u;
  a=(M*18)/100;
  M+=a;
  M+=40;
  printf("Grand total = %d",M);
   break;
  case 14:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf("%s",asctime (ptr));
  printf("price is %d*%d=%d\n ",N,u,(N*u));
  printf("dlivery charge =40  +  18 Persent GST\n");
  N*=u;
  a=(N*18)/100;
  N+=a;
  N+=40;
  printf("Grand total = %d",N);
   break;
  case 15:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf("%s",asctime (ptr));
  printf("price is %d*%d=%d\n ",O,u,(O*u));
  printf("dlivery charge =40  +  18 Persent GST\n");
  O*=u;
  a=(O*18)/100;
  O+=a;
  O+=40;
  printf("Grand total = %d",O);
   break;
  case 16:
  printf("Enter your quntity\n");
  scanf("%d",&u);
  printf("%s",asctime (ptr));
  printf("price is %d*%d=%d\n ",P,u,(P*u));
  printf("dlivery charge =40  +  18 Persent GST\n");
  P*=u;
  a=(P*18)/100;
  P+=a;
  P+=40;
  printf("Grand total = %d",P);
 break;
  default:
    printf("invalid");
  }
}

