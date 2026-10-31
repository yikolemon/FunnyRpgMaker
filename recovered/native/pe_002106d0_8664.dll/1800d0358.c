/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d0358 */

void FUN_1800d0358(undefined8 *param_1)

{
  *param_1 = NamedPipeClient::vftable;
  FUN_180001ef2(param_1 + 2);
  *param_1 = NamedPipe::vftable;
  if ((HANDLE)param_1[1] != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0xffffffffffffffff;
  }
  return;
}

