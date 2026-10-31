/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400dc632 */

void FUN_1400dc632(longlong param_1,undefined8 *param_2,float param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 in_R8;
  
  if (DAT_1401c86a0 <= param_3) {
    FUN_1400dc0b8(param_1,param_2,in_R8,param_4 << 2,param_5 << 2,0);
  }
  else {
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
  }
  return;
}

