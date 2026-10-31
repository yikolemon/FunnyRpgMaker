/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140018034 */

void FUN_140018034(undefined8 *param_1)

{
  *param_1 = NamedPipeClient::vftable;
  FUN_1400021ea(param_1 + 2);
  *param_1 = NamedPipe::vftable;
  if ((HANDLE)param_1[1] != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0xffffffffffffffff;
  }
  return;
}

