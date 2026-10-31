/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e4844 */

void __fastcall FUN_101e4844(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)param_1;
  *param_1 = *(undefined8 *)((int)param_1 + 4);
  return;
}

