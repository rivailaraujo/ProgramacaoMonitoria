import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JOptionPane;

import java.awt.Font;
import javax.swing.ImageIcon;
import java.awt.Color;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

public class TelaInicial extends JFrame {

	private JPanel contentPane;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		TelaInicial frame = new TelaInicial();
		frame.setVisible(true);
	}

	/**
	 * Create the frame.
	 */
	public TelaInicial() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 600, 450);
		setAlwaysOnTop(true);
		setLocationRelativeTo(null);  
		setResizable(false);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JButton btnIniciar = new JButton("Iniciar");
		btnIniciar.addMouseListener(new MouseAdapter() {
			
			public void mouseClicked(MouseEvent e) {
				dispose();
				// Chamar o panel do jogo
			}
		});
		btnIniciar.setBounds(234, 184, 117, 25);
		contentPane.add(btnIniciar);
		
		JButton btnSobre = new JButton("Sobre");
		btnSobre.addMouseListener(new MouseAdapter() {
			@Override
			public void mouseClicked(MouseEvent e) {
				JOptionPane.showMessageDialog(btnSobre, "Blackjack ou Vinte-e-um é um jogo praticado com cartas em casinos e que pode ser jogado com 1 a 8 baralhos de 52 cartas,\nem que o objetivo é ter mais pontos do que o adversário, mas sem ultrapassar os 21 (caso em que se perde). \nO dealer só pode pedir até um máximo de 5 cartas ou até chegar ao número 17.");
			}
		});
		btnSobre.setBounds(234, 221, 117, 25);
		contentPane.add(btnSobre);
		
		JButton btnCrditos = new JButton("Créditos");
		
		btnCrditos.addMouseListener(new MouseAdapter() {
			
			public void mouseClicked(MouseEvent e) {
				JOptionPane.showMessageDialog(btnCrditos, "Um Jogo de: Emanuella Taiana, Ramon Barbosa, Savia Almeida");
			}
		});
		
		btnCrditos.setBounds(234, 258, 117, 25);
		contentPane.add(btnCrditos);
		
		JLabel lblBaralho = new JLabel("Blackjack");
		lblBaralho.setForeground(new Color(220, 20, 60));
		lblBaralho.setFont(new Font("Courier 10 Pitch", Font.BOLD, 50));
		lblBaralho.setOpaque(true);
		lblBaralho.setBounds(152, 109, 281, 53);
		contentPane.add(lblBaralho);
		
		JLabel imagemFundo = new JLabel("");
		imagemFundo.setIcon(new ImageIcon("/home/emanuella/Imagens/baralho.jpg")); //endereço da imagem maquina local
		imagemFundo.setBounds(0, -15, 627, 457);
		contentPane.add(imagemFundo);
	}
}
