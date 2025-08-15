#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    // Necessario per visualizzare correttamente Unicode
    setlocale(LC_ALL, "");

    // --- ASCII ---
    char ascii_char = 'A';          // Carattere ASCII
    printf("ASCII:\n");
    printf("Carattere: %c, Codice decimale: %d, Codice binario: ", ascii_char, ascii_char);
    
    // Stampiamo il binario dell'ASCII
    for(int i = 7; i >= 0; i--) {
        printf("%d", (ascii_char >> i) & 1);
    }
    printf("\n\n");

    // --- Unicode ---
    wchar_t unicode_char = L'Ω';    // Carattere greco Omega
    wprintf(L"Unicode:\nCarattere: %lc, Codice numerico: %d\n", unicode_char, unicode_char);

    return 0;
}
