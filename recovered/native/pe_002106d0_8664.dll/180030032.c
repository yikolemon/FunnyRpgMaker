/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180030032 */

void Unwind_180030032(undefined8 param_1,longlong param_2)

{
  if ((longlong *)**(longlong **)(param_2 + 0x20) != *(longlong **)(param_2 + 0x20) + 4) {
    thunk_FUN_180290e40();
  }
  return;
}

