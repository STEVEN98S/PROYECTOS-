namespace SistemaMiBusController
{
	using namespace System::Collections::Generic;
	using namespace SistemaMiBusModel;
	using namespace System;

	public ref class GestorRestaurante
	{

	private:
		List<Restaurante^>^ listaRestaurante;


	public:
		GestorRestaurante();
		void AgregarRestaurante(Restaurante^ objRestaurante);
		int  ObtenerCantidadRestaurantes();
		Restaurante^ ObtenerRestauranteUnaPosicion(int posicion);
		void EliminarRestaurante(int posicion);
		List<Restaurante^>^ BuscarRestaurantes(String^ codigo);
		void GestorRestaurante::GrabarArchivo();
		void GestorRestaurante::CargarDesdeArchivo();

	};
}
