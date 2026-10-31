/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008b6c0 */

ulonglong FUN_14008b6c0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  
  bVar3 = FUN_14008c290();
  uVar4 = CONCAT71(extraout_var,bVar3);
  if ((int)uVar4 != 0) {
    uVar1 = *(ulonglong *)((longlong)Self + 8);
    uVar4 = 0;
    LOCK();
    bVar3 = DAT_14013d270 == 0;
    uVar2 = uVar1;
    if (!bVar3) {
      uVar4 = DAT_14013d270;
      uVar2 = DAT_14013d270;
    }
    DAT_14013d270 = uVar2;
    UNLOCK();
    uVar2 = DAT_14013d270;
    while (DAT_14013d270 = uVar2, !bVar3) {
      if (uVar1 == uVar4) {
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
      uVar4 = 0;
      LOCK();
      bVar3 = uVar2 == 0;
      DAT_14013d270 = uVar1;
      if (!bVar3) {
        uVar4 = uVar2;
        DAT_14013d270 = uVar2;
      }
      UNLOCK();
      uVar2 = DAT_14013d270;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}

