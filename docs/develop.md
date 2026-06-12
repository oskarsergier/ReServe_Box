## Develop
### Pivot van concept
Na de tussentijdse pitch werd er feedback gekregen op het afgelegde proces van het project. Uit deze feedback werd geconcludeerd dat er best een pivot van het project moest gebeuren. De pivot die ons aangewezen werd was om samen te gaan werken met Too Good To Go. Het idee waar mensen zelf hun overschotten in de box moesten plaatsen was namelijk zeer moeilijk te realseren omtrent enkele zaken namelijk:
* Vertrouwen
* Voedselveiligheid
* Eerlijkheid
* ...

Vandaar dat de pivot gemaakt werd om samen te werken met Too Good To Go waar zijn de pakketten zullen samenstellen. Het concept voorziet in lockers waarin pakketten door partners worden geplaatst. Ook wordt er een app gemaakt die zal zorgen dat mensen kunnen zien wat er in de lockers zit en waar ze deze kunnen vinden.

* [Extra info pivot](/reports%20and%20protocols/VP.pdf)

## Develop 1
Tijdens de Develop 1 fase werd gestart met het concretiseren en fysiek ontwikkelen van het concept. In deze fase wordt het ontwerp verder uitgewerkt naar een technisch realiseerbare oplossing, waarbij zowel de digitale interactie (app) als de fysieke infrastructuur (lockers) werden ontwikkeld.
### Voorgaande analyse
* #### User flow
    Voor de verdere uitwerking van het concept werd eerst de volledige interactiestroom in kaart gebracht. De analyse beschrijft de opeenvolgende stappen voor zowel de gebruiker als de partner die pakketten in het lockersysteem plaatst. Deze user flow fungeert als basis voor de informatiearchitectuur, de app-structuur en de fysieke interactie met de lockerinterface. 
![User flow](/img/UFR.jpg) 

<p align="center"> 
</p>

* #### Value network analysis
    Nadat de user flow schema's opgesteld waren werd er nog een value network analysis opgesteld.
![Value network](/img/NV.png) 

<p align="center"> 
</p>

* #### Storyboards
    Om een concreet inzicht te verkrijgen hoe het nieuwe concept in zijn werking zou gaan werden de storyboard van de definition fase verbeterd en meer in detail uitgewerkt. 
![Storyboard](/img/STB_D1_SAMEN.png) 

<p align="center"> 
</p>

### Ontwikkeling van de ReServeBox App

Tijdens het realiseren van de app werd er grotendeels afgestapt van de interfaces die gemaakt waren in de definition fase. Ook werd er beslist om het enkel bij een app te houden en geen schermen op de lockers te plaatsen. De app kan gedownload worden op de smartphone en via deze weg kun je pakketten reserveren om later op te gaan halen. Indien je dit pakket niet meer wil opeisen dan kun je dit steeds annuleren via de app en komt dit terug vrij voor andere gebruikers. Wanneer je iets gereserveerd hebt ontvang je via de app een 6-cijferige code die je dan moet ingeven op een keypad aan de lockers, zo kun je het pakket opeisen.

App ophalen voedsel:
![App1](/img/App_1.jpg) 

<p align="center"> 
</p>

