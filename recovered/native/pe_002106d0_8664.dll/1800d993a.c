/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d993a */

void thunk_FUN_18015abd8(void)

{
  undefined8 *puVar1;
  undefined **appuStack_60 [7];
  undefined ***pppuStack_28;
  undefined ***pppuStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if (DAT_1804189a8 == '\0') {
    DAT_1804189a8 = '\x01';
    DAT_1804189c0 = 0;
    puVar1 = DAT_1804189b0;
    if (DAT_1804189c8 < 0x10) {
      puVar1 = &DAT_1804189b0;
    }
    *(undefined1 *)puVar1 = 0;
    DAT_1804189ac = 0;
    FUN_18006a5f4(&DAT_1804188a0);
    pppuStack_28 = appuStack_60;
    appuStack_60[0] =
         std::_Func_impl_no_alloc<`void___cdecl_RpgMakerLoadRawText(void)'::`1'::<lambda_0>,void>::
         vftable;
    pppuStack_20 = pppuStack_28;
    FUN_18001405b(appuStack_60);
    if (pppuStack_28 != (undefined ***)0x0) {
      (*(code *)(*pppuStack_28)[4])(pppuStack_28,pppuStack_28 != appuStack_60);
    }
  }
  return;
}

