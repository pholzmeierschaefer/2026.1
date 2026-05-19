package aula_18_mai;

public class Circulo extends Forma {
      double raio;  

      @Override
      public double calculaArea() {
          return 3.14 * raio * raio; 
      }
  }
    
