package automacao;

abstract class DispositivoEletronico {

    private String marca;
    private String modelo;


    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    abstract public void ligar();
    abstract public void exibirInfos();
	
}