* [Link app](https://www.figma.com/make/J6ychj6AkGgcx02CEtZITY/Automated-Food-Pickup-App?p=f&t=YJ3e3WwcijThLWiJ-0)

De app laat gebruikers toe om volgende zaken uit te voeren:
* Beschikbare voedselpakketten te bekijken
* een pakket te reserveren
* hun reserveringen te beheren
* instructies te krijgen voor het ophalen bij de locker

Nadat de app afgewerkt was werden er testen gedaan om de observeren hoe de gebruikers deze ervaren en wat ze ervan vinden. Om de gebruiksvriendelijkheid van de app te evalueren werden er interviews afgelegd met gebruikers van diverse leeftijden zodat de app voor iedereen zo gebruiksvriendelijk mogelijk is. 

* [Testen app](/reports%20and%20protocols/IR_I_SAMEN.pdf)

### Resultaten testen
De validatiefase onderzocht in welke mate de voorgestelde interactie begrijpelijk, toegankelijk en betrouwbaar werd ervaren. Bij de app-evaluatie werd nagegaan of gebruikers de reservatieflow zelfstandig konden doorlopen, of de belangrijkste acties duidelijk zichtbaar waren en of de afhaalcode correct werd geïnterpreteerd. 

De gebruikerstesten wezen op een overwegend positieve waardering van de app. De testresultaten tonen een snellere taakuitvoering bij jongere deelnemers, oudere deelnemers vroegen vaker ondersteuning. Als laatste werd gevraagd welke score de gebruikers de app gaven en deze lag tussen de 3-4.5 op 5. 


Tijdens de interviews kwamen er echter ook nog enkele negatieve punten naar boven. Hier heeft de app nog enkele verbeteringen nodig:
* Extra uitleg bij het ophalen van een bestelling.
* Betere feedback wanneer je een bestelling annuleert.
* Visuele uitleg over hoe de locker werkt.

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

![Test opstelling](/img/Opstelling_LED.png) 

<p align="center"> 
</p>

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

App ophalen voedsel:
![App1](/img/App_1.jpg) 

<p align="center"> 
</p>

* [App gebruikers](https://www.figma.com/make/J6ychj6AkGgcx02CEtZITY/Automated-Food-Pickup-App?t=z45hhVviTivWGiIb-1)

App leveren voedsel:
![App1](/img/App_2.jpg) 

<p align="center"> 
</p>

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


![P5_P95](/img/P5_P95.jpg)

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
Als eerste test moesten de gebruikers de code invoeren enkel op de keypad. Terwijl de gebruikers dit aan het uitvoeren waren werd er geobserveerd hoe ze dit ervaren.
Observaties:
* Interactie werkte technisch correct
* Gebruikers misten duidelijke feedback
* Onzekerheid tijdens gebruik
* Knoppen groot genoeg

>“Ik weet niet of ik het juist heb ingevoerd.”
> “Een 6-cijferige code is goed maar ik zou graag feedback krijgen bij het invoeren ervan.”

* [Testen zonder display](/reports%20and%20protocols/TPAZ_SAMEN.pdf)

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

[Testen zonder display](/reports%20and%20protocols/TPAM_SAMEN.pdf)

![Foto met testpersoon]() 

<p align="center"> 
</p>

### Conclusie Develop 2

De Develop 2 fase leidde tot een sterke verbetering van de gebruikservaring van de ReServeBox.

Belangrijkste realisaties:
* Geoptimaliseerde app-interface
* Ontwikkeling van een tweede app voor partners
* Ergonomisch onderbouwd ontwerp via NX
* Validatie van interactie via gebruikerstesten
* Belangrijke inzichten rond feedback en veiligheid

Bij de lockerinteractie werd nagegaan of keypad, display en feedbackmechanismen voldoende duidelijkheid boden tijdens de invoer van de code. De resultaten tonen aan dat visuele feedback essentieel is voor vertrouwen in het systeem en dat bijkomende begeleiding nodig blijft voor gebruikers met lagere digitale routine.

## Develop 3

In Develop 3 verschoof de focus van de functionele werking en basis-usability naar de verdere verfijning van de gebruikservaring, ergonomie en uitstraling van de ReServeBox. In deze fase werd onderzocht hoe het systeem niet enkel correct werkt, maar ook comfortabel, betrouwbaar en professioneel aanvoelt voor de gebruiker.

Binnen deze fase werden twee grote onderdelen verder uitgewerkt:

* een ergonomische test met motion sensoren
* een CMF-analyse voor de vormgeving en uitstraling van de box.

Daarnaast werd ook de mogelijke servicecontext verder aangescherpt op basis van een interview met Too Good To Go, waaruit Waste Warriors als interessante toekomstige partner naar voren kwam.

### Ergonomische analyse (met motion sensoren)
Om de ergonomie van het lockersysteem verder te valideren, werd een bijkomende test uitgevoerd met motion sensoren. Waar de eerdere analyse in Siemens NX vooral gebruikt werd om de interface digitaal te simuleren, werd in Develop 3 gekeken naar de bewegingen van echte gebruikers tijdens de interactie met het prototype.

Tijdens deze test werden drie situaties onderzocht:

* De hoogte van display en keypad bij een verticale interface
* Het openen van de lockers en het uitnemen van producten
* De hoogte van display en keypad bij een hellende interface

Dit werd gestest met bestaande lockers en de interface van de display en keypad.
#### Doelstelling
Het doel van deze test was om te bepalen welke opstelling de minste fysieke belasting veroorzaakt en welke interactie het meest comfortabel aanvoelt tijdens realistisch gebruik.

#### Analyse 1: verticale interface
In de eerste analyse werd getest hoe gebruikers het display en keypad bedienen wanneer de interface verticaal geplaatst is.  
![Foto test 1](/img/Foto_Analyse_1.jpg)

<p align="center">
</p>

De totale score bedraagt 27, wat valt binnen de zone matig verhoogd risico. Dit betekent dat de interface in deze positie bruikbaar is, maar dat er nog aandachtspunten zijn. 

Belangrijke observaties: 

* De nekbelasting is verhoogd door de kijkhoek naar het display.  
* De armen worden deels geheven tijdens het bedienen van het keypad.  
* De onderarmen moeten roteren tijdens het invoeren van de code.  

Gebruikers moeten bij deze opstelling iets meer corrigeren met hun hoofd en armen om het display te lezen en het keypad te bedienen. Een verticale interface is mogelijk, maar niet ideaal. De leeshoek en bedieningshouding kunnen beter. 

![Analyse 1](/img/MS_Analyse_1.png)

<p align="center">
</p>

#### Analyse 2: openen en inreiken in de lockers
In de tweede analyse werd getest hoe gebruikers de lockers openen en producten uit de compartimenten nemen.

![Foto test 2](/img/Foto_Analyse_2.jpg)

<p align="center">
</p>

Deze situatie behaalde een totale score van 33,75, wat binnen de zone van een significant verhoogd risico valt. Deze test bleek ergonomisch het meest belastend. 

Belangrijke observaties: 
* De gebruiker moet meer reiken en draaien.  
* Er ontstaat meer belasting op armen en schouders.  
* Boven-schouderwerk en armheffing komen vaker voor.  
* Ook kniebuiging en romprotatie nemen toe.

Het openen en inreiken in de lockers vormt de grootste ergonomische uitdaging binnen het ontwerp. Vooral de diepte, hoogte en indeling van de lockers moeten verder geoptimaliseerd worden. De meest gebruikte lockers worden best geplaatst binnen een comfortabele reikzone

![Analyse 2](/img/MS_Analyse_2.png)

<p align="center">
</p>

#### Analyse 3: hellende interface

In de derde analyse werd het display en keypad opnieuw getest, maar dit keer onder een hoek geplaatst.

![Foto test 3](/img/Foto_Analyse_3.PNG)

<p align="center">
</p>

Deze opstelling behaalt een totale score van 25,75, de laagste score van de drie analyses. Dit betekent dat deze variant ergonomisch het meest gunstig is. De hellende interface zorgde voor een natuurlijkere houding tijdens het bedienen van het keypad en het aflezen van het display.

Belangrijke observaties: 
* Romprotatie en zijwaartse rompbuiging blijven laag.  
* De algemene lichaamshouding is comfortabeler.  
* Pols- en kniebelasting blijven beperkt.  
* De helling helpt om de interface beter zichtbaar en bereikbaar te maken.  

Er blijven wel enkele aandachtspunten: 
* Nekbuiging blijft aanwezig.  
* Onderarmrotatie, vooral rechts (afhankelijk van de dominante hand), blijft verhoogd.  
* De armhouding kan nog verder worden verbeterd.  

De hellende interface is ergonomisch de beste basis voor verdere ontwikkeling. Deze opstelling ondersteunt een comfortabelere kijk- en bedieningshouding dan een volledig verticale interface. 

![Analyse 3](/img/MS_Analyse_3.png)

<p align="center">
</p>

[Ergnomie analyse](/reports%20and%20protocols/Ergonomie_motion_sensoren.pdf)

#### Resultaten
De vergelijking tussen de drie analyses toont dat de hellende interface de beste ergonomische resultaten geeft. Analyse 3 behaalt de laagste totale score en biedt de meest comfortabele houding voor het bedienen van keypad en display. 

De grootste ergonomische uitdaging ligt echter bij het openen en inreiken in de lockers. Analyse 2 toont aan dat dit meer fysieke belasting veroorzaakt dan het bedienen van de interface. Daarom moeten vooral de lockerhoogte, lockerindeling en reikdiepte verder geoptimaliseerd worden.

Op basis van deze resultaten worden volgende keuzes aanbevolen: 
* Keypad en display worden best licht onder een hoek geplaatst.  
* De interface moet binnen een comfortabele reikhoogte blijven.  
* Het display moet goed leesbaar zijn zonder sterke nekbuiging.  
* Lockers mogen niet te diep zijn.  
* De meest gebruikte lockers moeten op middelhoge hoogte geplaatst worden.  
* Te hoge en te lage lockers moeten vermeden worden voor zware of kwetsbare pakketten.  
* Er moet voldoende ruimte voor de box zijn zodat gebruikers recht voor de locker kunnen staan.  

### CMF
Naast de ergonomische optimalisatie werd in Develop 3 ook een CMF-analyse uitgevoerd. CMF staat voor Color, Material & Finish. Deze analyse werd gebruikt om de uitstraling van de ReServeBox doelgericht te verfijnen. 

Omdat de ReServeBox in een publieke omgeving geplaatst wordt, moet het product tegelijk: 
* betrouwbaar ogen;
* hygiënisch aanvoelen 
* robuust en vandalismebestendig zijn
* duurzaamheid uitstralen
* laagdrempelig blijven voor een brede doelgroep 

Op basis van de CMF-analyse werden verschillende visuele richtingen vergeleken. Hierbij werd gekeken naar welke uitstraling het best past bij de ReServeBox als publiek lockersysteem voor voedseloverschotten. 
De gekozen richting combineert: 
* een cleane, lichte basis 
* duurzame groene accenten 
* een duidelijke en contrasterende interfacezone 
* matte, onderhoudsvriendelijke oppervlakken 
* subtiele LED-feedback om de interactie te ondersteunen
* Deze combinatie ondersteunt de gewenste beleving: betrouwbaar, hygiënisch, duurzaam en toegankelijk 


![Analyse 3](/img/CMF_R_SAMEN.jpg)

<p align="center">
</p>

[CMF ananlyse](/reports%20and%20protocols/CMF_Analyse.pdf)


### Waste warriors
Tijdens Develop 3 werd ook de bredere servicecontext verder aangescherpt. Een belangrijk inzicht kwam naar voren uit een interview dat oorspronkelijk gelinkt was aan Too Good To Go. Hieruit bleek dat ReServeBox inhoudelijk mogelijk sterker aansluit bij Waste Warriors, omdat zij focussen op overschotten van boeren en producenten. In plaats van enkel voedselpakketten van winkels of horeca aan te bieden, zou ReServeBox kunnen functioneren als stedelijk afhaalpunt voor agro-overschotten die via een organisatie zoals Waste Warriors worden gecentraliseerd. 

[Interview](/reports%20and%20protocols/IP_Jonas.pdf)

## Conclusie Develop 3
Develop 3 zorgde voor een verdere verfijning van de ReServeBox op vlak van ergonomie, uitstraling en servicecontext. 

De belangrijkste conclusies zijn: 
* Een hellende interface is ergonomisch beter dan een verticale interface 
* Het openen en inreiken in lockers blijft de grootste ergonomische uitdaging 
* Lockerhoogte, lockerindeling en reikdiepte moeten verder geoptimaliseerd worden 
* De CMF-richting moet vertrouwen, hygiëne en duurzaamheid uitstralen 
* Een lichte, cleane box met groene accenten sluit het best aan bij de gewenste productbeleving 
* Waste Warriors vormt een interessante toekomstige partner omdat zij dichter aansluit bij voedseloverschotten van boeren en producenten 

> [!IMPORTANT]
> ## Design Requirements
> #### Develop 1
>* 1.1 Het systeem moet real-time synchronisatie van de kluisvoorraad naar de app garanderen.
>* 1.2 De elektronische sloten moeten binnen 1 seconde na het invoeren van de code ontgrendelen.
>* 1.3 De invoerinterface en elektronica moeten voorzien zijn van een continue stroomtoevoer.
>* 1.4 De functionele werking (I/O, sensoren en actuatoren) moet inzichtelijk en modulair zijn opgebouwd.
> #### Develop 2
>* 2.1 Het middelpunt van het touchpad moet op 120 cm hoogte vanaf de vloer geplaatst zijn. 
>* 2.2 Het display moet een helling van 15° naar voren hebben om de leesbaarheid te garanderen voor de volledige doelgroep (P5–P95). 
>* 2.3 De interactietijd (van code-invoer tot deuropening) mag niet langer duren dan 30 seconden. 
>* 2.4 Foutmeldingen moeten direct aangeven welke actie de gebruiker moet herhalen (bijv. "code onjuist" of "time-out"). 
>* 2.5 Het openingsmechanisme moet voor de gebruiker onmiddellijk fysieke feedback geven (bijv. LED-licht en geluid).
> #### Develop 3
>* 3.1 De kleuren en materialen van de behuizing moeten een gevoel van hygiëne en betrouwbaarheid uitstralen.
>* 3.2 Het fysieke product moet naadloos aansluiten op het service-ecosysteem (bijv. een API-koppeling met TGTG of soortgelijke platforms).
>* 3.3 De binnenzijde moet gemakkelijk te reinigen zijn en voldoen aan de geldende hygiëne-eisen voor voedsel.
>* 3.5 De CMF-afwerking mag niet gevoelig zijn voor vingerafdrukken en moet bestand zijn tegen openbare weersomstandigheden.
>* 3.6 Op de buitenkant moet duidelijk aangegeven worden wat het concept is van de box.
>* 3.7 Op de box moeten de instructies in grote lijnen worden gezet, zodat het gebruik van de box duidelijk wordt.


[Design Requirements](/docs/design_requirements.md)