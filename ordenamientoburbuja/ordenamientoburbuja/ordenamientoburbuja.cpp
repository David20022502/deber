# include  < iostream >
using namespace std;
void  ingresar(int a[], int n);
void  imprimir(int a[],int b[], int n);
void burbuja(int a[], int n);


int  main()
{

    int a[100], b [100];
    int n;
    cout << " ingrese el tamanio: ";
    cin >> n;
    ingresar(a, n);
    cout << endl;
    imprimir(a, b, n);
    cout << endl;
    //burbuja(a, n);
    //cout << endl;


    return  0;
}


void ingresar(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << " Ingrese el elemeneto al arreglo: " << endl;
        cin >> a[i];
    }
}
void  imprimir(int a[], int b[], int n)
{
    int i, j=0 ,c=0;
    for  (i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            b[j] = a[i];
            j++;
            c++;
        }
    }
    cout << "valores" << endl;
    for(i = 0; i < c; i++)
    {
        cout << b[i] << endl;
    }
}

void burbuja(int a[], int n)
{
    int i, j, aux;

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(a[j] < a[i])
            {
                aux = a[i];

                a[i] = a[j];

                a[j] = aux;
            }
        }
    }


}
