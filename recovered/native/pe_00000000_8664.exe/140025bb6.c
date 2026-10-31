/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140025bb6 */

void Unwind_140025bb6(undefined8 param_1,longlong param_2)

{
  if ((longlong *)**(longlong **)(param_2 + 0x20) != *(longlong **)(param_2 + 0x20) + 4) {
    thunk_FUN_1401aea30();
  }
  return;
}

