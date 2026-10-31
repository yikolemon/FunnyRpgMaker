/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d9cab */

void FUN_1800d9cab(int param_1)

{
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (param_1 == 2) {
    FUN_180001e92(local_30,
                  "if (SceneManager._scene && SceneManager._scene.constructor === Scene_Battle && BattleManager._phase !== \'battleEnd\'){ $gameParty.members().forEach(function (actor) { actor.addNewState(actor.deathStateId()); }); BattleManager.processDefeat(); }"
                 );
    FUN_180013ef1(local_30);
    FUN_180001ef2(local_30);
  }
  else if (param_1 == 1) {
    FUN_180001e92(local_30,
                  "if (SceneManager._scene && SceneManager._scene.constructor === Scene_Battle && BattleManager._phase !== \'battleEnd\'){ BattleManager._escapeRatio = 1; BattleManager.processEscape(); }"
                 );
    FUN_180013ef1(local_30);
    FUN_180001ef2(local_30);
  }
  else if (param_1 == 0) {
    FUN_180001e92(local_30,
                  "if (SceneManager._scene && SceneManager._scene.constructor === Scene_Battle && BattleManager._phase !== \'battleEnd\'){ $gameTroop.members().forEach(function(actor) { actor.addNewState(actor.deathStateId()); }); BattleManager.processVictory(); }"
                 );
    FUN_180013ef1(local_30);
    FUN_180001ef2(local_30);
  }
  return;
}

