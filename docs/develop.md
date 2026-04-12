## Develop
### Pivot van concept
Na de tussentijdse pitch werd er feedback gekregen op het afgelegde proces van het project. Uit deze feedback werd geconcludeerd dat er best een pivot van het project moest gebeuren. De pivot die ons aangewezen werd was om samen te gaan werken met Too Good To Go. Het idee waar mensen zelf hun overschotten in de box moesten plaatsen was namelijk zeer moeilijk te realseren omtrent enkele zaken namelijk:
* Vertrouwen
* Voedselveiligheid
* Eerlijkheid
* ...

Vandaar dat de pivot gemaakt werd om samen te werken met Too Good To Go waar zijn de pakketten zullen samenstellen en wij zullen kijken voor lockers waar ze deze pakketten kunnen insteken. Ook zullen we een app maken die zal zorgen dat mensen kunnen zien wat er in de lockers zit en waar ze deze kunnen vinden.

* [Extra info pivot](/reports%20and%20protocols/VP.pdf)

## Develop 1
Tijdens de Develop 1 fase werd gestart met het concretiseren en fysiek ontwikkelen van het concept. In deze fase wordt het ontwerp verder uitgewerkt naar een technisch realiseerbare oplossing, waarbij zowel de digitale interactie (app) als de fysieke infrastructuur (lockers) werden ontwikkeld.

### User flow
Voordat we het nieuwe concept zouden verder uitwerken hebben we eens nagedacht over de verschillende stappen die de gebruikers moeten uitvoeren tijdens het interageren met de app en de lockers. de stappen zijn terug te vinden in onderstaand schema. Hier werd er gekeken naar de gebruiker en naar de koerier die de pakketten in de lockers steken.
![alt text](/img/UFR.jpg) 

<p align="center"> 
</p>

### Value network analysis
Nadat de user flow schema's opgesteld waren werd er nog een value network analysis opgesteld.
![alt text](/img/NV.png) 

<p align="center"> 
</p>

### Storyboards
Om een concreet inzicht te verkrijgen hoe het nieuwe concept in zijn werking zou gaan werden de storyboard van de defintion fase verbeterd en meer in detail uitgewerkt. 
![alt text](/img/STB1.D1.png) 

<p align="center"> 
</p>

![alt text](/img/STB2.D1.png)

<p align="center">
</p> 


### Ontwikkeling van de ReServeBox App

Tijdens het realiseren van de app werd er grotendeels afgestapt van de interafaces die gemaakt waren in de definition fase. Ook werd er beslist om het enkel bij een app te houden en geen schermen op de lockers te plaatsen. De app kan gedownload worden op de smartphone en via deze weg kun je pakketten reserveren om later op te gaan halen. Indien je dit pakket niet meer wil opeisen dan kun je dit steeds annuleren via de app en komt dit terug vrij voor andere gebruikers. Wanneer je iets gereserveerd hebt ontvang je via de app een 6-cijferige code die je dan moet ingeven op een keypad aan de lockers, zo kun je het pakket opeisen.

