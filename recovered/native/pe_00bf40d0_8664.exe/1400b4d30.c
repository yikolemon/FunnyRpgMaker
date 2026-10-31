/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b4d30 */

void FUN_1400b4d30(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ExFilterRethrowFH4(param_1,*(EHExceptionRecord **)(param_2 + 0x28),*(int *)(param_2 + 0xf0),
                     (int *)(param_2 + 0x20));
  return;
}

