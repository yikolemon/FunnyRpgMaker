/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00450102 */

void __fastcall FUN_00450102(undefined1 *param_1,int param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00420cb6(param_2,(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

