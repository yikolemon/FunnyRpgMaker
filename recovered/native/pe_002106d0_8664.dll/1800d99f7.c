/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d99f7 */

void FUN_1800d99f7(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_a0 [40];
  undefined1 local_78 [32];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  iVar1 = FUN_1800d9bb1("%f");
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  FUN_180061c48(local_58,0,(longlong)iVar1);
  puVar2 = local_58;
  if (0xf < (ulonglong)local_48._8_8_) {
    puVar2 = (undefined1 *)local_58._0_8_;
  }
  FUN_18007d317(puVar2,(longlong)iVar1 + 1,"%f");
  FUN_180018514(local_a0,"GLOBAL_SPEED_RATIO",1);
  FUN_180020bbc(local_78,
                "\nwindow.__FunnyGame__GlobalSpeedRatio__ = GLOBAL_SPEED_RATIO;\nif (SceneManager._getTimeInMsWithoutMobileSafari) {\n    if (!SceneManager._getTimeInMsWithoutMobileSafari_Game_Backup) {\n        SceneManager._getTimeInMsWithoutMobileSafari_Game_Backup = SceneManager._getTimeInMsWithoutMobileSafari;\n        SceneManager._getTimeInMsWithoutMobileSafari = function () {\n            var time = SceneManager._getTimeInMsWithoutMobileSafari_Game_Backup.apply(this, arguments);\n            if (SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal === undefined || !SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake === undefined) {\n                SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal = time;\n                SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake = time;\n            }\n            SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake += (time - SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal) * window.__FunnyGame__GlobalSpeedRatio__;\n            SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal = time;\n            return SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake;\n        };\n    }\n}\nif (SceneManager.determineRepeatNumber) {\n    if (!SceneManager.determineRepeatNumber_Game_Backup) {\n        SceneManager.determineRepeatNumber_Game_Backup = SceneManager.determineRepeatNumber;\n        SceneManager.determineRepeatNumber = function (deltaTime) {\n            deltaTime *= window.__FunnyGame__GlobalSpeedRatio__;\n\t\t\treturn SceneManager.determineRepeatNumber_Game_Backup.apply(this, arguments);\n\t\t};\n    }\n}\n"
                ,local_a0,local_58,0);
  FUN_180013ef1(local_78);
  FUN_180001ef2(local_78);
  FUN_1800185bc(local_a0);
  FUN_180001ef2(local_58);
  return;
}

