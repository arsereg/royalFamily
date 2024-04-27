#include "SWI-cpp.h"

#include <iostream>

#include <string>

#include <set>


using namespace std;

//Josué Quirós - Gino Marin
//jquiros@Josues-MacBook-Pro Práctica en clase % g++ -o main main.cpp -I/opt/homebrew/Cellar/swi-prolog/9.2.3/lib/swipl/include/ -L/opt/homebrew/Cellar/swi-prolog/9.2.3/lib/swipl/lib/arm64-darwin -lswipl

//g++ -o main main.cpp -I/lib/swipl/include -L/lib/swipl/lib/x86_64-linux -lswipl
void createFacts() {
  PlCall("assertz", PlCompound("queen", PlTermv("Victoria")));
  PlCall("assertz", PlCompound("king", PlTermv("Edward VII")));
  PlCall("assertz", PlCompound("king", PlTermv("George V")));
  PlCall("assertz", PlCompound("king", PlTermv("Edward VIII")));
  PlCall("assertz", PlCompound("king", PlTermv("George VI")));
  PlCall("assertz", PlCompound("queen", PlTermv("Elizabeth II")));
  PlCall("assertz", PlCompound("king", PlTermv("Charles III")));

  PlCall("assertz", PlCompound("RoyalPrincess", PlTermv("Victoria Adelaida")));
  PlCall("assertz", PlCompound("RoyalPrince", PlTermv("Albert")));
  PlCall("assertz", PlCompound("RoyalPrince", PlTermv("Albert Edward")));
  PlCall("assertz", PlCompound("RoyalPrince", PlTermv("Charles Philip")));
  PlCall("assertz", PlCompound("RoyalPrince", PlTermv("William Arthur Philip")));

  PlCall("assertz", PlCompound("SamePerson", PlTermv("Edward", "Edward VII")));
  PlCall("assertz", PlCompound("SamePerson", PlTermv("George", "George V")));
  PlCall("assertz", PlCompound("SamePerson", PlTermv("Albert Edward", "Edward VIII")));
  PlCall("assertz", PlCompound("SamePerson", PlTermv("Albert Frederick", "George VI")));
  PlCall("assertz", PlCompound("SamePerson", PlTermv("Elizabeth", "Elizabeth II")));
  PlCall("assertz", PlCompound("SamePerson", PlTermv("Charles Philip", "Charles III")));

  PlCall("assertz", PlCompound("Spouse", PlTermv("Victoria", "Albert of Saxe-Coburg and Gotha")));
  PlCall("assertz", PlCompound("Spouse", PlTermv("Edward VII", "Alexandra of Denmark")));
  PlCall("assertz", PlCompound("Spouse", PlTermv("George V", "Mary of Teck")));
  PlCall("assertz", PlCompound("Spouse", PlTermv("George VI", "Elizabeth Bowes-Lyon")));
  PlCall("assertz", PlCompound("Spouse", PlTermv("Elizabeth II", "Philip")));
  PlCall("assertz", PlCompound("Spouse", PlTermv("Charles III", "Camilla")));

  PlCall("assertz", PlCompound("Mother", PlTermv("Victoria", "Edward")));
  PlCall("assertz", PlCompound("Mother", PlTermv("Victoria", "Victoria Adelaida")));
  PlCall("assertz", PlCompound("Mother", PlTermv("Victoria", "Alice")));
  PlCall("assertz", PlCompound("Mother", PlTermv("Victoria", "Alfred")));
  PlCall("assertz", PlCompound("Mother", PlTermv("Victoria", "Helena")));
  PlCall("assertz", PlCompound("Mother", PlTermv("Victoria", "Louise")));
  PlCall("assertz", PlCompound("Mother", PlTermv("Victoria", "Arthur")));
  PlCall("assertz", PlCompound("Mother", PlTermv("Victoria", "Leopold")));
  PlCall("assertz", PlCompound("Mother", PlTermv("Victoria", "Beatrice")));

  PlCall("assertz", PlCompound("Father", PlTermv("Edward VII", "Albert")));
  PlCall("assertz", PlCompound("Father", PlTermv("Edward VII", "George")));
  PlCall("assertz", PlCompound("Father", PlTermv("Edward VII", "Louise")));
  PlCall("assertz", PlCompound("Father", PlTermv("Edward VII", "Victoria Alexandra")));
  PlCall("assertz", PlCompound("Father", PlTermv("Edward VII", "Maud")));
  PlCall("assertz", PlCompound("Father", PlTermv("Edward VII", "Alexander John")));

  PlCall("assertz", PlCompound("Father", PlTermv("George V", "Albert Edward")));
  PlCall("assertz", PlCompound("Father", PlTermv("George V", "Albert Frederick")));
  PlCall("assertz", PlCompound("Father", PlTermv("George V", "Mary Alexandra")));
  PlCall("assertz", PlCompound("Father", PlTermv("George V", "Henry William")));
  PlCall("assertz", PlCompound("Father", PlTermv("George V", "George Edward")));
  PlCall("assertz", PlCompound("Father", PlTermv("George V", "John Charles")));

  PlCall("assertz", PlCompound("Father", PlTermv("George VI", "Elizabeth Alexandra")));
  PlCall("assertz", PlCompound("Father", PlTermv("George VI", "Margaret Rose")));

  PlCall("assertz", PlCompound("Mother", PlTermv("Elizabeth II", "Charles Philip")));
  PlCall("assertz", PlCompound("Mother", PlTermv("Elizabeth II", "Anne Elizabeth")));
  PlCall("assertz", PlCompound("Mother", PlTermv("Elizabeth II", "Andrew Albert Christian")));
  PlCall("assertz", PlCompound("Mother", PlTermv("Elizabeth II", "Edward Antony")));

  PlCall("assertz", PlCompound("Father", PlTermv("Charles III", "William Arthur Philip")));
  PlCall("assertz", PlCompound("Father", PlTermv("Charles III", "Harry")));
  PlCall("assertz", PlCompound("Mother", PlTermv("Diana", "William Arthur Philip")));
  PlCall("assertz", PlCompound("Mother", PlTermv("Diana", "Harry")));

  PlCall("assertz", PlCompound("Mother", PlTermv("Eugenie", "August")));

  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Victoria")));

  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Victoria")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Edward VII")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("George V")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Edward VIII")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("George VI")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Elizabeth II")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Charles III")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Victoria Adelaida")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Albert")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Albert Edward")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Charles Philip")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("William Arthur Philip")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Edward")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("George")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Albert Frederick")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Elizabeth")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Philip")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Camilla")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Anne Elizabeth")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Andrew Albert Christian")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Edward Antony")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Harry")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Diana")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("August")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Margaret Rose")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Henry William")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("George Edward")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("John Charles")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Elizabeth Alexandra")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Eugenie")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Leopold")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Maud")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Alexander John")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Victoria Alexandra")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Arthur")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Alice")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Alfred")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Helena")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Louise")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Beatrice")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Albert of Saxe-Coburg and Gotha")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Mary of Teck")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Victoria Alexandra")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Diana")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Victoria Adelaida")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Alice")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Alfred")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Helena")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Louise")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Arthur")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Leopold")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Beatrice")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Albert of Saxe-Coburg and Gotha")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Mary of Teck")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Victoria Alexandra")));
  PlCall("assertz", PlCompound("isRoyalFamilyMember", PlTermv("Margaret Rose")));

}

