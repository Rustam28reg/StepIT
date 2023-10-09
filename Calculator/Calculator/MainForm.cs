using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
        }
        private string[] operators = new[] { "+", "-", "*", "/" };
        private List<string> numbers = new();
        private List<string> _operators = new();
        private string historyData;

        private void numbersButton_Click(object sender, EventArgs e)
        {
            bool check = true;
            foreach (var item in operators)
            {
                if (textBox1.Text.IndexOf(item) != -1)
                {
                    textBox1.Text = "";
                    check = false;
                }
            }
            if (numbers.Count > 0 && check)
            {
                Button _button = (Button)sender;
                textBox1.Text += _button.Text;
                numbers[numbers.Count - 1] += _button.Text;
                return;
            }
            Button button = (Button)sender;
            textBox1.Text += button.Text;
            numbers.Add(textBox1.Text);
        }
        private void zeroButton_Click(object sender, EventArgs e)
        {
            numbersButton_Click(sender, e);
        }
        private void buttonNumber1_Click(object sender, EventArgs e)
        {
            numbersButton_Click(sender, e);
        }
        private void buttonNumber2_Click(object sender, EventArgs e)
        {
            numbersButton_Click(sender, e);
        }
        private void buttonNumber3_Click(object sender, EventArgs e)
        {
            numbersButton_Click(sender, e);
        }
        private void buttonNumber4_Click(object sender, EventArgs e)
        {
            numbersButton_Click(sender, e);
        }
        private void buttonNumber5_Click(object sender, EventArgs e)
        {
            numbersButton_Click(sender, e);
        }
        private void buttonNumber6_Click(object sender, EventArgs e)
        {
            numbersButton_Click(sender, e);
        }
        private void buttonNumber7_Click(object sender, EventArgs e)
        {
            numbersButton_Click(sender, e);
        }
        private void buttonNumber8_Click(object sender, EventArgs e)
        {
            numbersButton_Click(sender, e);
        }
        private void buttonNumber9_Click(object sender, EventArgs e)
        {
            numbersButton_Click(sender, e);
        }


        private void plusButton_Click(object sender, EventArgs e)
        {
            bool check = true;
            foreach (var item in operators)
            {
                if ((textBox1.Text.IndexOf(item) != -1))
                {
                    check = false;
                }
            }
            if (!string.IsNullOrEmpty(textBox1.Text) && check)
            {
                Button button = (Button)sender;
                textBox1.Text = button.Text;
                _operators.Add(button.Text);
            }
        }
        private void minusButton_Click(object sender, EventArgs e)  // тут надо продумать возможность создания отрицательного числа
        {
            bool check = true;
            foreach (var item in operators)
            {
                if ((textBox1.Text.IndexOf(item) != -1))
                {
                    check = false;
                }
            }
            if (!string.IsNullOrEmpty(textBox1.Text) && check)
            {
                Button button = (Button)sender;
                textBox1.Text = button.Text;
                _operators.Add(button.Text);
            }
        }
        private void divisionButton_Click(object sender, EventArgs e)
        {
            bool check = true;
            foreach (var item in operators)
            {
                if ((textBox1.Text.IndexOf(item) != -1))
                {
                    check = false;
                }
            }
            if (!string.IsNullOrEmpty(textBox1.Text) && check)
            {
                Button button = (Button)sender;
                textBox1.Text = button.Text;
                _operators.Add(button.Text);
            }
        }
        private void multiplicateButton_Click(object sender, EventArgs e)
        {
            bool check = true;
            foreach (var item in operators)
            {
                if ((textBox1.Text.IndexOf(item) != -1))
                {
                    check = false;
                }
            }
            if (!string.IsNullOrEmpty(textBox1.Text) && check)
            {
                Button button = (Button)sender;
                textBox1.Text = button.Text;
                _operators.Add(button.Text);
            }
        }

        private void clearButton_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            numbers.Clear();
            _operators.Clear();
            historyData = "";
        }
        private void backspaceButton_Click(object sender, EventArgs e)
        {
            if (numbers.Count != 0)
            {
                numbers[numbers.Count() - 1] = numbers.Last().Substring(0, numbers.Last().Length - 1);
                textBox1.Text = textBox1.Text.Substring(0, textBox1.TextLength - 1);
            }
        }

        private void dotButton_Click(object sender, EventArgs e)
        {
            if (textBox1.Text.IndexOf(".") == -1)
            {
                Button button = (Button)sender;
                textBox1.Text += button.Text;
            }
        }

        private void equalsButton_Click(object sender, EventArgs e)
        {
            foreach (var item in operators)
            {
                if ((textBox1.Text.IndexOf(item) != -1))
                {
                    MessageBox.Show("Error!");
                    return;
                }
            }
            double result = double.Parse(numbers[0]);
            historyData += result;

            for (int i = 1; i <= _operators.Count; i++)
            {
                if (_operators[i - 1].Equals("+"))
                {
                    result += double.Parse(numbers[i]);
                    historyData += $" + {double.Parse(numbers[i])}";
                }
                if (_operators[i - 1].Equals("-"))
                {
                    result -= double.Parse(numbers[i]);
                    historyData += $" - {double.Parse(numbers[i])}";
                }
                if (_operators[i - 1].Equals("*"))
                {
                    result *= double.Parse(numbers[i]);
                    historyData += $" * {double.Parse(numbers[i])}";
                }
                if (_operators[i - 1].Equals("/") && double.Parse(numbers[i]) != 0)
                {
                    result /= double.Parse(numbers[i]);
                    historyData += $" / {double.Parse(numbers[i])}";
                }
            }

            textBox1.Text = result.ToString();
            historyData += $" = {result}\t";

            numbers.Clear();
            numbers.Add(result.ToString());
            _operators.Clear();
            listBox.Items.Add(historyData);
            historyData = "";

        }
    }
}
