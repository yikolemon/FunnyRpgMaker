/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10075fdf */

int FUN_10075fdf(char *param_1)

{
  size_t sVar1;
  int iVar2;
  
  sVar1 = _strlen(param_1);
  iVar2 = FUN_1026faa0(sVar1 + 1);
  if (iVar2 != 0) {
    FUN_1025b2d0(iVar2,param_1,sVar1 + 1);
  }
  return iVar2;
}

