#include <iostream>
using namespace std;

class Usuario{
    protected:
    string username;
    string password;
    string email;

    public:
    Usuario(string xusername, string xpassword, string xemail)
    : username(xusername), password(xpassword), email(xemail){}

    void registrarse(){
    cout << username << " ha sido registrado"<<endl;
    }
    void iniciarSesion(){
        cout << username << " has iniciado sesion. "<< endl;
    }
};

class Administrador : public Usuario{
    private:
    string emailAdministrador;

    public: 
    Administrador(string xusername, string xpassword, string xemail, string xemailAdministrador)
    : Usuario(xusername, xpassword, xemail), emailAdministrador(xemailAdministrador){}

    void editarProducto(){
        cout << "Producto editado"<<username<<endl;
    }
    void eliminarProducto(){
        cout<<"Producto Eliminado"<<username<<endl;
    }
    void agregarProducto(){
        cout << "Producto agregado"<<username<<endl;
    }
};

class Cliente:public Usuario{
    string InformacionTarjetaCreditos;

    public:
    Cliente(string xusername, string xpassword, string xemail, string xinformaciontarjetacredito)
        : Usuario(xusername, xpassword, xemail),InformacionTarjetaCreditos (xinformaciontarjetacredito){}

    void comprarProducto(){
        cout << username << "Producto comprado."<<endl;
    }
};

int main(){
    Usuario usuario("ariel16","ariri","ariel@mermaid.com");
    usuario.registrarse();
    usuario.iniciarSesion();

    Administrador admin("admin01","password","admin1@admins.com","adminn@admins.com");
    admin.editarProducto();
    admin.eliminarProducto();
    admin.agregarProducto();

    Cliente cliente("cliente25","clientenumero25","cliente25@clientes.com", "5521546546545");
    cliente.comprarProducto();

    return 0;
}