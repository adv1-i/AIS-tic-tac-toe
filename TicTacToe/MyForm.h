#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ field_0BTN;
	private: System::Windows::Forms::DomainUpDown^ chooseGameMenu;
	protected:











	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ field_3BTN;
	private: System::Windows::Forms::Button^ field_6BTN;
	private: System::Windows::Forms::Button^ field_7BTN;



	private: System::Windows::Forms::Button^ field_4BTN;

	private: System::Windows::Forms::Button^ field_1BTN;
	private: System::Windows::Forms::Button^ field_8BTN;


	private: System::Windows::Forms::Button^ field_5BTN;

	private: System::Windows::Forms::Button^ field_2BTN;

	private: System::Windows::Forms::Button^ newGameBTN;
	private: System::Windows::Forms::Button^ resetBTN;





	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->field_0BTN = (gcnew System::Windows::Forms::Button());
			this->chooseGameMenu = (gcnew System::Windows::Forms::DomainUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->field_3BTN = (gcnew System::Windows::Forms::Button());
			this->field_6BTN = (gcnew System::Windows::Forms::Button());
			this->field_7BTN = (gcnew System::Windows::Forms::Button());
			this->field_4BTN = (gcnew System::Windows::Forms::Button());
			this->field_1BTN = (gcnew System::Windows::Forms::Button());
			this->field_8BTN = (gcnew System::Windows::Forms::Button());
			this->field_5BTN = (gcnew System::Windows::Forms::Button());
			this->field_2BTN = (gcnew System::Windows::Forms::Button());
			this->newGameBTN = (gcnew System::Windows::Forms::Button());
			this->resetBTN = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// field_0BTN
			// 
			this->field_0BTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field_0BTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field_0BTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->field_0BTN->Location = System::Drawing::Point(112, 102);
			this->field_0BTN->Name = L"field_0BTN";
			this->field_0BTN->Size = System::Drawing::Size(100, 90);
			this->field_0BTN->TabIndex = 8;
			this->field_0BTN->UseVisualStyleBackColor = true;
			this->field_0BTN->Click += gcnew System::EventHandler(this, &MyForm::field_0BTN_Click);
			// 
			// chooseGameMenu
			// 
			this->chooseGameMenu->Items->Add(L"Me");
			this->chooseGameMenu->Items->Add(L"Minimax");
			this->chooseGameMenu->Location = System::Drawing::Point(199, 59);
			this->chooseGameMenu->Name = L"chooseGameMenu";
			this->chooseGameMenu->Size = System::Drawing::Size(119, 20);
			this->chooseGameMenu->TabIndex = 11;
			this->chooseGameMenu->Text = L"Me";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(204, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Who starts the game\?";
			// 
			// field_3BTN
			// 
			this->field_3BTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field_3BTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field_3BTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->field_3BTN->Location = System::Drawing::Point(112, 198);
			this->field_3BTN->Name = L"field_3BTN";
			this->field_3BTN->Size = System::Drawing::Size(100, 90);
			this->field_3BTN->TabIndex = 13;
			this->field_3BTN->UseVisualStyleBackColor = true;
			this->field_3BTN->Click += gcnew System::EventHandler(this, &MyForm::field_3BTN_Click);
			// 
			// field_6BTN
			// 
			this->field_6BTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field_6BTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field_6BTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->field_6BTN->Location = System::Drawing::Point(112, 294);
			this->field_6BTN->Name = L"field_6BTN";
			this->field_6BTN->Size = System::Drawing::Size(100, 90);
			this->field_6BTN->TabIndex = 14;
			this->field_6BTN->UseVisualStyleBackColor = true;
			this->field_6BTN->Click += gcnew System::EventHandler(this, &MyForm::field_6BTN_Click);
			// 
			// field_7BTN
			// 
			this->field_7BTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field_7BTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field_7BTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->field_7BTN->Location = System::Drawing::Point(218, 294);
			this->field_7BTN->Name = L"field_7BTN";
			this->field_7BTN->Size = System::Drawing::Size(100, 90);
			this->field_7BTN->TabIndex = 17;
			this->field_7BTN->UseVisualStyleBackColor = true;
			this->field_7BTN->Click += gcnew System::EventHandler(this, &MyForm::field_7BTN_Click);
			// 
			// field_4BTN
			// 
			this->field_4BTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field_4BTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field_4BTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->field_4BTN->Location = System::Drawing::Point(218, 198);
			this->field_4BTN->Name = L"field_4BTN";
			this->field_4BTN->Size = System::Drawing::Size(100, 90);
			this->field_4BTN->TabIndex = 16;
			this->field_4BTN->UseVisualStyleBackColor = true;
			this->field_4BTN->Click += gcnew System::EventHandler(this, &MyForm::field_4BTN_Click);
			// 
			// field_1BTN
			// 
			this->field_1BTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field_1BTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field_1BTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->field_1BTN->Location = System::Drawing::Point(218, 102);
			this->field_1BTN->Name = L"field_1BTN";
			this->field_1BTN->Size = System::Drawing::Size(100, 90);
			this->field_1BTN->TabIndex = 15;
			this->field_1BTN->UseVisualStyleBackColor = true;
			this->field_1BTN->Click += gcnew System::EventHandler(this, &MyForm::field_1BTN_Click);
			// 
			// field_8BTN
			// 
			this->field_8BTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field_8BTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field_8BTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->field_8BTN->Location = System::Drawing::Point(324, 294);
			this->field_8BTN->Name = L"field_8BTN";
			this->field_8BTN->Size = System::Drawing::Size(100, 90);
			this->field_8BTN->TabIndex = 20;
			this->field_8BTN->UseVisualStyleBackColor = true;
			this->field_8BTN->Click += gcnew System::EventHandler(this, &MyForm::field_8BTN_Click);
			// 
			// field_5BTN
			// 
			this->field_5BTN->BackColor = System::Drawing::SystemColors::Control;
			this->field_5BTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field_5BTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field_5BTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->field_5BTN->Location = System::Drawing::Point(324, 198);
			this->field_5BTN->Name = L"field_5BTN";
			this->field_5BTN->Size = System::Drawing::Size(100, 90);
			this->field_5BTN->TabIndex = 19;
			this->field_5BTN->UseVisualStyleBackColor = false;
			this->field_5BTN->Click += gcnew System::EventHandler(this, &MyForm::field_5BTN_Click);
			// 
			// field_2BTN
			// 
			this->field_2BTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->field_2BTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->field_2BTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->field_2BTN->Location = System::Drawing::Point(324, 102);
			this->field_2BTN->Name = L"field_2BTN";
			this->field_2BTN->Size = System::Drawing::Size(100, 90);
			this->field_2BTN->TabIndex = 18;
			this->field_2BTN->UseVisualStyleBackColor = true;
			this->field_2BTN->Click += gcnew System::EventHandler(this, &MyForm::field_2BTN_Click);
			// 
			// newGameBTN
			// 
			this->newGameBTN->Location = System::Drawing::Point(182, 405);
			this->newGameBTN->Name = L"newGameBTN";
			this->newGameBTN->Size = System::Drawing::Size(83, 32);
			this->newGameBTN->TabIndex = 21;
			this->newGameBTN->Text = L"New game";
			this->newGameBTN->UseVisualStyleBackColor = true;
			this->newGameBTN->Click += gcnew System::EventHandler(this, &MyForm::newGameBTN_Click);
			// 
			// resetBTN
			// 
			this->resetBTN->Location = System::Drawing::Point(271, 405);
			this->resetBTN->Name = L"resetBTN";
			this->resetBTN->Size = System::Drawing::Size(83, 32);
			this->resetBTN->TabIndex = 22;
			this->resetBTN->Text = L"Reset";
			this->resetBTN->UseVisualStyleBackColor = true;
			this->resetBTN->Click += gcnew System::EventHandler(this, &MyForm::resetBTN_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(538, 449);
			this->Controls->Add(this->resetBTN);
			this->Controls->Add(this->newGameBTN);
			this->Controls->Add(this->field_8BTN);
			this->Controls->Add(this->field_5BTN);
			this->Controls->Add(this->field_2BTN);
			this->Controls->Add(this->field_7BTN);
			this->Controls->Add(this->field_4BTN);
			this->Controls->Add(this->field_1BTN);
			this->Controls->Add(this->field_6BTN);
			this->Controls->Add(this->field_3BTN);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chooseGameMenu);
			this->Controls->Add(this->field_0BTN);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		bool checker;
		int plusone;
#pragma endregion

		void Enable_False() {
			field_0BTN->Enabled = false;
			field_1BTN->Enabled = false;
			field_2BTN->Enabled = false;
			field_3BTN->Enabled = false;
			field_4BTN->Enabled = false;
			field_5BTN->Enabled = false;
			field_6BTN->Enabled = false;
			field_7BTN->Enabled = false;
			field_8BTN->Enabled = false;
	}
		void checkWin() {
			if (field_0BTN->Text == "X" && field_1BTN->Text == "X" && field_2BTN->Text == "X")
			{
				field_0BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_1BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_2BTN->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}

			if (field_0BTN->Text == "X" && field_3BTN->Text == "X" && field_6BTN->Text == "X")
			{
				field_0BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_3BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_6BTN->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}

			if (field_0BTN->Text == "X" && field_4BTN->Text == "X" && field_8BTN->Text == "X")
			{
				field_0BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_4BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_8BTN->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}

			if (field_3BTN->Text == "X" && field_4BTN->Text == "X" && field_5BTN->Text == "X")
			{
				field_3BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_4BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_5BTN->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}

			if (field_6BTN->Text == "X" && field_7BTN->Text == "X" && field_8BTN->Text == "X")
			{
				field_6BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_7BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_8BTN->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}

			if (field_2BTN->Text == "X" && field_4BTN->Text == "X" && field_6BTN->Text == "X")
			{
				field_2BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_4BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_6BTN->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}

			if (field_1BTN->Text == "X" && field_4BTN->Text == "X" && field_7BTN->Text == "X")
			{
				field_1BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_4BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_7BTN->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}

			if (field_0BTN->Text == "O" && field_1BTN->Text == "O" && field_2BTN->Text == "O")
			{
				field_0BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_1BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_2BTN->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}

			if (field_0BTN->Text == "O" && field_3BTN->Text == "O" && field_6BTN->Text == "O")
			{
				field_0BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_3BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_6BTN->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}

			if (field_0BTN->Text == "O" && field_4BTN->Text == "O" && field_8BTN->Text == "O")
			{
				field_0BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_4BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_8BTN->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}

			if (field_3BTN->Text == "O" && field_4BTN->Text == "O" && field_5BTN->Text == "O")
			{
				field_3BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_4BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_5BTN->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}

			if (field_6BTN->Text == "O" && field_7BTN->Text == "O" && field_8BTN->Text == "O")
			{
				field_6BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_7BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_8BTN->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}

			if (field_2BTN->Text == "O" && field_4BTN->Text == "O" && field_6BTN->Text == "O")
			{
				field_2BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_4BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_6BTN->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}

			if (field_1BTN->Text == "O" && field_4BTN->Text == "O" && field_7BTN->Text == "O")
			{
				field_1BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_4BTN->BackColor = System::Drawing::Color::PowderBlue;
				field_7BTN->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The winner is player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void field_0BTN_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			field_0BTN->Text = "X";
			checker = true;
		}
		else
		{
			field_0BTN->Text = "O";
			checker = false;
		}
		checkWin();
		field_0BTN->Enabled = false;
	}
private: System::Void field_1BTN_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		field_1BTN->Text = "X";
		checker = true;
	}
	else
	{
		field_1BTN->Text = "O";
		checker = false;
	}
	checkWin();
	field_1BTN->Enabled = false;
}
private: System::Void field_2BTN_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		field_2BTN->Text = "X";
		checker = true;
	}
	else
	{
		field_2BTN->Text = "O";
		checker = false;
	}
	checkWin();
	field_2BTN->Enabled = false;
}
private: System::Void field_3BTN_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		field_3BTN->Text = "X";
		checker = true;
	}
	else
	{
		field_3BTN->Text = "O";
		checker = false;
	}
	checkWin();
	field_3BTN->Enabled = false;
}
private: System::Void field_4BTN_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		field_4BTN->Text = "X";
		checker = true;
	}
	else
	{
		field_4BTN->Text = "O";
		checker = false;
	}
	checkWin();
	field_4BTN->Enabled = false;
}
private: System::Void field_5BTN_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		field_5BTN->Text = "X";
		checker = true;
	}
	else
	{
		field_5BTN->Text = "O";
		checker = false;
	}
	checkWin();
	field_5BTN->Enabled = false;
}
private: System::Void field_6BTN_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		field_6BTN->Text = "X";
		checker = true;
	}
	else
	{
		field_6BTN->Text = "O";
		checker = false;
	}
	checkWin();
	field_6BTN->Enabled = false;
}
private: System::Void field_7BTN_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		field_7BTN->Text = "X";
		checker = true;
	}
	else
	{
		field_7BTN->Text = "O";
		checker = false;
	}
	checkWin();
	field_7BTN->Enabled = false;
}
private: System::Void field_8BTN_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		field_8BTN->Text = "X";
		checker = true;
	}
	else
	{
		field_8BTN->Text = "O";
		checker = false;
	}
	checkWin();
	field_8BTN->Enabled = false;
}
private: System::Void resetBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	field_0BTN->Enabled = true;
	field_1BTN->Enabled = true;
	field_2BTN->Enabled = true;
	field_3BTN->Enabled = true;
	field_4BTN->Enabled = true;
	field_5BTN->Enabled = true;
	field_6BTN->Enabled = true;
	field_7BTN->Enabled = true;
	field_8BTN->Enabled = true;

	field_0BTN->Text = "";
	field_1BTN->Text = "";
	field_2BTN->Text = "";
	field_3BTN->Text = "";
	field_4BTN->Text = "";
	field_5BTN->Text = "";
	field_6BTN->Text = "";
	field_7BTN->Text = "";
	field_8BTN->Text = "";

	newGameBTN->Enabled = true;

	field_0BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_1BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_2BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_3BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_4BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_5BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_6BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_7BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_8BTN->BackColor = System::Drawing::Color::WhiteSmoke;
}
private: System::Void newGameBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	field_0BTN->Enabled = true;
	field_1BTN->Enabled = true;
	field_2BTN->Enabled = true;
	field_3BTN->Enabled = true;
	field_4BTN->Enabled = true;
	field_5BTN->Enabled = true;
	field_6BTN->Enabled = true;
	field_7BTN->Enabled = true;
	field_8BTN->Enabled = true;

	field_0BTN->Text = "";
	field_1BTN->Text = "";
	field_2BTN->Text = "";
	field_3BTN->Text = "";
	field_4BTN->Text = "";
	field_5BTN->Text = "";
	field_6BTN->Text = "";
	field_7BTN->Text = "";
	field_8BTN->Text = "";

	field_0BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_1BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_2BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_3BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_4BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_5BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_6BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_7BTN->BackColor = System::Drawing::Color::WhiteSmoke;
	field_8BTN->BackColor = System::Drawing::Color::WhiteSmoke;
}
};
}
