/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015641f */

int FUN_18015641f(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_180155a37();
  iVar3 = *(int *)(param_1 + 0x18);
  while( true ) {
    if (iVar3 <= iVar1) break;
    iVar2 = FUN_180156308(param_1,iVar1);
    if (iVar2 != 0) break;
    iVar1 = FUN_180155a37(param_1,iVar1);
  }
  if (iVar1 < iVar3) {
    iVar3 = iVar1;
  }
  return iVar3;
}

