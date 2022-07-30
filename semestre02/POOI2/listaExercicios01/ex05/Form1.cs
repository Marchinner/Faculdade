using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ex05
{
    public partial class frm01 : Form
    {
        public frm01()
        {
            InitializeComponent();
        }

        private void lblDontClickHere_Click(object sender, EventArgs e)
        {
            lblDontClickHere.Text = "PARE DE CLICAR AQUI!";
        }
    }
}
