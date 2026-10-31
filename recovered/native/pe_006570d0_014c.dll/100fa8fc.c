/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa8fc */

void FUN_100fa8fc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1026e8c9(param_1);
  if (((iVar1 != -1) && (iVar2 = FUN_1026915d(param_1,0,2), iVar2 == 0)) &&
     (iVar2 = FUN_1026e8c9(param_1), iVar2 != -1)) {
    FUN_1026915d(param_1,iVar1,0);
  }
  return;
}

