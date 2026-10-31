/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00417eee */

void __fastcall FUN_00417eee(int param_1)

{
  LPVOID pvVar1;
  LPVOID *ppvVar2;
  LPVOID local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_00418320;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*(int *)(param_1 + 0x10) < 1) {
    ppvVar2 = &local_1c;
    if ((*(int *)(param_1 + 0x10) < 0) &&
       (pvVar1 = *(LPVOID *)(param_1 + 0xc), ppvVar2 = &local_1c, pvVar1 != (LPVOID)0x0)) {
      local_c = 0xffffffff;
      local_1c = pvVar1;
      thunk_FUN_00495f00(pvVar1);
      ppvVar2 = (LPVOID *)local_18;
    }
  }
  else {
    local_18 = (undefined1 *)&local_1c;
    thunk_FUN_00495f00(*(LPVOID *)(param_1 + 0xc));
    ppvVar2 = (LPVOID *)local_18;
  }
  local_18 = (undefined1 *)ppvVar2;
  thunk_FUN_00495f00(*(LPVOID *)(param_1 + 0x14));
  ExceptionList = local_14;
  return;
}

