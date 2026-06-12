## Arduino tests
Via de ReServeBox-app ontvangt de gebruiker een unieke code die vervolgens op het keypad aan de lockers kan worden ingevoerd. Om dit principe technisch te testen, werd gebruikgemaakt van een Arduino Uno, de 12-Channel Capacitive Touch Keypad (ATtiny1616) en verbindingsdraden.

### Voorbeeld code keypad
Voorafgaand aan het programmeren werd informatie verzameld over de gebruikte keypad. ([Info](../README.md#Keypad)) Op deze pagina werd ook een voorbeeldcode meegegeven om de basiswerking van de keypad te controleren. Tijdens het testen werden enkele technische problemen vastgesteld:

* Wanneer de documentatie van de keypad rechtstreeks werd gevolgd, werd er geen data weergegeven in de seriële monitor. In plaats daarvan verscheen telkens een foutmelding.
Dit probleem werd veroorzaakt doordat de TX-pin van de keypad verbonden was met de TX-pin van de Arduino en de RX-pin met de RX-pin. Hierdoor waren twee zendpinnen en twee ontvangstpinnen met elkaar verbonden, waardoor er geen correcte datacommunicatie tot stand kwam. De verbindingen moesten daarom worden gekruist: TX naar RX en RX naar TX.
De volgende foutmelding werd herhaaldelijk weergegeven:
![alt text](/img/Error.png)

<p align="center">
</p>

* Tijdens een volgende test verschenen enkel onleesbare tekens in de seriële monitor.
Dit probleem ontstond doordat de communicatie aanvankelijk via de hardwarematige TX- en RX-pinnen van de Arduino verliep. Deze poorten worden ook gebruikt voor seriële communicatie met de computer, waardoor conflicten ontstonden tussen de keypadcommunicatie en de seriële monitor. Na verdere testen werd vastgesteld dat de communicatie stabieler verliep wanneer de TX- en RX-verbindingen werden verplaatst naar digitale pinnen 2 en 3 op de Arduino.
![alt text](/img/hok.png)

<p align="center">
</p>

![alt text](/img/OP1.jpg)

<p align="center">
</p>

* [Voorbeeld code](/tests/Voorbeeld%20code/Vb_code_touch_pad/Vb_code_touch_pad.ino)

### Code lockers
Om de lockers via het keypad te kunnen openen, werd de voorbeeldcode aangepast naar een code die gebruikt kan worden om een locker gedurende een bepaalde tijd te ontgrendelen. De code bevat een bevestigingsknop om te controleren of de ingevoerde code correct is. Hiervoor wordt de “#”-toets op de keypad gebruikt. Daarnaast werd een wistoets voorzien om de ingevoerde code te verwijderen wanneer een foutieve code werd ingevoerd. Hiervoor wordt de “*”-toets gebruikt.

* Om te controleren of de code correct functioneert, werd een LED gebruikt die oplicht wanneer de locker opent. 
* Een resterend aandachtspunt is de rechtstreekse koppeling tussen de app en het lockersysteem. In de huidige testopstelling werkt het systeem met een vooraf geprogrammeerde cijfercode, maar de code wordt nog niet rechtstreeks vanuit de app ingelezen.

![alt text](/img/OP2.jpg)

<p align="center">
</p>

* [Voorlopige code](/tests/Code%20lockers/code_touchpad/code_touchpad.ino)


### Voorbeeld code display

Tijdens de ontwikkeling van de Arduino-code voor het ReServeBox-project traden er fouten op bij het integreren van de LCD-displaycode in de bestaande keypadcode. Deze foutmeldingen verschenen pas wanneer de LCD-code werd toegevoegd aan de reeds functionerende keypadcode.

Om de oorzaak te achterhalen, werden alle componenten opnieuw afzonderlijk getest. In deze fase functioneerde elk onderdeel, inclusief de LCD en de keypad, correct met de respectieve voorbeeldcode.

Bij het opnieuw samenvoegen van de verschillende codeonderdelen ontstonden echter opnieuw problemen. Later bleek dat twee noodzakelijke regels code ontbraken. Na het corrigeren hiervan bleef de compiler foutmeldingen geven. De foutmelding gaf aan dat er aan het begin van de code een puntkomma ontbrak.

Wanneer deze puntkomma op de aangeduide plaats werd toegevoegd, ontstonden meerdere bijkomende foutmeldingen. Eén van deze fouten verwees naar een regel binnen de keypadcode, hoewel deze code afzonderlijk correct functioneerde.

Na verdere analyse, met ondersteuning van AI, werd vastgesteld dat de werkelijke oorzaak zich onderaan de code bevond, waar effectief een puntkomma ontbrak. Na het toevoegen van deze ontbrekende puntkomma verdwenen de foutmeldingen en functioneerde de geïntegreerde code correct.

Tot slot werd bijkomende feedback toegepast om de code te optimaliseren en de leesbaarheid te verbeteren.

![alt text](/img/OPD_LCD1.jpg)

<p align="center">
</p>

[info](../README.md#Display)

* [Voorbeeld code LCD](/tests/HelloWorld_LCD_GROVE/HelloWorld_LCD_GROVE.ino)

### Eind code

Na het oplossen van de initiële fouten werd de code verder verfijnd op basis van de gewenste interactie en veiligheidslogica. Er werd een beveiliging toegevoegd waarbij het aantal foutief ingevoerde codes beperkt wordt tot maximaal drie pogingen. Wanneer drie opeenvolgende foutieve codes worden ingevoerd, wordt het systeem gedurende drie minuten geblokkeerd voordat een nieuwe poging mogelijk is.

Tijdens de implementatie van deze functionaliteit trad opnieuw een fout op. Deze werd veroorzaakt door het gebruik van het datatype int voor tijdsregistratie, terwijl hiervoor unsigned long vereist is. Een int heeft een te beperkte waardeomvang voor tijdsmetingen met millis(). Na het aanpassen van het datatype werd dit probleem opgelost.

Na deze aanpassing traden nog enkele bijkomende foutmeldingen op. Deze werden veroorzaakt door ontbrekende puntkomma’s. Na het corrigeren van deze syntaxfouten functioneerde de code opnieuw correct.

![Opstelling + kabels](/img/OPE.jpg)

<p align="center">
</p>

![Opstelling eind](/img/OPP.jpg)

<p align="center">
</p>

* [Code Laatste Versie](/tests/Code_laatste_versie/Code_laatste_versie.ino)


Wiring schema:
![Schema](/img/Schema.png)

<p align="center">
</p>