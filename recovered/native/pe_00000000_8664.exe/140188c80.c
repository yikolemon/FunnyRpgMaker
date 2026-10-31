/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188c80 */

undefined8 FUN_140188c80(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14018e390();
  uVar1 = DAT_140f2a9b0;
  if (((int)uVar2 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_140f2a9b0 = 0;
    UNLOCK();
    uVar2 = uVar1;
  }
  return uVar2;
}

