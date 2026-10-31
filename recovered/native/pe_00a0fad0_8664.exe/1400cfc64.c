/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cfc64 */

int FUN_1400cfc64(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < 0x7e000001) {
    iVar1 = (uint)((ulonglong)param_1 * 0x8080808081 >> 0x27) + 0x10;
  }
  return iVar1;
}

