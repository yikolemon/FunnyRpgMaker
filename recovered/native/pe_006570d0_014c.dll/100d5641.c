/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d5641 */

void __fastcall FUN_100d5641(int param_1)

{
  undefined1 local_38 [24];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ddbe0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (param_1 == 2) {
    FUN_10001f66(
                "if (SceneManager._scene && SceneManager._scene.constructor === Scene_Battle && BattleManager._phase !== \'battleEnd\'){ $gameParty.members().forEach(function (actor) { actor.addNewState(actor.deathStateId()); }); BattleManager.processDefeat(); }"
                );
    local_14 = 2;
    FUN_10014730(local_38);
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  else if (param_1 == 1) {
    local_20 = local_38;
    FUN_10001f66(
                "if (SceneManager._scene && SceneManager._scene.constructor === Scene_Battle && BattleManager._phase !== \'battleEnd\'){ BattleManager._escapeRatio = 1; BattleManager.processEscape(); }"
                );
    local_14 = 1;
    FUN_10014730(local_38);
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  else if (param_1 == 0) {
    local_20 = local_38;
    FUN_10001f66(
                "if (SceneManager._scene && SceneManager._scene.constructor === Scene_Battle && BattleManager._phase !== \'battleEnd\'){ $gameTroop.members().forEach(function(actor) { actor.addNewState(actor.deathStateId()); }); BattleManager.processVictory(); }"
                );
    local_14 = 0;
    FUN_10014730(local_38);
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  ExceptionList = local_1c;
  return;
}

