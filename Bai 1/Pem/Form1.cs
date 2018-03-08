using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Drawing;

namespace Pem
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        
        protected override void OnPaint(PaintEventArgs e)
        {
            SolidBrush bb = new SolidBrush(Color.LightGray);
            Graphics g = e.Graphics;
            Pen p1 = new Pen(Color.White, 2);
            Pen p2 = new Pen(Color.Gray, 2);
            Point o1 = new Point(20, 20);
            Point o2 = new Point(20, 300);
            Point o3 = new Point(400, 300);
            Point o4 = new Point(400, 20);
           
            g.DrawLine(p1, o1, o2);
            g.DrawLine(p2, o2, o3);
            g.DrawLine(p2, o3, o4);
            g.DrawLine(p1, o4, o1);

            Rectangle rr = new Rectangle(21, 21, 378, 278);
            g.FillRectangle(bb, rr);
            
        }
    }
}
