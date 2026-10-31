/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00408cf8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00408cf8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_004180a0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 6;
  uVar3 = _UNK_004a88bc;
  uVar2 = _UNK_004a88b8;
  uVar1 = _UNK_004a88b4;
  *(undefined4 *)(param_1 + 8) = _DAT_004a88b0;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  local_24 = FUN_0047f230(8);
  local_14 = 0;
  piVar4 = FUN_0047f650('\x01');
  *(int **)(local_24 + 4) = piVar4;
  *(int *)(param_1 + 0x30) = local_24;
  ExceptionList = local_1c;
  return;
}

