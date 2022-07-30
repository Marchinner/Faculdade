namespace ex05
{
    partial class frm01
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
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
            this.lblDontClickHere = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // lblDontClickHere
            // 
            this.lblDontClickHere.AutoSize = true;
            this.lblDontClickHere.Location = new System.Drawing.Point(100, 92);
            this.lblDontClickHere.Name = "lblDontClickHere";
            this.lblDontClickHere.Size = new System.Drawing.Size(84, 13);
            this.lblDontClickHere.TabIndex = 0;
            this.lblDontClickHere.Text = "Não clique aqui!";
            this.lblDontClickHere.Click += new System.EventHandler(this.lblDontClickHere_Click);
            // 
            // frm01
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(303, 191);
            this.Controls.Add(this.lblDontClickHere);
            this.Name = "frm01";
            this.Text = "Slide 33";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblDontClickHere;
    }
}

