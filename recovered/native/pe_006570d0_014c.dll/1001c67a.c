/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001c67a */

undefined4 * __thiscall FUN_1001c67a(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_10059380;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  ExceptionList = &local_14;
  *param_1 = std::collate<char>::vftable;
  local_1c = param_1;
  thunk_FUN_10274120(param_1[3]);
  puVar1 = local_1c;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(local_1c,0x10);
  }
  ExceptionList = local_14;
  return puVar1;
}

