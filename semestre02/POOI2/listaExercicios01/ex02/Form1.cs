using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ex02
{
    public partial class frm02 : Form
    {
        public frm02()
        {
            InitializeComponent();
        }

        private void btnClickHere_Click(object sender, EventArgs e)
        {
            btnClickHere.Text = "Estou desabilitado!";
            btnClickHere.Enabled = false;
        }
    }
}
