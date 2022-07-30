using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ex03
{
    public partial class frm01 : Form
    {
        public frm01()
        {
            InitializeComponent();
        }

        private void btnClickHere_Click(object sender, EventArgs e)
        {
            txtAfterBtn.Text = "Um botão em ação.";
        }
    }
}
