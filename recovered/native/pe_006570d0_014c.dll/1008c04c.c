/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008c04c */

void FUN_1008c04c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_1c [4];
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100c3670;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  puVar4 = (undefined4 *)FUN_10228350(0x18);
  *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_1 + 4);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *puVar4 = *param_1;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  ExceptionList = local_14;
  return;
}

