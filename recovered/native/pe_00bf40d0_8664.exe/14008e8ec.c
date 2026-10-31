/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008e8ec */

undefined8 FUN_14008e8ec(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  LOCK();
  uVar1 = *DAT_1401437b8;
  uVar2 = (ulonglong)uVar1;
  *DAT_1401437b8 = *DAT_1401437b8 - 1;
  UNLOCK();
  if ((uVar1 == 1) && (DAT_1401437b8 != (uint *)&DAT_14013bf60)) {
    uVar2 = FUN_1400a1290(DAT_1401437b8);
    DAT_1401437b8 = (uint *)&DAT_14013bf60;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}

