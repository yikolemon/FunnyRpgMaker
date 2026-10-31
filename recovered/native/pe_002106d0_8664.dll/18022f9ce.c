/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022f9ce */

undefined8 FUN_18022f9ce(longlong param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if (param_3 != iVar1) {
    iVar3 = (param_3 <= iVar1) + 1;
    if (*(int *)(param_1 + 0x70) != iVar3) {
      if ((*(int *)(param_1 + 0x70) != 0) && (cVar2 = FUN_18022f8c2(param_1), cVar2 != '\0')) {
        return 1;
      }
      cVar2 = FUN_18022fdbd(param_1,iVar3);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    if (iVar1 < param_3) {
      cVar2 = FUN_18022fec0(param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                            param_2,param_3,*(undefined4 *)(param_1 + 0x48),
                            *(undefined4 *)(param_1 + 0x4c));
    }
    else {
      cVar2 = FUN_180230000(param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                            param_2,param_3,*(undefined4 *)(param_1 + 0x48),
                            *(undefined4 *)(param_1 + 0x4c));
    }
    if (cVar2 != '\0') {
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(int *)(param_1 + 0x44) = param_3;
  return 0;
}

