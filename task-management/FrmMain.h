#pragma once
#include <stdio.h>

namespace taskmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmMain �̊T�v
	/// </summary>
	public ref class FrmMain : public System::Windows::Forms::Form
	{
	public:
		FrmMain(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~FrmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ BtnTitle;
	protected:

	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::Button^ BtnCAMPMTG_PP;

	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->BtnTitle = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->BtnCAMPMTG_PP = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BtnTitle
			// 
			this->BtnTitle->AutoSize = true;
			this->BtnTitle->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->BtnTitle->Location = System::Drawing::Point(12, 9);
			this->BtnTitle->Name = L"BtnTitle";
			this->BtnTitle->Size = System::Drawing::Size(210, 24);
			this->BtnTitle->TabIndex = 0;
			this->BtnTitle->Text = L"�^�X�N�������V�X�e��";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(847, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// BtnCAMPMTG_PP
			// 
			this->BtnCAMPMTG_PP->Font = (gcnew System::Drawing::Font(L"HGP�޼��E", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->BtnCAMPMTG_PP->Location = System::Drawing::Point(46, 57);
			this->BtnCAMPMTG_PP->Name = L"BtnCAMPMTG_PP";
			this->BtnCAMPMTG_PP->Size = System::Drawing::Size(258, 47);
			this->BtnCAMPMTG_PP->TabIndex = 2;
			this->BtnCAMPMTG_PP->Text = L"CAMPMTG��PowerPoint�V�K�쐬";
			this->BtnCAMPMTG_PP->UseVisualStyleBackColor = true;
			this->BtnCAMPMTG_PP->Click += gcnew System::EventHandler(this, &FrmMain::BtnCAMPMTG_PP_Click);
			// 
			// FrmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 471);
			this->Controls->Add(this->BtnCAMPMTG_PP);
			this->Controls->Add(this->BtnTitle);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"FrmMain";
			this->Text = L"FrmMain";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void BtnCAMPMTG_PP_Click(System::Object^ sender, System::EventArgs^ e) {

		}
	};
}
