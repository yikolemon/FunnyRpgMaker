/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140331d44 */

int FUN_140331d44(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    lVar1 = FUN_140331d38(param_1,iVar2);
  } while (lVar1 != 0);
  return iVar2;
}

