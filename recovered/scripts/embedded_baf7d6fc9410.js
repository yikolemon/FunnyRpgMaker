
(function () {
    var player = window.$gamePlayer;
    if (player) {
		player.__realMoveSpeed__add__ = MOVE_SPEED_ADD;
		if (!player.__realMoveSpeed__xxox_orig__) {
			player.__realMoveSpeed__xxox_orig__ = player.realMoveSpeed;
			player.realMoveSpeed = function () {
				var level = player.__realMoveSpeed__xxox_orig__.apply(this, arguments) + player.__realMoveSpeed__add__;
				if (level < 0) level = 0;
				return level;
			};
		}
	}
})();
