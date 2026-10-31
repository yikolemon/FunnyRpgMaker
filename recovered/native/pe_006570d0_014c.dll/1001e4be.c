/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001e4be */

void FUN_1001e4be(int param_1)

{
  int iVar1;
  void **ppvVar2;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100594e0;
  ppvVar2 = &local_14;
  local_14 = ExceptionList;
  local_1c = param_1;
  while (ExceptionList = ppvVar2, local_1c != 0) {
    iVar1 = *(int *)(local_1c + 0x10);
    local_c = 0xffffffff;
    thunk_FUN_10274120(*(undefined4 *)(local_1c + 0xc));
    FUN_102283a0(local_1c,0x14);
    ppvVar2 = ExceptionList;
    local_1c = iVar1;
  }
  ExceptionList = local_14;
  return;
}

