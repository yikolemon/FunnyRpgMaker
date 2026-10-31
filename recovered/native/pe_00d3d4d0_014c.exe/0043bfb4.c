/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043bfb4 */

void __fastcall FUN_0043bfb4(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)param_1;
  *param_1 = *(undefined8 *)((int)param_1 + 4);
  return;
}

