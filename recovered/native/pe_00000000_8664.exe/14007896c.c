/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007896c */

void FUN_14007896c(longlong param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_2 - param_1 != 0) {
    uVar2 = param_2 - param_1 >> 4;
    do {
      uVar1 = uVar2 >> 1;
      lVar3 = uVar1 * 0x10;
      if (*(uint *)(param_1 + lVar3) < param_3) {
        uVar1 = ~uVar1 + uVar2;
        param_1 = param_1 + lVar3 + 0x10;
      }
      uVar2 = uVar1;
    } while (uVar1 != 0);
  }
  return;
}

