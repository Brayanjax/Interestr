#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Media;
	using namespace System::Drawing;


	

	

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		Form1(void)
		{
			InitializeComponent(); 
			

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	
		 

		   //registro
	
	
	
	


	private: System::Windows::Forms::Label^ txtIniciarSesion;
	private: System::Windows::Forms::Label^ txtIniciarSesion2;
	private: System::Windows::Forms::TextBox^ txBoxIniciarSesion;
	private: System::Windows::Forms::Label^ txtContrasenna;
	private: System::Windows::Forms::TextBox^ txBoxContrasenna; 
	private: System::Windows::Forms::Button^ buttonIniciarSesion;
	private: System::Windows::Forms::Button^ noTienesCuenta;

	private: System::Windows::Forms::Label^ txtRegistro;
	private: System::Windows::Forms::Label^ txtRegistro2; 
	private: System::Windows::Forms::TextBox^ boxEmailR;
	private: System::Windows::Forms::Label^ txtContrasennaR;
	private: System::Windows::Forms::TextBox^ BoxContrasenaR;
	
	private: System::Windows::Forms::Button^ buttonRegistar;
	private: System::Windows::Forms::Button^ buttonVolverInicioSesion;
	private: System::Windows::Forms::Button^ Cerrar;


	private: System::Windows::Forms::Label^ txtSelectSensor;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ txtNombre;
	private: System::Windows::Forms::TextBox^ BoxNombre;
	private: System::Windows::Forms::Label^ txtTemp;
	private: System::Windows::Forms::TextBox^ BoxTemp;
	private: System::Windows::Forms::Label^ txtPresion;
	private: System::Windows::Forms::TextBox^ BoxPresion;
	private: System::Windows::Forms::Label^ txtHumedad;
	private: System::Windows::Forms::TextBox^ BoxHumedad;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>

		void InitializeComponent(void)
		{
			this->txtIniciarSesion = (gcnew System::Windows::Forms::Label());
			this->txtIniciarSesion2 = (gcnew System::Windows::Forms::Label());
			this->txBoxIniciarSesion = (gcnew System::Windows::Forms::TextBox());
			this->txBoxContrasenna = (gcnew System::Windows::Forms::TextBox());
			this->txtContrasenna = (gcnew System::Windows::Forms::Label());
			this->txtRegistro = (gcnew System::Windows::Forms::Label());
			this->boxEmailR = (gcnew System::Windows::Forms::TextBox());
			this->BoxContrasenaR = (gcnew System::Windows::Forms::TextBox());
			this->txtRegistro2 = (gcnew System::Windows::Forms::Label());
			this->txtContrasennaR = (gcnew System::Windows::Forms::Label());
			this->buttonIniciarSesion = (gcnew System::Windows::Forms::Button());
			this->noTienesCuenta = (gcnew System::Windows::Forms::Button());
			this->buttonRegistar = (gcnew System::Windows::Forms::Button());
			this->buttonVolverInicioSesion = (gcnew System::Windows::Forms::Button());
			this->Cerrar = (gcnew System::Windows::Forms::Button());
			this->txtSelectSensor = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtNombre = (gcnew System::Windows::Forms::Label());
			this->BoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtTemp = (gcnew System::Windows::Forms::Label());
			this->BoxTemp = (gcnew System::Windows::Forms::TextBox());
			this->txtPresion = (gcnew System::Windows::Forms::Label());
			this->txtHumedad = (gcnew System::Windows::Forms::Label());
			this->BoxPresion = (gcnew System::Windows::Forms::TextBox());
			this->BoxHumedad = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txtIniciarSesion
			// 
			this->txtIniciarSesion->AutoSize = true;
			this->txtIniciarSesion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIniciarSesion->Location = System::Drawing::Point(35, 18);
			this->txtIniciarSesion->Name = L"txtIniciarSesion";
			this->txtIniciarSesion->Size = System::Drawing::Size(155, 25);
			this->txtIniciarSesion->TabIndex = 0;
			this->txtIniciarSesion->Text = L"Iniciar Sesion";
			// 
			// txtIniciarSesion2
			// 
			this->txtIniciarSesion2->AutoSize = true;
			this->txtIniciarSesion2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtIniciarSesion2->Location = System::Drawing::Point(85, 80);
			this->txtIniciarSesion2->Name = L"txtIniciarSesion2";
			this->txtIniciarSesion2->Size = System::Drawing::Size(68, 24);
			this->txtIniciarSesion2->TabIndex = 2;
			this->txtIniciarSesion2->Text = L"Correo";
			// 
			// txBoxIniciarSesion
			// 
			this->txBoxIniciarSesion->Location = System::Drawing::Point(90, 118);
			this->txBoxIniciarSesion->Name = L"txBoxIniciarSesion";
			this->txBoxIniciarSesion->Size = System::Drawing::Size(253, 20);
			this->txBoxIniciarSesion->TabIndex = 1;
			// 
			// txBoxContrasenna
			// 
			this->txBoxContrasenna->Location = System::Drawing::Point(90, 212);
			this->txBoxContrasenna->Name = L"txBoxContrasenna";
			this->txBoxContrasenna->Size = System::Drawing::Size(253, 20);
			this->txBoxContrasenna->TabIndex = 3;
			this->txBoxContrasenna->TextChanged += gcnew System::EventHandler(this, &Form1::txBoxContrasenna_TextChanged);
			// 
			// txtContrasenna
			// 
			this->txtContrasenna->AutoSize = true;
			this->txtContrasenna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtContrasenna->Location = System::Drawing::Point(86, 172);
			this->txtContrasenna->Name = L"txtContrasenna";
			this->txtContrasenna->Size = System::Drawing::Size(106, 24);
			this->txtContrasenna->TabIndex = 4;
			this->txtContrasenna->Text = L"Contraseña";
			// 
			// txtRegistro
			// 
			this->txtRegistro->AutoSize = true;
			this->txtRegistro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRegistro->Location = System::Drawing::Point(35, 18);
			this->txtRegistro->Name = L"txtRegistro";
			this->txtRegistro->Size = System::Drawing::Size(100, 25);
			this->txtRegistro->TabIndex = 7;
			this->txtRegistro->Text = L"Registro";
			this->txtRegistro->Visible = false;
			this->txtRegistro->Click += gcnew System::EventHandler(this, &Form1::txtRegistro_Click);
			// 
			// boxEmailR
			// 
			this->boxEmailR->Location = System::Drawing::Point(90, 118);
			this->boxEmailR->Name = L"boxEmailR";
			this->boxEmailR->Size = System::Drawing::Size(253, 20);
			this->boxEmailR->TabIndex = 8;
			this->boxEmailR->Visible = false;
			// 
			// BoxContrasenaR
			// 
			this->BoxContrasenaR->Location = System::Drawing::Point(90, 212);
			this->BoxContrasenaR->Name = L"BoxContrasenaR";
			this->BoxContrasenaR->Size = System::Drawing::Size(253, 20);
			this->BoxContrasenaR->TabIndex = 10;
			this->BoxContrasenaR->Visible = false;
			// 
			// txtRegistro2
			// 
			this->txtRegistro2->AutoSize = true;
			this->txtRegistro2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRegistro2->Location = System::Drawing::Point(86, 80);
			this->txtRegistro2->Name = L"txtRegistro2";
			this->txtRegistro2->Size = System::Drawing::Size(236, 24);
			this->txtRegistro2->TabIndex = 9;
			this->txtRegistro2->Text = L"Ingresar correo electronico";
			this->txtRegistro2->Visible = false;
			// 
			// txtContrasennaR
			// 
			this->txtContrasennaR->AutoSize = true;
			this->txtContrasennaR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtContrasennaR->Location = System::Drawing::Point(86, 172);
			this->txtContrasennaR->Name = L"txtContrasennaR";
			this->txtContrasennaR->Size = System::Drawing::Size(179, 24);
			this->txtContrasennaR->TabIndex = 11;
			this->txtContrasennaR->Text = L"Ingresar Contraseña";
			this->txtContrasennaR->Visible = false;
			// 
			// buttonIniciarSesion
			// 
			this->buttonIniciarSesion->Location = System::Drawing::Point(151, 275);
			this->buttonIniciarSesion->Name = L"buttonIniciarSesion";
			this->buttonIniciarSesion->Size = System::Drawing::Size(102, 23);
			this->buttonIniciarSesion->TabIndex = 5;
			this->buttonIniciarSesion->Text = L"Iniciar Sesion";
			this->buttonIniciarSesion->UseVisualStyleBackColor = true;
			this->buttonIniciarSesion->Click += gcnew System::EventHandler(this, &Form1::buttonIniciarSesion_Click);
			// 
			// noTienesCuenta
			// 
			this->noTienesCuenta->Location = System::Drawing::Point(151, 321);
			this->noTienesCuenta->Name = L"noTienesCuenta";
			this->noTienesCuenta->Size = System::Drawing::Size(102, 23);
			this->noTienesCuenta->TabIndex = 6;
			this->noTienesCuenta->Text = L"No tienes cuenta\?";
			this->noTienesCuenta->UseVisualStyleBackColor = true;
			this->noTienesCuenta->Click += gcnew System::EventHandler(this, &Form1::noTienesCuenta_Click);
			// 
			// buttonRegistar
			// 
			this->buttonRegistar->Location = System::Drawing::Point(151, 275);
			this->buttonRegistar->Name = L"buttonRegistar";
			this->buttonRegistar->Size = System::Drawing::Size(102, 23);
			this->buttonRegistar->TabIndex = 13;
			this->buttonRegistar->Text = L"Registrar";
			this->buttonRegistar->UseVisualStyleBackColor = true;
			this->buttonRegistar->Visible = false;
			this->buttonRegistar->Click += gcnew System::EventHandler(this, &Form1::buttonRegistar_Click);
			// 
			// buttonVolverInicioSesion
			// 
			this->buttonVolverInicioSesion->Location = System::Drawing::Point(151, 321);
			this->buttonVolverInicioSesion->Name = L"buttonVolverInicioSesion";
			this->buttonVolverInicioSesion->Size = System::Drawing::Size(102, 23);
			this->buttonVolverInicioSesion->TabIndex = 12;
			this->buttonVolverInicioSesion->Text = L"Tienes Cuenta\?";
			this->buttonVolverInicioSesion->UseVisualStyleBackColor = true;
			this->buttonVolverInicioSesion->Visible = false;
			this->buttonVolverInicioSesion->Click += gcnew System::EventHandler(this, &Form1::buttonVolverInicioSesion_Click);
			// 
			// Cerrar
			// 
			this->Cerrar->Location = System::Drawing::Point(752, 413);
			this->Cerrar->Name = L"Cerrar";
			this->Cerrar->Size = System::Drawing::Size(75, 23);
			this->Cerrar->TabIndex = 14;
			this->Cerrar->Text = L"Cerrar";
			this->Cerrar->UseVisualStyleBackColor = true;
			this->Cerrar->Click += gcnew System::EventHandler(this, &Form1::Cerrar_Click);
			// 
			// txtSelectSensor
			// 
			this->txtSelectSensor->AutoSize = true;
			this->txtSelectSensor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSelectSensor->Location = System::Drawing::Point(35, 18);
			this->txtSelectSensor->Name = L"txtSelectSensor";
			this->txtSelectSensor->Size = System::Drawing::Size(154, 25);
			this->txtSelectSensor->TabIndex = 15;
			this->txtSelectSensor->Text = L"Elegir Sensor";
			this->txtSelectSensor->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(40, 56);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->Visible = false;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
		
			String^ exePath = System::Reflection::Assembly::GetExecutingAssembly()->Location;
			String^ exeDir = System::IO::Path::GetDirectoryName(exePath);
			String^ binDir = System::IO::Path::GetDirectoryName(exeDir);
			String^ projectDir = System::IO::Path::GetDirectoryName(binDir); 
			String^ solutionDir = System::IO::Path::GetDirectoryName(projectDir); 
			String^ rutaArchivo = System::IO::Path::Combine(solutionDir, "pro\\sensores.txt");

			try {
				// Leer todas las líneas del archivo de texto  
				array<String^>^ lineas = File::ReadAllLines(rutaArchivo);
				array<String^>^ datos = gcnew array<String^>(lineas->Length);

				// Agregar el texto de cada línea al array
				for (int i = 0; i < lineas->Length; i++) {
					// Asignar el texto de la línea al array 
					datos[i] = lineas[i];
				}

				// Agregar los primeros datos (nombre) al ComboBox  
				for each (String ^ linea in lineas) {
					// Dividir la línea en sus partes utilizando la coma como separador  
					array<String^>^ partes = linea->Split(',');

					// Agregar el primer dato (nombre) al ComboBox   
					if (partes->Length > 0) {
						comboBox1->Items->Add(partes[0]);
					}
				}


			}
			catch (IOException^ ex) {
				// Manejar cualquier excepción de E/S (lectura de archivo) 
				MessageBox::Show("Error al leer el archivo: " + ex->Message);

			}
			// 
			// txtNombre
			// 
			this->txtNombre->AutoSize = true;
			this->txtNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombre->Location = System::Drawing::Point(442, 80);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(79, 24);
			this->txtNombre->TabIndex = 17;
			this->txtNombre->Text = L"Nombre";
			this->txtNombre->Visible = false;
			// 
			// BoxNombre
			// 
			this->BoxNombre->Location = System::Drawing::Point(458, 118);
			this->BoxNombre->Name = L"BoxNombre";
			this->BoxNombre->Size = System::Drawing::Size(100, 20);
			this->BoxNombre->TabIndex = 18;
			this->BoxNombre->Visible = false;
			// 
			// txtTemp
			// 
			this->txtTemp->AutoSize = true;
			this->txtTemp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTemp->Location = System::Drawing::Point(589, 80);
			this->txtTemp->Name = L"txtTemp";
			this->txtTemp->Size = System::Drawing::Size(118, 24);
			this->txtTemp->TabIndex = 19;
			this->txtTemp->Text = L"Temperatura";
			this->txtTemp->Visible = false;
			// 
			// BoxTemp
			// 
			this->BoxTemp->Location = System::Drawing::Point(607, 118);
			this->BoxTemp->Name = L"BoxTemp";
			this->BoxTemp->Size = System::Drawing::Size(100, 20);
			this->BoxTemp->TabIndex = 20;
			this->BoxTemp->Visible = false;
			// 
			// txtPresion
			// 
			this->txtPresion->AutoSize = true;
			this->txtPresion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPresion->Location = System::Drawing::Point(442, 162);
			this->txtPresion->Name = L"txtPresion";
			this->txtPresion->Size = System::Drawing::Size(74, 24);
			this->txtPresion->TabIndex = 21;
			this->txtPresion->Text = L"Presion";
			this->txtPresion->Visible = false;
			// 
			// txtHumedad
			// 
			this->txtHumedad->AutoSize = true;
			this->txtHumedad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtHumedad->Location = System::Drawing::Point(589, 162);
			this->txtHumedad->Name = L"txtHumedad";
			this->txtHumedad->Size = System::Drawing::Size(94, 24);
			this->txtHumedad->TabIndex = 22;
			this->txtHumedad->Text = L"Humedad";
			this->txtHumedad->Visible = false;
			// 
			// BoxPresion
			// 
			this->BoxPresion->Location = System::Drawing::Point(458, 197);
			this->BoxPresion->Name = L"BoxPresion";
			this->BoxPresion->Size = System::Drawing::Size(100, 20);
			this->BoxPresion->TabIndex = 23;
			this->BoxPresion->Visible = false;
			// 
			// BoxHumedad
			// 
			this->BoxHumedad->Location = System::Drawing::Point(607, 197);
			this->BoxHumedad->Name = L"BoxHumedad";
			this->BoxHumedad->Size = System::Drawing::Size(100, 20);
			this->BoxHumedad->TabIndex = 24;
			this->BoxHumedad->Visible = false;
			// 
			// Form1
			// 
			this->ClientSize = System::Drawing::Size(839, 459);
			this->Controls->Add(this->BoxHumedad);
			this->Controls->Add(this->BoxPresion);
			this->Controls->Add(this->txtHumedad);
			this->Controls->Add(this->txtPresion);
			this->Controls->Add(this->BoxTemp);
			this->Controls->Add(this->txtTemp);
			this->Controls->Add(this->BoxNombre);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->txtSelectSensor);
			this->Controls->Add(this->Cerrar);
			this->Controls->Add(this->buttonRegistar);
			this->Controls->Add(this->buttonVolverInicioSesion);
			this->Controls->Add(this->noTienesCuenta);
			this->Controls->Add(this->buttonIniciarSesion);
			this->Controls->Add(this->txtRegistro);
			this->Controls->Add(this->boxEmailR);
			this->Controls->Add(this->BoxContrasenaR);
			this->Controls->Add(this->txtRegistro2);
			this->Controls->Add(this->txtContrasennaR);
			this->Controls->Add(this->txtContrasenna);
			this->Controls->Add(this->txBoxContrasenna);
			this->Controls->Add(this->txBoxIniciarSesion);
			this->Controls->Add(this->txtIniciarSesion2);
			this->Controls->Add(this->txtIniciarSesion);
			this->Name = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void txBoxContrasenna_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonIniciarSesion_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ exePath = System::Reflection::Assembly::GetExecutingAssembly()->Location;
		// Obtener la carpeta del ejecutable
		String^ exeDir = System::IO::Path::GetDirectoryName(exePath);
		// Navegar tres niveles hacia arriba
		String^ binDir = System::IO::Path::GetDirectoryName(exeDir); // Subir un nivel (salir de 'Debug' o 'Release')  
		String^ projectDir = System::IO::Path::GetDirectoryName(binDir); // Subir otro nivel (salir de 'x64')  
		String^ solutionDir = System::IO::Path::GetDirectoryName(projectDir); // Subir otro nivel (salir del directorio del proyecto)  
		// Construir la ruta al archivo dentro de la carpeta 'pro', que está al mismo nivel que la solución 
		String^ rutaArchivo = System::IO::Path::Combine(solutionDir, "pro\\Registros.txt");


		String^ email = txBoxIniciarSesion->Text;   
		String^ contraseña = txBoxContrasenna->Text;   
		bool comprobador = false;
		 
		StreamReader^ sr = gcnew StreamReader(rutaArchivo); 
		String^ linea;   
	
		while ((linea = sr->ReadLine()) != nullptr) { 
			array<String^>^ partes = linea->Split(',');
			if (partes[0]==email&&partes[1]==contraseña) 
			{
				comprobador = true; 
				
				
			}
			else
			{
				comprobador == false;
			} 

			
		}
		if (comprobador==true)
		{
			txBoxContrasenna->Visible = false;
			txtIniciarSesion->Visible = false;
			txBoxIniciarSesion->Visible = false;
			txtIniciarSesion2->Visible = false;
			txBoxContrasenna->Visible = false;
			txtContrasenna->Visible = false;
			buttonIniciarSesion->Visible = false;
			noTienesCuenta->Visible = false;

			// Mostrar controles de registro
			buttonRegistar->Visible = false;
			buttonVolverInicioSesion->Visible = false;
			txtContrasennaR->Visible = false;
			BoxContrasenaR->Visible = false;
			txtRegistro2->Visible = false;
			boxEmailR->Visible = false;
			txtRegistro->Visible = false;

			txtSelectSensor->Visible = true;
			comboBox1->Visible = true;
		}
		else if(comprobador==false)
		{
			MessageBox::Show("Los datos son incorrectos volver a intentar");
			txBoxIniciarSesion->Text = "";;
			txBoxContrasenna->Text = "";;
		}
		
			
		sr->Close();  

		
	}
	private: System::Void noTienesCuenta_Click(System::Object^ sender, System::EventArgs^ e) {
		txtIniciarSesion->Visible = false;
		txBoxIniciarSesion->Visible = false;
		txtIniciarSesion2->Visible = false;
		txBoxContrasenna->Visible = false;
		txtContrasenna->Visible = false;
		buttonIniciarSesion->Visible = false;
		noTienesCuenta->Visible = false;

		// Mostrar controles de registro
		buttonRegistar->Visible = true;
		buttonVolverInicioSesion->Visible = true;
		txtContrasennaR->Visible = true;
		BoxContrasenaR->Visible = true;
		txtRegistro2->Visible = true;
		boxEmailR->Visible = true;
		txtRegistro->Visible = true;

	}
	private: System::Void txtRegistro_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonVolverInicioSesion_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonRegistar->Visible = false;
		buttonVolverInicioSesion->Visible = false;
		txtContrasennaR->Visible = false;
		BoxContrasenaR->Visible = false;
		txtRegistro2->Visible = false;
		boxEmailR->Visible = false;
		txtRegistro->Visible = false;

		// Mostrar controles de inicio de sesión
		txtIniciarSesion->Visible = true;
		txBoxIniciarSesion->Visible = true;
		txtIniciarSesion2->Visible = true;
		txBoxContrasenna->Visible = true;
		txtContrasenna->Visible = true;
		buttonIniciarSesion->Visible = true;
		noTienesCuenta->Visible = true;

	}
	private: System::Void buttonRegistar_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ email = boxEmailR->Text;
		String^ contraseña = BoxContrasenaR->Text;

		// Obtener la ruta del ejecutable  
		String^ exePath = System::Reflection::Assembly::GetExecutingAssembly()->Location; 
		// Obtener la carpeta del ejecutable
		String^ exeDir = System::IO::Path::GetDirectoryName(exePath); 
		// Navegar tres niveles hacia arriba
		String^ binDir = System::IO::Path::GetDirectoryName(exeDir); // Subir un nivel (salir de 'Debug' o 'Release')  
		String^ projectDir = System::IO::Path::GetDirectoryName(binDir); // Subir otro nivel (salir de 'x64')  
		String^ solutionDir = System::IO::Path::GetDirectoryName(projectDir); // Subir otro nivel (salir del directorio del proyecto)  
		// Construir la ruta al archivo dentro de la carpeta 'pro', que está al mismo nivel que la solución 
		String^ rutaArchivo = System::IO::Path::Combine(solutionDir, "pro\\Registros.txt"); 
		

		try {
			
			
			StreamWriter^ escritor = gcnew StreamWriter(rutaArchivo, true);   
			
			escritor->WriteLine(email+","+ contraseña);  
			
			escritor->Close(); 

			MessageBox::Show("Información guardada en el archivo de texto.");
			buttonRegistar->Visible = false;
			buttonVolverInicioSesion->Visible = false;
			txtContrasennaR->Visible = false;
			BoxContrasenaR->Visible = false;
			txtRegistro2->Visible = false;
			boxEmailR->Visible = false;
			txtRegistro->Visible = false;

			// Mostrar controles de inicio de sesión
			txtIniciarSesion->Visible = true;
			txBoxIniciarSesion->Visible = true;
			txtIniciarSesion2->Visible = true;
			txBoxContrasenna->Visible = true;
			txtContrasenna->Visible = true;
			buttonIniciarSesion->Visible = true;
			noTienesCuenta->Visible = true;

		}
		catch (Exception^ ex) {
			// Manejar cualquier excepción que pueda ocurrir durante la escritura en el archivo
			MessageBox::Show("Error al guardar la información en el archivo de texto: " + ex->Message);
		}



	}

	private: System::Void Cerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	
		   

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	// Obtener la ruta del ejecutable  
		String ^ exePath = System::Reflection::Assembly::GetExecutingAssembly()->Location;  
	// Obtener la carpeta del ejecutable
	String^ exeDir = System::IO::Path::GetDirectoryName(exePath);  
	// Navegar tres niveles hacia arriba
	String^ binDir = System::IO::Path::GetDirectoryName(exeDir); // Subir un nivel (salir de 'Debug' o 'Release') 
	String^ projectDir = System::IO::Path::GetDirectoryName(binDir); // Subir otro nivel (salir de 'x64') 
	String^ solutionDir = System::IO::Path::GetDirectoryName(projectDir); // Subir otro nivel (salir del directorio del proyecto) 
	// Construir la ruta al archivo dentro de la carpeta 'pro', que está al mismo nivel que la solución
	String^ rutaArchivo = System::IO::Path::Combine(solutionDir, "pro\\sensores.txt"); 


	String^ datoSeleccionado = comboBox1->SelectedItem->ToString(); 

	try {
		

		
		StreamReader^ sr = gcnew StreamReader(rutaArchivo);

		
		String^ linea;
		while ((linea = sr->ReadLine()) != nullptr) {
			array<String^>^ partes = linea->Split(',');  
			if (partes[0] == datoSeleccionado)
			{
				//MessageBox::Show("Dato seleccionado: " + linea);
				

				txtNombre->Visible = true;
				BoxNombre->Visible = true;
				BoxNombre->ReadOnly = true;
				BoxNombre->Text = partes[0];
				
				txtTemp->Visible = true;
				BoxTemp->Visible = true;
				BoxTemp->ReadOnly = true;
				BoxTemp->Text = partes[1];

				txtPresion->Visible = true;
				BoxPresion->Visible = true;
				BoxPresion->ReadOnly = true;
				BoxPresion->Text = partes[2];

				txtHumedad->Visible = true;
				BoxHumedad->Visible = true;
				BoxHumedad->ReadOnly = true;
				BoxHumedad->Text = partes[3]; 
				int temperatura = Convert::ToInt32(partes[1]); 

					String ^ exePath2 = System::Reflection::Assembly::GetExecutingAssembly()->Location;
				// Obtener la carpeta del ejecutable
				String^ exeDir2 = System::IO::Path::GetDirectoryName(exePath2);
				// Navegar tres niveles hacia arriba
				String^ binDir2 = System::IO::Path::GetDirectoryName(exeDir2); // Subir un nivel (salir de 'Debug' o 'Release')
				String^ projectDir2 = System::IO::Path::GetDirectoryName(binDir2); // Subir otro nivel (salir de 'x64')
				String^ solutionDir2 = System::IO::Path::GetDirectoryName(projectDir2); // Subir otro nivel (salir del directorio del proyecto)
				// Construir la ruta al archivo dentro de la carpeta 'pro', que está al mismo nivel que la solución
				String^ rutaArchivoAudio = System::IO::Path::Combine(solutionDir2, "pro\\Never give you up.wav"); 
				if (temperatura>50) 
				{
					

					SoundPlayer^ reproductor = gcnew SoundPlayer(rutaArchivoAudio); 

					// Reproducir el audio
					reproductor->Play(); 
					//MessageBox::Show("La temperatura supera los 50, tiene una temperatura de : " + temperatura);
				}
			}
			
		}
		
		// Cerrar el StreamReader después de terminar la lectura del archivo
		sr->Close();
		
	}
	catch (IOException^ ex) {
		// Manejar cualquier excepción de E/S (lectura de archivo) 
		MessageBox::Show("Error al leer el archivo: " + ex->Message);
	}


	

}

};
}

