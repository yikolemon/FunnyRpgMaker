/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10151889 */

void __fastcall FUN_10151889(undefined4 *param_1)

{
  if (param_1[1] != param_1[2]) {
    FUN_101520c9();
    *param_1 = param_1[1];
    param_1[2] = param_1[1];
    *(undefined1 *)((int)param_1 + 0x16) = 0;
  }
  return;
}

