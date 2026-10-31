/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101430db */

void __fastcall FUN_101430db(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 4) != *(int *)(param_2 + 8)) {
    FUN_10151d3f();
    *(undefined1 *)(param_2 + 0x16) = 0;
  }
  return;
}

