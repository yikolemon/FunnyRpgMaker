/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000dcbe */

void __fastcall FUN_1000dcbe(int param_1)

{
  int iVar1;
  int iVar2;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_10012a60;
  local_1c = ExceptionList;
  local_14 = 6;
  ExceptionList = &local_1c;
  local_24 = param_1;
  FUN_1022ba10(param_1);
  iVar1 = local_24;
  local_14 = 0xffffffff;
  if (*(int *)(local_24 + 0x2c) != 0) {
    thunk_FUN_10274120(*(int *)(local_24 + 0x2c));
  }
  iVar2 = local_24;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  if (*(int *)(local_24 + 0x24) != 0) {
    thunk_FUN_10274120(*(int *)(local_24 + 0x24));
  }
  iVar1 = local_24;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  if (*(int *)(local_24 + 0x1c) != 0) {
    thunk_FUN_10274120(*(int *)(local_24 + 0x1c));
  }
  iVar2 = local_24;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  if (*(int *)(local_24 + 0x14) != 0) {
    thunk_FUN_10274120(*(int *)(local_24 + 0x14));
  }
  iVar1 = local_24;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  if (*(int *)(local_24 + 0xc) != 0) {
    thunk_FUN_10274120(*(int *)(local_24 + 0xc));
  }
  iVar2 = local_24;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  if (*(int *)(local_24 + 4) != 0) {
    thunk_FUN_10274120(*(int *)(local_24 + 4));
  }
  *(undefined4 *)(iVar2 + 4) = 0;
  FUN_1022bee0();
  ExceptionList = local_1c;
  return;
}

