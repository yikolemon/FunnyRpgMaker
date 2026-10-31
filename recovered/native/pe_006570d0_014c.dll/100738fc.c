/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100738fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100738fc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2990;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 6;
  uVar2 = _UNK_102944dc;
  uVar1 = _UNK_102944d8;
  uVar3 = _UNK_102944d4;
  *(undefined4 *)(param_1 + 8) = _DAT_102944d0;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  local_24 = FUN_10228350(8);
  local_14 = 0;
  uVar3 = FUN_1022bce0(1);
  *(undefined4 *)(local_24 + 4) = uVar3;
  *(int *)(param_1 + 0x30) = local_24;
  ExceptionList = local_1c;
  return;
}

