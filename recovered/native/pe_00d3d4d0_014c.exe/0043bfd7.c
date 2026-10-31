/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043bfd7 */

void __fastcall FUN_0043bfd7(int param_1,uint *param_2)

{
  if (-1 < (int)*param_2) {
    *(uint *)(param_1 + 0x130) = *param_2 & 0xffff;
  }
  return;
}

