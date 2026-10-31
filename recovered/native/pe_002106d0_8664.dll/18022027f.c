/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022027f */

uint FUN_18022027f(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < *param_1) {
    uVar1 = 0x80U >> ((byte)param_2 & 7) &
            (uint)*(byte *)(*(longlong *)(param_1 + 2) + (ulonglong)(param_2 >> 3));
  }
  return uVar1;
}

