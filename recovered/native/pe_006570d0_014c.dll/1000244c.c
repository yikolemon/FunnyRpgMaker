/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000244c */

undefined4 __thiscall FUN_1000244c(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 ^ *param_2 | *(uint *)(param_1 + 4) ^ *(uint *)(param_2[1] + 4);
  return CONCAT31((int3)(uVar1 >> 8),uVar1 == 0);
}

