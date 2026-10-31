/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001b771 */

uint FUN_14001b771(ulonglong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xf0;
  if (uVar1 != 0 || (param_1 & 0xf0) == 0) {
    if ((param_1 & 0xf0) == 0 && uVar1 != 0) {
      param_2 = param_2 & 0xffffff00 | uVar1 >> 4;
    }
    return param_2;
  }
  return param_2 & 0xffffff00 | (param_2 & 0xf) << 4;
}

