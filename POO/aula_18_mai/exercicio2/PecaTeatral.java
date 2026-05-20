package aula_18_mai.exercicio2;

public class PecaTeatral extends Evento {
   //(precoBase + taxapalco)
    private float taxaPalco;


    public void setTaxa(float taxaPalco){
        this.taxaPalco = taxaPalco;
    }

    public float getTaxa(){
        return this.taxaPalco;
    }

    @Override
    public float calcularPreco(){
        return getPrecoBase() + this.taxaPalco;
    }
    
}
