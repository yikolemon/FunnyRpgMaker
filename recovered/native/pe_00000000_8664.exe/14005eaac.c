/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005eaac */

void FUN_14005eaac(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = std::_Node_class<wchar_t,std::regex_traits<wchar_t>_>::vftable;
  FUN_14005ebd0(param_1,param_1[4]);
  if (param_1[5] != 0) {
    thunk_FUN_14018e090(param_1[5],0x20);
  }
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    thunk_FUN_1401aea30(*(undefined8 *)(lVar1 + 8));
    thunk_FUN_14018e090(lVar1,0x10);
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    thunk_FUN_1401aea30(*(undefined8 *)(lVar1 + 8));
    thunk_FUN_14018e090(lVar1,0x10);
  }
  FUN_14005ebd0(param_1,param_1[9]);
  return;
}

