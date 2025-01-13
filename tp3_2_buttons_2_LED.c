void main() {
    // Configuration des ports
    TRISA = 0x03;
    TRISB = 0x00;
    ANSEL = 0x00;
    ANSELH = 0x00;
    PORTA = 0x00;
    PORTB = 0x00;

    // Boucle infinie
    while (1) {
        // Verifie si le bouton sur RA0 est appuy? (niveau bas)
        if (RA0_bit == 0) {
            RB0_bit = 1;
            Delay_ms(300);
            RB0_bit = 0;
            Delay_ms(50);
        }

        // V?rifie si le bouton sur RA1 est appuy? (niveau bas)
        if (RA1_bit == 0) {
            RB1_bit = 1;
            Delay_ms(500);
            RB1_bit = 0;
            Delay_ms(50);
        }
    }
}
