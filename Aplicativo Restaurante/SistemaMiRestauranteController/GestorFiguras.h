#pragma once



namespace PaintController{

	using namespace PaintModel;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Runtime::Serialization::Formatters::Binary;

	public ref class GestorFiguras
	{
	public:
		List<Figura^>^ listaFiguras;

	public:
		GestorFiguras();
		void AgregarFigura(Figura^ objFigura);
		int ObtenerCantidadFiguras();
		Figura^ ObtenerFigura(int index);
		void Serializar();
		void Deserializar();
	};
}