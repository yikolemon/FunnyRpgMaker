/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801476ea */

uint FUN_1801476ea(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  while( true ) {
    uVar2 = FUN_180155a37(param_1,param_2);
    if ((int)uVar1 <= (int)uVar2) break;
    iVar3 = FUN_18015693f(param_1,uVar2);
    if (iVar3 != 0) break;
    param_2 = (ulonglong)uVar2;
  }
  if ((int)uVar2 < (int)uVar1) {
    uVar1 = uVar2;
  }
  return uVar1;
}

