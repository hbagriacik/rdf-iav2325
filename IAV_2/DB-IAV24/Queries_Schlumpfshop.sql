/*
SELECT, FROM, WHERE, ORDER; JOIN AND LEFT JOIN
*/

/*Aufgabe 1: 
Alle Kunden und Kundinnen, mit Anrede, Vorname, Name und Bestelldatum. Es sollen auch die Kunden in
der Liste enthalten sein, die noch nie etwas bestellt haben. Die Liste soll alphabetisch aufsteigend nach dem
Nachnamen sortiert sein. */

SELECT kunden.ID_Kunde,kunden.Name,kunden.Vorname,bestellungen.ID_Bestellung,bestellungen.ID_Kunde, bestellungen.Bestelldatum
FROM kunden LEFT JOIN bestellungen ON kunden.ID_Kunde=bestellungen.ID_Kunde
WHERE bestellungen.ID_Kunden IS NULL
ORDER BY kunden.Name;


/*Aufgabe2:
Alle Artikel, mit Artikelnummer, Artikelname, Nettopreis und Lagerbestand, die noch nie jemand bestellt
hat */

SELECT artikel.Artikelnummer, artikel.Artikelname, artikel.Preis_Netto, artikel.Lagerbestand
FROM artikel LEFT JOIN zuordnung_bestellungen_artikel ON artikel.Artikelnummer = zuordnung_bestellungen_artikel.ID_Artikel  
WHERE zuordnung_bestellungen_artikel.ID_Bestellung IS NULL;


/*Aufgabe3:
Arbeiten Sie mit der Datenbank Wahlpflichtfächer:
Es wird eine Liste aller SchüerInnen mit Anrede, Name, Vorname und Klasse benötigt, die noch keinen
Religionskurs gewählt haben. */

SELECT anrede.Anrede, schueler.Vorname, schueler.Name, klassen.Bezeichnung 
FROM anrede JOIN schueler ON anrede.IDAnrede = schueler.IDAnrede 
            JOIN klassen ON schueler.IDKlasse = klassen.IDKlasse 
            LEFT JOIN religion on schueler.IDReligion = religion.IDReligion 
WHERE religion.IDReligion IS NULL; 
