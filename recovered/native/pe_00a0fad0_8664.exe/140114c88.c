/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140114c88 */

undefined8 FUN_140114c88(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (DAT_140354cc8 == 0) {
    __acrt_initialize_multibyte();
    lVar2 = FUN_14012b838();
    if (lVar2 == 0) {
      FUN_1401212e0(0);
      uVar3 = 0xffffffff;
    }
    else {
      lVar4 = FUN_140114de8(lVar2);
      lVar1 = lVar4;
      if (lVar4 == 0) {
        uVar3 = 0xffffffff;
        lVar4 = DAT_140354cc8;
        lVar1 = DAT_140354ce0;
      }
      DAT_140354ce0 = lVar1;
      DAT_140354cc8 = lVar4;
      FUN_1401212e0(0);
      FUN_1401212e0(lVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

