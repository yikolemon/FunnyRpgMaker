/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001e1e0 */

void FUN_18001e1e0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = std::_Node_class<char,std::regex_traits<char>_>::vftable;
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

