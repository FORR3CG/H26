### Æfingaverkefni 5 - Ökutækjaskrá

Búið til lítið forrit sem heldur utan um bíla og mótorhjól. Notið [dýragarðinn](../../timar/18/) sem fyrirmynd.

1. **Búið til klasana `Okutaeki`, `Bill` og `Motorhjol`.** Grunnklasinn `Okutaeki` geymir auðkennisnúmer og heiti. `Bill` geymir líka fjölda sæta og `Motorhjol` geymir vélarstærð í rúmsentímetrum. Skilgreinið sýndarfallið `to_string()` og sýndareyði í grunnklasanum. Látið hvorn undirklasa útfæra `to_string()` með `override` og birta sínar upplýsingar.
2. **Búið til klasann `Okutaekjaskra`.** Geymið ökutækin í kviku fylki af `Okutaeki*` sem tekur tvö stök í upphafi.  Stækkið fylkið þegar það fyllist. Ökutæki á alltaf að bæta við aftast í listann. 
- Það þarf að vera hægt að skrá bíl og mótorhjól.
- Það þarf að vera hægt að eyða bíl/mótorhjóli eftir auðkennisnúmeri.
    - Fallið skilar true/false eftir því hvort eyðingin tókst.
    - Fallið tekur inn tilvísun á ökutæki og skrifar það ökutæki sem eitt er í ökutækið sem sent er inn í fallið.
    - Fallið færir stök til ef gat myndast í listanum.
