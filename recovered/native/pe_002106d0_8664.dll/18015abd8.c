/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015abd8 */

void FUN_18015abd8(void)

{
  undefined8 *puVar1;
  undefined **local_60 [7];
  undefined ***local_28;
  undefined ***local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
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
    local_28 = local_60;
    local_60[0] = std::
                  _Func_impl_no_alloc<`void___cdecl_RpgMakerLoadRawText(void)'::`1'::<lambda_0>,void>
                  ::vftable;
    local_20 = local_28;
    FUN_18001405b(local_60);
    if (local_28 != (undefined ***)0x0) {
      (*(code *)(*local_28)[4])(local_28,local_28 != local_60);
    }
  }
  return;
}

