# AI agent instructions (lezioni-logica)

## Repo at a glance
- This is a **LaTeX Beamer** codebase for teaching *logica* (Italian).
- Two main outputs:
  - `slides/slides/*.tex`: one `.tex` per lecture (e.g. `slides/slides/01_introduzione_alla_logica.tex`). These share a common preamble via `\input{preamble.inc}`.
  - `compact/logica.tex`: a **single compact deck** for 2–3 hour lessons.

## Key structure + conventions
- Shared slide macros, packages, theme, and metadata live in `slides/slides/preamble.inc`.
  - Many slides use macros like `\propshape`, `\conn{}`, `\quant{}`, `\prop{}` and environments like `inference`.
  - Don’t duplicate these in each lecture: extend/adjust them in `preamble.inc` when you want a global change.
- Lecture files follow a consistent Beamer skeleton:
  - `\documentclass[...]{beamer}`
  - `\input{preamble.inc}`
  - `\title{...}`
  - title + copyright + book reference frames (see `slides/slides/01_introduzione_alla_logica.tex`).
- Assets (images) live next to sources (e.g. `compact/*.png`, `compact/*.jpg`). Prefer reusing existing assets and keep paths relative.

## Build workflow (local)
- Builds are done with **latexmk**.
  - `slides/slides/.latexmkrc` enables PDF mode and sets `pdflatex -shell-escape` (required because `slides/slides/preamble.inc` uses `minted`).
  - `compact/.latexmkrc` enables PDF mode.
- When compiling lecture slides under `slides/slides/`, assume `-shell-escape` is required.

## Editing patterns that matter here
- For code listings, use the existing `minted` setup (don’t switch to `listings` unless you also update `preamble.inc` accordingly).
- Keep language in Italian and preserve Beamer structure/styling (e.g., the section ToC frame via `\AtBeginSection` in `preamble.inc`).
- Avoid adding new generated build artifacts (`*.aux`, `*.nav`, `*.snm`, `*.toc`, `*.fls`, `*.fdb_latexmk`, ...).

## Specific notational conventions
- Operators ∧ and ∨ have the same precedence.
- Use LaTeX macros `\land`, `\lor` and `\to` instead of `\wedge`, `\vee` and `\rightarrow`.
- Use the Italian spelling "monotòno" instead of "monotono". The same for derived words.
- A proposition in natural language is typeset using the `\prop` macro.

## Where to look first
- Lecture examples: `slides/slides/01_introduzione_alla_logica.tex`, `slides/slides/02_connettivi.tex`
- Global macros/themes/packages: `slides/slides/preamble.inc`
- Build configs: `slides/slides/.latexmkrc`, `compact/.latexmkrc`
