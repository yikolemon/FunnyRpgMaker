/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005ee8c */

undefined8 FUN_14005ee8c(longlong param_1,char param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 < 0x5c) {
    if (iVar2 == -1) {
      return 0;
    }
    if (iVar2 == 0x5b) {
      uVar1 = *(undefined2 *)(param_1 + 0x76);
      FUN_14005ddac(param_1);
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x70);
      if ((uVar4 < 0x3e) && ((0x2400400000000000U >> (uVar4 & 0x3f) & 1) != 0)) {
        FUN_14005ddac(param_1);
        uVar3 = FUN_14005f4ce(param_1,uVar4);
        return uVar3;
      }
      *(undefined2 *)(param_1 + 0x78) = uVar1;
      return 1;
    }
  }
  else if (iVar2 == 0x5d) {
    if (param_2 == '\0') {
      return 0;
    }
    if ((*(ulonglong *)(param_1 + 0x60) & 0x20000000) == 0) {
      return 0;
    }
  }
  else if ((iVar2 == 0x5c) && ((*(byte *)(param_1 + 0x62) & 0x10) != 0)) {
    FUN_14005ddac(param_1);
    uVar3 = FUN_14005f40a(param_1);
    return uVar3;
  }
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x76);
  FUN_14005ddac(param_1);
  return 1;
}

