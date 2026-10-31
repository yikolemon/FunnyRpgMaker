/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f72b0 */

void FUN_1800f72b0(undefined8 *param_1)

{
  *param_1 = std::_Associated_state<int>::vftable;
  if ((*(char *)((longlong)param_1 + 0xc1) == '\x01') && (*(int *)((longlong)param_1 + 0xbc) == 0))
  {
    FUN_18023e9b0(param_1 + 4);
  }
  FUN_180247230(param_1 + 2);
  return;
}

