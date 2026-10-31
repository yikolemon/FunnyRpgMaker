/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011b53b */

int FUN_1011b53b(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    iVar1 = FUN_1011b528(param_1,iVar2);
  } while (iVar1 != 0);
  return iVar2;
}

