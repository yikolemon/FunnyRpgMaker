/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f898a */

void __fastcall FUN_101f898a(undefined1 *param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_101c4c3e(param_2,param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

