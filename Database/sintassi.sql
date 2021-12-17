create table docenti
(
    id int auto_increment primary key,  /*indica un campo di numeri interi autoincrementali(se non glielo passi lo setta come il numero dopo a quello più alto) e lo assegna come primary key della tabella*/
    nome varchar(20),                   /*indica un campo di caratteri alfabetici lungo massimo 20 caratteri*/
    cognome varchar(30),                /*indica un campo di caratteri alfabetici lungo massimo 30 caratteri*/
    anno_nascita int not null           /*indica un campo di numeri interi che non può essere null*/
);

/*Entità docenti*/
create table docenti
(
    id int auto_increment,
    nome varchar(20),
    cognome varchar(30),
    anno_nascita int not null,
    /*materia varchar(20),*/


    primary key(id)                     /*indica quali campi compongono la chiave primaria*/
);

/*Entità materie*/
create table materie
(
    nome varchar(20),
    facoltativa varchar(1),
    anno_insegnamento int,
    docente int,                        /*chiave esterna, foreign key: chiave primaria della tabella id*/

    primary key(nome)
);

/*Entità alunni*/
create table alunni
(
    id int auto_increment,
    nome varchar(50),
    cognome varchar(50),
    anno_scolastico int,
    materia_facoltativa varchar(20),
    primary key(id)
);

/*inserimento dei docenti*/
insert into docenti(nome,cognome,anno_nascita) values
('Matteo','Arosti',1977),
('Andrea','Ribuoli',1962),
('Gabriella','Acerbi',1965);

/*Inserimento delle materie, e legame con docente che le insegna*/
insert into materie(nome,facoltativa,anno_insegnamento,docente) values
('Sistemistica','N',1,/*chiave del docente di insegnamento, in questo caso Arosti Matteo*/1),
('Database','S',1,/*chiave del docente di insegnamento, in questo caso Arosti Matteo*/1),
('Fondamenti','N',1,/*chiave del docente di insegnamento, in questo caso Ribuoli Andrea*/2),
('Inglese','S',2,/*chiave del docente di insegnamento, in questo caso NULL indica ancora non associata*/null);

insert into materie(nome,facoltativa,anno_insegnamento,docente) values('Magento','N',2,5);

/*inserimento degli alunni*/
insert into alunni(nome,cognome,anno_scolastico,materia_facoltativa) values
('Daniele','Selvaggi',1,'Database'),
('Martina','Pola',1,'Database'),
('Leonardo','Ciaroni',1,'Inglese');

/*select di una tabella*/
select * from docenti;                                              /*seleziona tutti gli elementi della tabella docenti, mostrando tutti i campi*/
select nome,cognome,anno_nascita from docenti;                      /*seleziona tutti gli elementi della tabella docenti, mostrando solo i campi nome, cognome ed anno_nascita*/
select * from docenti where nome='Matteo';                          /*seleziona tutti gli elementi della tabella docenti il cui nome è uguale a Matteo*/
select * from docenti order by cognome asc;                         /*seleziona tutti gli elementi della tabella docenti, ordinandoli in ordine crescente per cognome*/
select * from docenti order by anno_nascita desc;                   /*seleziona tutti gli elementi della tabella docenti, ordinandoli in ordine decrescente per anno di nascita*/
select * from docenti order by cognome,nome;                        /*seleziona tutti gli elementi della tabella docenti, ordinandoli per cognome e, se ci sono 2 cognomi uguali, per nome*/

/*select di più tabelle*/
select * from materie join docenti;                                 /*seleziona tutti gli elementi delle tabelle materie e docenti, abbinandoli come se ogni riga della prima fosse collegata con ogni riga della seconda*/
select * from materie join docenti on materie.docente=docenti.id;   /*seleziona tutti gli elementi delle tabelle materie e docenti, abbinando le righe solo quando il valore id della tabella docente è uguale a quella del valore docente della tabella materie */
select alunni.cognome,alunni.nome,materia.nome from alunni join materie where materie.nome=alunni.materia_facoltativa order by cognome asc,nome asc;
