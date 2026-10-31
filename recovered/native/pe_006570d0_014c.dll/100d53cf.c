/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d53cf */

void FUN_100d53cf(void)

{
  int iVar1;
  undefined4 ****ppppuVar2;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM0_Db;
  undefined1 local_6c [24];
  undefined1 local_54 [20];
  undefined8 local_40;
  undefined4 ***local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_6c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ddbc0;
  local_1c = ExceptionList;
  local_40 = CONCAT44(in_XMM0_Db,in_XMM0_Da);
  ExceptionList = &local_1c;
  iVar1 = FUN_100d5541("%f");
  local_38 = (undefined4 ****)0x0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_28 = 0;
  FUN_10062152(0,iVar1);
  local_14 = 0;
  ppppuVar2 = &local_38;
  if (0xf < local_28._4_4_) {
    ppppuVar2 = (undefined4 ****)local_38;
  }
  FUN_1007c87c(ppppuVar2,iVar1 + 1,"%f",local_40);
  local_14 = 1;
  FUN_10018956("GLOBAL_SPEED_RATIO",1);
  local_14 = 2;
  FUN_1002088c(local_6c,
               "\nwindow.__FunnyGame__GlobalSpeedRatio__ = GLOBAL_SPEED_RATIO;\nif (SceneManager._getTimeInMsWithoutMobileSafari) {\n    if (!SceneManager._getTimeInMsWithoutMobileSafari_Game_Backup) {\n        SceneManager._getTimeInMsWithoutMobileSafari_Game_Backup = SceneManager._getTimeInMsWithoutMobileSafari;\n        SceneManager._getTimeInMsWithoutMobileSafari = function () {\n            var time = SceneManager._getTimeInMsWithoutMobileSafari_Game_Backup.apply(this, arguments);\n            if (SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal === undefined || !SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake === undefined) {\n                SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal = time;\n                SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake = time;\n            }\n            SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake += (time - SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal) * window.__FunnyGame__GlobalSpeedRatio__;\n            SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal = time;\n            return SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake;\n        };\n    }\n}\nif (SceneManager.determineRepeatNumber) {\n    if (!SceneManager.determineRepeatNumber_Game_Backup) {\n        SceneManager.determineRepeatNumber_Game_Backup = SceneManager.determineRepeatNumber;\n        SceneManager.determineRepeatNumber = function (deltaTime) {\n            deltaTime *= window.__FunnyGame__GlobalSpeedRatio__;\n\t\t\treturn SceneManager.determineRepeatNumber_Game_Backup.apply(this, arguments);\n\t\t};\n    }\n}\n"
               ,local_54,&local_38,0);
  local_14 = 3;
  FUN_10014730();
  local_14 = 0xffffffff;
  FUN_10001fee();
  FUN_10018a12();
  FUN_10001fee();
  ExceptionList = local_1c;
  return;
}

