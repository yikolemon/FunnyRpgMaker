/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00420cb6 */

void __cdecl FUN_00420cb6(int param_1,int *param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_0041c607(*(int *)(param_1 + 0x1c),*param_2);
  }
  *param_2 = 0;
  return;
}

