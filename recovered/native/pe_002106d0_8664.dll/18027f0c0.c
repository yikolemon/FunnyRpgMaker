/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027f0c0 */

undefined8 FUN_18027f0c0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (DAT_180420ef0 == 0) {
    lVar2 = FUN_180298250();
    if (lVar2 == 0) {
      FUN_180290e40(0);
      uVar3 = 0xffffffff;
    }
    else {
      lVar4 = FUN_18027f2c0(lVar2);
      lVar1 = lVar4;
      if (lVar4 == 0) {
        uVar3 = 0xffffffff;
        lVar4 = DAT_180420ef0;
        lVar1 = DAT_180420ef8;
      }
      DAT_180420ef8 = lVar1;
      DAT_180420ef0 = lVar4;
      FUN_180290e40(0);
      FUN_180290e40(lVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

