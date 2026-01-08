# Lezioni di Logica 

Questo repository contiene sorgenti LaTeX con varie lezioni di logica di base. Si tratta principalmente delle slide che utilizzo per il corso di logica da 3 CFU che tengo al [Corso di Laurea in Economia e Informatica per l'Impresa](https://cleii.unich.it) dell'[Università "G. d'Annunzio" di Chieti-Pescara](https://www.unich.it).

Ci sono due versioni delle slide:
  * versione compatta, adatta ad una singola lezione intensiva di 2/3 ore, nella cartella `compact`;
  * versione estesa, adatta ad un corso di 3 CFU, nella cartella `slides`.

La versione compatta può essere compilata con `latexmk` o con `pdflatex`.

I file della versione estesa possono essere compilati con `latexmk` o con `pdflatex -shell-escape`. La versione estesa comprende alcune note che vengono normalmente ignorate, ma che possono essere attivate decommentando il comando
``\setbeameroption{show notes}`` all'inizio di ogni file. Allo stesso modo, eliminando l'opzione `handout` dall'istruzione `\documentclass`, è prossibile generare delle versioni delle slide più adatte ad una presentazione in aula.

Tutto è distribuito con la licenza [CC-BY-SA-4.0](https://creativecommons.org/licenses/by-sa/4.0/deed.it).
