/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180094f16 */

void FUN_180094f16(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = std::_Node_class<wchar_t,std::regex_traits<wchar_t>_>::vftable;
  FUN_18001e304(param_1,param_1[4]);
  if (param_1[5] != 0) {
    thunk_FUN_1802464a0(param_1[5],0x20);
  }
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    thunk_FUN_180290e40(*(undefined8 *)(lVar1 + 8));
    thunk_FUN_1802464a0(lVar1,0x10);
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    thunk_FUN_180290e40(*(undefined8 *)(lVar1 + 8));
    thunk_FUN_1802464a0(lVar1,0x10);
  }
  FUN_18001e304(param_1,param_1[9]);
  return;
}

