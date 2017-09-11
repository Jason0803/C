import java.util.*;
import java.awt.*;
import javax.swing.*;
import javax.swing.border.LineBorder;

public class ScoreBoard extends JFrame {
	public ScoreBoard() {
		getContentPane().setBackground(Color.DARK_GRAY);
		getContentPane().setLayout(null);
		
		JPanel panel = new JPanel();
		panel.setBackground(Color.DARK_GRAY);
		panel.setBorder(new LineBorder(Color.WHITE, 3, true));
		panel.setBounds(6, 6, 988, 556);
		getContentPane().add(panel);
		panel.setLayout(null);
		
		JLabel lblTeamA = new JLabel("Home Team");
		lblTeamA.setHorizontalAlignment(SwingConstants.CENTER);
		lblTeamA.setFont(new Font("Lucida Grande", Font.PLAIN, 23));
		lblTeamA.setBounds(20, 44, 171, 30);
		panel.add(lblTeamA);
		
		JLabel lblAwayTeam = new JLabel("Away Team");
		lblAwayTeam.setHorizontalAlignment(SwingConstants.CENTER);
		lblAwayTeam.setFont(new Font("Lucida Grande", Font.PLAIN, 23));
		lblAwayTeam.setBounds(781, 44, 171, 30);
		panel.add(lblAwayTeam);
		
		JTextArea textArea = new JTextArea();
		textArea.setFont(new Font("Lucida Grande", Font.BOLD, 99));
		textArea.setText("00");
		textArea.setForeground(Color.YELLOW);
		textArea.setBackground(Color.BLACK);
		textArea.setBounds(30, 86, 130, 118);
		panel.add(textArea);
		
		JLabel lblPlayer = new JLabel("Player");
		lblPlayer.setFont(new Font("Lucida Grande", Font.PLAIN, 18));
		lblPlayer.setHorizontalAlignment(SwingConstants.CENTER);
		lblPlayer.setBounds(20, 287, 79, 30);
		panel.add(lblPlayer);
		
		JLabel lblPenalty = new JLabel("Penalty");
		lblPenalty.setHorizontalAlignment(SwingConstants.CENTER);
		lblPenalty.setFont(new Font("Lucida Grande", Font.PLAIN, 18));
		lblPenalty.setBounds(158, 287, 79, 30);
		panel.add(lblPenalty);
		
		JTextArea textArea_2 = new JTextArea();
		textArea_2.setText("00");
		textArea_2.setForeground(Color.YELLOW);
		textArea_2.setFont(new Font("Lucida Grande", Font.BOLD, 80));
		textArea_2.setBackground(Color.BLACK);
		textArea_2.setBounds(18, 329, 106, 95);
		panel.add(textArea_2);
		
		JTextArea textArea_1 = new JTextArea();
		textArea_1.setForeground(Color.YELLOW);
		textArea_1.setFont(new Font("Lucida Grande", Font.BOLD, 80));
		textArea_1.setBackground(Color.BLACK);
		textArea_1.setBounds(18, 440, 106, 95);
		panel.add(textArea_1);
		
		JTextArea textArea_3 = new JTextArea();
		textArea_3.setText("00:13");
		textArea_3.setForeground(Color.RED);
		textArea_3.setFont(new Font("Lucida Grande", Font.BOLD, 80));
		textArea_3.setBackground(Color.BLACK);
		textArea_3.setBounds(150, 329, 236, 95);
		panel.add(textArea_3);
		
		JTextArea textArea_4 = new JTextArea();
		textArea_4.setForeground(Color.RED);
		textArea_4.setFont(new Font("Lucida Grande", Font.BOLD, 80));
		textArea_4.setBackground(Color.BLACK);
		textArea_4.setBounds(150, 440, 236, 95);
		panel.add(textArea_4);
		
		JTextArea textArea_5 = new JTextArea();
		textArea_5.setText("00");
		textArea_5.setForeground(Color.YELLOW);
		textArea_5.setFont(new Font("Lucida Grande", Font.BOLD, 99));
		textArea_5.setBackground(Color.BLACK);
		textArea_5.setBounds(822, 86, 130, 118);
		panel.add(textArea_5);
		
		JLabel label = new JLabel("Player");
		label.setHorizontalAlignment(SwingConstants.CENTER);
		label.setFont(new Font("Lucida Grande", Font.PLAIN, 18));
		label.setBounds(598, 287, 79, 30);
		panel.add(label);
		
		JLabel label_1 = new JLabel("Penalty");
		label_1.setHorizontalAlignment(SwingConstants.CENTER);
		label_1.setFont(new Font("Lucida Grande", Font.PLAIN, 18));
		label_1.setBounds(736, 287, 79, 30);
		panel.add(label_1);
		
		JTextArea textArea_6 = new JTextArea();
		textArea_6.setText("00");
		textArea_6.setForeground(Color.YELLOW);
		textArea_6.setFont(new Font("Lucida Grande", Font.BOLD, 80));
		textArea_6.setBackground(Color.BLACK);
		textArea_6.setBounds(596, 329, 106, 95);
		panel.add(textArea_6);
		
		JTextArea textArea_7 = new JTextArea();
		textArea_7.setText("00:13");
		textArea_7.setForeground(Color.RED);
		textArea_7.setFont(new Font("Lucida Grande", Font.BOLD, 80));
		textArea_7.setBackground(Color.BLACK);
		textArea_7.setBounds(728, 329, 236, 95);
		panel.add(textArea_7);
		
		JTextArea textArea_8 = new JTextArea();
		textArea_8.setForeground(Color.YELLOW);
		textArea_8.setFont(new Font("Lucida Grande", Font.BOLD, 80));
		textArea_8.setBackground(Color.BLACK);
		textArea_8.setBounds(596, 440, 106, 95);
		panel.add(textArea_8);
		
		JTextArea textArea_9 = new JTextArea();
		textArea_9.setForeground(Color.RED);
		textArea_9.setFont(new Font("Lucida Grande", Font.BOLD, 80));
		textArea_9.setBackground(Color.BLACK);
		textArea_9.setBounds(728, 440, 236, 95);
		panel.add(textArea_9);
		
		JPanel panel_1 = new JPanel();
		panel_1.setBorder(new LineBorder(Color.WHITE, 5, true));
		panel_1.setBackground(Color.DARK_GRAY);
		panel_1.setBounds(314, 10, 354, 151);
		panel.add(panel_1);
		panel_1.setLayout(null);
		
		JTextArea textArea_10 = new JTextArea();
		textArea_10.setBounds(9, 10, 334, 130);
		panel_1.add(textArea_10);
		textArea_10.setText("00:13");
		textArea_10.setForeground(Color.RED);
		textArea_10.setFont(new Font("Lucida Grande", Font.BOLD, 99));
		textArea_10.setBackground(Color.BLACK);
		
		JPanel panel_2 = new JPanel();
		panel_2.setBounds(262, 190, 106, 95);
		panel.add(panel_2);
		panel_2.setLayout(null);
		
		JPanel panel_3 = new JPanel();
		panel_3.setBounds(598, 190, 106, 95);
		panel.add(panel_3);
		
		JTextArea textArea_11 = new JTextArea();
		textArea_11.setText("1");
		textArea_11.setForeground(Color.GREEN);
		textArea_11.setFont(new Font("Lucida Grande", Font.BOLD, 80));
		textArea_11.setBackground(Color.BLACK);
		textArea_11.setBounds(462, 264, 57, 95);
		panel.add(textArea_11);
		
		JPanel panel_4 = new JPanel();
		panel_4.setLayout(null);
		panel_4.setBounds(429, 430, 121, 105);
		panel.add(panel_4);
		
		JLabel lblPeriod = new JLabel("Period");
		lblPeriod.setHorizontalAlignment(SwingConstants.CENTER);
		lblPeriod.setFont(new Font("Lucida Grande", Font.PLAIN, 18));
		lblPeriod.setBounds(436, 382, 105, 36);
		panel.add(lblPeriod);
	}
}
