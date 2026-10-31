/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140024d58 */

uint FUN_140024d58(longlong param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0xd;
  if (param_2 != 0x3000) {
    if (0 < param_1) {
      return (uint)param_1;
    }
    uVar1 = 6;
    if (param_1 == 0) {
      return (uint)(param_2 == 0);
    }
  }
  return uVar1;
}

