/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400289ff */

undefined8 FUN_1400289ff(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  lVar1 = param_1[1];
  lVar4 = *param_2;
  if (lVar1 - lVar3 == param_2[1] - lVar4) {
    if (lVar3 == lVar1) {
      uVar2 = CONCAT71((int7)((ulonglong)(lVar1 - lVar3) >> 8),1);
    }
    else {
      do {
        uVar2 = FUN_1400170b4(lVar3,lVar4);
        if ((char)uVar2 == '\0') {
          return uVar2;
        }
        lVar3 = lVar3 + 0x20;
        lVar4 = lVar4 + 0x20;
      } while (lVar3 != lVar1);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

