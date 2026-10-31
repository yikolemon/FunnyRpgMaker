/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d5300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_101574cc(void)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [4];
  undefined ***pppuStack_54;
  undefined **appuStack_50 [9];
  undefined ***pppuStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  
  puStack_28 = &stack0xfffffffc;
  puStack_24 = auStack_58;
  uStack_18 = 0xffffffff;
  puStack_1c = &LAB_1015f4f0;
  pvStack_20 = ExceptionList;
  if (DAT_1039d2ec == '\0') {
    DAT_1039d2ec = '\x01';
    DAT_1039d304 = 0;
    puVar1 = &DAT_1039d2f4;
    if (0xf < DAT_1039d308) {
      puVar1 = _DAT_1039d2f4;
    }
    ExceptionList = &pvStack_20;
    *puVar1 = 0;
    DAT_1039d2f0 = 0;
    FUN_1006a522();
    pppuStack_54 = appuStack_50;
    appuStack_50[0] =
         std::_Func_impl_no_alloc<`void___cdecl_RpgMakerLoadRawText(void)'::`1'::<lambda_0>,void>::
         vftable;
    uStack_18 = 1;
    pppuStack_2c = pppuStack_54;
    FUN_100148b1(appuStack_50);
    uStack_18 = 0xffffffff;
    if (pppuStack_2c != (undefined ***)0x0) {
      (*(code *)(*pppuStack_2c)[4])(pppuStack_2c != appuStack_50);
    }
  }
  ExceptionList = pvStack_20;
  return;
}

