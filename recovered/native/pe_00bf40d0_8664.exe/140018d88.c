/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140018d88 */

undefined8 * FUN_140018d88(undefined8 *param_1,uint param_2)

{
  *param_1 = NamedPipeServer::vftable;
  FUN_1400021ea(param_1 + 3);
  *param_1 = NamedPipe::vftable;
  if ((HANDLE)param_1[1] != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0xffffffffffffffff;
  }
  if ((param_2 & 1) != 0) {
    FUN_1400863f0();
  }
  return param_1;
}

