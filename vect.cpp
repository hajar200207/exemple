// Solution 1 : prod est ind�pendante et amie des deux classes vect et matrice
#include <iostream>
using namespace std;

// D�claration de la classe vect
class vect {
    private:
        double x, y, z; // Les trois composantes du vecteur
    public:
        // Constructeur par d�faut
        vect() : x(0), y(0), z(0) {}
        // Constructeur avec param�tres
        vect(double x, double y, double z) : x(x), y(y), z(z) {}
        // Fonction d'affichage
        void affiche() const {
            cout << "(" << x << ", " << y << ", " << z << ")" << endl;
        }
        // D�claration de la fonction amie prod
        friend vect prod(const vect& v, const matrice& m);
};

// D�claration de la classe matrice
class matrice {
    private:
        double a, b, c, d, e, f, g, h, i; // Les neuf �l�ments de la matrice
    public:
        // Constructeur par d�faut
        matrice() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0) {}
        // Constructeur avec param�tres
        matrice(double a, double b, double c, double d, double e, double f, double g, double h, double i) : a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}
        // Fonction d'affichage
        void affiche() const {
            cout << a << " " << b << " " << c << endl;
            cout << d << " " << e << " " << f << endl;
            cout << g << " " << h << " " << i << endl;
        }
        // D�claration de la fonction amie prod
        friend vect prod(const vect& v, const matrice& m);
};

// D�finition de la fonction prod
vect prod(const vect& v, const matrice& m) {
    // Calcul du produit d'un vecteur par une matrice
    double x = v.x * m.a + v.y * m.b + v.z * m.c;
    double y = v.x * m.d + v.y * m.e + v.z * m.f;
    double z = v.x * m.g + v.y * m.h + v.z * m.i;
    // Cr�ation du vecteur r�sultat
    vect res(x, y, z);
    // Retour du vecteur r�sultat
    return res;
}


int main() {

    // Cr�ation d'un vecteur et d'une matrice
    vect v(1, 2, 3);
    matrice (4,2,1, 8, 7, 0, 3, 5, 6);
    // Affichage du vecteur et de la matrice
    cout << "Vecteur :" << endl;
    v.affiche();
    cout << "Matrice :" << endl;
    m.affiche();
    // Calcul et affichage du produit
    cout << "Produit :" << endl;
    vect p = prod(v, m);
    p.affiche();
    // Fin du programme
    return 0;
}

