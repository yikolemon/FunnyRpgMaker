/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000e0e6 */

int FUN_1000e0e6(char *param_1)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = _strlen(param_1);
  iVar3 = sVar1 + 1;
  iVar2 = FUN_1026d360(iVar3,1);
  if (iVar2 != 0) {
    if (iVar3 != 0) {
      FUN_1025b2d0(iVar2,param_1,iVar3);
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228470();
}

