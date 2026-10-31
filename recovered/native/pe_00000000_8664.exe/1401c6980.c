/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c6980 */

void FUN_1401c6980(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ExFilterRethrowFH4(param_1,*(EHExceptionRecord **)(param_2 + 0x28),*(int *)(param_2 + 0xf0),
                     (int *)(param_2 + 0x20));
  return;
}

