/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008b710 */

undefined8 FUN_14008b710(char param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  bVar2 = FUN_14008c290();
  uVar1 = DAT_14013d270;
  uVar3 = CONCAT71(extraout_var,bVar2);
  if (((int)uVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_14013d270 = 0;
    UNLOCK();
    uVar3 = uVar1;
  }
  return uVar3;
}