* [Link app](https://www.figma.com/make/J6ychj6AkGgcx02CEtZITY/Automated-Food-Pickup-App?p=f&t=YJ3e3WwcijThLWiJ-0)

De app laat gebruikers toe om volgende zaken uit te voeren:
* Beschikbare voedselpakketten te bekijken
* een pakket te reserveren
* hun reserveringen te beheren
* instructies te krijgen voor het ophalen bij de locker

Nadat de app afgewerkt was werden er testen gedaan om de observeren hoe de gebruikers deze ervaren en wat ze ervan vinden. Om de gebruiksvriendelijkheid van de app te evalueren werden er interviews afgelegd met gebruikers van diverse leeftijden zodat de app voor iedereen zo gebruiksvriendelijk mogelijk is. 

### Resultaten testen
Tijdens het testen werd vooral gekeken naar volgende zaken:
* Begrijpt de gebruiker hoe hij het moet gebruiken?
* Zijn bepaalde zaken duidelijk zichtbaar? (Reserveer knop, annulatie knop, ...)
* Begrijpt hij wat er moet gebeuren met de code?
* Is het makkelijk hanteerbaar?

Het gebruik van de app viel in zeer goeie smaak bij de meeste gebruikers. De app was gebruiksvriendelijk en duidelijk voor iedereen. Natuurlijk ging dit bij de jongere gebruikers wat sneller dan bij de ouderen. Enkele oudere gebruikers hadden hier en daar wat extra hulp nodig voor bepaalde zaken. Als laatste werd gevraagd welke score de gebruikers de app gaven en deze lag tussen de 3-4.5 op 5. 

Tijdens een interview werd het volgende gezegd:

> “De app lijkt op andere apps die ik gebruik, dus ik snapte meteen hoe het werkt.”

Tijdens de interviews kwamen er echter ook nog enkele negatieve punten naar boven. Hier heeft de app nog enkele verbeteringen nodig:
* Extra uitleg bij het ophalen van een bestelling.
* Betere feedback wanneer je een bestelling annuleert.
* Visuele uitleg over hoe de locker werkt.

Aan de hand van deze feedback zullen we in volgende fase de app verbeteren.
Als laatste werd er gevraagd waar volgens hen de lockers het best geplaatst zouden moeten worden.
* Treinstation
* Universiteiten / Hoge scholen
* Supermarkten
* Winkelcentra

Dit zijn plaatsen waar veel mensen langskomen en waar snelle voedselophaling nuttig is.

### Ontwikkeling van het lockersysteem

Naast de app werd ook gestart met de technische ontwikkeling van het lockersysteem. Het is dus de bedoeling dat de gebruikers de lockers kunnen openen met een 6-cijferige code die ontvangen wordt via de app. Deze kunnen ze dan ingeven op de lockers om het pakket op te eisen. Om dit systeem na te bootsen en te testen wordt er gebruik gemaakt van:
* Arduino uno
* 12-Channel Capacitieve touch Keypad (ATtiny1616)
* Ledjes (Om aan te tonen dat de locker open is.)
* Verbindingsdraden
* Breadboard

Meer informatie over de code die hiervoor gebruikt wordt kun je vinden bij: [Tests](../tests/README.md)

### Testen van het lockersysteem

Normaal gezien zouden er in deze fase ook gebruikstesten van het lockersysteem plaatsvinden. Door een fout in de code van het Arduino systeem konden deze testen echter nog niet uitgevoerd worden voor de deadline van Develop 1.

Daarom zullen deze testen plaatsvinden in Develop 2. We zullen er dan ook voor zorgen dat we al een effectief prototype hebben zodat de gebruikers dit in het echt kunnen testen. 
De geplande testen zullen onder andere evalueren:
* Gebruiksgemak van het lockersysteem
* Duidelijkheid van de interactie
* Snelheid van het openingsmechanisme
* Betrouwbaarheid van de Keypad

### Conclusie Develop 1

De Develop 1 fase werd gekenmerkt door:
* een strategische pivot van het concept
* De ontwikkeling van een app prototype
* Eerste gebruikerstesten van de applicatie
* De start van de technische ontwikkeling van het lockersysteem

De volgende fase (Develop 2) zal focussen op:
* Verdere ontwikkeling van het lockersysteem
* Technische testen met Arduino
* Verbeteringen aan de app op basis van gebruikerstesten
* Integratie tussen app en fysieke box.

## Develop 2
Tijdens de Develop 2 fase werd de focus verlegd van de technische werking naar de gebruikservaring en ergonomie van de ReServeBox. In deze fase werden zowel de digitale interface als het fysieke systeem verder geoptimaliseerd op basis van gebruikerstesten en theoretische onderbouwing.

### Aanpassingen aan Reserve app

De bestaande app werd aangepast op basis van de feedback uit de eerdere gebruikerstesten.

Aanpassingen: 
* Timer van 30 min weg
* Voorraad counter toegevoegd
* Beperkte codes voor arduino

Gebruikers verwachten een snelle en intuïtieve interactie, vergelijkbaar met andere mobiele apps.

Ook werd er een tweede app gemaakt voor de mensen van Too Good To Go die de lockers zullen gaan aanvullen.  Deze app laat toe om pakketten toe te wijzen aan lockers, inhoud van lockers te registreren en een overzicht te bewaren van beschikbare pakketten

Het doel van deze app:
Het logistieke proces vereenvoudigen en fouten bij het vullen van lockers vermijden.

* [App gebruikers](https://www.figma.com/make/J6ychj6AkGgcx02CEtZITY/Automated-Food-Pickup-App?t=z45hhVviTivWGiIb-1)
* [App medewerkers](https://www.figma.com/make/JQcTcU4Be1uQNL2V1ulXEz/Untitled?p=f&t=8YItCzS4Ch5X5GUG-0)

### Ergonomische analyse
Om de fysieke interactie met het systeem te optimaliseren werd een antropometrische analyse uitgevoerd in Siemens NX .

Ontwerpstrategie:
* Toegepast: adjustable design (P5 – P95)
* Doelgroep: gebruikers tussen 17 en 75 jaar
* Focus op inclusieve toegankelijkheid

Belangrijkste ontwerpkeuzes
* Touchpad hoogte: 120 cm
* Schermhoogte: max. 165 cm
* Reikwijdte: max. 45 cm diepte

Deze waarden zijn gebaseerd op de DINED antropometrische database.

Omdat het systeem niet mechanisch verstelbaar is, moet de vaste plaatsing van het touchpad comfortabel bruikbaar zijn voor zowel de kleinste (P5) als de grootste (P95) gebruiker. We positioneren het touchpad daarom binnen de overlappende comfortzone van beide extremen.

### Validatie via NX
De opstelling werd getest met digitale modellen:
P5 (kleine gebruiker)
P95 (grote gebruiker)
![alt text](/img/klein.png)

<p align="center">
</p>

![alt text](/img/groot.png)

<p align="center">
</p>

Resultaten:
* Alle gewrichten bevinden zich in de comfortzone (groen)
* Geen extreme houdingen nodig
* Interface is bereikbaar voor volledige doelgroep

P95
![alt text](/img/p95.png)

<p align="center">
</p>

P5
![alt text](/img/P5.png)

<p align="center">
</p>

Conclusie:
De gekozen plaatsing van het touchpad en display is ergonomisch verantwoord en inclusief.
* [Antropometrische analyse](/reports%20and%20protocols/Antropometrische%20analyse.pdf)

### Prototyping en interactietesten
In deze fase werd het fysieke interactiesysteem getest met:
* 12-channel capacitive touch keypad
* Arduino Uno
* Display (toegevoegd in tweede testfase)

![alt text](/img/IMG_5596.JPG)

<p align="center">
</p>

Test 1 - Keypad

Gebruikerstesten: 
Als eerste test moesten de gebruikers de code invoeren enkel op de keypad. Terwijl de gebruikers dit aan het uivoeren waren werd er geobserveerd hoe ze dit ervaren.
Observaties:
* Interactie werkte technisch correct
* Gebruikers misten duidelijke feedback
* Onzekerheid tijdens gebruik
* Knoppen groot genoeg

>“Ik weet niet of ik het juist heb ingevoerd.”
> “Een 6-cijferige code is goed maar ik zou graag feedback krijgen bij het invoeren ervan.”

Test 2 – Keypad + display

In de tweede test werd een display toegevoegd. Hier kunnen de gebruikers dus de code zien die ze invoeren.

Resultaten:
* Gebruikers begrepen de interactie sneller
* Feedback werd als duidelijk ervaren
* Minder twijfel tijdens gebruik

> “Nu is het duidelijk wat er gebeurt.”

Belangrijkste inzichten uit de testen:
* Feedback is cruciaal voor vertrouwen in het systeem
* Visuele ondersteuning (display) verhoogt usability
* Interactie moet onmiddellijk bevestiging geven
* Gebruikers verwachten begeleiding tijdens gebruik
* Beveiliging en interactie

Uit de testen bleek ook dat veiligheid een belangrijke rol speelt.
* [Protocol testen](/reports%20and%20protocols/TPA.pdf)

Nieuwe ontwerpbeslissingen:
Betere bescherming tegen ongeautoriseerde toegang

Toekomstige aanpassingen:
* Limiet op aantal foutieve pogingen
* (Reset- of blokkeermechanisme bij misbruik)

### Conclusie Develop 2

De Develop 2 fase leidde tot een sterke verbetering van de gebruikservaring van de ReServeBox.

Belangrijkste realisaties:
* Geoptimaliseerde app-interface
* Ontwikkeling van een tweede app voor partners
* Ergonomisch onderbouwd ontwerp via NX
* Validatie van interactie via gebruikerstesten
* Belangrijke inzichten rond feedback en veiligheid
