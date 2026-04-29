typedef struct{
    int dia;
    int mes;
    int ano;
} data;

void setDate(data *d, int dia, int mes, int ano);

int getDate(data data, char tipo);

void showDate(data data);

int dataComp(data d1, data d2);

int getDiff(data d1, data d2);

int isLeapYear(data data);

int getDayFromYear(data data);




