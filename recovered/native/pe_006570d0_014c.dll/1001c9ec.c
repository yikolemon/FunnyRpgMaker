/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001c9ec */

void __fastcall FUN_1001c9ec(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100593b0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*(int *)(param_1 + 0x10) < 1) {
    piVar2 = &local_1c;
    if ((*(int *)(param_1 + 0x10) < 0) &&
       (iVar1 = *(int *)(param_1 + 0xc), piVar2 = &local_1c, iVar1 != 0)) {
      local_c = 0xffffffff;
      local_1c = iVar1;
      thunk_FUN_10274120(iVar1);
      piVar2 = (int *)local_18;
    }
  }
  else {
    local_18 = (undefined1 *)&local_1c;
    thunk_FUN_10274120(*(undefined4 *)(param_1 + 0xc));
    piVar2 = (int *)local_18;
  }
  local_18 = (undefined1 *)piVar2;
  thunk_FUN_10274120(*(undefined4 *)(param_1 + 0x14));
  ExceptionList = local_14;
  return;
}

