/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043b871 */

void __fastcall FUN_0043b871(int param_1,uint *param_2)

{
  if (6 < *param_2) {
    *(undefined4 *)(param_1 + 0x10) = 0x84;
    return;
  }
  *(short *)(param_1 + 0x12a) = (short)*param_2;
  return;
}

