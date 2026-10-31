/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14048eff0 */

bool FUN_14048eff0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_14048f040();
  bVar3 = false;
  if (lVar2 != 0) {
    iVar1 = FUN_1404b9600(param_1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

