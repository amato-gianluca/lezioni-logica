# Lezioni di Logica

Questo repository contiene sorgenti LaTeX con varie lezioni di logica di base. Si tratta principalmente di slide che utilizzo per il corso di logica che tengo al [Corso di Laurea in Economia e Informatica per l'Impresa](https://cleii.unich.it) dell'[Università "G. d'Annunzio" di Chieti-Pescara](https://www.unich.it).

Ci sono due versioni delle slide:
  * versione compatta, adatta ad una singola lezione intensiva di 2/3 ore, nella cartella `compact`;
  * versione estesa, adatta ad un corso di 3 CFU, nella cartella `slides`.

La versione compatta può essere compilata con `latexmk` o con `pdflatex`.

La versione estesa può essere compilata con `latexmk` o con `pdflatex -shell-escape`. La versione estesa comprende alcune note che sono normalmente ignorate, ma che possono essere attivate decommentando il comando
```\setbeameroption{show notes}```. Inoltre, eliminando l'opzione `handout` dall'istruzione `\documentclass`, è prossibile genereare una versione più adatta ad una presentazione in aula.
