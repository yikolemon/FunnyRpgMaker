/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009b1fd */

char FUN_14009b1fd(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar1 = *(longlong *)(param_2 + 0x4c8);
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  else {
    if (*(longlong *)(lVar1 + 0x20) != 0) {
      return '\x01';
    }
    uVar3 = *(uint *)(lVar1 + 0x30);
    if ((int)uVar3 < 1) {
      return '\0';
    }
  }
  lVar5 = 0;
  do {
    lVar4 = param_2;
    if (lVar1 != 0) {
      lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + lVar5 * 8);
    }
    cVar2 = FUN_1400aaf10(lVar4,param_1);
  } while ((cVar2 == '\0') && (bVar6 = (ulonglong)uVar3 - 1 != lVar5, lVar5 = lVar5 + 1, bVar6));
  return cVar2;
}

