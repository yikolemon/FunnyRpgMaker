/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e8c94 */

void FUN_1400e8c94(ulonglong param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = DAT_140f308f0 + param_2;
  if (uVar1 <= DAT_140f308e0) {
    if (param_1 < DAT_140f308d8) {
      uVar1 = DAT_140f308e0 + 1;
    }
    else {
      FUN_1401c5180(DAT_140f308f0,param_1);
    }
  }
  DAT_140f308f0 = uVar1;
  return;
}

