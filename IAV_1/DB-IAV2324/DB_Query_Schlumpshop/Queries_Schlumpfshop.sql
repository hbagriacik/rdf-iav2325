/*Aufgabe 1: 
Die Marketingabteilung benötigt eine Liste aller männlichen Kunden mit Vorname, Name und Geburtsdatum. */

SELECT kunden.Vorname, kunden.Name, kunden.Geburtsdatum 
FROM kunden 
WHERE kunden.Anrede = 1; 


/*Aufgabe 2: 
Die Marketingabteilung benötigt eine Liste aller weiblichen Kunden welche älter als 30 Jahre sind mit Vorname, Name und Telefonnummer. */

SELECT kunden.Vorname, kunden.Name, kunden.Telefon 
FROM kunden 
WHERE kunden.Anrede =2 AND kunden.Geburtsdatum < "1993-12-19"; 


/*Aufgabe 3: 
Die Einkaufsabteilung benötigt eine Liste aller Artikel, deren Lagerbestand kleiner als 10 Stück ist. Die Liste soll die Artikelbezeichnung, den Preis und die Lieferantenbestellnummer enthalten. */

SELECT artikel.Artikelname, artikel.Preis_Netto, artikel.Lieferantenbestellnummer 
FROM artikel 
WHERE artikel.Lagerbestand < 10; 


/*Aufgabe 4: 
Es wird eine Liste aller Kundinnen und Kunden mit Anrede, Vorname und Name benötigt, die jünger als 30 Jahre sind. */

SELECT anrede.Anrede, kunden.Vorname,kunden.Name 
From kunden JOIN anrede ON anrede.ID_Anrede = kunden.Anrede 
WHERE kunden.Geburtsdatum > "1994-01-09"; 


/*Aufgabe 5: 
Alle Artikel, deren Lagerbestand kleiner als 10 ist mit Artikelbezeichnung, Preis und Lieferantenname */

SELECT artikel.Artikelname, artikel.Preis_Netto, lieferant.Lieferantenname 
FROM lieferant JOIN artikel ON lieferant.ID_Lieferant = artikel.Lieferant 
WHERE artikel.Lagerbestand < 10; 


/*Aufgabe 6: 
Alle Kunden und Kundinnen, mit Anrede, Vorname, Name, vollständiger Adresse welche älter als 40 Jahre sind. */

SELECT anrede.Anrede, kunden.Vorname, kunden.Name, kunden.Strasse, kunden.Husnummer, ort.PLZ, ort.Ort 
FROM anrede JOIN kunden ON anrede.ID_Anrede = kunden.Anrede 
            JOIN ort ON kunden.OrtID = ort.ID_Ort        
WHERE kunden.Geburtsdatum < '1984-01-16'; 


/*Aufgabe 7:  
Es wird eine Liste aller Kunden und Kundinnen benötigt mit Anrede, Name, Vorname und vollständiger Adresse, die in Nürnberg wohnen. (Hinweis Nürnberg sind die Postleitzahlen 90402 bis 90491 zugeordnet)  Die Liste soll nach dem Nachnamen sortiert sein. */

SELECT anrede.Anrede, kunden.Vorname, kunden.Name, kunden.Strasse, kunden.Husnummer, ort.PLZ, ort.Ort 
FROM anrede JOIN kunden ON anrede.ID_Anrede = kunden.Anrede 
            JOIN ort ON kunden.OrtID = ort.ID_Ort 
WHERE ort.PLZ >= 90402 AND ort.PLZ <=90491 
ORDER BY kunden.Name 


/*Aufgabe 8:  
Es wird eine Liste aller männlichen Kunden mit Anrede, Vorname, Nachname und vollständiger Adresse benötigt, die bereits Artikel des Lieferanten “Staedler” bestellt haben. Die Liste soll nach den Nachnamen sortiert sein. */
SELECT anrede.anrede, kunden.vorname, kunden.name, kunden.strasse, kunden.hausnummer, ort.plz, ort.ort
FROM anrede JOIN kunden ON anrede.idanrede = kunden.anrede
			JOIN ort ON kunden.idort = ort.ID_Ort
            JOIN bestellungen ON kunden.idkunden = bestellungen.idbestellung
            JOIN zuordnung_bestellungen_artikel ON bestellungen.idbestellung = zuordnung_bestellungen_artikel.ID_Bestellung
            JOIN artikel ON zuordnung_bestellungen_artikel.ID_Artikel = artikel.Artikelnummer
            JOIN lieferant ON artikel.Lieferant = lieferant.idlieferant
WHERE anrede.idanrede = 1 AND lieferant.lieferantenname LIKE "%STAEDTLER%";
