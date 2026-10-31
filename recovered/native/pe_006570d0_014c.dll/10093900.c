/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10093900 */

void __fastcall FUN_10093900(undefined4 *param_1)

{
  int iVar1;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100c39d0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = std::_Node_class<wchar_t,std::regex_traits<wchar_t>_>::vftable;
  FUN_1001e4be(param_1[5]);
  iVar1 = param_1[6];
  if (iVar1 != 0) {
    local_c = 0xffffffff;
    local_1c = iVar1;
    FUN_102283a0(iVar1,0x20);
  }
  iVar1 = param_1[7];
  if (iVar1 != 0) {
    local_c = 1;
    local_1c = iVar1;
    thunk_FUN_10274120(*(undefined4 *)(iVar1 + 8));
    local_c = 0xffffffff;
    FUN_102283a0(local_1c,0xc);
  }
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    local_c = 2;
    local_1c = iVar1;
    thunk_FUN_10274120(*(undefined4 *)(iVar1 + 8));
    local_c = 0xffffffff;
    FUN_102283a0(local_1c,0xc);
  }
  FUN_1001e4be(param_1[10]);
  ExceptionList = local_14;
  return;
}

