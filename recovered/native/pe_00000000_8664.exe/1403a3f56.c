/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a3f56 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403a3f56(longlong param_1,float param_2,float param_3,float param_4,uint param_5,
                  undefined4 param_6)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (0xffffff < param_5) {
    param_2 = param_2 + _DAT_1404efa40;
    param_3 = param_3 + _UNK_1404efa44;
    iVar3 = *(int *)(param_1 + 0x50);
    if (iVar3 == *(int *)(param_1 + 0x54)) {
      if (iVar3 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar3 / 2 + iVar3;
      }
      iVar4 = iVar3 + 1;
      if (iVar3 + 1 < iVar2) {
        iVar4 = iVar2;
      }
      lVar1 = FUN_14030fcc8((longlong)iVar4 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1404b97c0(lVar1,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_14030fda4(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar1;
      *(int *)(param_1 + 0x54) = iVar4;
      iVar3 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x58);
    }
    *(ulonglong *)(lVar1 + (longlong)iVar3 * 8) = CONCAT44(param_3,param_2);
    iVar2 = *(int *)(param_1 + 0x50);
    iVar3 = iVar2 + 1;
    *(int *)(param_1 + 0x50) = iVar3;
    param_4 = param_4 + DAT_1404ecffc;
    if (iVar3 == *(int *)(param_1 + 0x54)) {
      iVar2 = iVar2 + 2;
      if (iVar3 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar3 / 2 + iVar3;
      }
      if (iVar2 < iVar3) {
        iVar2 = iVar3;
      }
      lVar1 = FUN_14030fcc8((longlong)iVar2 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1404b97c0(lVar1,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_14030fda4(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar1;
      *(int *)(param_1 + 0x54) = iVar2;
      iVar3 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x58);
    }
    *(float *)(lVar1 + (longlong)iVar3 * 8) = param_2;
    *(float *)(lVar1 + 4 + (longlong)iVar3 * 8) = param_4;
    iVar3 = *(int *)(param_1 + 0x50) + 1;
    *(int *)(param_1 + 0x50) = iVar3;
    FUN_1403a1124(param_1,*(undefined8 *)(param_1 + 0x58),iVar3,param_5,param_6,0);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

