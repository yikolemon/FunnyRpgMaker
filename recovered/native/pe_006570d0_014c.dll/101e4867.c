/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e4867 */

void __fastcall FUN_101e4867(int param_1,uint *param_2)

{
  if (-1 < (int)*param_2) {
    *(uint *)(param_1 + 0x130) = *param_2 & 0xffff;
  }
  return;
}

