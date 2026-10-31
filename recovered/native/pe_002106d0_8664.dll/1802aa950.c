/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aa950 */

void FUN_1802aa950(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ExFilterRethrowFH4(param_1,*(EHExceptionRecord **)(param_2 + 0x28),*(int *)(param_2 + 0xf0),
                     (int *)(param_2 + 0x20));
  return;
}

