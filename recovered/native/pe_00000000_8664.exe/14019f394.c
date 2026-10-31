/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019f394 */

undefined8 FUN_14019f394(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (DAT_140f328a8 == 0) {
    lVar2 = FUN_1401b88e0();
    if (lVar2 == 0) {
      FUN_1401aea30(0);
      uVar3 = 0xffffffff;
    }
    else {
      lVar4 = FUN_14019f594(lVar2);
      lVar1 = lVar4;
      if (lVar4 == 0) {
        uVar3 = 0xffffffff;
        lVar4 = DAT_140f328a8;
        lVar1 = DAT_140f328b0;
      }
      DAT_140f328b0 = lVar1;
      DAT_140f328a8 = lVar4;
      FUN_1401aea30(0);
      FUN_1401aea30(lVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

