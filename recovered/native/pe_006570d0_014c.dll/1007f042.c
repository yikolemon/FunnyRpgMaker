/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007f042 */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 *
FUN_1007f042(undefined4 *param_1,int param_2,undefined1 param_3,byte param_4,undefined4 param_5)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 local_2b0 [3];
  void **local_2a4;
  undefined1 local_2a0 [620];
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_34 = local_2a0;
  local_2a4 = &local_1c;
  local_18 = &LAB_100c2fe0;
  local_1c = ExceptionList;
  ExceptionList = local_2a4;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf;
  local_14 = 1;
  local_24 = local_2b0;
  local_20 = (undefined1 *)local_2b0;
  FUN_100562bc(param_1);
  puVar2 = local_24;
  *local_24 = 0;
  puVar2[1] = 0;
  piVar3 = (int *)0x0;
  if (local_28 != (int *)0x0) {
    LOCK();
    local_28[1] = local_28[1] + 1;
    UNLOCK();
    piVar3 = local_28;
  }
  *puVar2 = local_2c;
  puVar2[1] = piVar3;
  puVar2 = local_24;
  *(undefined1 *)(local_24 + 2) = param_3;
  puVar2[3] = param_5;
  local_14 = 3;
  FUN_1005636e();
  local_20 = local_34;
  local_14 = 0xffffffff;
  puVar4 = local_34;
  if (local_28 != (int *)0x0) {
    LOCK();
    piVar3 = local_28 + 1;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      pcVar1 = *(code **)*local_28;
      puVar4 = local_34 + -4;
      *(undefined4 *)(local_34 + -4) = 0x1007f13b;
      (*pcVar1)();
      LOCK();
      piVar3 = local_28 + 2;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        pcVar1 = *(code **)(*local_28 + 4);
        puVar5 = (undefined4 *)(puVar4 + -4);
        puVar4 = puVar4 + -4;
        *puVar5 = 0x1007f149;
        (*pcVar1)();
      }
    }
  }
  local_14 = 2;
  if (param_2 < 0) {
    *(undefined4 *)(puVar4 + -4) = 0;
    *(undefined4 *)(puVar4 + -8) = 0;
    *(uint *)(puVar4 + -0xc) = (uint)param_4;
    *(undefined4 *)(puVar4 + -0x10) = 0;
    *(undefined4 *)(puVar4 + -0x14) = local_30;
    *(undefined4 *)(puVar4 + -0x18) = 0x1007f18b;
    FUN_1007f4e8();
  }
  else {
    *(undefined4 *)(puVar4 + -4) = 0;
    *(int *)(puVar4 + -8) = param_2;
    *(uint *)(puVar4 + -0xc) = (uint)param_4;
    *(undefined4 *)(puVar4 + -0x10) = 1;
    *(undefined4 *)(puVar4 + -0x14) = local_30;
    *(undefined4 *)(puVar4 + -0x18) = 0x1007f172;
    FUN_1007f4e8();
  }
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar4 + -4) = 0x1007f19e;
  FUN_10056c94();
  ExceptionList = local_1c;
  return param_1;
}

