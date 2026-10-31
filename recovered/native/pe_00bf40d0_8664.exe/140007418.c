/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140007418 */

void FUN_140007418(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  if (param_1[0xc] != 0) {
    plVar1 = *(longlong **)(param_1[0xc] + 8);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x10))();
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FUN_1400863f0();
    return;
  }
  return;
}

