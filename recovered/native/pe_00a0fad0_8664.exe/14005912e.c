/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005912e */

void FUN_14005912e(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 8) + 0x10))();
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    thunk_FUN_1400ddcd0(lVar1,0x10);
    return;
  }
  return;
}

