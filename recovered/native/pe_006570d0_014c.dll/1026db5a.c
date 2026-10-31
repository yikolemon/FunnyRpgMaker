/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026db5a */

undefined4 FUN_1026db5a(int param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    return 0xffffffff;
  }
  if (param_2 == (longlong *)0x0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
  }
  else {
    lVar2 = FUN_1026e8f9(param_1);
    *param_2 = lVar2;
    if (lVar2 != -1) {
      return 0;
    }
  }
  return 0xffffffff;
}

