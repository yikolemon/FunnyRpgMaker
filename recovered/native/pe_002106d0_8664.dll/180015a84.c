/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180015a84 */

undefined8 * FUN_180015a84(undefined8 *param_1,uint param_2)

{
  *param_1 = NamedPipe::vftable;
  if ((HANDLE)param_1[1] != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0xffffffffffffffff;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x10);
  }
  return param_1;
}

