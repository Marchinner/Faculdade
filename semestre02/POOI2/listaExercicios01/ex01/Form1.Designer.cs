namespace ex01
{
    partial class frmMain
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
            this.btnClickOnMe = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btnClickOnMe
            // 
            this.btnClickOnMe.Location = new System.Drawing.Point(99, 65);
            this.btnClickOnMe.Name = "btnClickOnMe";
            this.btnClickOnMe.Size = new System.Drawing.Size(175, 50);
            this.btnClickOnMe.TabIndex = 0;
            this.btnClickOnMe.Text = "Clique em mim!";
            this.btnClickOnMe.UseVisualStyleBackColor = true;
            this.btnClickOnMe.Click += new System.EventHandler(this.btnClickOnMe_Click);
            // 
            // frmMain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(377, 193);
            this.Controls.Add(this.btnClickOnMe);
            this.Name = "frmMain";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Formulário";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnClickOnMe;
    }
}

