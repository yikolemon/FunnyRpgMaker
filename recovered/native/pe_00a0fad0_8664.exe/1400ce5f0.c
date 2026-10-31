/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ce5f0 */

void FUN_1400ce5f0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_1400175e8(param_2,param_1);
  if ((iVar2 < 0) ||
     ((cVar1 = FUN_1400170b4(param_2,param_1), cVar1 != '\0' &&
      (iVar2 = FUN_1400175e8(param_2 + 0x20,param_1 + 0x20), iVar2 < 0)))) {
    FUN_1400ce6bd(param_2,param_1);
  }
  iVar2 = FUN_1400175e8(param_3,param_2);
  if (-1 < iVar2) {
    cVar1 = FUN_1400170b4(param_3,param_2);
    if (cVar1 == '\0') {
      return;
    }
    iVar2 = FUN_1400175e8(param_3 + 0x20,param_2 + 0x20);
    if (-1 < iVar2) {
      return;
    }
  }
  FUN_1400ce6bd(param_3,param_2);
  iVar2 = FUN_1400175e8(param_2,param_1);
  if ((-1 < iVar2) &&
     ((cVar1 = FUN_1400170b4(param_2,param_1), cVar1 == '\0' ||
      (iVar2 = FUN_1400175e8(param_2 + 0x20,param_1 + 0x20), -1 < iVar2)))) {
    return;
  }
  FUN_1400ce6bd(param_2,param_1);
  return;
}

