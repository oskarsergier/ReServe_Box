## Develop
### Pivot van concept
Na de tussentijdse pitch werd er feedback gekregen op het afgelegde proces van het project. Uit deze feedback werd geconcludeerd dat er best een pivot van het project moest gebeuren. De pivot die ons aangewezen werd was om samen te gaan werken met Too Good To Go. Het idee waar mensen zelf hun overschotten in de box moesten plaatsen was namelijk zeer moeilijk te realseren omtrent enkele zaken namelijk:
* Vertrouwen
* Voedselveiligheid
* Eerlijkheid
* ...

Vandaar dat de pivot gemaakt werd om samen te werken met Too Good To Go waar zijn de pakketten zullen samenstellen en wij zullen kijken voor lockers waar ze deze pakketten kunnen insteken. Ook zullen we een app maken die zal zorgen dat mensen kunnen zien wat er in de lockers zit en waar ze deze kunnen vinden.
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
