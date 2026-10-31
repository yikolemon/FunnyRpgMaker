/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140038f62 */

void Unwind_140038f62(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x20) != *(longlong *)(param_2 + 0x28)) {
    thunk_FUN_1401aea30();
  }
  return;
}

