/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10013722 */

undefined4 * __thiscall FUN_10013722(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_10058e70;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = NamedPipe::vftable;
  param_1[1] = 0xffffffff;
  local_14 = 0;
  *param_1 = NamedPipeClient::vftable;
  local_28 = param_1 + 2;
  local_24 = param_1;
  FUN_1000334a(param_2);
  ExceptionList = local_1c;
  return local_24;
}

