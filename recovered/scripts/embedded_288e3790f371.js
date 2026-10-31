
(function () {
	var result = [];
	for (var i = 0; i < $gameActors._data.length; i++) {
		var actor = $gameActors._data[i];
		if (!actor) continue;
		result.push({
			actorId: actor._actorId,
			name: actor._name,
			paramPlus: actor._paramPlus,
			hp: actor._hp,
			mp: actor._mp,
			tp: actor._tp,
			mhp: actor.mhp,
			mmp: actor.mmp,
			atk: actor.atk,
			def: actor.def,
			mat: actor.mat,
			mdf: actor.mdf,
			agi: actor.agi,
			luk: actor.luk,
		});
	}
	return result;
})();
