/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020684b */

uint FUN_18020684b(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    lVar3 = 0;
    do {
      uVar1 = (uint)*(byte *)(lVar2 + lVar3) | uVar1 << 8;
      lVar3 = lVar3 + 1;
    } while (param_2 != (uint)lVar3);
    lVar2 = lVar2 + (ulonglong)param_2;
  }
  *param_1 = lVar2;
  return uVar1;
}

