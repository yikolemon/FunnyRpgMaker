/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101518c6 */

void __fastcall FUN_101518c6(undefined4 param_1,undefined4 *param_2)

{
  if (param_2[1] != param_2[2]) {
    FUN_101520c9();
    FUN_10142d8c();
    *param_2 = param_2[2];
    param_2[1] = param_2[2];
    *(undefined1 *)((int)param_2 + 0x16) = 0;
  }
  return;
}

