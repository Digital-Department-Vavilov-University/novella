#pragma once

namespace bymeproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Diagnostics::Process^ process1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ picture1;

	private: System::Windows::Forms::Label^ text1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ text2;
	private: System::Windows::Forms::Button^ button1net;
	private: System::Windows::Forms::Button^ button1da;
	private: System::Windows::Forms::Label^ text3net;
	private: System::Windows::Forms::Label^ text3da;
	private: System::Windows::Forms::Button^ button2da1;
	private: System::Windows::Forms::Button^ button2net1;
	private: System::Windows::Forms::Button^ button2net2;
	private: System::Windows::Forms::Button^ button2da2;
	private: System::Windows::Forms::Label^ text4otr;
	private: System::Windows::Forms::Label^ text4poz;
	private: System::Windows::Forms::PictureBox^ picture2;
	private: System::Windows::Forms::PictureBox^ picture3;
	private: System::Windows::Forms::PictureBox^ picture4;
	private: System::Windows::Forms::PictureBox^ picturePoz;
	private: System::Windows::Forms::PictureBox^ picture5;






	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->process1 = (gcnew System::Diagnostics::Process());
			this->picture1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->text1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->text2 = (gcnew System::Windows::Forms::Label());
			this->button1da = (gcnew System::Windows::Forms::Button());
			this->button1net = (gcnew System::Windows::Forms::Button());
			this->text3da = (gcnew System::Windows::Forms::Label());
			this->text3net = (gcnew System::Windows::Forms::Label());
			this->button2da1 = (gcnew System::Windows::Forms::Button());
			this->button2net1 = (gcnew System::Windows::Forms::Button());
			this->button2da2 = (gcnew System::Windows::Forms::Button());
			this->button2net2 = (gcnew System::Windows::Forms::Button());
			this->text4poz = (gcnew System::Windows::Forms::Label());
			this->text4otr = (gcnew System::Windows::Forms::Label());
			this->picture2 = (gcnew System::Windows::Forms::PictureBox());
			this->picture3 = (gcnew System::Windows::Forms::PictureBox());
			this->picture4 = (gcnew System::Windows::Forms::PictureBox());
			this->picturePoz = (gcnew System::Windows::Forms::PictureBox());
			this->picture5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePoz))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture5))->BeginInit();
			this->SuspendLayout();
			// 
			// process1
			// 
			this->process1->StartInfo->Domain = L"";
			this->process1->StartInfo->LoadUserProfile = false;
			this->process1->StartInfo->Password = nullptr;
			this->process1->StartInfo->StandardErrorEncoding = nullptr;
			this->process1->StartInfo->StandardOutputEncoding = nullptr;
			this->process1->StartInfo->UserName = L"";
			this->process1->SynchronizingObject = this;
			// 
			// picture1
			// 
			this->picture1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture1.Image")));
			this->picture1->Location = System::Drawing::Point(0, 0);
			this->picture1->Name = L"picture1";
			this->picture1->Size = System::Drawing::Size(1118, 660);
			this->picture1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picture1->TabIndex = 0;
			this->picture1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 640);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 1;
			// 
			// text1
			// 
			this->text1->AutoSize = true;
			this->text1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->text1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text1->Location = System::Drawing::Point(12, 683);
			this->text1->Name = L"text1";
			this->text1->Size = System::Drawing::Size(817, 80);
			this->text1->TabIndex = 2;
			this->text1->Text = resources->GetString(L"text1.Text");
			this->text1->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(37, 577);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(173, 59);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Далее";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// text2
			// 
			this->text2->AutoSize = true;
			this->text2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->text2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text2->Location = System::Drawing::Point(293, 1910);
			this->text2->Name = L"text2";
			this->text2->Size = System::Drawing::Size(691, 80);
			this->text2->TabIndex = 4;
			this->text2->Text = resources->GetString(L"text2.Text");
			// 
			// button1da
			// 
			this->button1da->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1da->Location = System::Drawing::Point(62, 4530);
			this->button1da->Name = L"button1da";
			this->button1da->Size = System::Drawing::Size(183, 61);
			this->button1da->TabIndex = 5;
			this->button1da->Text = L"Поступить \"круто\"\r\n\r\n";
			this->button1da->UseVisualStyleBackColor = false;
			this->button1da->Click += gcnew System::EventHandler(this, &MyForm1::button1da_Click);
			// 
			// button1net
			// 
			this->button1net->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1net->Location = System::Drawing::Point(289, 4530);
			this->button1net->Name = L"button1net";
			this->button1net->Size = System::Drawing::Size(183, 61);
			this->button1net->TabIndex = 6;
			this->button1net->Text = L"Выкинуть в мусорку\r\n";
			this->button1net->UseVisualStyleBackColor = false;
			this->button1net->Click += gcnew System::EventHandler(this, &MyForm1::button1net_Click);
			// 
			// text3da
			// 
			this->text3da->AutoSize = true;
			this->text3da->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text3da->Location = System::Drawing::Point(149, 1160);
			this->text3da->Name = L"text3da";
			this->text3da->Size = System::Drawing::Size(640, 120);
			this->text3da->TabIndex = 7;
			this->text3da->Text = resources->GetString(L"text3da.Text");
			// 
			// text3net
			// 
			this->text3net->AutoSize = true;
			this->text3net->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text3net->Location = System::Drawing::Point(149, 2630);
			this->text3net->Name = L"text3net";
			this->text3net->Size = System::Drawing::Size(524, 100);
			this->text3net->TabIndex = 8;
			this->text3net->Text = resources->GetString(L"text3net.Text");
			// 
			// button2da1
			// 
			this->button2da1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2da1->Location = System::Drawing::Point(16, 3560);
			this->button2da1->Name = L"button2da1";
			this->button2da1->Size = System::Drawing::Size(160, 61);
			this->button2da1->TabIndex = 9;
			this->button2da1->Text = L"Перерабатывать";
			this->button2da1->UseVisualStyleBackColor = false;
			this->button2da1->Click += gcnew System::EventHandler(this, &MyForm1::button2da1_Click);
			// 
			// button2net1
			// 
			this->button2net1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2net1->Location = System::Drawing::Point(16, 4390);
			this->button2net1->Name = L"button2net1";
			this->button2net1->Size = System::Drawing::Size(160, 61);
			this->button2net1->TabIndex = 10;
			this->button2net1->Text = L"Вывозить на свалку\r\n";
			this->button2net1->UseVisualStyleBackColor = false;
			this->button2net1->Click += gcnew System::EventHandler(this, &MyForm1::button2net1_Click);
			// 
			// button2da2
			// 
			this->button2da2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2da2->Location = System::Drawing::Point(386, 4390);
			this->button2da2->Name = L"button2da2";
			this->button2da2->Size = System::Drawing::Size(160, 61);
			this->button2da2->TabIndex = 11;
			this->button2da2->Text = L"Первая идея\r\n";
			this->button2da2->UseVisualStyleBackColor = false;
			this->button2da2->Click += gcnew System::EventHandler(this, &MyForm1::button2da2_Click);
			// 
			// button2net2
			// 
			this->button2net2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2net2->Location = System::Drawing::Point(386, 5060);
			this->button2net2->Name = L"button2net2";
			this->button2net2->Size = System::Drawing::Size(160, 61);
			this->button2net2->TabIndex = 12;
			this->button2net2->Text = L"Вторая идея";
			this->button2net2->UseVisualStyleBackColor = false;
			this->button2net2->Click += gcnew System::EventHandler(this, &MyForm1::button2net2_Click);
			// 
			// text4poz
			// 
			this->text4poz->AutoSize = true;
			this->text4poz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text4poz->Location = System::Drawing::Point(33, 3100);
			this->text4poz->Name = L"text4poz";
			this->text4poz->Size = System::Drawing::Size(895, 80);
			this->text4poz->TabIndex = 13;
			this->text4poz->Text = resources->GetString(L"text4poz.Text");
			// 
			// text4otr
			// 
			this->text4otr->AutoSize = true;
			this->text4otr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text4otr->Location = System::Drawing::Point(177, 1710);
			this->text4otr->Name = L"text4otr";
			this->text4otr->Size = System::Drawing::Size(864, 100);
			this->text4otr->TabIndex = 14;
			this->text4otr->Text = resources->GetString(L"text4otr.Text");
			// 
			// picture2
			// 
			this->picture2->BackColor = System::Drawing::Color::Transparent;
			this->picture2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture2.BackgroundImage")));
			this->picture2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picture2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture2.Image")));
			this->picture2->Location = System::Drawing::Point(0, 0);
			this->picture2->Name = L"picture2";
			this->picture2->Size = System::Drawing::Size(1118, 660);
			this->picture2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picture2->TabIndex = 15;
			this->picture2->TabStop = false;
			// 
			// picture3
			// 
			this->picture3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture3.Image")));
			this->picture3->Location = System::Drawing::Point(0, 0);
			this->picture3->Name = L"picture3";
			this->picture3->Size = System::Drawing::Size(1118, 660);
			this->picture3->TabIndex = 16;
			this->picture3->TabStop = false;
			// 
			// picture4
			// 
			this->picture4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture4.Image")));
			this->picture4->Location = System::Drawing::Point(0, 0);
			this->picture4->Name = L"picture4";
			this->picture4->Size = System::Drawing::Size(1118, 660);
			this->picture4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picture4->TabIndex = 17;
			this->picture4->TabStop = false;
			// 
			// picturePoz
			// 
			this->picturePoz->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picturePoz.Image")));
			this->picturePoz->Location = System::Drawing::Point(0, 0);
			this->picturePoz->Name = L"picturePoz";
			this->picturePoz->Size = System::Drawing::Size(1118, 660);
			this->picturePoz->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picturePoz->TabIndex = 18;
			this->picturePoz->TabStop = false;
			// 
			// picture5
			// 
			this->picture5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture5.Image")));
			this->picture5->Location = System::Drawing::Point(0, 0);
			this->picture5->Name = L"picture5";
			this->picture5->Size = System::Drawing::Size(1118, 660);
			this->picture5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picture5->TabIndex = 19;
			this->picture5->TabStop = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1121, 831);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->text4otr);
			this->Controls->Add(this->text4poz);
			this->Controls->Add(this->button2net2);
			this->Controls->Add(this->button2da2);
			this->Controls->Add(this->button2net1);
			this->Controls->Add(this->button2da1);
			this->Controls->Add(this->text3net);
			this->Controls->Add(this->text3da);
			this->Controls->Add(this->button1net);
			this->Controls->Add(this->button1da);
			this->Controls->Add(this->text2);
			this->Controls->Add(this->text1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->picture1);
			this->Controls->Add(this->picture2);
			this->Controls->Add(this->picture3);
			this->Controls->Add(this->picture4);
			this->Controls->Add(this->picturePoz);
			this->Controls->Add(this->picture5);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->Text = L"MyProject";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePoz))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	
	

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->picture1->Location = System::Drawing::Point(0,1000);
	this->button1->Location = System::Drawing::Point(37, 5770);
	this->text1->Location = System::Drawing::Point(12, 6830);
	this->text2->Location = System::Drawing::Point(12, 683);
	this->button1da->Location = System::Drawing::Point(37, 577);
	this->button1net->Location = System::Drawing::Point(287, 577);
}

	private: System::Void button1da_Click(System::Object^ sender, System::EventArgs^ e)
{		
		this->picture2->Location = System::Drawing::Point(0, 1000);
		this->button1da->Location = System::Drawing::Point(12, 6830);
		this->button1net->Location = System::Drawing::Point(12, 6830);
		this->text2->Location = System::Drawing::Point(12, 6830);
		this->text3da->Location = System::Drawing::Point(12, 683);
		this->button2da1->Location = System::Drawing::Point(37, 577);
		this->button2net1->Location = System::Drawing::Point(287, 577);

}
private: System::Void button1net_Click(System::Object^ sender, System::EventArgs^ e) 
{	
	this->picture2->Location = System::Drawing::Point(0, 1000);
	this->picture3->Location = System::Drawing::Point(0, 1000);
	this->button1da->Location = System::Drawing::Point(12, 6830);
	this->button1net->Location = System::Drawing::Point(12, 6830);
	this->text2->Location = System::Drawing::Point(12, 6830);
	this->text3net->Location = System::Drawing::Point(12, 683);
	this->button2da2->Location = System::Drawing::Point(37, 577);
	this->button2net2->Location = System::Drawing::Point(287, 577);
}
private: System::Void button2da1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->picture2->Location = System::Drawing::Point(0, 1000);
	this->picture3->Location = System::Drawing::Point(0, 1000);
	this->picture4->Location = System::Drawing::Point(0, 1000);
	this->button2da1->Location = System::Drawing::Point(37, 5770);
	this->button2net1->Location = System::Drawing::Point(287, 5770);
	this->text3da->Location = System::Drawing::Point(12, 6830);
	this->text4poz->Location = System::Drawing::Point(12, 683);
}
private: System::Void button2net1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->picture2->Location = System::Drawing::Point(0, 1000);
	this->picture3->Location = System::Drawing::Point(0, 1000);
	this->picture4->Location = System::Drawing::Point(0, 1000);
	this->picturePoz->Location = System::Drawing::Point(0, 1000);
	this->button2da1->Location = System::Drawing::Point(37, 5770);
	this->button2net1->Location = System::Drawing::Point(287, 5770);
	this->text3da->Location = System::Drawing::Point(12, 6830);
	this->text4otr->Location = System::Drawing::Point(12, 683);
}

private: System::Void button2da2_Click(System::Object^ sender, System::EventArgs^ e) 
{	
	this->picture2->Location = System::Drawing::Point(0, 1000);
	this->picture3->Location = System::Drawing::Point(0, 1000);
	this->picture4->Location = System::Drawing::Point(0, 1000);
	this->button2da2->Location = System::Drawing::Point(37, 5770);
	this->button2net2->Location = System::Drawing::Point(287, 5770);
	this->text3net->Location = System::Drawing::Point(12, 6830);
	this->text4poz->Location = System::Drawing::Point(12, 683);
}
private: System::Void button2net2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->picture2->Location = System::Drawing::Point(0, 1000);
	this->picture3->Location = System::Drawing::Point(0, 1000);
	this->picture4->Location = System::Drawing::Point(0, 1000);
	this->picturePoz->Location = System::Drawing::Point(0, 1000);
	this->button2da2->Location = System::Drawing::Point(37, 5770);
	this->button2net2->Location = System::Drawing::Point(287, 5770);
	this->text3net->Location = System::Drawing::Point(12, 6830);
	this->text4otr->Location = System::Drawing::Point(12, 683);
}


























};
}
