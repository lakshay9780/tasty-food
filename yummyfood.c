#include<conio.h>
#include<stdio.h>
#include<dos.h>
void main()
{
int a,b,c,d,e,l,f,g,h,i,j;
label:


printf("  WELCOME TO CRAZY FOOD ");
printf("\n\n\n ORDER YOUR FOOD IN JUST FEW STEPS\n ");
printf("\n press 1 for ITALIAN");
printf("\n press 2 for CONTINENTAL");
printf("\n press 3 for CHINESE");
printf("\n press 4 for FRENCH");
printf("\n press 5 for INDIAN");
printf("\n press 6 for MEXICAN");
printf("\n press 7 for JAPANESE");
printf("\n press 8 for BEVERAGES");
printf("\n press 9 for DESSERTS");
printf("\n enter your choice = ")  ;
scanf("%d",&a);
switch(a)
{
case 1:  printf("\n press 1 for RED SAUCE PASTA    Rs.240  ");
printf("\n press 2 for WHITE SAUSE PASTA   Rs.260");
printf("\n press 3 for POLLO PESTO PASTA   Rs.350");
printf("\n press 4 for PIZZA SICILIANA   Rs.400");
printf("\n press 5 for AGIO OLIO PASTA   Rs.380");
printf("\n press 6 for PIZZA FRITTA   Rs.420");
printf("\n press 7 for CAPRICCIOSA PIZZA   Rs.400");
printf("\n enter your choice = ");
scanf("%d",&j);
switch (j)
{
case 1:printf("\n THANK YOU \nyour order of RED SAUSE PASTA has been placed ");break;
case 2:printf("\n THANK YOU \n your order of WHITE SAUSE PASTA has been placed ");break;
case 3:printf("\n THANK YOU \nyour  order of POLLO PESTO PASTA has been placed ");break;
case 4:printf("\n THANK YOU \nyour order of PIZZA SICILIANA has been placed ");break;
case 5:printf("\n THANK YOU \nyour order of AGIO OLIO PASTAhas been placed ");break;
case 6:printf("\n THANK YOU \nyour order of PIZZA FRITTA has been placed ");break;
case 7:printf("\n THANK YOU   \nyour order of CAPRCCINOSA has been placed ");break;
default:printf("\n enter the correct option");
}
break;

case 2:  printf("\n press 1 for CHEESE STEAK SIZZILER   Rs.450");
printf("\n press 2 for PAN CAKES    Rs.150");
printf("\n press 3 for HASH BROWN   Rs180");
printf("\n press 4 for SWEET POTATO PIE   Rs.200");
printf("\n press 5 for CHICKEN CHEESE SALAD   Rs.350");
printf("\n press 6 for STUFFED POTATOES   Rs.250");
printf("\n press 7 for BAKED MUSHROOM   Rs.200");
printf("\n enter your choice = ") ;
scanf("%d",&i);
switch(i)
{
case 1:printf("\n thank you \nyour order of CHEESE STEAK SIZZILER has been placed ");break;
case 2:printf("\n thank you \nyour order of PAN CAKES has been placed ");break;
case 3:printf("\n thank you \nyour order of HASH BROWN has been placed ");break;
case 4:printf("\n thank you \nyour order of SWEET POTATO has been placed ");break;
case 5:printf("\n thank you \nyour order of CHICKEN CHEESE SALAD has been placed ");break;
case 6:printf("\n thank you \nyour order of STUFFED POTATOES has been placed ");break;
case 7:printf("\n thank you \nyour order of BAKED MUSHROOM has been placed ");break;
default:printf("\n enter the correct option");
}
break;
case 3: printf("\n press 1 for MANCHURIAN   Rs.180");
printf("\n press 2 for MANCHOW SOUP   Rs.120");
printf("\n press 3 for SPRING ROLLS   Rs.100");
printf("\n press 4 for SCHEZUAN RICE   Rs.180");
printf("\n press 5 for FRIED RICE   Rs.150");
printf("\n press 6 for DIMSUMS   Rs.220");
printf("\n press 7 for HAKKA NOODLES   Rs.180");
printf("\n enter your choice = ")  ;
scanf("\n %d",&h);
switch (h)
{
case 1:printf("\n thank you \nyour order of MANCHURIAN has been placed ");break;
case 2:printf("\n thank you \nyour order of MANCHOW SOUP has been placed ");break;
case 3:printf("\n thank you \nyour order of SPRING ROLLS has been placed"); break;
case 4:printf("\n thank you \nyour order of SCHEZUAN RICE has been placed ");break;
case 5:printf("\n thank you \nyour order of FRIED RICE has been placed"); break;
case 6:printf("\n thank you \nyour order of DIMSUMS has been placed ");break;
case 7:printf("\n thank you \nyour order of HAKKA NOODLES has been placed ");break;
default:printf("\n enter the correct option");
}
break;
case 4: printf("\n press 1 for FRENCH FRIES   Rs.90");
printf("\n press 2 for FRENCH TOAST   Rs.160");
printf("\n press 3 for MACAROONS   Rs200");
printf("\n press 4 for STUFFED FRENCH TOAST   Rs.260");
printf("\n press 5 for STUFFED TOMATOS   Rs.200");
printf("\n press 6 for SCALLOPS   Rs.280");
printf("\n press 7 for STEAK FRITES   Rs.170");
printf("\n enter your choice = ");
scanf(" %d",&g);
switch (g)
{
case 1:printf("\n thank you \nyour order of FRENCH FRIES has been placed ");break;
case 2:printf("\n thank you \nyour order of FRENCH TOAST has been placed ");break;
case 3:printf("\n thank you \nyour order of MACAROONS has been placed ");break;
case 4:printf("\n thank you \nyour order of STUFFED FRENCH TOAST has been placed ");break;
case 5:printf("\n thank you \nyour order of STUFFED TOMATOES has been placed ");break;
case 6:printf("\n thank you \nyour order of SCALLOPS has been placed ");break;
case 7:printf("\n thank you \nyour order of STEAK FRITES has been placed ");break;
default:printf("\n enter the correct option");
}
break;
case 5: printf("\n press 1 for BUTTER CHICKEN   Rs.380");
printf("\n press 2 for CHANA MASALA   Rs.200");
printf("\n press 3 for PALAK PANEER   Rs.250");
printf("\n press 4 for DAL MAKHANI   Rs.200");
printf("\n press 5 for BRIYANI   Rs.450");
printf("\n press 6 for KORMA   Rs.180");
printf("\n press 7 for KEBAB   Rs.320");

printf("\n enter your choice = ")   ;
scanf("%d",&e);
switch (e)
{
case 1:printf("\n thank you \nyour order of BUTTER CHICKEN has been placed ");break;
case 2:printf("\n thank you \nyour order of CHANA MASALA has been placed ");break;
case 3:printf("\n thank you \nyour order of PALAK PANEER has been placed ");break;
case 4:printf("\n thank you \nyour order of DAL MAKHANI has been placed ");break;
case 5:printf("\n thank you \nyour order of BRIYANI has been placed ");break;
case 6:printf("\n thank you \nyour order of KORMA has been placed ");break;
case 7:printf("\n thank you \nyour order of KEBAB has been placed ");break;
default:printf("\n enter the correct option");
}
break;
case 6: printf("\n press 1 for RANCH EGGS   Rs.220");
printf("\n press 2 for CHICKEN CURRY   Rs.350");
printf("\n press 3 for MEXICAN RICE   Rs.400");
printf("\n press 4 for CORN TORTILLA   Rs.300");
printf("\n press 5 for TOTOPOS   Rs.350");
printf("\n press 6 for TACCO   Rs.270");
printf("\n press 7 for TOSTADAS   Rs.230");
printf("\n enter your choice = ")    ;
scanf("%d",&f);
switch (f)
{
case 1:printf("\n thank you \nyour order of RANCH EGGS has been placed"); break;
case 2:printf("\n thank you \nyour order of CHICKEN CURRY has been placed ");break;
case 3:printf("\n thank you \nyour order of MEXICAN RICE has been placed ");break;
case 4:printf("\n thank you \nyour order of CORN TORTILLA has been placed ");break;
case 5:printf("\n thank you \nyour order of TOTOPOS has been placed ");break;
case 6:printf("\n thank you \nyour order of TACCO has been placed ");break;
case 7:printf("\n thank you \nyour order of TOSTADAS has been placed ");break;
default:printf("\n enter the correct option");
}
break;
case 7: printf("\n press 1 for SHUSHI   Rs.500");
printf("\n press 2 for NOODLES   Rs.280");
printf("\n press 3 for SUKIYAKI   Rs.360");
printf("\n press 4 for TEPPENYAKI   Rs.340");
printf("\n press 5 for GYOZA   Rs.300");
printf("\n press 6 for TEMPURA   Rs.440");
printf("\n press 7 for MISO SOUP   Rs.350");
printf("\n enter your choice = ")     ;
scanf("%d",&d);
switch (d)
{
case 1:printf("\n thank you \nyour order of SHUSHI has been placed ");break;
case 2:printf("\n thank you \nyour order of NOODLES has been placed ");break;
case 3:printf("\n thank you \nyour order of SUKIYAKI has been placed ");break;
case 4:printf("\n thank you \nyour order of TEPPENYAKI has been placed ");break;
case 5:printf("\n thank you \nyour order of GYOZA has been placed ");break;
case 6:printf("\n thank you \nyour order of TEMPURA has been placed ");break;
case 7:printf("\n thank you \nyour order of MISO SOUP has been placed ");break;
default:printf("\n enter the correct option");
}
break;
case 8: printf("\n press 1 for TEA   Rs.40");
printf("\n press 2 for MIXED JUICE   Rs.50");
printf("\n press 3 for COFFEE   Rs.80");
printf("\n press 4 for OREO SHAKE   Rs.180");
printf("\n press 5 for MOCKTAIL   Rs.270");
printf("\n press 6 for MOJITO   Rs.200");
printf("\n press 7 for ENERGY DRINK   Rs.70");
printf("\n enter your choice = ") ;
scanf("%d",&c);
switch (c)
{
case 1:printf("\n thank you \nyour order of TEA has been placed ");break;
case 2:printf("\n thank you \nyour order of MIXED JUICE has been placed ");break;
case 3:printf("\n thank you \nyour order of COFFEE has been placed ");break;
case 4:printf("\n thank you \nyour order of OREO SHAKE has been placed ");break;
case 5:printf("\n thank you \nyour order of MOCKTAIL has been placed ");break;
case 6:printf("\n thank you \nyour order of MOJITO has been placed ");break;
case 7:printf("\n thank you \nyour order of ENERGY DRINK has been placed ");break;
default:printf("\n enter the correct option");
}
break;
case 9: printf("\n press 1 for ICECREAM   Rs.60");
printf("\n press 2 for CHEESE CAKE   Rs.450");
printf("\n press 3 for CUP CAKE   Rs.250");
printf("\n press 4 for BROWNIE   Rs.180");
printf("\n press 5 for APPLE PIE   Rs.360");
printf("\n press 6 for JALEBI   Rs.100");
printf("\n press 7 for CHOCO LAVA CAKE   Rs.180");
printf("\n enter your choice = ")  ;
scanf("%d",&b);
switch (b)
{
case 1:printf("\n thank you \nyour order of ICECREAM has been placed ");break;
case 2:printf("\n thank you \nyour order of CHEESE CAKE has been placed ");break;
case 3:printf("\n thank you \nyour order of CUP CAKE has been placed ");break;
case 4:printf("\n thank you \nyour order of BROWNIE has been placed ");break;
case 5:printf("\n thank you \nyour order of APPLE PIE has been placed ");break;
case 6:printf("\n thank you \nyour order of JALEBI has been placed ");break;
case 7:printf("\n thank you \nyour order of CHOCO LAVA CAKE has been placed ");break;
default:printf("\n enter the correct option");
}
break;
}
mat:
printf("\npress 1 to add an order");
printf("\npress 2 to exit");
scanf("%d",&l);
switch(l)
{
case 1: goto label;
case 2: break;

default:printf("please enter the correct option");goto mat;
}
getch();

}




