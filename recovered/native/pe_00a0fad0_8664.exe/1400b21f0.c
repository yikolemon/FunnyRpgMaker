/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b21f0 */

void FUN_1400b21f0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (0 < (longlong)param_2) {
    uVar1 = 0x7fffffff;
    if (param_2 < 0x7fffffff) {
      uVar1 = param_2;
    }
    lVar2 = 0;
    do {
      FUN_140116e20(param_1 + lVar2,1,uVar1,param_3);
      lVar2 = lVar2 + uVar1;
    } while (lVar2 < (longlong)param_2);
  }
  return;
}

