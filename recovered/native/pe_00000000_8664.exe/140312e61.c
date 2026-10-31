/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140312e61 */

void FUN_140312e61(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  puVar4 = (uint *)FUN_140312d31();
  lVar2 = DAT_14062a630;
  if ((*puVar4 & 0xffff) == 0x802) {
    uVar7 = (ulonglong)(*puVar4 >> 0x10);
    uVar1 = *(undefined8 *)(DAT_14062a630 + 0xda8 + uVar7);
    iVar3 = *(int *)(DAT_14062a630 + 0x20f8);
    if (iVar3 == *(int *)(DAT_14062a630 + 0x20fc)) {
      if (iVar3 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar3 / 2 + iVar3;
      }
      iVar8 = iVar3 + 1;
      if (iVar3 + 1 < iVar6) {
        iVar8 = iVar6;
      }
      lVar5 = FUN_14030fcc8((longlong)iVar8 * 0xc);
      if (*(longlong *)(lVar2 + 0x2100) != 0) {
        FUN_1404b97c0(lVar5,*(longlong *)(lVar2 + 0x2100),(longlong)*(int *)(lVar2 + 0x20f8) * 0xc);
        FUN_14030fda4(*(undefined8 *)(lVar2 + 0x2100));
      }
      *(longlong *)(lVar2 + 0x2100) = lVar5;
      *(int *)(lVar2 + 0x20fc) = iVar8;
      iVar3 = *(int *)(lVar2 + 0x20f8);
    }
    else {
      lVar5 = *(longlong *)(DAT_14062a630 + 0x2100);
    }
    *(undefined4 *)(lVar5 + (longlong)iVar3 * 0xc) = param_1;
    *(undefined8 *)(lVar5 + 4 + (longlong)iVar3 * 0xc) = uVar1;
    *(int *)(lVar2 + 0x20f8) = *(int *)(lVar2 + 0x20f8) + 1;
    *(undefined4 *)(lVar2 + 0xda8 + uVar7) = param_2;
    return;
  }
  FUN_140312b68(
               "Safari_Game_LastTimeReal === undefined || !SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake === undefined) {\n                SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal = time;\n                SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake = time;\n            }\n            SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake += (time - SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal) * window.__FunnyGame__GlobalSpeedRatio__;\n            SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal = time;\n            return SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake;\n        };\n    }\n}\nif (SceneManager.determineRepeatNumber) {\n    if (!SceneManager.determineRepeatNumber_Game_Backup) {\n        SceneManager.determineRepeatNumber_Game_Backup = SceneManager.determineRepeatNumber;\n        SceneManager.determineRepeatNumber = function (deltaTime) {\n            deltaTime *= window.__FunnyGame__GlobalSpeedRatio__;\n\t\t\treturn SceneManager.determineRepeatNumber_Game_Backup.apply(this, arguments);\n\t\t};\n    }\n}\n"
               );
  return;
}

