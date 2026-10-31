/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d3870 */

undefined8 FUN_1400d3870(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1400ddfc0();
  uVar1 = DAT_1401cc278;
  if (((int)uVar2 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_1401cc278 = 0;
    UNLOCK();
    uVar2 = uVar1;
  }
  return uVar2;
}

