#pragma once

namespace EthernetKRLClient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::Net;
    using namespace System::Net::Sockets;
    using namespace System::Text;
    using namespace System::Threading;
    using namespace System::IO;
    using namespace System::Xml;


	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{

        TcpClient^ mTcpClient = nullptr;
        NetworkStream^ mTcpStream = nullptr;
        TcpClient^ mTcpClient2 = nullptr;
        NetworkStream^ mTcpStream2 = nullptr;
        TcpClient^ mTcpClient3 = nullptr;
        NetworkStream^ mTcpStream3 = nullptr;
        
        


        

	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Timer^ timer1;
    private: System::Windows::Forms::Timer^ timer2;
    private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel19;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::TrackBar^ trackBar12;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel18;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::TrackBar^ trackBar11;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel17;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::TrackBar^ trackBar10;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel16;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::TrackBar^ trackBar9;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel15;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::TrackBar^ trackBar8;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel14;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::TrackBar^ trackBar7;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel13;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::TrackBar^ trackBar6;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel12;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::TrackBar^ trackBar5;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel11;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::TrackBar^ trackBar4;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel10;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::TrackBar^ trackBar3;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::TrackBar^ trackBar2;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel25;
    private: System::Windows::Forms::Label^ label44;
    private: System::Windows::Forms::TrackBar^ trackBar18;
    private: System::Windows::Forms::Label^ label45;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel24;
    private: System::Windows::Forms::Label^ label42;
    private: System::Windows::Forms::TrackBar^ trackBar17;
    private: System::Windows::Forms::Label^ label43;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel23;
    private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::TrackBar^ trackBar16;
    private: System::Windows::Forms::Label^ label41;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel22;
    private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::TrackBar^ trackBar15;
    private: System::Windows::Forms::Label^ label39;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel21;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::TrackBar^ trackBar14;
    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel20;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::TrackBar^ trackBar13;
    private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel28;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel27;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel26;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::ComponentModel::IContainer^ components;

    protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel25 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->trackBar18 = (gcnew System::Windows::Forms::TrackBar());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel24 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->trackBar17 = (gcnew System::Windows::Forms::TrackBar());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel23 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->trackBar16 = (gcnew System::Windows::Forms::TrackBar());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel22 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->trackBar15 = (gcnew System::Windows::Forms::TrackBar());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel21 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->trackBar14 = (gcnew System::Windows::Forms::TrackBar());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel20 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->trackBar13 = (gcnew System::Windows::Forms::TrackBar());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel19 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->trackBar12 = (gcnew System::Windows::Forms::TrackBar());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel18 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->trackBar11 = (gcnew System::Windows::Forms::TrackBar());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel17 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->trackBar10 = (gcnew System::Windows::Forms::TrackBar());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel16 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->trackBar9 = (gcnew System::Windows::Forms::TrackBar());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel15 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->trackBar8 = (gcnew System::Windows::Forms::TrackBar());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel14 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->trackBar7 = (gcnew System::Windows::Forms::TrackBar());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->trackBar6 = (gcnew System::Windows::Forms::TrackBar());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->trackBar5 = (gcnew System::Windows::Forms::TrackBar());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel28 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel27 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel26 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
            this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel25->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar18))->BeginInit();
            this->tableLayoutPanel24->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar17))->BeginInit();
            this->tableLayoutPanel23->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar16))->BeginInit();
            this->tableLayoutPanel22->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar15))->BeginInit();
            this->tableLayoutPanel21->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar14))->BeginInit();
            this->tableLayoutPanel20->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar13))->BeginInit();
            this->tableLayoutPanel19->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar12))->BeginInit();
            this->tableLayoutPanel18->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar11))->BeginInit();
            this->tableLayoutPanel17->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar10))->BeginInit();
            this->tableLayoutPanel16->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar9))->BeginInit();
            this->tableLayoutPanel15->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar8))->BeginInit();
            this->tableLayoutPanel14->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar7))->BeginInit();
            this->tableLayoutPanel13->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->BeginInit();
            this->tableLayoutPanel12->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->BeginInit();
            this->tableLayoutPanel11->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
            this->tableLayoutPanel10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
            this->tableLayoutPanel9->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
            this->tableLayoutPanel8->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
            this->tableLayoutPanel7->SuspendLayout();
            this->tableLayoutPanel28->SuspendLayout();
            this->tableLayoutPanel6->SuspendLayout();
            this->tableLayoutPanel27->SuspendLayout();
            this->tableLayoutPanel5->SuspendLayout();
            this->tableLayoutPanel26->SuspendLayout();
            this->tableLayoutPanel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
            this->tableLayoutPanel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
            this->tableLayoutPanel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
            this->SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->ColumnCount = 3;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel25, 2, 9);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel24, 1, 9);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel23, 0, 9);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel22, 2, 8);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel21, 1, 8);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel20, 0, 8);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel19, 2, 7);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel18, 1, 7);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel17, 0, 7);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel16, 2, 6);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel15, 1, 6);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel14, 0, 6);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel13, 2, 5);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel12, 1, 5);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel11, 0, 5);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel10, 2, 4);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel9, 1, 4);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel8, 0, 4);
            this->tableLayoutPanel1->Controls->Add(this->button3, 2, 3);
            this->tableLayoutPanel1->Controls->Add(this->button2, 1, 3);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel7, 2, 2);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel6, 1, 2);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel5, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 2, 1);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->label3, 2, 0);
            this->tableLayoutPanel1->Controls->Add(this->label2, 1, 0);
            this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->button1, 0, 3);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 10;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(835, 399);
            this->tableLayoutPanel1->TabIndex = 0;
            // 
            // tableLayoutPanel25
            // 
            this->tableLayoutPanel25->AutoSize = true;
            this->tableLayoutPanel25->ColumnCount = 3;
            this->tableLayoutPanel25->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel25->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel25->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel25->Controls->Add(this->label44, 0, 0);
            this->tableLayoutPanel25->Controls->Add(this->trackBar18, 1, 0);
            this->tableLayoutPanel25->Controls->Add(this->label45, 2, 0);
            this->tableLayoutPanel25->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel25->Location = System::Drawing::Point(559, 354);
            this->tableLayoutPanel25->Name = L"tableLayoutPanel25";
            this->tableLayoutPanel25->RowCount = 1;
            this->tableLayoutPanel25->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel25->Size = System::Drawing::Size(273, 42);
            this->tableLayoutPanel25->TabIndex = 29;
            // 
            // label44
            // 
            this->label44->AutoSize = true;
            this->label44->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->Location = System::Drawing::Point(3, 0);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(34, 42);
            this->label44->TabIndex = 1;
            this->label44->Text = L"A6";
            this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar18
            // 
            this->trackBar18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar18->Enabled = false;
            this->trackBar18->Location = System::Drawing::Point(43, 3);
            this->trackBar18->Maximum = 200;
            this->trackBar18->Minimum = -200;
            this->trackBar18->Name = L"trackBar18";
            this->trackBar18->Size = System::Drawing::Size(185, 36);
            this->trackBar18->TabIndex = 2;
            this->trackBar18->TickFrequency = 20;
            this->trackBar18->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar18_Scroll);
            // 
            // label45
            // 
            this->label45->AutoSize = true;
            this->label45->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label45->Location = System::Drawing::Point(234, 0);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(36, 42);
            this->label45->TabIndex = 3;
            this->label45->Text = L"0°";
            this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel24
            // 
            this->tableLayoutPanel24->AutoSize = true;
            this->tableLayoutPanel24->ColumnCount = 3;
            this->tableLayoutPanel24->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel24->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel24->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel24->Controls->Add(this->label42, 0, 0);
            this->tableLayoutPanel24->Controls->Add(this->trackBar17, 1, 0);
            this->tableLayoutPanel24->Controls->Add(this->label43, 2, 0);
            this->tableLayoutPanel24->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel24->Location = System::Drawing::Point(281, 354);
            this->tableLayoutPanel24->Name = L"tableLayoutPanel24";
            this->tableLayoutPanel24->RowCount = 1;
            this->tableLayoutPanel24->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel24->Size = System::Drawing::Size(272, 42);
            this->tableLayoutPanel24->TabIndex = 28;
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->Location = System::Drawing::Point(3, 0);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(34, 42);
            this->label42->TabIndex = 1;
            this->label42->Text = L"A6";
            this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar17
            // 
            this->trackBar17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar17->Enabled = false;
            this->trackBar17->Location = System::Drawing::Point(43, 3);
            this->trackBar17->Maximum = 200;
            this->trackBar17->Minimum = -200;
            this->trackBar17->Name = L"trackBar17";
            this->trackBar17->Size = System::Drawing::Size(184, 36);
            this->trackBar17->TabIndex = 2;
            this->trackBar17->TickFrequency = 20;
            this->trackBar17->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar17_Scroll);
            // 
            // label43
            // 
            this->label43->AutoSize = true;
            this->label43->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label43->Location = System::Drawing::Point(233, 0);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(36, 42);
            this->label43->TabIndex = 3;
            this->label43->Text = L"0°";
            this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel23
            // 
            this->tableLayoutPanel23->AutoSize = true;
            this->tableLayoutPanel23->ColumnCount = 3;
            this->tableLayoutPanel23->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel23->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel23->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel23->Controls->Add(this->label40, 0, 0);
            this->tableLayoutPanel23->Controls->Add(this->trackBar16, 1, 0);
            this->tableLayoutPanel23->Controls->Add(this->label41, 2, 0);
            this->tableLayoutPanel23->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel23->Location = System::Drawing::Point(3, 354);
            this->tableLayoutPanel23->Name = L"tableLayoutPanel23";
            this->tableLayoutPanel23->RowCount = 1;
            this->tableLayoutPanel23->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel23->Size = System::Drawing::Size(272, 42);
            this->tableLayoutPanel23->TabIndex = 27;
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->Location = System::Drawing::Point(3, 0);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(34, 42);
            this->label40->TabIndex = 1;
            this->label40->Text = L"A6";
            this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar16
            // 
            this->trackBar16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar16->Enabled = false;
            this->trackBar16->Location = System::Drawing::Point(43, 3);
            this->trackBar16->Maximum = 200;
            this->trackBar16->Minimum = -200;
            this->trackBar16->Name = L"trackBar16";
            this->trackBar16->Size = System::Drawing::Size(184, 36);
            this->trackBar16->TabIndex = 2;
            this->trackBar16->TickFrequency = 20;
            this->trackBar16->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar16_Scroll);
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label41->Location = System::Drawing::Point(233, 0);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(36, 42);
            this->label41->TabIndex = 3;
            this->label41->Text = L"0°";
            this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel22
            // 
            this->tableLayoutPanel22->AutoSize = true;
            this->tableLayoutPanel22->ColumnCount = 3;
            this->tableLayoutPanel22->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel22->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel22->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel22->Controls->Add(this->label38, 0, 0);
            this->tableLayoutPanel22->Controls->Add(this->trackBar15, 1, 0);
            this->tableLayoutPanel22->Controls->Add(this->label39, 2, 0);
            this->tableLayoutPanel22->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel22->Location = System::Drawing::Point(559, 315);
            this->tableLayoutPanel22->Name = L"tableLayoutPanel22";
            this->tableLayoutPanel22->RowCount = 1;
            this->tableLayoutPanel22->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel22->Size = System::Drawing::Size(273, 33);
            this->tableLayoutPanel22->TabIndex = 26;
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->Location = System::Drawing::Point(3, 0);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(34, 33);
            this->label38->TabIndex = 1;
            this->label38->Text = L"A5";
            this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar15
            // 
            this->trackBar15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar15->Enabled = false;
            this->trackBar15->Location = System::Drawing::Point(43, 3);
            this->trackBar15->Maximum = 160;
            this->trackBar15->Minimum = -160;
            this->trackBar15->Name = L"trackBar15";
            this->trackBar15->Size = System::Drawing::Size(185, 27);
            this->trackBar15->TabIndex = 2;
            this->trackBar15->TickFrequency = 20;
            this->trackBar15->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar15_Scroll);
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label39->Location = System::Drawing::Point(234, 0);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(36, 33);
            this->label39->TabIndex = 3;
            this->label39->Text = L"0°";
            this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel21
            // 
            this->tableLayoutPanel21->AutoSize = true;
            this->tableLayoutPanel21->ColumnCount = 3;
            this->tableLayoutPanel21->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel21->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel21->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel21->Controls->Add(this->label36, 0, 0);
            this->tableLayoutPanel21->Controls->Add(this->trackBar14, 1, 0);
            this->tableLayoutPanel21->Controls->Add(this->label37, 2, 0);
            this->tableLayoutPanel21->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel21->Location = System::Drawing::Point(281, 315);
            this->tableLayoutPanel21->Name = L"tableLayoutPanel21";
            this->tableLayoutPanel21->RowCount = 1;
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel21->Size = System::Drawing::Size(272, 33);
            this->tableLayoutPanel21->TabIndex = 25;
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(3, 0);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(34, 33);
            this->label36->TabIndex = 1;
            this->label36->Text = L"A5";
            this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar14
            // 
            this->trackBar14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar14->Enabled = false;
            this->trackBar14->Location = System::Drawing::Point(43, 3);
            this->trackBar14->Maximum = 160;
            this->trackBar14->Minimum = -160;
            this->trackBar14->Name = L"trackBar14";
            this->trackBar14->Size = System::Drawing::Size(184, 27);
            this->trackBar14->TabIndex = 2;
            this->trackBar14->TickFrequency = 20;
            this->trackBar14->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar14_Scroll);
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label37->Location = System::Drawing::Point(233, 0);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(36, 33);
            this->label37->TabIndex = 3;
            this->label37->Text = L"0°";
            this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel20
            // 
            this->tableLayoutPanel20->AutoSize = true;
            this->tableLayoutPanel20->ColumnCount = 3;
            this->tableLayoutPanel20->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel20->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel20->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel20->Controls->Add(this->label34, 0, 0);
            this->tableLayoutPanel20->Controls->Add(this->trackBar13, 1, 0);
            this->tableLayoutPanel20->Controls->Add(this->label35, 2, 0);
            this->tableLayoutPanel20->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel20->Location = System::Drawing::Point(3, 315);
            this->tableLayoutPanel20->Name = L"tableLayoutPanel20";
            this->tableLayoutPanel20->RowCount = 1;
            this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel20->Size = System::Drawing::Size(272, 33);
            this->tableLayoutPanel20->TabIndex = 24;
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(3, 0);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(34, 33);
            this->label34->TabIndex = 1;
            this->label34->Text = L"A5";
            this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar13
            // 
            this->trackBar13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar13->Enabled = false;
            this->trackBar13->Location = System::Drawing::Point(43, 3);
            this->trackBar13->Maximum = 160;
            this->trackBar13->Minimum = -160;
            this->trackBar13->Name = L"trackBar13";
            this->trackBar13->Size = System::Drawing::Size(184, 27);
            this->trackBar13->TabIndex = 2;
            this->trackBar13->TickFrequency = 20;
            this->trackBar13->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar13_Scroll);
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label35->Location = System::Drawing::Point(233, 0);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(36, 33);
            this->label35->TabIndex = 3;
            this->label35->Text = L"0°";
            this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel19
            // 
            this->tableLayoutPanel19->AutoSize = true;
            this->tableLayoutPanel19->ColumnCount = 3;
            this->tableLayoutPanel19->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel19->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel19->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel19->Controls->Add(this->label32, 0, 0);
            this->tableLayoutPanel19->Controls->Add(this->trackBar12, 1, 0);
            this->tableLayoutPanel19->Controls->Add(this->label33, 2, 0);
            this->tableLayoutPanel19->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel19->Location = System::Drawing::Point(559, 276);
            this->tableLayoutPanel19->Name = L"tableLayoutPanel19";
            this->tableLayoutPanel19->RowCount = 1;
            this->tableLayoutPanel19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel19->Size = System::Drawing::Size(273, 33);
            this->tableLayoutPanel19->TabIndex = 23;
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(3, 0);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(34, 33);
            this->label32->TabIndex = 1;
            this->label32->Text = L"A4";
            this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar12
            // 
            this->trackBar12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar12->Enabled = false;
            this->trackBar12->Location = System::Drawing::Point(43, 3);
            this->trackBar12->Maximum = 180;
            this->trackBar12->Minimum = -180;
            this->trackBar12->Name = L"trackBar12";
            this->trackBar12->Size = System::Drawing::Size(185, 27);
            this->trackBar12->TabIndex = 2;
            this->trackBar12->TickFrequency = 20;
            this->trackBar12->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar12_Scroll);
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label33->Location = System::Drawing::Point(234, 0);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(36, 33);
            this->label33->TabIndex = 3;
            this->label33->Text = L"0°";
            this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel18
            // 
            this->tableLayoutPanel18->AutoSize = true;
            this->tableLayoutPanel18->ColumnCount = 3;
            this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel18->Controls->Add(this->label30, 0, 0);
            this->tableLayoutPanel18->Controls->Add(this->trackBar11, 1, 0);
            this->tableLayoutPanel18->Controls->Add(this->label31, 2, 0);
            this->tableLayoutPanel18->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel18->Location = System::Drawing::Point(281, 276);
            this->tableLayoutPanel18->Name = L"tableLayoutPanel18";
            this->tableLayoutPanel18->RowCount = 1;
            this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel18->Size = System::Drawing::Size(272, 33);
            this->tableLayoutPanel18->TabIndex = 22;
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(3, 0);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(34, 33);
            this->label30->TabIndex = 1;
            this->label30->Text = L"A4";
            this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar11
            // 
            this->trackBar11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar11->Enabled = false;
            this->trackBar11->Location = System::Drawing::Point(43, 3);
            this->trackBar11->Maximum = 180;
            this->trackBar11->Minimum = -180;
            this->trackBar11->Name = L"trackBar11";
            this->trackBar11->Size = System::Drawing::Size(184, 27);
            this->trackBar11->TabIndex = 2;
            this->trackBar11->TickFrequency = 20;
            this->trackBar11->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar11_Scroll);
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label31->Location = System::Drawing::Point(233, 0);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(36, 33);
            this->label31->TabIndex = 3;
            this->label31->Text = L"0°";
            this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel17
            // 
            this->tableLayoutPanel17->AutoSize = true;
            this->tableLayoutPanel17->ColumnCount = 3;
            this->tableLayoutPanel17->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel17->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel17->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel17->Controls->Add(this->label28, 0, 0);
            this->tableLayoutPanel17->Controls->Add(this->trackBar10, 1, 0);
            this->tableLayoutPanel17->Controls->Add(this->label29, 2, 0);
            this->tableLayoutPanel17->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel17->Location = System::Drawing::Point(3, 276);
            this->tableLayoutPanel17->Name = L"tableLayoutPanel17";
            this->tableLayoutPanel17->RowCount = 1;
            this->tableLayoutPanel17->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel17->Size = System::Drawing::Size(272, 33);
            this->tableLayoutPanel17->TabIndex = 21;
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(3, 0);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(34, 33);
            this->label28->TabIndex = 1;
            this->label28->Text = L"A4";
            this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar10
            // 
            this->trackBar10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar10->Enabled = false;
            this->trackBar10->Location = System::Drawing::Point(43, 3);
            this->trackBar10->Maximum = 180;
            this->trackBar10->Minimum = -180;
            this->trackBar10->Name = L"trackBar10";
            this->trackBar10->Size = System::Drawing::Size(184, 27);
            this->trackBar10->TabIndex = 2;
            this->trackBar10->TickFrequency = 20;
            this->trackBar10->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar10_Scroll);
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label29->Location = System::Drawing::Point(233, 0);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(36, 33);
            this->label29->TabIndex = 3;
            this->label29->Text = L"0°";
            this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel16
            // 
            this->tableLayoutPanel16->AutoSize = true;
            this->tableLayoutPanel16->ColumnCount = 3;
            this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel16->Controls->Add(this->label26, 0, 0);
            this->tableLayoutPanel16->Controls->Add(this->trackBar9, 1, 0);
            this->tableLayoutPanel16->Controls->Add(this->label27, 2, 0);
            this->tableLayoutPanel16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel16->Location = System::Drawing::Point(559, 237);
            this->tableLayoutPanel16->Name = L"tableLayoutPanel16";
            this->tableLayoutPanel16->RowCount = 1;
            this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel16->Size = System::Drawing::Size(273, 33);
            this->tableLayoutPanel16->TabIndex = 20;
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(3, 0);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(34, 33);
            this->label26->TabIndex = 1;
            this->label26->Text = L"A3";
            this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar9
            // 
            this->trackBar9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar9->Enabled = false;
            this->trackBar9->Location = System::Drawing::Point(43, 3);
            this->trackBar9->Maximum = 180;
            this->trackBar9->Minimum = -180;
            this->trackBar9->Name = L"trackBar9";
            this->trackBar9->Size = System::Drawing::Size(185, 27);
            this->trackBar9->TabIndex = 2;
            this->trackBar9->TickFrequency = 20;
            this->trackBar9->Value = 90;
            this->trackBar9->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar9_Scroll);
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label27->Location = System::Drawing::Point(234, 0);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(36, 33);
            this->label27->TabIndex = 3;
            this->label27->Text = L"90°";
            this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel15
            // 
            this->tableLayoutPanel15->AutoSize = true;
            this->tableLayoutPanel15->ColumnCount = 3;
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel15->Controls->Add(this->label24, 0, 0);
            this->tableLayoutPanel15->Controls->Add(this->trackBar8, 1, 0);
            this->tableLayoutPanel15->Controls->Add(this->label25, 2, 0);
            this->tableLayoutPanel15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel15->Location = System::Drawing::Point(281, 237);
            this->tableLayoutPanel15->Name = L"tableLayoutPanel15";
            this->tableLayoutPanel15->RowCount = 1;
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel15->Size = System::Drawing::Size(272, 33);
            this->tableLayoutPanel15->TabIndex = 19;
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(3, 0);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(34, 33);
            this->label24->TabIndex = 1;
            this->label24->Text = L"A3";
            this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar8
            // 
            this->trackBar8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar8->Enabled = false;
            this->trackBar8->Location = System::Drawing::Point(43, 3);
            this->trackBar8->Maximum = 180;
            this->trackBar8->Minimum = -180;
            this->trackBar8->Name = L"trackBar8";
            this->trackBar8->Size = System::Drawing::Size(184, 27);
            this->trackBar8->TabIndex = 2;
            this->trackBar8->TickFrequency = 20;
            this->trackBar8->Value = 90;
            this->trackBar8->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar8_Scroll);
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label25->Location = System::Drawing::Point(233, 0);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(36, 33);
            this->label25->TabIndex = 3;
            this->label25->Text = L"90°";
            this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel14
            // 
            this->tableLayoutPanel14->AutoSize = true;
            this->tableLayoutPanel14->ColumnCount = 3;
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel14->Controls->Add(this->label22, 0, 0);
            this->tableLayoutPanel14->Controls->Add(this->trackBar7, 1, 0);
            this->tableLayoutPanel14->Controls->Add(this->label23, 2, 0);
            this->tableLayoutPanel14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel14->Location = System::Drawing::Point(3, 237);
            this->tableLayoutPanel14->Name = L"tableLayoutPanel14";
            this->tableLayoutPanel14->RowCount = 1;
            this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel14->Size = System::Drawing::Size(272, 33);
            this->tableLayoutPanel14->TabIndex = 18;
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(3, 0);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(34, 33);
            this->label22->TabIndex = 1;
            this->label22->Text = L"A3";
            this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar7
            // 
            this->trackBar7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar7->Enabled = false;
            this->trackBar7->Location = System::Drawing::Point(43, 3);
            this->trackBar7->Maximum = 180;
            this->trackBar7->Minimum = -180;
            this->trackBar7->Name = L"trackBar7";
            this->trackBar7->Size = System::Drawing::Size(184, 27);
            this->trackBar7->TabIndex = 2;
            this->trackBar7->TickFrequency = 20;
            this->trackBar7->Value = 90;
            this->trackBar7->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar7_Scroll);
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label23->Location = System::Drawing::Point(233, 0);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(36, 33);
            this->label23->TabIndex = 3;
            this->label23->Text = L"90°";
            this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel13
            // 
            this->tableLayoutPanel13->AutoSize = true;
            this->tableLayoutPanel13->ColumnCount = 3;
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel13->Controls->Add(this->label20, 0, 0);
            this->tableLayoutPanel13->Controls->Add(this->trackBar6, 1, 0);
            this->tableLayoutPanel13->Controls->Add(this->label21, 2, 0);
            this->tableLayoutPanel13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel13->Location = System::Drawing::Point(559, 198);
            this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
            this->tableLayoutPanel13->RowCount = 1;
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel13->Size = System::Drawing::Size(273, 33);
            this->tableLayoutPanel13->TabIndex = 17;
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(3, 0);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(34, 33);
            this->label20->TabIndex = 1;
            this->label20->Text = L"A2";
            this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar6
            // 
            this->trackBar6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar6->Enabled = false;
            this->trackBar6->Location = System::Drawing::Point(43, 3);
            this->trackBar6->Minimum = -190;
            this->trackBar6->Name = L"trackBar6";
            this->trackBar6->Size = System::Drawing::Size(185, 27);
            this->trackBar6->TabIndex = 2;
            this->trackBar6->TickFrequency = 10;
            this->trackBar6->Value = -90;
            this->trackBar6->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar6_Scroll);
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label21->Location = System::Drawing::Point(234, 0);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(36, 33);
            this->label21->TabIndex = 3;
            this->label21->Text = L"-90°";
            this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel12
            // 
            this->tableLayoutPanel12->AutoSize = true;
            this->tableLayoutPanel12->ColumnCount = 3;
            this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel12->Controls->Add(this->label18, 0, 0);
            this->tableLayoutPanel12->Controls->Add(this->trackBar5, 1, 0);
            this->tableLayoutPanel12->Controls->Add(this->label19, 2, 0);
            this->tableLayoutPanel12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel12->Location = System::Drawing::Point(281, 198);
            this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
            this->tableLayoutPanel12->RowCount = 1;
            this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel12->Size = System::Drawing::Size(272, 33);
            this->tableLayoutPanel12->TabIndex = 16;
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(3, 0);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(34, 33);
            this->label18->TabIndex = 1;
            this->label18->Text = L"A2";
            this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar5
            // 
            this->trackBar5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar5->Enabled = false;
            this->trackBar5->Location = System::Drawing::Point(43, 3);
            this->trackBar5->Minimum = -190;
            this->trackBar5->Name = L"trackBar5";
            this->trackBar5->Size = System::Drawing::Size(184, 27);
            this->trackBar5->TabIndex = 2;
            this->trackBar5->TickFrequency = 10;
            this->trackBar5->Value = -90;
            this->trackBar5->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar5_Scroll);
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label19->Location = System::Drawing::Point(233, 0);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(36, 33);
            this->label19->TabIndex = 3;
            this->label19->Text = L"-90°";
            this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel11
            // 
            this->tableLayoutPanel11->AutoSize = true;
            this->tableLayoutPanel11->ColumnCount = 3;
            this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel11->Controls->Add(this->label16, 0, 0);
            this->tableLayoutPanel11->Controls->Add(this->trackBar4, 1, 0);
            this->tableLayoutPanel11->Controls->Add(this->label17, 2, 0);
            this->tableLayoutPanel11->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel11->Location = System::Drawing::Point(3, 198);
            this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
            this->tableLayoutPanel11->RowCount = 1;
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel11->Size = System::Drawing::Size(272, 33);
            this->tableLayoutPanel11->TabIndex = 15;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(3, 0);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(34, 33);
            this->label16->TabIndex = 1;
            this->label16->Text = L"A2";
            this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar4
            // 
            this->trackBar4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar4->Enabled = false;
            this->trackBar4->Location = System::Drawing::Point(43, 3);
            this->trackBar4->Minimum = -190;
            this->trackBar4->Name = L"trackBar4";
            this->trackBar4->Size = System::Drawing::Size(184, 27);
            this->trackBar4->TabIndex = 2;
            this->trackBar4->TickFrequency = 10;
            this->trackBar4->Value = -90;
            this->trackBar4->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar4_Scroll);
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label17->Location = System::Drawing::Point(233, 0);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(36, 33);
            this->label17->TabIndex = 3;
            this->label17->Text = L"-90°";
            this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel10
            // 
            this->tableLayoutPanel10->AutoSize = true;
            this->tableLayoutPanel10->ColumnCount = 3;
            this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel10->Controls->Add(this->label14, 0, 0);
            this->tableLayoutPanel10->Controls->Add(this->trackBar3, 1, 0);
            this->tableLayoutPanel10->Controls->Add(this->label15, 2, 0);
            this->tableLayoutPanel10->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel10->Location = System::Drawing::Point(559, 159);
            this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
            this->tableLayoutPanel10->RowCount = 1;
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel10->Size = System::Drawing::Size(273, 33);
            this->tableLayoutPanel10->TabIndex = 14;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(3, 0);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(34, 33);
            this->label14->TabIndex = 1;
            this->label14->Text = L"A1";
            this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar3
            // 
            this->trackBar3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar3->Enabled = false;
            this->trackBar3->Location = System::Drawing::Point(43, 3);
            this->trackBar3->Maximum = 180;
            this->trackBar3->Minimum = -180;
            this->trackBar3->Name = L"trackBar3";
            this->trackBar3->Size = System::Drawing::Size(185, 27);
            this->trackBar3->TabIndex = 2;
            this->trackBar3->TickFrequency = 20;
            this->trackBar3->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar3_Scroll);
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label15->Location = System::Drawing::Point(234, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(36, 33);
            this->label15->TabIndex = 3;
            this->label15->Text = L"0°";
            this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel9
            // 
            this->tableLayoutPanel9->AutoSize = true;
            this->tableLayoutPanel9->ColumnCount = 3;
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel9->Controls->Add(this->label12, 0, 0);
            this->tableLayoutPanel9->Controls->Add(this->trackBar2, 1, 0);
            this->tableLayoutPanel9->Controls->Add(this->label13, 2, 0);
            this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel9->Location = System::Drawing::Point(281, 159);
            this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
            this->tableLayoutPanel9->RowCount = 1;
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel9->Size = System::Drawing::Size(272, 33);
            this->tableLayoutPanel9->TabIndex = 13;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(3, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(34, 33);
            this->label12->TabIndex = 1;
            this->label12->Text = L"A1";
            this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar2
            // 
            this->trackBar2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar2->Enabled = false;
            this->trackBar2->Location = System::Drawing::Point(43, 3);
            this->trackBar2->Maximum = 180;
            this->trackBar2->Minimum = -180;
            this->trackBar2->Name = L"trackBar2";
            this->trackBar2->Size = System::Drawing::Size(184, 27);
            this->trackBar2->TabIndex = 2;
            this->trackBar2->TickFrequency = 20;
            this->trackBar2->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar2_Scroll);
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label13->Location = System::Drawing::Point(233, 0);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(36, 33);
            this->label13->TabIndex = 3;
            this->label13->Text = L"0°";
            this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel8
            // 
            this->tableLayoutPanel8->AutoSize = true;
            this->tableLayoutPanel8->ColumnCount = 3;
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel8->Controls->Add(this->label10, 0, 0);
            this->tableLayoutPanel8->Controls->Add(this->trackBar1, 1, 0);
            this->tableLayoutPanel8->Controls->Add(this->label11, 2, 0);
            this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel8->Location = System::Drawing::Point(3, 159);
            this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
            this->tableLayoutPanel8->RowCount = 1;
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel8->Size = System::Drawing::Size(272, 33);
            this->tableLayoutPanel8->TabIndex = 12;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(3, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(34, 33);
            this->label10->TabIndex = 1;
            this->label10->Text = L"A1";
            this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // trackBar1
            // 
            this->trackBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->trackBar1->Enabled = false;
            this->trackBar1->Location = System::Drawing::Point(43, 3);
            this->trackBar1->Maximum = 180;
            this->trackBar1->Minimum = -180;
            this->trackBar1->Name = L"trackBar1";
            this->trackBar1->Size = System::Drawing::Size(184, 27);
            this->trackBar1->TabIndex = 2;
            this->trackBar1->TickFrequency = 20;
            this->trackBar1->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar1_Scroll);
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label11->Location = System::Drawing::Point(233, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(36, 33);
            this->label11->TabIndex = 3;
            this->label11->Text = L"0°";
            this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // button3
            // 
            this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(559, 120);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(273, 33);
            this->button3->TabIndex = 11;
            this->button3->Text = L"Start";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
            // 
            // button2
            // 
            this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(281, 120);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(272, 33);
            this->button2->TabIndex = 10;
            this->button2->Text = L"Start";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
            // 
            // tableLayoutPanel7
            // 
            this->tableLayoutPanel7->AutoSize = true;
            this->tableLayoutPanel7->ColumnCount = 2;
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                35)));
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                65)));
            this->tableLayoutPanel7->Controls->Add(this->tableLayoutPanel28, 0, 0);
            this->tableLayoutPanel7->Controls->Add(this->label9, 0, 0);
            this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel7->Location = System::Drawing::Point(559, 81);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 1;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(273, 33);
            this->tableLayoutPanel7->TabIndex = 8;
            // 
            // tableLayoutPanel28
            // 
            this->tableLayoutPanel28->ColumnCount = 1;
            this->tableLayoutPanel28->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel28->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel28->Controls->Add(this->textBox3, 0, 1);
            this->tableLayoutPanel28->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel28->Location = System::Drawing::Point(98, 3);
            this->tableLayoutPanel28->Name = L"tableLayoutPanel28";
            this->tableLayoutPanel28->RowCount = 3;
            this->tableLayoutPanel28->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel28->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                24)));
            this->tableLayoutPanel28->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel28->Size = System::Drawing::Size(172, 27);
            this->tableLayoutPanel28->TabIndex = 3;
            // 
            // textBox3
            // 
            this->textBox3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(3, 4);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(166, 23);
            this->textBox3->TabIndex = 0;
            this->textBox3->Text = L"127.0.0.1";
            this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(3, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(89, 33);
            this->label9->TabIndex = 1;
            this->label9->Text = L"IP:";
            this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel6
            // 
            this->tableLayoutPanel6->AutoSize = true;
            this->tableLayoutPanel6->ColumnCount = 2;
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                35)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                65)));
            this->tableLayoutPanel6->Controls->Add(this->tableLayoutPanel27, 0, 0);
            this->tableLayoutPanel6->Controls->Add(this->label8, 0, 0);
            this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel6->Location = System::Drawing::Point(281, 81);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 1;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(272, 33);
            this->tableLayoutPanel6->TabIndex = 7;
            // 
            // tableLayoutPanel27
            // 
            this->tableLayoutPanel27->ColumnCount = 1;
            this->tableLayoutPanel27->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel27->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel27->Controls->Add(this->textBox2, 0, 1);
            this->tableLayoutPanel27->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel27->Location = System::Drawing::Point(98, 3);
            this->tableLayoutPanel27->Name = L"tableLayoutPanel27";
            this->tableLayoutPanel27->RowCount = 3;
            this->tableLayoutPanel27->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel27->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                24)));
            this->tableLayoutPanel27->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel27->Size = System::Drawing::Size(171, 27);
            this->tableLayoutPanel27->TabIndex = 3;
            // 
            // textBox2
            // 
            this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(3, 4);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(165, 23);
            this->textBox2->TabIndex = 0;
            this->textBox2->Text = L"127.0.0.1";
            this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(3, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(89, 33);
            this->label8->TabIndex = 1;
            this->label8->Text = L"IP:";
            this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel5
            // 
            this->tableLayoutPanel5->AutoSize = true;
            this->tableLayoutPanel5->ColumnCount = 2;
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                35)));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                65)));
            this->tableLayoutPanel5->Controls->Add(this->label7, 0, 0);
            this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel26, 1, 0);
            this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel5->Location = System::Drawing::Point(3, 81);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 1;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(272, 33);
            this->tableLayoutPanel5->TabIndex = 6;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(3, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(89, 33);
            this->label7->TabIndex = 1;
            this->label7->Text = L"IP:";
            this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel26
            // 
            this->tableLayoutPanel26->ColumnCount = 1;
            this->tableLayoutPanel26->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel26->Controls->Add(this->textBox1, 0, 1);
            this->tableLayoutPanel26->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel26->Location = System::Drawing::Point(98, 3);
            this->tableLayoutPanel26->Name = L"tableLayoutPanel26";
            this->tableLayoutPanel26->RowCount = 3;
            this->tableLayoutPanel26->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel26->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                24)));
            this->tableLayoutPanel26->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel26->Size = System::Drawing::Size(171, 27);
            this->tableLayoutPanel26->TabIndex = 2;
            // 
            // textBox1
            // 
            this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(3, 4);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(165, 23);
            this->textBox1->TabIndex = 0;
            this->textBox1->Text = L"127.0.0.1";
            this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tableLayoutPanel4
            // 
            this->tableLayoutPanel4->AutoSize = true;
            this->tableLayoutPanel4->ColumnCount = 2;
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                35)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                65)));
            this->tableLayoutPanel4->Controls->Add(this->numericUpDown3, 1, 0);
            this->tableLayoutPanel4->Controls->Add(this->label6, 0, 0);
            this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->tableLayoutPanel4->Location = System::Drawing::Point(559, 45);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 1;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(273, 30);
            this->tableLayoutPanel4->TabIndex = 5;
            // 
            // numericUpDown3
            // 
            this->numericUpDown3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->numericUpDown3->Location = System::Drawing::Point(98, 3);
            this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60000, 0, 0, 0 });
            this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 55000, 0, 0, 0 });
            this->numericUpDown3->Name = L"numericUpDown3";
            this->numericUpDown3->Size = System::Drawing::Size(172, 24);
            this->numericUpDown3->TabIndex = 0;
            this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59022, 0, 0, 0 });
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(3, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(89, 30);
            this->label6->TabIndex = 1;
            this->label6->Text = L"Port:";
            this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->AutoSize = true;
            this->tableLayoutPanel3->ColumnCount = 2;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                35)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                65)));
            this->tableLayoutPanel3->Controls->Add(this->numericUpDown2, 1, 0);
            this->tableLayoutPanel3->Controls->Add(this->label5, 0, 0);
            this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->tableLayoutPanel3->Location = System::Drawing::Point(281, 45);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 1;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(272, 30);
            this->tableLayoutPanel3->TabIndex = 4;
            // 
            // numericUpDown2
            // 
            this->numericUpDown2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->numericUpDown2->Location = System::Drawing::Point(98, 3);
            this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60000, 0, 0, 0 });
            this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 55000, 0, 0, 0 });
            this->numericUpDown2->Name = L"numericUpDown2";
            this->numericUpDown2->Size = System::Drawing::Size(171, 24);
            this->numericUpDown2->TabIndex = 0;
            this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59023, 0, 0, 0 });
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(3, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(89, 30);
            this->label5->TabIndex = 1;
            this->label5->Text = L"Port:";
            this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(559, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(273, 39);
            this->label3->TabIndex = 2;
            this->label3->Text = L"KR MAN2";
            this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(281, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(272, 39);
            this->label2->TabIndex = 1;
            this->label2->Text = L"KR ZVAR";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(3, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(272, 39);
            this->label1->TabIndex = 0;
            this->label1->Text = L"KR MAN 1";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->AutoSize = true;
            this->tableLayoutPanel2->ColumnCount = 2;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                35)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                65)));
            this->tableLayoutPanel2->Controls->Add(this->numericUpDown1, 1, 0);
            this->tableLayoutPanel2->Controls->Add(this->label4, 0, 0);
            this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->tableLayoutPanel2->Location = System::Drawing::Point(3, 45);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 1;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(272, 30);
            this->tableLayoutPanel2->TabIndex = 3;
            // 
            // numericUpDown1
            // 
            this->numericUpDown1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->numericUpDown1->Location = System::Drawing::Point(98, 3);
            this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60000, 0, 0, 0 });
            this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 55000, 0, 0, 0 });
            this->numericUpDown1->Name = L"numericUpDown1";
            this->numericUpDown1->Size = System::Drawing::Size(171, 24);
            this->numericUpDown1->TabIndex = 0;
            this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59021, 0, 0, 0 });
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(3, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(89, 30);
            this->label4->TabIndex = 1;
            this->label4->Text = L"Port:";
            this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // button1
            // 
            this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(3, 120);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(272, 33);
            this->button1->TabIndex = 9;
            this->button1->Text = L"Start";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
            // 
            // timer1
            // 
            this->timer1->Interval = 40;
            this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
            // 
            // timer2
            // 
            this->timer2->Interval = 40;
            this->timer2->Tick += gcnew System::EventHandler(this, &MainForm::timer2_Tick);
            // 
            // timer3
            // 
            this->timer3->Interval = 40;
            this->timer3->Tick += gcnew System::EventHandler(this, &MainForm::timer3_Tick);
            // 
            // MainForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(835, 399);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Name = L"MainForm";
            this->Text = L"MainForm";
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel1->PerformLayout();
            this->tableLayoutPanel25->ResumeLayout(false);
            this->tableLayoutPanel25->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar18))->EndInit();
            this->tableLayoutPanel24->ResumeLayout(false);
            this->tableLayoutPanel24->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar17))->EndInit();
            this->tableLayoutPanel23->ResumeLayout(false);
            this->tableLayoutPanel23->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar16))->EndInit();
            this->tableLayoutPanel22->ResumeLayout(false);
            this->tableLayoutPanel22->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar15))->EndInit();
            this->tableLayoutPanel21->ResumeLayout(false);
            this->tableLayoutPanel21->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar14))->EndInit();
            this->tableLayoutPanel20->ResumeLayout(false);
            this->tableLayoutPanel20->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar13))->EndInit();
            this->tableLayoutPanel19->ResumeLayout(false);
            this->tableLayoutPanel19->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar12))->EndInit();
            this->tableLayoutPanel18->ResumeLayout(false);
            this->tableLayoutPanel18->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar11))->EndInit();
            this->tableLayoutPanel17->ResumeLayout(false);
            this->tableLayoutPanel17->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar10))->EndInit();
            this->tableLayoutPanel16->ResumeLayout(false);
            this->tableLayoutPanel16->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar9))->EndInit();
            this->tableLayoutPanel15->ResumeLayout(false);
            this->tableLayoutPanel15->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar8))->EndInit();
            this->tableLayoutPanel14->ResumeLayout(false);
            this->tableLayoutPanel14->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar7))->EndInit();
            this->tableLayoutPanel13->ResumeLayout(false);
            this->tableLayoutPanel13->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->EndInit();
            this->tableLayoutPanel12->ResumeLayout(false);
            this->tableLayoutPanel12->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->EndInit();
            this->tableLayoutPanel11->ResumeLayout(false);
            this->tableLayoutPanel11->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
            this->tableLayoutPanel10->ResumeLayout(false);
            this->tableLayoutPanel10->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
            this->tableLayoutPanel9->ResumeLayout(false);
            this->tableLayoutPanel9->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
            this->tableLayoutPanel8->ResumeLayout(false);
            this->tableLayoutPanel8->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
            this->tableLayoutPanel7->ResumeLayout(false);
            this->tableLayoutPanel7->PerformLayout();
            this->tableLayoutPanel28->ResumeLayout(false);
            this->tableLayoutPanel28->PerformLayout();
            this->tableLayoutPanel6->ResumeLayout(false);
            this->tableLayoutPanel6->PerformLayout();
            this->tableLayoutPanel27->ResumeLayout(false);
            this->tableLayoutPanel27->PerformLayout();
            this->tableLayoutPanel5->ResumeLayout(false);
            this->tableLayoutPanel5->PerformLayout();
            this->tableLayoutPanel26->ResumeLayout(false);
            this->tableLayoutPanel26->PerformLayout();
            this->tableLayoutPanel4->ResumeLayout(false);
            this->tableLayoutPanel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
            this->tableLayoutPanel3->ResumeLayout(false);
            this->tableLayoutPanel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label11->Text = trackBar1->Value.ToString() + "°";
    }
    private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label13->Text = trackBar2->Value.ToString() + "°";
    }
    private: System::Void trackBar3_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label15->Text = trackBar3->Value.ToString() + "°";
    }
    private: System::Void trackBar4_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label17->Text = trackBar4->Value.ToString() + "°";
    }
    private: System::Void trackBar5_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label19->Text = trackBar5->Value.ToString() + "°";
    }
    private: System::Void trackBar9_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label27->Text = trackBar9->Value.ToString() + "°";
    }
    private: System::Void trackBar6_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label21->Text = trackBar6->Value.ToString() + "°";
    }
    private: System::Void trackBar7_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label23->Text = trackBar7->Value.ToString() + "°";
    }
    private: System::Void trackBar8_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label25->Text = trackBar8->Value.ToString() + "°";
    }
    private: System::Void trackBar10_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label29->Text = trackBar10->Value.ToString() + "°";
    }
    private: System::Void trackBar11_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label31->Text = trackBar11->Value.ToString() + "°";
    }
    private: System::Void trackBar12_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label33->Text = trackBar12->Value.ToString() + "°";
    }
    private: System::Void trackBar13_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label35->Text = trackBar13->Value.ToString() + "°";
    }
    private: System::Void trackBar14_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label37->Text = trackBar14->Value.ToString() + "°";
    }
    private: System::Void trackBar15_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label39->Text = trackBar15->Value.ToString() + "°";
    }
    private: System::Void trackBar16_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label41->Text = trackBar16->Value.ToString() + "°";
    }
    private: System::Void trackBar17_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label43->Text = trackBar17->Value.ToString() + "°";
    }
    private: System::Void trackBar18_Scroll(System::Object^ sender, System::EventArgs^ e) {
        label45->Text = trackBar18->Value.ToString() + "°";
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        if (button1->Text == "Start") {
            try {
                mTcpClient = gcnew TcpClient(textBox1->Text, Convert::ToInt32(numericUpDown1->Value));
                mTcpStream = mTcpClient->GetStream();
                numericUpDown1->Enabled = false;
                textBox1->Enabled = false;
                button1->Text = "Stop";
                timer1->Enabled = true;
                timer1->Start();
                trackBar1->Enabled = true;
                trackBar4->Enabled = true;
                trackBar7->Enabled = true;
                trackBar10->Enabled = true;
                trackBar13->Enabled = true;
                trackBar16->Enabled = true;

            }
            catch (ArgumentNullException^ e) {
            }
            catch (SocketException^ e) {
            }
        }
        else {
            try {                
                mTcpStream->Close();
                //mTcpClient->Close();
                numericUpDown1->Enabled = true;
                textBox1->Enabled = true;
                button1->Text = "Start";
                timer1->Stop();
                timer1->Enabled = false;
                trackBar1->Enabled = false;
                trackBar4->Enabled = false;
                trackBar7->Enabled = false;
                trackBar10->Enabled = false;
                trackBar13->Enabled = false;
                trackBar16->Enabled = false;
                
            }
            catch (ArgumentNullException^ e) {
            }
            catch (SocketException^ e) {
            }
        }
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        if (button2->Text == "Start") {
            try {
                mTcpClient2 = gcnew TcpClient(textBox2->Text, Convert::ToInt32(numericUpDown2->Value));
                mTcpStream2 = mTcpClient2->GetStream();
                numericUpDown2->Enabled = false;
                textBox2->Enabled = false;
                button2->Text = "Stop";
                timer2->Enabled = true;
                timer2->Start();
                trackBar2->Enabled = true;
                trackBar5->Enabled = true;
                trackBar8->Enabled = true;
                trackBar11->Enabled = true;
                trackBar14->Enabled = true;
                trackBar17->Enabled = true;

            }
            catch (ArgumentNullException^ e) {
            }
            catch (SocketException^ e) {
            }
        }
        else {
            try {
                mTcpStream2->Close();
                //mTcpClient2->Close();
                numericUpDown2->Enabled = true;
                textBox2->Enabled = true;
                button2->Text = "Start";
                timer2->Stop();
                timer2->Enabled = false;
                trackBar2->Enabled = false;
                trackBar5->Enabled = false;
                trackBar8->Enabled = false;
                trackBar11->Enabled = false;
                trackBar14->Enabled = false;
                trackBar17->Enabled = false;

            }
            catch (ArgumentNullException^ e) {
            }
            catch (SocketException^ e) {
            }
        }
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        if (button3->Text == "Start") {
            try {
                mTcpClient3 = gcnew TcpClient(textBox3->Text, Convert::ToInt32(numericUpDown3->Value));
                mTcpStream3 = mTcpClient3->GetStream();
                numericUpDown3->Enabled = false;
                textBox3->Enabled = false;
                button3->Text = "Stop";
                timer3->Enabled = true;
                timer3->Start();
                trackBar3->Enabled = true;
                trackBar6->Enabled = true;
                trackBar9->Enabled = true;
                trackBar12->Enabled = true;
                trackBar15->Enabled = true;
                trackBar18->Enabled = true;

            }
            catch (ArgumentNullException^ e) {
            }
            catch (SocketException^ e) {
            }
        }
        else {
            try {
                mTcpStream3->Close();
                //mTcpClient3->Close();
                numericUpDown3->Enabled = true;
                textBox3->Enabled = true;
                button3->Text = "Start";
                timer3->Stop();
                timer3->Enabled = false;
                trackBar3->Enabled = false;
                trackBar6->Enabled = false;
                trackBar9->Enabled = false;
                trackBar12->Enabled = false;
                trackBar15->Enabled = false;
                trackBar18->Enabled = false;

            }
            catch (ArgumentNullException^ e) {
            }
            catch (SocketException^ e) {
            }
        }
    }

    void sendData(NetworkStream^ localTCP, double A1, double A2, double A3, double A4, double A5, double A6) {
         
        XmlDocument^ doc = gcnew XmlDocument();
        String^ texttosend;
        XmlWriter^ writer = doc->CreateNavigator()->AppendChild();
        writer->WriteStartElement(L"ActPos");
        writer->WriteAttributeString(L"X", (879.987122).ToString("0.000", gcnew System::Globalization::CultureInfo("en-US")));
        writer->WriteAttributeString(L"Y", (-48.003094).ToString("0.000", gcnew System::Globalization::CultureInfo("en-US")));
        writer->WriteAttributeString(L"Z", (1630.830200).ToString("0.000", gcnew System::Globalization::CultureInfo("en-US")));
        writer->WriteAttributeString(L"A", (-177.769058).ToString("0.000", gcnew System::Globalization::CultureInfo("en-US")));
        writer->WriteAttributeString(L"B", (17.104849).ToString("0.000", gcnew System::Globalization::CultureInfo("en-US")));
        writer->WriteAttributeString(L"C", (179.977203).ToString("0.000", gcnew System::Globalization::CultureInfo("en-US")));
        writer->WriteAttributeString(L"A1", A1.ToString("0.000", gcnew System::Globalization::CultureInfo("en-US")));
        writer->WriteAttributeString(L"A2", A2.ToString("0.000", gcnew System::Globalization::CultureInfo("en-US")));
        writer->WriteAttributeString(L"A3", A3.ToString("0.000", gcnew System::Globalization::CultureInfo("en-US")));
        writer->WriteAttributeString(L"A4", A4.ToString("0.000", gcnew System::Globalization::CultureInfo("en-US")));
        writer->WriteAttributeString(L"A5", A5.ToString("0.000", gcnew System::Globalization::CultureInfo("en-US")));
        writer->WriteAttributeString(L"A6", A6.ToString("0.000", gcnew System::Globalization::CultureInfo("en-US")));
        writer->WriteFullEndElement();
        writer->Flush();
        writer->Close();
        texttosend = doc->OuterXml;
        array<Byte>^ data = System::Text::Encoding::Default->GetBytes(texttosend);
        localTCP->Write(data, 0, data->Length);
    }
    private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
        sendData(mTcpStream,trackBar1->Value, trackBar4->Value, trackBar7->Value, trackBar10->Value, trackBar13->Value, trackBar16->Value);
    }
    private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
        sendData(mTcpStream2, trackBar2->Value, trackBar5->Value, trackBar8->Value, trackBar11->Value, trackBar14->Value, trackBar17->Value);
    }
    private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
        sendData(mTcpStream3, trackBar3->Value, trackBar6->Value, trackBar9->Value, trackBar12->Value, trackBar15->Value, trackBar18->Value);
    }
};
}
