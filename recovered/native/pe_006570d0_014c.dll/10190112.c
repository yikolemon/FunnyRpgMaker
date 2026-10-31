/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10190112 */

int FUN_10190112(int param_1,uint param_2)

{
  return ((*(int *)(*(int *)(*(int *)(param_1 + 0x290) + 0x70) + (param_2 & 0x7ffff) * 4) << 0xc) >>
         9) + *(int *)(*(int *)(param_1 + 0x290) + 100);
}

