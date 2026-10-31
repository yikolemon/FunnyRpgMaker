/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d840 */

undefined8 FUN_18023d840(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_180246a20();
  uVar1 = DAT_180418080;
  if (((int)uVar2 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_180418080 = 0;
    UNLOCK();
    uVar2 = uVar1;
  }
  return uVar2;
}

