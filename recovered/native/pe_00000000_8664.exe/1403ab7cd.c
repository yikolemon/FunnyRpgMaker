/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ab7cd */

uint FUN_1403ab7cd(longlong param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *param_2 = uVar1 & 0xfff00000 | *(int *)(*(longlong *)(param_1 + 0x2b0) + 0x60) - 1U & 0xfffff;
  return uVar1 & 0x3ff00000 |
         (uint)((ulonglong)
                ((longlong)param_2 - *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78)) >> 2);
}