string samePerson(const string & nombre) {
  string samePersonName = "";
  PlTermv name(1);
  PlTermv queryTerm(PlTerm(nombre.c_str()), name[0]);
  PlQuery query("SamePerson", queryTerm);
  if (query.next_solution()) {
    PlTerm response = name[0];
    const char * responseChars = name[0];
    string samePersonName(responseChars);

    return samePersonName;
  } else {
    PlTermv queryTerm2(PlTerm(name[0]), nombre.c_str());
    PlQuery query2("SamePerson", queryTerm2);
    if (query2.next_solution()) {
      PlTerm response = name[0];
      const char * responseChars = name[0];
      string samePersonName(responseChars);

      return samePersonName;
    }
  }
  return samePersonName;

}

string samePersonMonarch(const string & nombre) {
  string samePersonName = "";
  PlTermv name(1);
  PlTermv queryTerm(PlTerm(nombre.c_str()), name[0]);
  PlQuery query("SamePerson", queryTerm);
  if (query.next_solution()) {
    PlTerm response = name[0]; // Access the first argument (index 0) of PlTermv
    const char * responseChars = name[0];
    string samePersonName(responseChars);

    return samePersonName;
  }
  return samePersonName;
}

bool isMonarch(const string & nombre) {
  PlTermv queryTerm(PlTerm(nombre.c_str()));

  PlQuery q("king", queryTerm);
  while (q.next_solution()) {
    return true;
  }

  PlQuery q2("queen", queryTerm);
  while (q2.next_solution()) {
    return true;
  }

  string samePersonName = samePerson(nombre);
  PlTermv queryTerm2(PlTerm(samePersonName.c_str()));

  if (samePersonName.empty()) {
    return false;
  } else {
    PlQuery q3("king", queryTerm2);
    while (q3.next_solution()) {
      return true;
    }

    PlQuery q4("queen", queryTerm2);
    while (q4.next_solution()) {
      return true;
    }

  }

  return false;

}

// Método para consultar si una persona es una mujer
bool isKing(const string & nombre) {
  PlTermv queryTerm(PlTerm(nombre.c_str()));
  PlQuery q("king", queryTerm);
  return q.next_solution();
}

