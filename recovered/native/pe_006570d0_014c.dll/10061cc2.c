/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10061cc2 */

int FUN_10061cc2(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 local_20 [4];
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c2030;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_10061d76(param_2);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_2 + 0x2c) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  ExceptionList = local_18;
  return param_1;
}

