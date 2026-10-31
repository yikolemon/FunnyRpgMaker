/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006258e */

byte * FUN_14006258e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((int)plVar1[3] < 2) {
    FUN_1400629a5(plVar1);
  }
  do {
    *(undefined4 *)(plVar1 + 3) = 0;
    pbVar2 = FUN_1400629ff(plVar1);
    if (pbVar2 != (byte *)0x0) {
      if (param_2 == (longlong *)0x0) {
        return pbVar2;
      }
      lVar3 = ~(ulonglong)pbVar2 + *plVar1;
      goto LAB_1400625dc;
    }
  } while ((int)plVar1[3] == 2);
  lVar3 = 0;
  if (param_2 == (longlong *)0x0) {
    pbVar2 = (byte *)0x0;
  }
  else {
LAB_1400625dc:
    *param_2 = lVar3;
  }
  return pbVar2;
}

