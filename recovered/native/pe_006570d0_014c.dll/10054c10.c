/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10054c10 */

void __thiscall FUN_10054c10(int param_1,undefined1 *param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_10014148(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
    return;
  }
  FUN_10054c44(*(int *)(param_1 + 4),param_2);
  return;
}

