/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cf9b9 */

void FUN_1400cf9b9(int *param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 - (longlong)param_1 != 0) {
    uVar2 = param_2 - (longlong)param_1 >> 2;
    do {
      uVar1 = uVar2 >> 1;
      uVar3 = ~uVar1 + uVar2;
      uVar2 = uVar1;
      if (param_1[uVar1] < param_3) {
        param_1 = param_1 + uVar1 + 1;
        uVar2 = uVar3;
      }
    } while (uVar2 != 0);
  }
  return;
}

