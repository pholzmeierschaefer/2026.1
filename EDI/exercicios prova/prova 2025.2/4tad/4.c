#include <stdio.h>
#include "4.h"


ret setRect(int altura, int largura){
    ret retangulo = {altura, largura};
    return retangulo;
}

int getArea(ret retangulo){
    int area;
    area = retangulo.largura * retangulo.altura;
    return area;
}

int getPerim(ret retangulo){
    int perim;
    perim = (retangulo.altura+retangulo.largura) * 2;
    return perim;
}