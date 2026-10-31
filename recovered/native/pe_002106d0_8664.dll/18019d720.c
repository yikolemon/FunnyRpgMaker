/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019d720 */

void FUN_18019d720(ulonglong param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = DAT_18041ef10 + param_2;
  if (uVar1 <= DAT_18041ef00) {
    if (param_1 < DAT_18041eef8) {
      uVar1 = DAT_18041ef00 + 1;
    }
    else {
      FUN_1802a82f0(DAT_18041ef10,param_1);
    }
  }
  DAT_18041ef10 = uVar1;
  return;
}

