/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f1a50 */

void thunk_FUN_18005b974(void)

{
  undefined **appuStack_60 [7];
  undefined ***pppuStack_28;
  undefined ***pppuStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pppuStack_28 = appuStack_60;
  appuStack_60[0] =
       std::
       _Func_impl_no_alloc<`void___cdecl_WolfRequestReloadTranslations(void)'::`1'::<lambda_8>,void>
       ::vftable;
  pppuStack_20 = pppuStack_28;
  FUN_18005b913(appuStack_60);
  if (pppuStack_28 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_28)[4])(pppuStack_28,pppuStack_28 != appuStack_60);
  }
  return;
}

