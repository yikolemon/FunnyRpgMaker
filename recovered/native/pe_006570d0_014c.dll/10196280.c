/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10196280 */

void __fastcall FUN_10196280(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_10018d26(param_1);
  while( true ) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = 1;
    UNLOCK();
    if (iVar1 == 0) break;
    SwitchToThread();
    piVar2 = (int *)FUN_10018d26(param_1);
  }
  return;
}

