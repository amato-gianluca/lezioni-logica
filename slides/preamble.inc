\usepackage[T1]{fontenc}
\usepackage[italian]{babel}
\usepackage[utf8]{inputenc}
\usepackage{pifont}
\usepackage{tikz}
\usepackage[normalem]{ulem}
\usepackage{xspace}
\usepackage{minted}
\usepackage{array}
\usepackage{mathrsfs}
\usetikzlibrary{backgrounds, fit, calc, positioning, arrows.meta, shadows, decorations.pathreplacing}
\usetikzlibrary{overlay-beamer-styles, tikzmark, shapes}

\PassOptionsToPackage{height=1cm}{beamerouterthemesidebar}
\usetheme{Berkeley}
\deftranslation[to=italian]{Definition}{Definizione}
\deftranslation[to=italian]{Example}{Esempio}
\deftranslation[to=italian]{Theorem}{Teorema}

% !TeX spellcheck = it_IT

\hypersetup{colorlinks=true,linkcolor=blue}

\let\oldcheckmark\checkmark
\newcommand{\xmark}{{\color{red}{\ding{55}}}}
\renewcommand{\checkmark}{{\color{OliveGreen}{\oldcheckmark}}}
\newcommand{\conn}[1]{\textcolor{blue}{#1}}
\newcommand{\quant}[1]{\textcolor{blue}{#1}}
\newenvironment{inference}{\itshape\begin{tabular}{c}}{\end{tabular}}
\newcommand{\xor}{\mathbin{\underbar{$\vee$}}}
\renewcommand{\iff}{\mathbin{\leftrightarrow}}
\newcommand{\fp}{fp\xspace}
\newcommand{\fbf}{fbf\xspace}
\newcommand{\partof}{\mathscr{P}}

\AtBeginSection[]
{
  \begin{frame}
  \frametitle{Contenuti}
  \tableofcontents[currentsection]
  \end{frame}
}

\author[Gianluca Amato]{prof.~Gianluca Amato}
\institute[CLEII]{Modulo di ``Logica''\\Insegnamento di ``Fondamenti di Informatica``\\
Corso di Laurea in Economia e Informatica per l'Impresa\\a.a. 2023/24}
\date{\today}
