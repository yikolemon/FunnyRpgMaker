/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10089640 */

void __thiscall FUN_10089640(int param_1,undefined1 *param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_10080e50(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
    return;
  }
  FUN_10089674(*(int *)(param_1 + 4),param_2);
  return;
}

