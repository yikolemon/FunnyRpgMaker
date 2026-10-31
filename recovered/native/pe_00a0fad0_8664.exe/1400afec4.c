/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400afec4 */

void FUN_1400afec4(longlong param_1,uint param_2,int param_3,longlong param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_2) {
    param_3 = param_3 + (((uint)(param_3 / 6 + (param_3 >> 0x1f)) >> 1) - (param_3 >> 0x1f)) * -0xc;
    uVar1 = 0;
    do {
      *(byte *)(param_1 + uVar1) = *(byte *)(param_1 + uVar1) ^ *(byte *)(param_4 + param_3);
      param_3 = param_3 + 1;
      if (param_3 == 0xc) {
        param_3 = 0;
      }
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
  }
  return;
}

