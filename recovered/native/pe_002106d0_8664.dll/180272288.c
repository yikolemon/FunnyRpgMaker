/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180272288 */

undefined8 FUN_180272288(void)

{
  int iVar1;
  
  LOCK();
  iVar1 = *DAT_180421848;
  *DAT_180421848 = *DAT_180421848 + -1;
  UNLOCK();
  if ((iVar1 == 1) && (DAT_180421848 != (int *)&DAT_180416220)) {
    FUN_180290e40();
    DAT_180421848 = (int *)&DAT_180416220;
  }
  return 1;
}

