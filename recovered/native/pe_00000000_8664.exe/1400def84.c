/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400def84 */

void FUN_1400def84(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (0xffffff < param_6) {
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == *(int *)(param_1 + 0x54)) {
      if (iVar1 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar1 / 2 + iVar1;
      }
      iVar4 = iVar1 + 1;
      if (iVar1 + 1 < iVar3) {
        iVar4 = iVar3;
      }
      lVar2 = FUN_140077ab4((longlong)iVar4 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1401c5180(lVar2,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar2;
      *(int *)(param_1 + 0x54) = iVar4;
      iVar1 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x58);
    }
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = *param_2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    FUN_1400dcee0(param_1,param_3,param_4,param_5,param_8);
    FUN_1400db1c8(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_6,
                  param_7,0);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

