/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f96b */

uint FUN_14016f96b(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < *param_1) {
    uVar1 = 0x80U >> ((byte)param_2 & 7) &
            (uint)*(byte *)(*(longlong *)(param_1 + 2) + (ulonglong)(param_2 >> 3));
  }
  return uVar1;
}

