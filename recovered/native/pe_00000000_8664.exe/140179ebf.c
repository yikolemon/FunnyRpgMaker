/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140179ebf */

ulonglong FUN_140179ebf(ushort *param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_1 <= param_2) {
    uVar1 = (ulonglong)(param_1[1] < param_2);
  }
  return uVar1;
}

