//Money converter wich support EUR to DZD, DZD to EURO, EURO to RUB, RUB to EURO and created by Nyrroz

#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;


int modeConv(0);

double result;

double RoublesEnEuro(double result)

{

double valeurEuro(0.01365);

cout << "1 RUB vaut actuellement: "<< valeurEuro << "RUB" << endl;



cout << "Veuillez choisir un montant à convertir en Euro" << endl;

double montantChoisi(0);





cin >> montantChoisi;

cout << "Vous avez choisi: " << montantChoisi << endl;

result = montantChoisi * valeurEuro;

return result;
}

double EuroEnRoubles(double result)

{

double valeurRoubles(73.2791);

cout << "1 Euro vaut actuellement: "<< valeurRoubles << "RUB" << endl;



cout << "Veuillez choisir un montant à convertir en RUB" << endl;

double montantChoisi(0);





cin >> montantChoisi;

cout << "Vous avez choisi: " << montantChoisi << endl;

result = montantChoisi * valeurRoubles;

return result;
}

double euroEnDZD(double result)

{

double valeurDZD(137.443);

cout << "1 Euro vaut actuellement: "<< valeurDZD << "DZD" << endl;



cout << "Veuillez choisir un montant à convertir en DZD" << endl;

double montantChoisi(0);





cin >> montantChoisi;

cout << "Vous avez choisi: " << montantChoisi << endl;

result = montantChoisi * valeurDZD;

return result;
}

double DZDEnEuro(double result)

{

double valeurEuro(0.00726516);





cout << "1 DZD vaut actuellement: "<< valeurEuro << "Euro" << endl;

cout << "Veuillez choisir un montant à convertir en Euro" << endl;

double montantChoisi(0);





cin >> montantChoisi;

cout << "vous avez choisi: " << montantChoisi << endl;

result = montantChoisi * valeurEuro;

return result;
}

int main()

{

cout << "Bienvenue sur le convertisseur de monnaie By Nyrroz" << endl;

 bool Convertir(true);

while(Convertir == true)
{
 Convertir = false;


cout << "Veuillez choisir un mode: " << endl;



cout << "1 - Conversion Euro en DZD" << endl;

cout << "2 - Conversion DZD en Euro" << endl;

cout << "3 - Conversion  Euro en RUB" << endl;

cout << "4 - Conversion RUB en Euro" << endl;



cin >> modeConv;



if(modeConv == 1)

{

    cout << "Vous avez choisi le mode 1" << endl;



    double total(0);



    total = euroEnDZD(result);



    cout << "Cela fait: " << total << " DZD";




}

else if(modeConv == 2)

{

    cout << "Vous avez choisi le mode 2" << endl;




    double total(0);



    total = DZDEnEuro(result);



    cout << "Cela fait: " << total << " Euro";

}
else if(modeConv == 3)

{

    cout << "Vous avez choisi le mode 3" << endl;




    double total(0);



    total = EuroEnRoubles(result);



    cout << "Cela fait: " << total << " RUB";

}
else if(modeConv == 4)

{

    cout << "Vous avez choisi le mode 4" << endl;




    double total(0);



    total = RoublesEnEuro(result);



    cout << "Cela fait: " << total << " Euro";

}

char reponse1;



cout << endl << "Voulez vous convertir encore ? (Y/N)" << endl;
cin >> reponse1;

if(reponse1 == 'y')
{
   Convertir = true;

}
else if(reponse1 == 'Y')
{
   Convertir = true;

}
}

return 0;
}