bool isQueen(const string & nombre) {
  PlTermv queryTerm(PlTerm(nombre.c_str()));
  PlQuery q("queen", queryTerm);
  return q.next_solution();
}

// Método para consultar si una persona es abuelo del otro
bool isOnlyChild(const string & name) {
  // Use the actual name or alias if the person is a known king or queen
  string localName = name;
  if (isKing(name) || isQueen(name)) {
    string alias = samePerson(name);
    if (!alias.empty()) {
      localName = alias;
    }
  }

  // Collect all children of the person's parents to see if there are more than one
  set < string > siblings;

  // Collect siblings from the mother's side
  PlTermv parentChild(2);
  PlTermv childParent(2);
  PlTermv chilFather(2);

  parentChild[1] = PlTerm(localName.c_str()); // Child name
  string momsName;
  string fathersName;

  PlQuery qMother("Mother", parentChild);
  while (qMother.next_solution()) {
    momsName = (char * ) parentChild[0];
  }

  if (!momsName.empty()) {
    childParent[0] = PlTerm(momsName.c_str()); // Child name
    PlQuery qMother2("Mother", childParent);
    while (qMother2.next_solution()) {
      string siblingString = (char * ) childParent[1];
      if (siblingString.compare(localName) != 0) {
        siblings.insert(siblingString);
      }
    }
  }

  PlQuery qFather("Father", parentChild);
  while (qFather.next_solution()) {
    fathersName = (char * ) parentChild[0];
  }

  if (!fathersName.empty()) {
    chilFather[0] = PlTerm(fathersName.c_str()); // Child name
    PlQuery qFather2("Father", chilFather);
    while (qFather2.next_solution()) {
      string siblingString = (char * ) chilFather[1];
      if (siblingString.compare(localName) != 0) {
        siblings.insert(siblingString);
      }
    }
  }

  return siblings.size() < 1 ;
}

bool isRoyalFamily(const std::string & name) {
  PlTermv queryTerm(PlTerm(name.c_str()));
  PlQuery query("isRoyalFamilyMember", queryTerm);
  return query.next_solution();
}

int main(int argc, char * argv[]) {
  PlEngine e(argv[0]);

  createFacts();

  int opcion;
  string nombre1, nombre2;
  bool salir = false;

  do {
    cout << "Menú:" << endl;
    cout << "1. Consultar si es o fue monarca" << endl;
    cout << "2. Consultar si es hijo/a único/a" << endl;
    cout << "3. Consultar si es o fue Rey" << endl;
    cout << "4. Consultar si es o fue Reina" << endl;
    cout << "5. Salir" << endl;
    cout << "Ingrese su opción: ";
    cin >> opcion;

    switch (opcion) {
    case 1:
      cout << "Ingrese el nombre a verificar: ";
      cin >> nombre1;
      if (isRoyalFamily(nombre1)) {
        if (isMonarch(nombre1)) {
          cout << nombre1 << " es/fue  monarca." << endl;
        } else {
          cout << nombre1 << " no es/fue monarca." << endl;
        }
      } else {
        cout << nombre1 << " no es miembro de la Familia Real" << endl;

      }
      break;
    case 2:
      cout << "Ingrese el nombre a verificar: ";
      cin >> nombre1;
      if (isRoyalFamily(nombre1)) {

        if (isOnlyChild(nombre1)) {
          cout << nombre1 << " es hijo/a único/a." << endl;
        } else {
          cout << nombre1 << " no es hijo/a único/a." << endl;
        }
      } else {
        cout << nombre1 << " no es miembro de la Familia Real" << endl;

      }
      break;
    case 3:
      cout << "Ingrese el nombre a verificar: ";
      cin >> nombre1;
      if (isRoyalFamily(nombre1)) {
        if (isKing(nombre1)) {
          cout << nombre1 << " es/fue Rey." << endl;
        } else {
          cout << nombre1 << " no es es/fue Rey." << endl;
        }
      } else {
        cout << nombre1 << " no es miembro de la Familia Real" << endl;
      }
      break;
    case 4:
      cout << "Ingrese el nombre a verificar: ";
      cin >> nombre1;
      if (isRoyalFamily(nombre1)) {
        if (isQueen(nombre1)) {
          cout << nombre1 << " es/fue Reina." << endl;
        } else {
          cout << nombre1 << " no es/fue Reina." << endl;
        }
      } else {
        cout << nombre1 << " no es miembro de la Familia Real" << endl;
      }
      break;
    case 5:
      salir = true;
      break;
    default:
      cout << "Opción inválida. Por favor ingrese un número entre 1 y 4." << endl;
    }
  }
  while (!salir);

  return 0;
}