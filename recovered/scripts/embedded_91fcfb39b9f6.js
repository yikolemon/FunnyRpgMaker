
(function () {
    window.__funny_game_font_family_name__ = "GAME_FONT_FAMILY";
    // mv
    var game_base = window.Window_Base.prototype;
    if (game_base && game_base.standardFontFace) {
		if (!game_base.__standardFontFace__xxox_orig__) {
			game_base.__standardFontFace__xxox_orig__ = game_base.standardFontFace;
			game_base.standardFontFace = function () {
                return window.__funny_game_font_family_name__ + ", " + game_base.__standardFontFace__xxox_orig__.apply(this, arguments);
			};
		}
	}
    // mz
    var game_system = window.Game_System.prototype;
    if (game_system && game_system.mainFontFace) {
		if (!game_system.__mainFontFace__xxox_orig__) {
			game_system.__mainFontFace__xxox_orig__ = game_system.mainFontFace;
			game_system.mainFontFace = function () {
                return window.__funny_game_font_family_name__ + ", " + game_system.__mainFontFace__xxox_orig__.apply(this, arguments);
			};
		}
	}
})();
