/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019f298 */

undefined8 thunk_FUN_14019f320(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (DAT_140f328a0 == 0) {
    __acrt_initialize_multibyte();
    lVar2 = FUN_1401b87d0();
    if (lVar2 == 0) {
      FUN_1401aea30(0);
      uVar3 = 0xffffffff;
    }
    else {
      lVar4 = FUN_14019f480(lVar2);
      lVar1 = lVar4;
      if (lVar4 == 0) {
        uVar3 = 0xffffffff;
        lVar4 = DAT_140f328a0;
        lVar1 = DAT_140f328b8;
      }
      DAT_140f328b8 = lVar1;
      DAT_140f328a0 = lVar4;
      FUN_1401aea30(0);
      FUN_1401aea30(lVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

