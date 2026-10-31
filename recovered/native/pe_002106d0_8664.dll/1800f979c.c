/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f979c */

int FUN_1800f979c(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < 0x7e000001) {
    iVar1 = (uint)((ulonglong)param_1 * 0x8080808081 >> 0x27) + 0x10;
  }
  return iVar1;
}

