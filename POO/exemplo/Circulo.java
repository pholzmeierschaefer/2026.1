package exemplo;

public class Circulo {
    double raio; //atributo


    
    double calculaArea(){ //metodo
        double area = 3.14 * (raio * raio);  //pi * raio²   pode acessar o atributo com this.nome_atributo
        return area;
    }

    /*/
    void imprimeArea(){
        double area = 3.14 * this.raio * this.raio;
        System.out.println("area: " + area);
        
    }
    */

    void imprimeArea(){
        double area = calculaArea();
        System.out.println("area: " + area);
    }

    
}
