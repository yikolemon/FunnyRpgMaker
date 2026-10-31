/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140095352 */

void FUN_140095352(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = std::_Node_class<wchar_t,std::regex_traits<wchar_t>_>::vftable;
  FUN_140095476(param_1,param_1[4]);
  if (param_1[5] != 0) {
    thunk_FUN_1400ddcd0(param_1[5],0x20);
  }
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    thunk_FUN_1401212e0(*(undefined8 *)(lVar1 + 8));
    thunk_FUN_1400ddcd0(lVar1,0x10);
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    thunk_FUN_1401212e0(*(undefined8 *)(lVar1 + 8));
    thunk_FUN_1400ddcd0(lVar1,0x10);
  }
  FUN_140095476(param_1,param_1[9]);
  return;
}

