all:
	pdflatex -file-line-error-style -halt-on-error paper
	bibtex -min-crossrefs=1000 paper
	pdflatex -file-line-error-style -halt-on-error paper
	pdflatex -file-line-error-style -halt-on-error paper

clean:
	${RM} *~ *.aux *.log *.dvi *.ps paper.pdf body.tmp head.tmp *.bbl *.blg *.bak *.thm *.out


