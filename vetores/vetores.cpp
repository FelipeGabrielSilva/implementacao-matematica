#include <iostream>
#include <math.h>

using namespace std;

struct Vetor
{
    string nome;
    int x;
    int y;
    int z;
};

void lerDadosVetor(Vetor &vetor, char nome)
{
    cout << "\nVetor " << nome << " - valor de x: ";
    cin >> vetor.x;

    cout << "Vetor " << nome << " - valor de y: ";
    cin >> vetor.y;

    cout << "Vetor " << nome << " - valor de z: ";
    cin >> vetor.z;
}

void somaVetores(const Vetor &vetor1, const Vetor &vetor2, const string &nome)
{
    cout << "\n----- SOMA DOS VETORES " << nome << " -----\n";
    cout << "Valor do x: " << vetor1.x + vetor2.x << endl;
    cout << "Valor do y: " << vetor1.y + vetor2.y << endl;
    cout << "Valor do z: " << vetor1.z + vetor2.z << endl;
}

void subtraiVetores(const Vetor &vetor1, const Vetor &vetor2, const string &nome)
{
    cout << "\n----- SUBTRACAO DOS VETORES " << nome << " -----\n";
    cout << "Valor do x: " << vetor1.x - vetor2.x << endl;
    cout << "Valor do y: " << vetor1.y - vetor2.y << endl;
    cout << "Valor do z: " << vetor1.z - vetor2.z << endl;
}

void multiplicacaoVetor(const Vetor &vetor, int x, const string &nome)
{
    cout << "\n----- MULTIPLICACAO DO VETOR " << nome << " POR " << x << " -----\n";
    cout << "Resultado da multiplicacao vetor " << nome << " - x: " << vetor.x * x << endl;
    cout << "Resultado da multiplicacao vetor " << nome << " - y: " << vetor.y * x << endl;
    cout << "Resultado da multiplicacao vetor " << nome << " - z: " << vetor.z * x << endl;
}

int moduloVetor(const Vetor &vetor, const string &nome)
{
    cout << "\n----- MODULO DO VETOR " << nome << " -----\n";
    cout << "Resultado do modulo de vetor " << nome << ": " << pow(vetor.x, 2) + pow(vetor.y, 2) + pow(vetor.z, 2) << endl;

    return pow(vetor.x, 2) + pow(vetor.y, 2) + pow(vetor.z, 2);
}

int produtoEscalarVetor(const Vetor &vetor1, const Vetor &vetor2, const string &nome)
{
    cout << "\n----- PRODUTO ESCALAR DOS VETORES " << nome << " -----\n";
    cout << "Resultado do produto escalar dos vetores " << nome << ": " << (vetor1.x * vetor2.x) + (vetor1.y * vetor2.y) + (vetor1.z * vetor2.z) << endl;

    return (vetor1.x * vetor2.x) + (vetor1.y * vetor2.y) + (vetor1.z * vetor2.z);
}

void anguloVetor(const Vetor &vetor1, const Vetor &vetor2, const string &nome, double pi)
{
    int produtoEscalar = (vetor1.x * vetor2.x) + (vetor1.y * vetor2.y) + (vetor1.z * vetor2.z);

    float norma1 = sqrt(pow(vetor1.x, 2) + pow(vetor1.y, 2) + pow(vetor1.z, 2));
    float norma2 = sqrt(pow(vetor2.x, 2) + pow(vetor2.y, 2) + pow(vetor2.z, 2));

    float anguloRadiano = acos(produtoEscalar / (norma1 * norma2));

    float anguloGraus = anguloRadiano * (180.0 / pi);

    cout << "\n----- ANGULO ENTRE OS VETORES " << nome << " -----\n";
    cout << "O angulo entre os vetores " << nome << ": " << anguloGraus << " graus" << endl;
}

void produtoVetorialVetor(const Vetor &vetor1, const Vetor &vetor2, const string &nome)
{
    cout << "\n----- PRODUTO VETORIAL DOS VETORES " << nome << " -----\n";
    cout << "Resultado do produto escalar dos vetores " << nome << " - x: " << (vetor1.y * vetor2.z) - (vetor2.y * vetor1.z) << endl;
    cout << "Resultado do produto escalar dos vetores " << nome << " - y: " << (vetor2.x * vetor1.z) - (vetor1.x * vetor2.z) << endl;
    cout << "Resultado do produto escalar dos vetores " << nome << " - z: " << (vetor1.x * vetor2.y) - (vetor2.x * vetor1.y) << endl;
}

void produtoMisto(const Vetor &vetor1, const Vetor &vetor2, const Vetor &vetor3, const char *nome)
{
    double resultado = (vetor1.x * (vetor2.y * vetor3.z - vetor2.z * vetor3.y)) + (vetor1.y * (vetor2.z * vetor3.x - vetor2.x * vetor3.z)) + (vetor1.z * (vetor2.x * vetor3.y - vetor2.y * vetor3.x));

    cout << "\n----- PRODUTO MISTO DOS VETORES " << nome << " -----\n";
    cout << "Resultado do produto misto dos vetores " << nome << ": " << resultado << endl;
}

int main()
{
    system("cls");
    Vetor vetorU, vetorV, vetorW;

    lerDadosVetor(vetorU, 'U');
    lerDadosVetor(vetorV, 'V');
    lerDadosVetor(vetorW, 'W');

    int k;
    cout << "\nInforme um valor para multiplicacao: ";
    cin >> k;

    double pi = 3.141592653589793;

    somaVetores(vetorU, vetorV, "U+V");
    somaVetores(vetorU, vetorW, "U+W");
    somaVetores(vetorV, vetorW, "V+W");

    subtraiVetores(vetorU, vetorV, "U-V");
    subtraiVetores(vetorU, vetorW, "U-W");
    subtraiVetores(vetorV, vetorW, "V-W");

    multiplicacaoVetor(vetorU, k, "U");
    multiplicacaoVetor(vetorV, k, "V");
    multiplicacaoVetor(vetorW, k, "W");

    moduloVetor(vetorU, "U");
    moduloVetor(vetorV, "V");
    moduloVetor(vetorW, "W");

    produtoEscalarVetor(vetorU, vetorV, "U*V");
    produtoEscalarVetor(vetorU, vetorW, "U*W");
    produtoEscalarVetor(vetorV, vetorW, "V*W");

    anguloVetor(vetorU, vetorV, "U e V", pi);
    anguloVetor(vetorU, vetorW, "U e W", pi);
    anguloVetor(vetorV, vetorW, "V e W", pi);

    produtoVetorialVetor(vetorU, vetorV, "UxV");
    produtoVetorialVetor(vetorU, vetorW, "UxW");
    produtoVetorialVetor(vetorV, vetorW, "VxW");

    produtoMisto(vetorU, vetorV, vetorW, "U, V, W");

    return 0;
}
