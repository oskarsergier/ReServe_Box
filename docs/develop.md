## Develop
### Pivot van concept
Op basis van feedback en verdere analyse werd het oorspronkelijke concept bijgestuurd. Het model waarbij gebruikers zelf voedseloverschotten in de box plaatsen, bleek onvoldoende haalbaar op vlak van voedselveiligheid, controle en vertrouwen. Daarom werd het concept verder ontwikkeld als een gecontroleerd lockersysteem waarin pakketten door betrouwbare partners worden samengesteld en door gebruikers via een app en unieke code kunnen worden opgehaald.

* [Extra info pivot](/reports%20and%20protocols/VP.pdf)

## Develop 1
Tijdens de Develop 1-fase werd gestart met het concretiseren en fysiek uitwerken van het concept. In deze fase werd het ontwerp vertaald naar een technisch realiseerbare oplossing, waarbij zowel de digitale interactie via de app als de fysieke infrastructuur van het lockersysteem verder werden ontwikkeld.
### Voorgaande analyse
* #### User flow
    Voor de verdere uitwerking van het concept werd eerst de volledige interactiestroom in kaart gebracht. Deze analyse beschrijft de opeenvolgende stappen voor zowel de gebruiker als de partner die pakketten in het lockersysteem plaatst. De user flow vormt de basis voor de informatiearchitectuur, de app-structuur en de fysieke interactie met de lockerinterface. 
    [User flow](/reports%20and%20protocols/UFR.pdf)

* #### Value network analysis
    De Value Network Analysis toont hoe verschillende actoren binnen ReServeBox samen waarde creëren. Het systeem verbindt voedselproducenten of partners zoals Waste Warriors met stedelijke gebruikers via een slim lockersysteem en een digitale applicatie. Voedseloverschotten krijgen hierdoor opnieuw waarde, terwijl gebruikers op een eenvoudige en toegankelijke manier voedselpakketten kunnen ophalen.

    [Value network analysis](/img/NV.png) 

* #### Storyboards
    Om de werking van het nieuwe concept concreter te visualiseren, werden de storyboards uit de definitionfase herwerkt en verder gedetailleerd. Deze storyboards tonen hoe de interactie tussen gebruiker, app en lockersysteem verloopt.
![Storyboard](/img/STB_D1_SAMEN.png) 

<p align="center"> 
</p>

### Ontwikkeling van de ReServeBox App

Tijdens de ontwikkeling van de app werd grotendeels afgestapt van de interfacevoorstellen uit de definitionfase. Er werd gekozen om de hoofdinteractie via een mobiele applicatie te laten verlopen en geen uitgebreid scherm op de lockers zelf te voorzien. Gebruikers kunnen de app downloaden op hun smartphone en via deze weg beschikbare voedselpakketten reserveren om later op te halen.

Wanneer een pakket niet langer gewenst is, kan de reservatie via de app worden geannuleerd. Het pakket komt daarna opnieuw beschikbaar voor andere gebruikers. Na reservatie ontvangt de gebruiker een 6-cijferige code in de app. Deze code wordt ingevoerd op het keypad aan de lockers, waarna de bijhorende locker geopend kan worden.

App ophalen voedsel:
![App1](/img/App_1.jpg) 

<p align="center"> 
</p>

