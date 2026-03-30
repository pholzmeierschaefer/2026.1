package aula_30;

import java.time.LocalDate;

public class Data {
    int dia;
    int mes;
    int ano;

    public Data(){
        this.dia = LocalDate.now().getDayOfMonth();
        this.ano = LocalDate.now().getYear();
        this.mes = LocalDate.now().getMonthValue();
    }

        public Data(int dia, int mes, int ano){
        this.dia = dia;
        this.mes = mes;              //obrigatorio utilizar o this, pois os nomes sao iguais
        this.ano = ano;
}
     
        

    void imprime(){
        System.out.println("");
        System.out.println("Data: ");
        System.out.println("Dia: " + dia);
        System.out.println("Mes: " + mes);
        System.out.println("Ano: " + ano);
        System.out.println("");



    }
}
    

