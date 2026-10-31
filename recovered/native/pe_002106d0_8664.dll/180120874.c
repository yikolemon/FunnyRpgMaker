/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180120874 */

int FUN_180120874(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    lVar1 = FUN_180120868(param_1,iVar2);
  } while (lVar1 != 0);
  return iVar2;
}

