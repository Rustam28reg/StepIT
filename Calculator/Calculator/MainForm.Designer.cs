namespace Calculator
{
    partial class MainForm
    {
        private System.ComponentModel.IContainer components = null;

        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            buttonNumber7 = new Button();
            buttonNumber8 = new Button();
            buttonNumber9 = new Button();
            backspaceButton = new Button();
            clearButton = new Button();
            buttonNumber4 = new Button();
            buttonNumber5 = new Button();
            buttonNumber6 = new Button();
            multiplicateButton = new Button();
            divisionButton = new Button();
            buttonNumber1 = new Button();
            buttonNumber2 = new Button();
            buttonNumber3 = new Button();
            equalsButton = new Button();
            minusButton = new Button();
            zeroButton = new Button();
            dotButton = new Button();
            plusButton = new Button();
            textBox1 = new TextBox();
            tabControl1 = new TabControl();
            tabPage1 = new TabPage();
            tabPage2 = new TabPage();
            listBox = new ListBox();
            tabControl1.SuspendLayout();
            tabPage1.SuspendLayout();
            tabPage2.SuspendLayout();
            SuspendLayout();
            // 
            // buttonNumber7
            // 
            buttonNumber7.BackColor = Color.Silver;
            buttonNumber7.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            buttonNumber7.ForeColor = SystemColors.ControlText;
            buttonNumber7.Location = new Point(7, 92);
            buttonNumber7.Name = "buttonNumber7";
            buttonNumber7.Size = new Size(86, 80);
            buttonNumber7.TabIndex = 0;
            buttonNumber7.Text = "7";
            buttonNumber7.UseVisualStyleBackColor = false;
            buttonNumber7.Click += buttonNumber7_Click;
            // 
            // buttonNumber8
            // 
            buttonNumber8.BackColor = Color.Silver;
            buttonNumber8.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            buttonNumber8.Location = new Point(97, 91);
            buttonNumber8.Margin = new Padding(3, 4, 3, 4);
            buttonNumber8.Name = "buttonNumber8";
            buttonNumber8.Size = new Size(86, 80);
            buttonNumber8.TabIndex = 1;
            buttonNumber8.Text = "8";
            buttonNumber8.UseVisualStyleBackColor = false;
            buttonNumber8.Click += buttonNumber8_Click;
            // 
            // buttonNumber9
            // 
            buttonNumber9.BackColor = Color.Silver;
            buttonNumber9.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            buttonNumber9.Location = new Point(191, 91);
            buttonNumber9.Margin = new Padding(3, 4, 3, 4);
            buttonNumber9.Name = "buttonNumber9";
            buttonNumber9.Size = new Size(86, 80);
            buttonNumber9.TabIndex = 2;
            buttonNumber9.Text = "9";
            buttonNumber9.UseVisualStyleBackColor = false;
            buttonNumber9.Click += buttonNumber9_Click;
            // 
            // backspaceButton
            // 
            backspaceButton.BackColor = Color.Silver;
            backspaceButton.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            backspaceButton.Location = new Point(283, 91);
            backspaceButton.Margin = new Padding(3, 4, 3, 4);
            backspaceButton.Name = "backspaceButton";
            backspaceButton.Size = new Size(86, 80);
            backspaceButton.TabIndex = 3;
            backspaceButton.Text = "⟵";
            backspaceButton.UseVisualStyleBackColor = false;
            backspaceButton.Click += backspaceButton_Click;
            // 
            // clearButton
            // 
            clearButton.BackColor = Color.Silver;
            clearButton.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            clearButton.Location = new Point(376, 91);
            clearButton.Margin = new Padding(3, 4, 3, 4);
            clearButton.Name = "clearButton";
            clearButton.Size = new Size(86, 80);
            clearButton.TabIndex = 4;
            clearButton.Text = "AC";
            clearButton.UseVisualStyleBackColor = false;
            clearButton.Click += clearButton_Click;
            // 
            // buttonNumber4
            // 
            buttonNumber4.BackColor = Color.Silver;
            buttonNumber4.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            buttonNumber4.Location = new Point(6, 179);
            buttonNumber4.Margin = new Padding(3, 4, 3, 4);
            buttonNumber4.Name = "buttonNumber4";
            buttonNumber4.Size = new Size(86, 80);
            buttonNumber4.TabIndex = 5;
            buttonNumber4.Text = "4";
            buttonNumber4.UseVisualStyleBackColor = false;
            buttonNumber4.Click += buttonNumber4_Click;
            // 
            // buttonNumber5
            // 
            buttonNumber5.BackColor = Color.Silver;
            buttonNumber5.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            buttonNumber5.Location = new Point(97, 179);
            buttonNumber5.Margin = new Padding(3, 4, 3, 4);
            buttonNumber5.Name = "buttonNumber5";
            buttonNumber5.Size = new Size(86, 80);
            buttonNumber5.TabIndex = 6;
            buttonNumber5.Text = "5";
            buttonNumber5.UseVisualStyleBackColor = false;
            buttonNumber5.Click += buttonNumber5_Click;
            // 
            // buttonNumber6
            // 
            buttonNumber6.BackColor = Color.Silver;
            buttonNumber6.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            buttonNumber6.Location = new Point(191, 179);
            buttonNumber6.Margin = new Padding(3, 4, 3, 4);
            buttonNumber6.Name = "buttonNumber6";
            buttonNumber6.Size = new Size(86, 80);
            buttonNumber6.TabIndex = 7;
            buttonNumber6.Text = "6";
            buttonNumber6.UseVisualStyleBackColor = false;
            buttonNumber6.Click += buttonNumber6_Click;
            // 
            // multiplicateButton
            // 
            multiplicateButton.BackColor = Color.Silver;
            multiplicateButton.Font = new Font("Segoe UI", 25F, FontStyle.Regular, GraphicsUnit.Point);
            multiplicateButton.Location = new Point(283, 179);
            multiplicateButton.Margin = new Padding(3, 4, 3, 4);
            multiplicateButton.Name = "multiplicateButton";
            multiplicateButton.Size = new Size(86, 80);
            multiplicateButton.TabIndex = 8;
            multiplicateButton.Text = "*";
            multiplicateButton.UseVisualStyleBackColor = false;
            multiplicateButton.Click += multiplicateButton_Click;
            // 
            // divisionButton
            // 
            divisionButton.BackColor = Color.Silver;
            divisionButton.Font = new Font("Segoe UI", 25F, FontStyle.Regular, GraphicsUnit.Point);
            divisionButton.Location = new Point(376, 179);
            divisionButton.Margin = new Padding(3, 4, 3, 4);
            divisionButton.Name = "divisionButton";
            divisionButton.Size = new Size(86, 80);
            divisionButton.TabIndex = 9;
            divisionButton.Text = "/";
            divisionButton.UseVisualStyleBackColor = false;
            divisionButton.Click += divisionButton_Click;
            // 
            // buttonNumber1
            // 
            buttonNumber1.BackColor = Color.Silver;
            buttonNumber1.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            buttonNumber1.Location = new Point(6, 267);
            buttonNumber1.Margin = new Padding(3, 4, 3, 4);
            buttonNumber1.Name = "buttonNumber1";
            buttonNumber1.Size = new Size(86, 80);
            buttonNumber1.TabIndex = 10;
            buttonNumber1.Text = "1";
            buttonNumber1.UseVisualStyleBackColor = false;
            buttonNumber1.Click += buttonNumber1_Click;
            // 
            // buttonNumber2
            // 
            buttonNumber2.BackColor = Color.Silver;
            buttonNumber2.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            buttonNumber2.Location = new Point(97, 267);
            buttonNumber2.Margin = new Padding(3, 4, 3, 4);
            buttonNumber2.Name = "buttonNumber2";
            buttonNumber2.Size = new Size(86, 80);
            buttonNumber2.TabIndex = 11;
            buttonNumber2.Text = "2";
            buttonNumber2.UseVisualStyleBackColor = false;
            buttonNumber2.Click += buttonNumber2_Click;
            // 
            // buttonNumber3
            // 
            buttonNumber3.BackColor = Color.Silver;
            buttonNumber3.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            buttonNumber3.Location = new Point(191, 267);
            buttonNumber3.Margin = new Padding(3, 4, 3, 4);
            buttonNumber3.Name = "buttonNumber3";
            buttonNumber3.Size = new Size(86, 80);
            buttonNumber3.TabIndex = 12;
            buttonNumber3.Text = "3";
            buttonNumber3.UseVisualStyleBackColor = false;
            buttonNumber3.Click += buttonNumber3_Click;
            // 
            // equalsButton
            // 
            equalsButton.BackColor = Color.Silver;
            equalsButton.Font = new Font("Segoe UI", 25F, FontStyle.Regular, GraphicsUnit.Point);
            equalsButton.Location = new Point(375, 265);
            equalsButton.Margin = new Padding(3, 4, 3, 4);
            equalsButton.Name = "equalsButton";
            equalsButton.Size = new Size(86, 168);
            equalsButton.TabIndex = 13;
            equalsButton.Text = "=";
            equalsButton.UseVisualStyleBackColor = false;
            equalsButton.Click += equalsButton_Click;
            // 
            // minusButton
            // 
            minusButton.BackColor = Color.Silver;
            minusButton.Font = new Font("Segoe UI", 35F, FontStyle.Regular, GraphicsUnit.Point);
            minusButton.Location = new Point(283, 267);
            minusButton.Margin = new Padding(3, 4, 3, 4);
            minusButton.Name = "minusButton";
            minusButton.Size = new Size(86, 80);
            minusButton.TabIndex = 14;
            minusButton.Text = "-";
            minusButton.UseVisualStyleBackColor = false;
            minusButton.Click += minusButton_Click;
            // 
            // zeroButton
            // 
            zeroButton.BackColor = Color.Silver;
            zeroButton.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            zeroButton.Location = new Point(6, 355);
            zeroButton.Margin = new Padding(3, 4, 3, 4);
            zeroButton.Name = "zeroButton";
            zeroButton.Size = new Size(178, 80);
            zeroButton.TabIndex = 15;
            zeroButton.Text = "0";
            zeroButton.UseVisualStyleBackColor = false;
            zeroButton.Click += zeroButton_Click;
            // 
            // dotButton
            // 
            dotButton.BackColor = Color.Silver;
            dotButton.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            dotButton.Location = new Point(191, 355);
            dotButton.Margin = new Padding(3, 4, 3, 4);
            dotButton.Name = "dotButton";
            dotButton.Size = new Size(86, 80);
            dotButton.TabIndex = 16;
            dotButton.Text = ".";
            dotButton.UseVisualStyleBackColor = false;
            dotButton.Click += dotButton_Click;
            // 
            // plusButton
            // 
            plusButton.BackColor = Color.Silver;
            plusButton.Font = new Font("Segoe UI", 25F, FontStyle.Regular, GraphicsUnit.Point);
            plusButton.Location = new Point(284, 355);
            plusButton.Margin = new Padding(3, 4, 3, 4);
            plusButton.Name = "plusButton";
            plusButton.Size = new Size(86, 80);
            plusButton.TabIndex = 17;
            plusButton.Text = "+";
            plusButton.UseVisualStyleBackColor = false;
            plusButton.Click += plusButton_Click;
            // 
            // textBox1
            // 
            textBox1.BackColor = Color.Silver;
            textBox1.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            textBox1.Location = new Point(7, 7);
            textBox1.Margin = new Padding(3, 4, 3, 4);
            textBox1.Multiline = true;
            textBox1.Name = "textBox1";
            textBox1.Size = new Size(454, 75);
            textBox1.TabIndex = 18;
            // 
            // tabControl1
            // 
            tabControl1.Controls.Add(tabPage1);
            tabControl1.Controls.Add(tabPage2);
            tabControl1.Location = new Point(-7, -4);
            tabControl1.Name = "tabControl1";
            tabControl1.SelectedIndex = 0;
            tabControl1.Size = new Size(476, 482);
            tabControl1.TabIndex = 19;
            // 
            // tabPage1
            // 
            tabPage1.BackColor = Color.Gray;
            tabPage1.Controls.Add(textBox1);
            tabPage1.Controls.Add(buttonNumber7);
            tabPage1.Controls.Add(plusButton);
            tabPage1.Controls.Add(buttonNumber8);
            tabPage1.Controls.Add(dotButton);
            tabPage1.Controls.Add(buttonNumber9);
            tabPage1.Controls.Add(zeroButton);
            tabPage1.Controls.Add(backspaceButton);
            tabPage1.Controls.Add(minusButton);
            tabPage1.Controls.Add(clearButton);
            tabPage1.Controls.Add(equalsButton);
            tabPage1.Controls.Add(buttonNumber4);
            tabPage1.Controls.Add(buttonNumber3);
            tabPage1.Controls.Add(buttonNumber5);
            tabPage1.Controls.Add(buttonNumber2);
            tabPage1.Controls.Add(buttonNumber6);
            tabPage1.Controls.Add(buttonNumber1);
            tabPage1.Controls.Add(multiplicateButton);
            tabPage1.Controls.Add(divisionButton);
            tabPage1.Location = new Point(4, 29);
            tabPage1.Name = "tabPage1";
            tabPage1.Padding = new Padding(3);
            tabPage1.Size = new Size(468, 449);
            tabPage1.TabIndex = 0;
            tabPage1.Text = "Manager";
            // 
            // tabPage2
            // 
            tabPage2.BackColor = Color.Gray;
            tabPage2.Controls.Add(listBox);
            tabPage2.Location = new Point(4, 29);
            tabPage2.Name = "tabPage2";
            tabPage2.Padding = new Padding(3);
            tabPage2.Size = new Size(468, 449);
            tabPage2.TabIndex = 1;
            tabPage2.Text = "History";
            // 
            // listBox
            // 
            listBox.BackColor = Color.Silver;
            listBox.Font = new Font("Segoe UI", 20F, FontStyle.Regular, GraphicsUnit.Point);
            listBox.FormattingEnabled = true;
            listBox.ItemHeight = 45;
            listBox.Location = new Point(0, 5);
            listBox.Name = "listBox";
            listBox.Size = new Size(472, 454);
            listBox.TabIndex = 0;
            // 
            // MainForm
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = SystemColors.ControlDark;
            ClientSize = new Size(463, 468);
            Controls.Add(tabControl1);
            Name = "MainForm";
            Text = "Calculator";
            tabControl1.ResumeLayout(false);
            tabPage1.ResumeLayout(false);
            tabPage1.PerformLayout();
            tabPage2.ResumeLayout(false);
            ResumeLayout(false);
        }

        #endregion

        private Button buttonNumber7;
        private Button buttonNumber8;
        private Button buttonNumber9;
        private Button backspaceButton;
        private Button clearButton;
        private Button buttonNumber4;
        private Button buttonNumber5;
        private Button buttonNumber6;
        private Button multiplicateButton;
        private Button divisionButton;
        private Button buttonNumber1;
        private Button buttonNumber2;
        private Button buttonNumber3;
        private Button equalsButton;
        private Button minusButton;
        private Button zeroButton;
        private Button dotButton;
        private Button plusButton;
        private TextBox textBox1;
        private TabControl tabControl1;
        private TabPage tabPage1;
        private TabPage tabPage2;
        private ListBox listBox;
    }
}