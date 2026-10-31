/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100873a8 */

int FUN_100873a8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_24 [4];
  int local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = local_24;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c3330;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_1000334a(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(local_20 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(local_20 + 0x1c) = uVar1;
  *(undefined4 *)(local_20 + 0x20) = uVar2;
  *(undefined4 *)(local_20 + 0x24) = uVar3;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  ExceptionList = local_18;
  return local_20;
}

