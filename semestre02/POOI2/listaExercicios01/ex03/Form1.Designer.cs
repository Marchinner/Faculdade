namespace ex03
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
            this.btnClickHere = new System.Windows.Forms.Button();
            this.txtAfterBtn = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // btnClickHere
            // 
            this.btnClickHere.Location = new System.Drawing.Point(99, 35);
            this.btnClickHere.Name = "btnClickHere";
            this.btnClickHere.Size = new System.Drawing.Size(132, 39);
            this.btnClickHere.TabIndex = 0;
            this.btnClickHere.Text = "Clique Aqui!";
            this.btnClickHere.UseVisualStyleBackColor = true;
            this.btnClickHere.Click += new System.EventHandler(this.btnClickHere_Click);
            // 
            // txtAfterBtn
            // 
            this.txtAfterBtn.Location = new System.Drawing.Point(67, 116);
            this.txtAfterBtn.Name = "txtAfterBtn";
            this.txtAfterBtn.Size = new System.Drawing.Size(185, 20);
            this.txtAfterBtn.TabIndex = 1;
            // 
            // frm01
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(342, 173);
            this.Controls.Add(this.txtAfterBtn);
            this.Controls.Add(this.btnClickHere);
            this.Name = "frm01";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Exercício 03";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnClickHere;
        private System.Windows.Forms.TextBox txtAfterBtn;
    }
}

