/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f578c */

int FUN_100f578c(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < 0x7e000001) {
    iVar1 = param_1 + param_1 / 0xff + 0x10;
  }
  return iVar1;
}

