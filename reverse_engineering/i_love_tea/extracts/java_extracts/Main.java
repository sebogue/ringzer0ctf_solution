import java.awt.LayoutManager;
import java.lang.reflect.Method;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;
import javax.swing.UIManager;

public class Main extends JFrame {
   public static void main(String[] args) {
      try {
         UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
      } catch (Exception var8) {
      }

      JFrame f = new JFrame("Logmein");
      JLabel label = new JLabel();
      label.setBounds(20, 150, 200, 50);
      JPasswordField value = new JPasswordField();
      value.setBounds(100, 75, 100, 30);
      JLabel l1 = new JLabel("Username:");
      l1.setBounds(20, 20, 80, 30);
      JLabel l2 = new JLabel("Password:");
      l2.setBounds(20, 75, 80, 30);
      JButton b = new JButton("Login");
      b.setBounds(100, 120, 80, 30);
      JTextField text = new JTextField();
      text.setBounds(100, 20, 100, 30);
      f.add(value);
      f.add(l1);
      f.add(label);
      f.add(l2);
      f.add(b);
      f.add(text);
      f.setSize(300, 300);
      f.setLayout((LayoutManager)null);
      f.setVisible(true);
      b.addActionListener((e) -> {
         try {
            Loader l = new Loader();
            Class c = l.loadClass();
            Method m = c.getMethod("validatePassword", String.class);
            boolean yolo = (Boolean)m.invoke((Object)null, new String(value.getPassword()));
            if (yolo) {
               label.setText("Congrats!");
            } else {
               label.setText("Wrong!");
            }
         } catch (Exception e2) {
            e2.printStackTrace();
         }

      });
      f.setDefaultCloseOperation(3);
   }
}