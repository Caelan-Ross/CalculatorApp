#pragma once
#include <sstream>
#include <boost/lexical_cast.hpp>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CalculatorForm
	/// </summary>
	public ref class CalculatorForm : public System::Windows::Forms::Form
	{
	public:
		CalculatorForm(void)
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
		~CalculatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ titleLabel;

	private: System::Windows::Forms::TextBox^ bottomInput;
	private: System::Windows::Forms::Label^ opLabel;
	private: System::Windows::Forms::Label^ equalsLabel;
	private: System::Windows::Forms::Label^ resultLabel;
	private: System::Windows::Forms::Button^ plusButton;
	private: System::Windows::Forms::Button^ minusButton;
	private: System::Windows::Forms::Button^ divideButton;


	private: System::Windows::Forms::Button^ multButton;
	private: System::Windows::Forms::TextBox^ topInput;
	private: System::Windows::Forms::Label^ blankLabel;


	private: System::Windows::Forms::Label^ nonNumericLabel;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CalculatorForm::typeid));
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->bottomInput = (gcnew System::Windows::Forms::TextBox());
			this->opLabel = (gcnew System::Windows::Forms::Label());
			this->equalsLabel = (gcnew System::Windows::Forms::Label());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->plusButton = (gcnew System::Windows::Forms::Button());
			this->minusButton = (gcnew System::Windows::Forms::Button());
			this->divideButton = (gcnew System::Windows::Forms::Button());
			this->multButton = (gcnew System::Windows::Forms::Button());
			this->topInput = (gcnew System::Windows::Forms::TextBox());
			this->blankLabel = (gcnew System::Windows::Forms::Label());
			this->nonNumericLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// titleLabel
			// 
			this->titleLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->titleLabel->AutoSize = true;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(65, 9);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(247, 58);
			this->titleLabel->TabIndex = 0;
			this->titleLabel->Text = L"Calculator";
			// 
			// bottomInput
			// 
			this->bottomInput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->bottomInput->BackColor = System::Drawing::Color::Snow;
			this->bottomInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bottomInput->Font = (gcnew System::Drawing::Font(L"Roboto", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bottomInput->Location = System::Drawing::Point(165, 146);
			this->bottomInput->MaxLength = 4;
			this->bottomInput->Name = L"bottomInput";
			this->bottomInput->Size = System::Drawing::Size(86, 46);
			this->bottomInput->TabIndex = 2;
			// 
			// opLabel
			// 
			this->opLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->opLabel->AutoSize = true;
			this->opLabel->BackColor = System::Drawing::Color::Transparent;
			this->opLabel->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opLabel->Location = System::Drawing::Point(120, 149);
			this->opLabel->Name = L"opLabel";
			this->opLabel->Size = System::Drawing::Size(0, 35);
			this->opLabel->TabIndex = 3;
			// 
			// equalsLabel
			// 
			this->equalsLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->equalsLabel->AutoSize = true;
			this->equalsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equalsLabel->Location = System::Drawing::Point(257, 153);
			this->equalsLabel->Name = L"equalsLabel";
			this->equalsLabel->Size = System::Drawing::Size(32, 33);
			this->equalsLabel->TabIndex = 4;
			this->equalsLabel->Text = L"=";
			// 
			// resultLabel
			// 
			this->resultLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->resultLabel->AutoSize = true;
			this->resultLabel->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resultLabel->Location = System::Drawing::Point(295, 151);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(0, 35);
			this->resultLabel->TabIndex = 5;
			// 
			// plusButton
			// 
			this->plusButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->plusButton->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->plusButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->plusButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->plusButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plusButton->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusButton->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->plusButton->Location = System::Drawing::Point(82, 271);
			this->plusButton->Name = L"plusButton";
			this->plusButton->Size = System::Drawing::Size(46, 46);
			this->plusButton->TabIndex = 6;
			this->plusButton->Text = L"+";
			this->plusButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->plusButton->UseVisualStyleBackColor = false;
			this->plusButton->Click += gcnew System::EventHandler(this, &CalculatorForm::plusButton_Click);
			// 
			// minusButton
			// 
			this->minusButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->minusButton->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->minusButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->minusButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->minusButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minusButton->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minusButton->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->minusButton->Location = System::Drawing::Point(135, 271);
			this->minusButton->Name = L"minusButton";
			this->minusButton->Size = System::Drawing::Size(46, 46);
			this->minusButton->TabIndex = 7;
			this->minusButton->Text = L"-";
			this->minusButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->minusButton->UseVisualStyleBackColor = false;
			this->minusButton->Click += gcnew System::EventHandler(this, &CalculatorForm::minusButton_Click);
			// 
			// divideButton
			// 
			this->divideButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->divideButton->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->divideButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->divideButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->divideButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->divideButton->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divideButton->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->divideButton->Location = System::Drawing::Point(239, 271);
			this->divideButton->Name = L"divideButton";
			this->divideButton->Size = System::Drawing::Size(46, 46);
			this->divideButton->TabIndex = 9;
			this->divideButton->Text = L"÷";
			this->divideButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->divideButton->UseVisualStyleBackColor = false;
			this->divideButton->Click += gcnew System::EventHandler(this, &CalculatorForm::divideButton_Click);
			// 
			// multButton
			// 
			this->multButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->multButton->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->multButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->multButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->multButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->multButton->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multButton->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->multButton->Location = System::Drawing::Point(187, 271);
			this->multButton->Name = L"multButton";
			this->multButton->Size = System::Drawing::Size(46, 46);
			this->multButton->TabIndex = 8;
			this->multButton->Text = L"×";
			this->multButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->multButton->UseVisualStyleBackColor = false;
			this->multButton->Click += gcnew System::EventHandler(this, &CalculatorForm::multButton_Click);
			// 
			// topInput
			// 
			this->topInput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->topInput->BackColor = System::Drawing::Color::Snow;
			this->topInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->topInput->Font = (gcnew System::Drawing::Font(L"Roboto", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->topInput->Location = System::Drawing::Point(20, 146);
			this->topInput->MaxLength = 4;
			this->topInput->Name = L"topInput";
			this->topInput->Size = System::Drawing::Size(86, 46);
			this->topInput->TabIndex = 10;
			// 
			// blankLabel
			// 
			this->blankLabel->AutoSize = true;
			this->blankLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->blankLabel->ForeColor = System::Drawing::Color::Firebrick;
			this->blankLabel->Location = System::Drawing::Point(79, 195);
			this->blankLabel->Name = L"blankLabel";
			this->blankLabel->Size = System::Drawing::Size(115, 13);
			this->blankLabel->TabIndex = 11;
			this->blankLabel->Text = L"Don\'t Leave me Blank!";
			this->blankLabel->Visible = false;
			// 
			// nonNumericLabel
			// 
			this->nonNumericLabel->AutoSize = true;
			this->nonNumericLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nonNumericLabel->ForeColor = System::Drawing::Color::Firebrick;
			this->nonNumericLabel->Location = System::Drawing::Point(96, 130);
			this->nonNumericLabel->Name = L"nonNumericLabel";
			this->nonNumericLabel->Size = System::Drawing::Size(76, 13);
			this->nonNumericLabel->TabIndex = 13;
			this->nonNumericLabel->Text = L"Only Numbers!";
			this->nonNumericLabel->Visible = false;
			// 
			// CalculatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(384, 361);
			this->Controls->Add(this->nonNumericLabel);
			this->Controls->Add(this->blankLabel);
			this->Controls->Add(this->topInput);
			this->Controls->Add(this->divideButton);
			this->Controls->Add(this->multButton);
			this->Controls->Add(this->minusButton);
			this->Controls->Add(this->plusButton);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->equalsLabel);
			this->Controls->Add(this->opLabel);
			this->Controls->Add(this->bottomInput);
			this->Controls->Add(this->titleLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = gcnew System::Drawing::Icon(L"icon.ico");
			this->Name = L"CalculatorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &CalculatorForm::CalculatorForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void plusButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		nonNumericLabel->Visible = false;
		blankLabel->Visible = false;

		if (topInput->Text != "" && bottomInput->Text != "")
		{
			try
			{
				double output = System::Convert::ToDouble(bottomInput->Text) + System::Convert::ToDouble(topInput->Text);
				opLabel->Text = "+";
				resultLabel->Text = output.ToString("0.00");
			}
			catch (...)
			{
				nonNumericLabel->Visible = true;
			}
		}
		else
		{
			blankLabel->Visible = true;
		}
	}
	private: System::Void minusButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		nonNumericLabel->Visible = false;
		blankLabel->Visible = false;

		if (topInput->Text != "" && bottomInput->Text != "")
		{
			try
			{
				double output = System::Convert::ToDouble(bottomInput->Text) - System::Convert::ToDouble(topInput->Text);
				opLabel->Text = "−";
				resultLabel->Text = output.ToString("0.00");
			}
			catch (...)
			{
				nonNumericLabel->Visible = true;
			}
		}
		else
		{
			blankLabel->Visible = true;
		}
	}
	private: System::Void multButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		nonNumericLabel->Visible = false;
		blankLabel->Visible = false;

		if (topInput->Text != "" && bottomInput->Text != "")
		{
			try
			{
				double output = System::Convert::ToDouble(bottomInput->Text) * System::Convert::ToDouble(topInput->Text);
				opLabel->Text = "×";
				resultLabel->Text = output.ToString("0.00");
			}
			catch (...)
			{
				nonNumericLabel->Visible = true;
			}
		}
		else
		{
			blankLabel->Visible = true;
		}
	}
	private: System::Void divideButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		nonNumericLabel->Visible = false;
		blankLabel->Visible = false;

		if (topInput->Text != "" && bottomInput->Text != "")
		{
			try
			{
				double output = System::Convert::ToDouble(bottomInput->Text) / System::Convert::ToDouble(topInput->Text);
				opLabel->Text = "÷";
				resultLabel->Text = output.ToString("0.00");
			}
			catch (...)
			{
				nonNumericLabel->Visible = true;
			}
		}
		else
		{
			blankLabel->Visible = true;
		}
	}
private: System::Void CalculatorForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
