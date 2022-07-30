namespace ex02
{
    partial class frm02
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
            this.btnClickHere = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btnClickHere
            // 
            this.btnClickHere.Location = new System.Drawing.Point(60, 43);
            this.btnClickHere.Name = "btnClickHere";
            this.btnClickHere.Size = new System.Drawing.Size(195, 59);
            this.btnClickHere.TabIndex = 0;
            this.btnClickHere.Text = "Clique Aqui!";
            this.btnClickHere.UseVisualStyleBackColor = true;
            this.btnClickHere.Click += new System.EventHandler(this.btnClickHere_Click);
            // 
            // frm02
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(327, 156);
            this.Controls.Add(this.btnClickHere);
            this.Name = "frm02";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Exercício 02";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnClickHere;
    }
}

