SELECT * FROM estudantes ORDER BY nota DESC;

-- melhores 3 alunos
SELECT * FROM estudantes ORDER BY nota DESC LIMIT 3;

-- agrupando alunos por curso
SELECT curso, COUNT(*) from estudantes GROUP by curso;