\usepackage[T1]{fontenc}
\usepackage[italian]{babel}
\usepackage[utf8]{inputenc}
\usepackage{pifont}
\usepackage{tikz}
\usepackage{xspace}
\usepackage{minted}
\usepackage{qrcode}
\usepackage[
    type={CC},
    modifier={by-nc-sa},
    version={4.0}
]{doclicense}
\usetikzlibrary{backgrounds, fit, calc, positioning, arrows.meta, shadows, decorations.pathreplacing}
\usetikzlibrary{overlay-beamer-styles, tikzmark, shapes}

\usetheme{Madrid}
\logo{\includegraphics[width=0.8cm,keepaspectratio]{img/udalogo.png}}

\deftranslation[to=italian]{Definition}{Definizione}
\deftranslation[to=italian]{Example}{Esempio}
\deftranslation[to=italian]{Theorem}{Teorema}

% !TeX spellcheck = it_IT

\let\oldcheckmark\checkmark
\newcommand{\xmark}{{\color{red}{\ding{55}}}}
\renewcommand{\checkmark}{{\color{OliveGreen}{\oldcheckmark}}}
\newcommand{\conn}[1]{\textcolor{blue}{#1}}
\newcommand{\quant}[1]{\textcolor{blue}{#1}}
\newcommand{\prop}[1]{\emph{#1}}
\newcommand{\link}[1]{\textcolor{blue}{#1}}
\newcommand{\propshape}{\itshape}
\newcommand{\xor}{\mathbin{\underbar{$\lor$}}}
\renewcommand{\iff}{\mathbin{\leftrightarrow}}
\newcommand{\fp}{fp\xspace}
\newcommand{\fbf}{fbf\xspace}

\newenvironment{inference}{\propshape\begin{tabular}{c}}{\end{tabular}}
\newenvironment{proposition}{\begin{center}\propshape}{\end{center}}

\newcommand{\intro}{\mathrm{I}}
\newcommand{\elim}{\mathrm{E}}
\AtBeginSection[]
{
  \begin{frame}
  \frametitle{Contenuti}
  \tableofcontents[currentsection]
  \end{frame}
}

\author[Gianluca Amato]{prof.~Gianluca Amato}

\newcommand{\copyrightpage}{
	\centering
	\begin{minipage}{15cm}
		\doclicenseThis

		\medskip
		\link{\href{\doclicenseURL}{\doclicenseURL}}
  \end{minipage}
}

\newcommand{\bookpage}[1]{
  Queste slide sono basate #1 del libro:
	\bigskip

	\hrule
	\medskip
	Dario Palladino\\
	\textcolor{blue}{\href{https://www.carocci.it/prodotto/corso-di-logica-3}{Corso di logica: introduzione elementare al calcolo dei predicati (terza edizione)}}\\
	Carocci editore\\
	\hrule

	\bigskip
	\centering
	\qrcode[height=4cm]{https://www.carocci.it/prodotto/corso-di-logica-3}
}

\hypersetup{pdfinfo={
	Subject={Logica},
	Author={Gianluca Amato, Università di Chieti-Pescara}
}}
