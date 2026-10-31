/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cf34f */

int FUN_1400cf34f(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_1400ce967();
  iVar3 = *(int *)(param_1 + 0x18);
  while( true ) {
    if (iVar3 <= iVar1) break;
    iVar2 = FUN_1400cf238(param_1,iVar1);
    if (iVar2 != 0) break;
    iVar1 = FUN_1400ce967(param_1,iVar1);
  }
  if (iVar1 < iVar3) {
    iVar3 = iVar1;
  }
  return iVar3;
}

