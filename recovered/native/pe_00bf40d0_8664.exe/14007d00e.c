/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007d00e */

undefined8 FUN_14007d00e(byte *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  if (param_3 != uVar1) {
    iVar3 = ((int)param_3 <= (int)uVar1) + 1;
    if (*(int *)(param_1 + 0x70) != iVar3) {
      if (*(int *)(param_1 + 0x70) != 0) {
        uVar2 = FUN_14007cf02((longlong)param_1);
        if ((char)uVar2 != '\0') {
          return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
        }
      }
      uVar2 = FUN_14007d3fd(param_1,iVar3);
      if ((char)uVar2 != '\0') {
        return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      }
    }
    if ((int)uVar1 < (int)param_3) {
      uVar2 = FUN_14007d500(param_1,*(int *)(param_1 + 0x40),*(uint *)(param_1 + 0x44),param_2,
                            param_3,*(uint *)(param_1 + 0x48),*(uint *)(param_1 + 0x4c));
    }
    else {
      uVar2 = FUN_14007d640(param_1,*(int *)(param_1 + 0x40),*(uint *)(param_1 + 0x44),param_2,
                            param_3,*(uint *)(param_1 + 0x48),*(uint *)(param_1 + 0x4c));
    }
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
  }
  *(int *)(param_1 + 0x40) = param_2;
  *(uint *)(param_1 + 0x44) = param_3;
  return 0;
}

