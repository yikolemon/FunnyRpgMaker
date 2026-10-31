/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140137fa0 */

void FUN_140137fa0(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ExFilterRethrowFH4(param_1,*(EHExceptionRecord **)(param_2 + 0x28),*(int *)(param_2 + 0xf0),
                     (int *)(param_2 + 0x20));
  return;
}

