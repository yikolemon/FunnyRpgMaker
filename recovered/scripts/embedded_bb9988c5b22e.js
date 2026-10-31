
window.__FunnyGame__GlobalSpeedRatio__ = GLOBAL_SPEED_RATIO;
if (SceneManager._getTimeInMsWithoutMobileSafari) {
    if (!SceneManager._getTimeInMsWithoutMobileSafari_Game_Backup) {
        SceneManager._getTimeInMsWithoutMobileSafari_Game_Backup = SceneManager._getTimeInMsWithoutMobileSafari;
        SceneManager._getTimeInMsWithoutMobileSafari = function () {
            var time = SceneManager._getTimeInMsWithoutMobileSafari_Game_Backup.apply(this, arguments);
            if (SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal === undefined || !SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake === undefined) {
                SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal = time;
                SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake = time;
            }
            SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake += (time - SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal) * window.__FunnyGame__GlobalSpeedRatio__;
            SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal = time;
            return SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake;
        };
    }
}
if (SceneManager.determineRepeatNumber) {
    if (!SceneManager.determineRepeatNumber_Game_Backup) {
        SceneManager.determineRepeatNumber_Game_Backup = SceneManager.determineRepeatNumber;
        SceneManager.determineRepeatNumber = function (deltaTime) {
            deltaTime *= window.__FunnyGame__GlobalSpeedRatio__;
			return SceneManager.determineRepeatNumber_Game_Backup.apply(this, arguments);
		};
    }
}
