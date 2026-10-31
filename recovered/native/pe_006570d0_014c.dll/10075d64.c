/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10075d64 */

void __fastcall FUN_10075d64(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c2b30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = std::
             wstring_convert<std::codecvt_utf8<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>
             ::vftable;
  local_8 = 0xffffffff;
  local_18 = param_1;
  FUN_10001134();
  FUN_10001fee();
  if (((int *)local_18[3] != (int *)0x0) &&
     (puVar1 = (undefined4 *)(**(code **)(*(int *)local_18[3] + 8))(), puVar1 != (undefined4 *)0x0))
  {
    (**(code **)*puVar1)(1);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}

