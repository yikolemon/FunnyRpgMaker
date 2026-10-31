/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018184c */

undefined4 * __thiscall FUN_1018184c(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_1c;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_10186030;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  param_1[9] = 0;
  local_c = 0;
  local_1c = param_1;
  cVar1 = FUN_10075278(param_2);
  if (cVar1 != '\0') {
    *local_1c = std::_Func_impl_no_alloc<void_(__cdecl*)(void),void>::vftable;
    local_1c[1] = param_2;
    local_1c[9] = local_1c;
  }
  *unaff_FS_OFFSET = local_14;
  return local_1c;
}

