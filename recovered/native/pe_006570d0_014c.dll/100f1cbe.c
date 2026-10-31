/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1cbe */

void __fastcall FUN_100f1cbe(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_100f1d54();
    }
    FUN_10043d14();
    return;
  }
  return;
}

