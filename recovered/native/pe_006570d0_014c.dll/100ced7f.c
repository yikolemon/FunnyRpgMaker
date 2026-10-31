/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ced7f */

int FUN_100ced7f(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar2 = FUN_100ce58c(iVar2);
    if (iVar2 == 0) {
      SetLastError(0x7e);
      return 0;
    }
    iVar1 = FUN_100ceb89(iVar2,param_1,param_2);
  } while (iVar1 == 0);
  return iVar1;
}

