/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019db6a */

void FUN_18019db6a(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  while( true ) {
    piVar2 = (int *)FUN_1800188ac(param_1);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = 1;
    UNLOCK();
    if (iVar1 == 0) break;
    SwitchToThread();
  }
  return;
}

