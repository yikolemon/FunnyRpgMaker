/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027efc4 */

undefined8 thunk_FUN_18027f04c(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (DAT_180420ee8 == 0) {
    __acrt_initialize_multibyte();
    lVar2 = FUN_180298140();
    if (lVar2 == 0) {
      FUN_180290e40(0);
      uVar3 = 0xffffffff;
    }
    else {
      lVar4 = FUN_18027f1ac(lVar2);
      lVar1 = lVar4;
      if (lVar4 == 0) {
        uVar3 = 0xffffffff;
        lVar4 = DAT_180420ee8;
        lVar1 = DAT_180420f00;
      }
      DAT_180420f00 = lVar1;
      DAT_180420ee8 = lVar4;
      FUN_180290e40(0);
      FUN_180290e40(lVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

