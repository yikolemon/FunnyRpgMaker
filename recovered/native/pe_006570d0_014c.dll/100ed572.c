/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ed572 */

void thunk_FUN_1005c72b(void)

{
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
  puStack_1c = &LAB_100c19e0;
  pvStack_20 = ExceptionList;
  pppuStack_54 = appuStack_50;
  appuStack_50[0] =
       std::
       _Func_impl_no_alloc<`void___cdecl_WolfRequestReloadTranslations(void)'::`1'::<lambda_8>,void>
       ::vftable;
  uStack_18 = 1;
  ExceptionList = &pvStack_20;
  pppuStack_2c = pppuStack_54;
  FUN_1005c6a3(appuStack_50);
  uStack_18 = 0xffffffff;
  if (pppuStack_2c != (undefined ***)0x0) {
    (*(code *)(*pppuStack_2c)[4])(pppuStack_2c != appuStack_50);
  }
  ExceptionList = pvStack_20;
  return;
}

