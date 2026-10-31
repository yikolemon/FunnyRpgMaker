/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140155f37 */

uint FUN_140155f37(longlong *param_1,uint param_2)

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