* [Link app](https://www.figma.com/make/J6ychj6AkGgcx02CEtZITY/Automated-Food-Pickup-App?p=f&t=YJ3e3WwcijThLWiJ-0)

De app laat gebruikers toe om volgende acties uit te voeren:
* beschikbare voedselpakketten bekijken
* reservaties beheren
* hun reserveringen te beheren
* instructies raadplegen voor het ophalen bij de locker

Na de ontwikkeling van de app werden gebruikerstesten uitgevoerd om de gebruikservaring en begrijpbaarheid van de interactie te evalueren. De gebruiksvriendelijkheid van de app werd onderzocht via interviews met gebruikers van verschillende leeftijden, zodat de toegankelijkheid voor een brede doelgroep kon worden beoordeeld.

* [Testen app](/reports%20and%20protocols/IR_I_SAMEN.pdf)

### Resultaten testen
De validatiefase onderzocht in welke mate de voorgestelde interactie begrijpelijk, toegankelijk en betrouwbaar werd ervaren. Bij de app-evaluatie werd nagegaan of gebruikers de reservatieflow zelfstandig konden doorlopen, of de belangrijkste acties duidelijk zichtbaar waren en of de afhaalcode correct werd geïnterpreteerd.

De gebruikerstesten wijzen op een overwegend positieve beoordeling van de app. De testresultaten tonen aan dat jongere deelnemers de taken sneller uitvoerden, terwijl oudere deelnemers vaker bijkomende ondersteuning nodig hadden. De toegekende gebruiksscores lagen tussen 3 en 4,5 op 5, wat wijst op een algemeen begrijpelijke, maar nog verder te optimaliseren interface. 


Tijdens de interviews kwamen ook enkele verbeterpunten naar voren:
* extra uitleg bij het ophalen van een bestelling
* duidelijkere feedback bij het annuleren van een bestelling
* visuele uitleg over de werking van de locker

Daarnaast werd aan de respondenten gevraagd op welke locaties de lockers het best geplaatst zouden worden. Volgende locaties werden het vaakst genoemd:
* treinstations
* universiteiten / hogescholen
* supermarkten
* winkelcentra

Deze locaties worden gekenmerkt door een hoge passagegraad en sluiten aan bij het idee van snelle, toegankelijke voedselophaling.

### Ontwikkeling van het lockersysteem

Naast de app werd gestart met de technische ontwikkeling van het lockersysteem. Het systeem heeft als doel gebruikers toegang te geven tot een locker via een 6-cijferige code die in de app wordt ontvangen. Deze code wordt ingevoerd op het keypad aan de lockers, waarna het gereserveerde pakket kan worden opgehaald.

Om dit systeem na te bootsen en te testen, werd gebruikgemaakt van:
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

In deze fase waren ook gebruikerstesten van het lockersysteem gepland. Door een fout in de Arduino-code konden deze testen echter niet tijdig worden uitgevoerd binnen de deadline van Develop 1.

De testen werden daarom doorgeschoven naar Develop 2. In die fase wordt gewerkt met een verder uitgewerkt prototype, zodat gebruikers de fysieke interactie realistischer kunnen ervaren.

De geplande testen evalueren onder andere:
* gebruiksgemak van het lockersysteem
* duidelijkheid van de interactie
* snelheid van het openingsmechanisme
* betrouwbaarheid van het keypad

### Conclusie Develop 1

De Develop 1-fase werd gekenmerkt door:
* een strategische pivot van het concept
* de ontwikkeling van een app-prototype
* eerste gebruikerstesten van de applicatie
* de start van de technische ontwikkeling van het lockersysteem

De volgende fase, Develop 2, focust op:
* verdere ontwikkeling van het lockersysteem
* technische testen met Arduino
* verbeteringen aan de app op basis van gebruikerstesten
* integratie tussen app en fysieke box

## Develop 2
Tijdens de Develop 2-fase werd de focus verlegd van technische werking naar gebruikservaring en ergonomie. In deze fase werden zowel de digitale interface als het fysieke systeem verder geoptimaliseerd op basis van gebruikerstesten en theoretische onderbouwing.

### Aanpassingen aan Reserve app

De bestaande app werd aangepast op basis van de feedback uit de eerdere gebruikerstesten.

Aanpassingen:
* timer van 30 minuten verwijderd
* voorraadcounter toegevoegd
* beperkte codes voor Arduino geïntegreerd

De testresultaten tonen aan dat gebruikers een snelle en intuïtieve interactie verwachten, vergelijkbaar met andere mobiele applicaties..

Daarnaast werd een tweede app ontwikkeld voor de medewerkers of partners die de lockers aanvullen. Deze app laat toe om pakketten toe te wijzen aan lockers, de inhoud van lockers te registreren en een overzicht te bewaren van beschikbare pakketten.

Het doel van deze app:
Het logistieke proces vereenvoudigen en fouten bij het vullen van lockers beperken.

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
Om de fysieke interactie met het systeem te optimaliseren, werd een antropometrische analyse uitgevoerd in Siemens NX.

Ontwerpstrategie:
* toegepast: adjustable design (P5 – P95)
* doelgroep: gebruikers tussen 17 en 75 jaar
* focus op inclusieve toegankelijkheid

Belangrijkste ontwerpkeuzes:
* touchpadhoogte: 120 cm
* schermhoogte: maximaal 165 cm
* reikwijdte: maximaal 45 cm diepte

Deze waarden zijn gebaseerd op de DINED Anthropometric Database.

Omdat het systeem niet mechanisch verstelbaar is, moet de vaste plaatsing van het touchpad comfortabel bruikbaar zijn voor zowel kleine gebruikers (P5) als grote gebruikers (P95). Daarom wordt het touchpad gepositioneerd binnen de overlappende comfortzone van beide extremen.

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
* alle gewrichten bevinden zich in de comfortzone (groen)
* er zijn geen extreme houdingen nodig
* de interface is bereikbaar voor de volledige doelgroep

![P5_P95](/img/P5_P95.jpg)

<p align="center">
</p>

Conclusie:
De gekozen plaatsing van het touchpad en display is ergonomisch verantwoord en ondersteunt een inclusieve bediening.
* [Antropometrische analyse](/reports%20and%20protocols/Antropometrische%20analyse.pdf)

### Prototyping en interactietesten
In deze fase werd het fysieke interactiesysteem getest met:
* 12-channel capacitive touch keypad
* Arduino Uno
* Display, toegevoegd in tweede testfase

![alt text](/img/IMG_5596.JPG)

<p align="center">
</p>

Test 1 - Keypad

Gebruikerstesten:
In de eerste test moesten gebruikers een code invoeren met enkel het keypad. Tijdens de uitvoering werd geobserveerd hoe de interactie werd ervaren en welke vormen van feedback ontbraken.

Observaties:
* de interactie werkte technisch correct
* gebruikers misten duidelijke feedback
* er ontstond onzekerheid tijdens het gebruik
* de knoppen werden als voldoende groot ervaren

> “Ik weet niet of ik het juist heb ingevoerd.”
> “Een 6-cijferige code is goed, maar ik zou graag feedback krijgen bij het invoeren ervan.”

* [Testen zonder display](/reports%20and%20protocols/TPAZ_SAMEN.pdf)

Test 2 – Keypad + display

In de tweede test werd een display toegevoegd. Hierdoor konden gebruikers de ingevoerde code visueel controleren.

Resultaten:
* gebruikers begrepen de interactie sneller
* feedback werd als duidelijker ervaren
* er was minder twijfel tijdens het gebruik

> “Nu is het duidelijk wat er gebeurt.”

Belangrijkste inzichten uit de testen:
* feedback is cruciaal voor vertrouwen in het systeem
* visuele ondersteuning via een display verhoogt de usability
* de interactie moet onmiddellijk bevestiging geven
* gebruikers verwachten begeleiding tijdens het gebruik
* beveiliging blijft een belangrijk aandachtspunt binnen de interactie

Uit de testen bleek ook dat veiligheid een belangrijke rol speelt.
* [Protocol testen](/reports%20and%20protocols/TPA.pdf)

Nieuwe ontwerpbeslissingen:
Betere bescherming tegen ongeautoriseerde toegang.

Toekomstige aanpassingen:
* limiet op het aantal foutieve pogingen
* reset- of blokkeermechanisme bij misbruik

[Testen zonder display](/reports%20and%20protocols/TPAM_SAMEN.pdf)

![Foto met testpersoon]() 

<p align="center"> 
</p>

### Conclusie Develop 2

De Develop 2-fase leidde tot een duidelijke verbetering van de gebruikservaring van ReServeBox.

Belangrijkste realisaties:
* geoptimaliseerde app-interface
* ontwikkeling van een tweede app voor partners
* ergonomisch onderbouwd ontwerp via NX
* validatie van de interactie via gebruikerstesten
* belangrijke inzichten rond feedback en veiligheid

Bij de lockerinteractie werd nagegaan of keypad, display en feedbackmechanismen voldoende duidelijkheid boden tijdens de invoer van de code. De resultaten tonen aan dat visuele feedback essentieel is voor vertrouwen in het systeem en dat bijkomende begeleiding nodig blijft voor gebruikers met minder digitale routine.

## Develop 3

In Develop 3 verschoof de focus van functionele werking en basis-usability naar de verdere verfijning van gebruikservaring, ergonomie en uitstraling van ReServeBox. In deze fase werd onderzocht hoe het systeem niet alleen correct functioneert, maar ook comfortabel, betrouwbaar en professioneel wordt ervaren.

Binnen deze fase werden twee grote onderdelen verder uitgewerkt:
* een ergonomische test met motion sensoren
* een CMF-analyse voor de vormgeving en uitstraling van de box

Daarnaast werd de mogelijke servicecontext verder aangescherpt op basis van een interview met Too Good To Go, waaruit Waste Warriors als interessante toekomstige partner naar voren kwam.

### Ergonomische analyse (met motion sensoren)
Om de ergonomie van het lockersysteem verder te valideren, werd een bijkomende test uitgevoerd met motion sensoren. Waar de eerdere analyse in Siemens NX vooral diende om de interface digitaal te simuleren, werd in Develop 3 gekeken naar de bewegingen van echte gebruikers tijdens de interactie met het prototype.

Tijdens deze test werden drie situaties onderzocht:
* de hoogte van display en keypad bij een verticale interface
* het openen van de lockers en het uitnemen van producten
* de hoogte van display en keypad bij een hellende interface

Dit werd getest met bestaande lockers en de interface bestaande uit display en keypad.
#### Doelstelling
Het doel van deze test was om te bepalen welke opstelling de minste fysieke belasting veroorzaakt en welke interactie het meest comfortabel aanvoelt tijdens realistisch gebruik.

#### Analyse 1: verticale interface
In de eerste analyse werd getest hoe gebruikers het display en keypad bedienen wanneer de interface verticaal geplaatst is.

![Foto test 1](/img/Foto_Analyse_1.jpg)

<p align="center">
</p>

De totale score bedraagt 27, wat valt binnen de zone van matig verhoogd risico. Dit betekent dat de interface in deze positie bruikbaar is, maar dat er nog ergonomische aandachtspunten aanwezig zijn.

Belangrijke observaties:
* de nekbelasting is verhoogd door de kijkhoek naar het display
* de armen worden deels geheven tijdens het bedienen van het keypad
* de onderarmen moeten roteren tijdens het invoeren van de code

Gebruikers moeten bij deze opstelling meer corrigeren met hoofd en armen om het display te lezen en het keypad te bedienen. Een verticale interface is daardoor mogelijk, maar niet optimaal. De leeshoek en bedieningshouding vereisen verdere verbetering. 

![Analyse 1](/img/MS_Analyse_1.png)

<p align="center">
</p>

#### Analyse 2: openen en inreiken in de lockers
In de tweede analyse werd getest hoe gebruikers de lockers openen en producten uit de compartimenten nemen.

![Foto test 2](/img/Foto_Analyse_2.jpg)

<p align="center">
</p>

Deze situatie behaalde een totale score van 33,75, wat binnen de zone van significant verhoogd risico valt. Deze test bleek ergonomisch het meest belastend.

Belangrijke observaties:
* de gebruiker moet meer reiken en draaien
* er ontstaat meer belasting op armen en schouders
* boven-schouderwerk en armheffing komen vaker voor
* kniebuiging en romprotatie nemen toe

Het openen en inreiken in de lockers vormt de grootste ergonomische uitdaging binnen het ontwerp. Vooral de diepte, hoogte en indeling van de lockers moeten verder worden geoptimaliseerd. De meest gebruikte lockers worden bij voorkeur binnen een comfortabele reikzone geplaatst.

![Analyse 2](/img/MS_Analyse_2.png)

<p align="center">
</p>

#### Analyse 3: hellende interface

In de derde analyse werden display en keypad opnieuw getest, maar dit keer onder een hoek geplaatst.

![Foto test 3](/img/Foto_Analyse_3.PNG)

<p align="center">
</p>

Deze opstelling behaalt een totale score van 25,75, de laagste score van de drie analyses. Dit betekent dat deze variant ergonomisch het meest gunstig is. De hellende interface zorgde voor een natuurlijkere houding tijdens het bedienen van het keypad en het aflezen van het display.

Belangrijke observaties:
* romprotatie en zijwaartse rompbuiging blijven laag
* de algemene lichaamshouding is comfortabeler
* pols- en kniebelasting blijven beperkt
* de helling helpt om de interface beter zichtbaar en bereikbaar te maken

Er blijven wel enkele aandachtspunten:
* nekbuiging blijft aanwezig
* onderarmrotatie, vooral rechts en afhankelijk van de dominante hand, blijft verhoogd
* de armhouding kan nog verder worden verbeterd

De hellende interface is ergonomisch de beste basis voor verdere ontwikkeling. Deze opstelling ondersteunt een comfortabelere kijk- en bedieningshouding dan een volledig verticale interface.

![Analyse 3](/img/MS_Analyse_3.png)

<p align="center">
</p>

[Ergnomie analyse](/reports%20and%20protocols/Ergonomie_motion_sensoren.pdf)

#### Resultaten
De vergelijking tussen de drie analyses toont aan dat de hellende interface de beste ergonomische resultaten geeft. Analyse 3 behaalt de laagste totale score en biedt de meest comfortabele houding voor het bedienen van keypad en display.

De grootste ergonomische uitdaging ligt echter bij het openen en inreiken in de lockers. Analyse 2 toont aan dat dit meer fysieke belasting veroorzaakt dan het bedienen van de interface. Daarom moeten vooral de lockerhoogte, lockerindeling en reikdiepte verder worden geoptimaliseerd.

Op basis van deze resultaten worden volgende keuzes aanbevolen:
* keypad en display worden bij voorkeur licht onder een hoek geplaatst
* de interface moet binnen een comfortabele reikhoogte blijven
* het display moet goed leesbaar zijn zonder sterke nekbuiging
* lockers mogen niet te diep zijn
* de meest gebruikte lockers moeten op middelhoge hoogte geplaatst worden
* te hoge en te lage lockers moeten vermeden worden voor zware of kwetsbare pakketten
* er moet voldoende ruimte voor de box zijn, zodat gebruikers recht voor de locker kunnen staan

### CMF
Naast de ergonomische optimalisatie werd in Develop 3 ook een CMF-analyse uitgevoerd. CMF staat voor Color, Material & Finish. Deze analyse werd gebruikt om de uitstraling van ReServeBox doelgericht te verfijnen.

Omdat ReServeBox in een publieke omgeving geplaatst wordt, moet het product tegelijk:
* betrouwbaar ogen
* hygiënisch aanvoelen
* robuust en vandalismebestendig zijn
* duurzaamheid uitstralen
* laagdrempelig blijven voor een brede doelgroep 

Op basis van de CMF-analyse werden verschillende visuele richtingen vergeleken. Hierbij werd onderzocht welke uitstraling het best aansluit bij ReServeBox als publiek lockersysteem voor voedseloverschotten.

De gekozen richting combineert:
* een cleane, lichte basis
* duurzame groene accenten
* een duidelijke en contrasterende interfacezone
* matte, onderhoudsvriendelijke oppervlakken
* subtiele LED-feedback om de interactie te ondersteunen

Deze combinatie ondersteunt de gewenste beleving: betrouwbaar, hygiënisch, duurzaam en toegankelijk.

![Analyse 3](/img/CMF_R_SAMEN.jpg)

<p align="center">
</p>

[CMF ananlyse](/reports%20and%20protocols/CMF_Analyse.pdf)


### Waste warriors
Tijdens Develop 3 werd ook de bredere servicecontext verder aangescherpt. Een belangrijk inzicht kwam naar voren uit een interview dat oorspronkelijk gelinkt was aan Too Good To Go. Hieruit bleek dat ReServeBox inhoudelijk mogelijk sterker aansluit bij Waste Warriors, omdat deze organisatie focust op overschotten van boeren en producenten. In plaats van enkel voedselpakketten van winkels of horeca aan te bieden, zou ReServeBox kunnen functioneren als stedelijk afhaalpunt voor agro-overschotten die via een organisatie zoals Waste Warriors worden gecentraliseerd.

[Interview](/reports%20and%20protocols/IP_Jonas.pdf)

## Conclusie Develop 3
Develop 3 zorgde voor een verdere verfijning van ReServeBox op vlak van ergonomie, uitstraling en servicecontext.

De belangrijkste conclusies zijn:
* een hellende interface is ergonomisch beter dan een verticale interface
* het openen en inreiken in lockers blijft de grootste ergonomische uitdaging
* lockerhoogte, lockerindeling en reikdiepte moeten verder geoptimaliseerd worden
* de CMF-richting moet vertrouwen, hygiëne en duurzaamheid uitstralen
* een lichte, cleane box met groene accenten sluit het best aan bij de gewenste productbeleving
* Waste Warriors vormt een interessante toekomstige partner omdat deze organisatie dichter aansluit bij voedseloverschotten van boeren en producenten

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