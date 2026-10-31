/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10022de8 */

void __fastcall FUN_10022de8(int *param_1)

{
  int *piVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_10059760;
  local_10 = ExceptionList;
  local_18 = *param_1;
  if (local_18 != 0) {
    local_8 = 0xffffffff;
    ExceptionList = &local_10;
    piVar1 = &local_18;
    if (*(int *)(local_18 + 0x18) != local_18 + 0x28) {
      thunk_FUN_10274120(*(int *)(local_18 + 0x18));
      piVar1 = (int *)local_14;
    }
    local_14 = (undefined1 *)piVar1;
    FUN_102283a0(local_18,0x138);
    ExceptionList = local_10;
  }
  return;
}

