/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c768f */

int * FUN_100c768f(int *param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 local_38 [4];
  char local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c7ef0;
  local_1c = ExceptionList;
  uVar3 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20);
  local_30 = uVar3 - param_3;
  if (uVar3 < param_3) {
    local_30 = 0;
  }
  local_24 = 0;
  if ((int)(uint)(uVar3 == 0) <= *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x24)) {
    local_24 = local_30;
  }
  ExceptionList = &local_1c;
  FUN_1007a540(param_1);
  uVar3 = 4;
  if (local_34 == '\x01') {
    iVar2 = *(int *)(*param_1 + 4);
    if ((local_24 != 0) && ((*(uint *)((int)param_1 + iVar2 + 0x14) & 0x1c0) != 0x40)) {
      do {
        local_28 = 0;
        local_14 = 1;
        sVar1 = FUN_100a14d0(*(undefined2 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
        if (sVar1 == -1) {
          local_2c = 4;
          local_24 = local_30;
          goto code_r0x100c77af;
        }
        local_30 = local_30 + -1;
      } while (local_30 != 0);
      iVar2 = *(int *)(*param_1 + 4);
      local_24 = 0;
    }
    local_28 = 0;
    local_14 = 1;
    local_2c = 0;
    uVar5 = (**(code **)(**(int **)((int)param_1 + iVar2 + 0x38) + 0x24))(param_2,param_3,0);
    uVar3 = 4;
    if ((uint)uVar5 == param_3 && (int)((ulonglong)uVar5 >> 0x20) == 0) {
code_r0x100c77af:
      do {
        bVar4 = local_24 == 0;
        local_24 = local_24 + -1;
        uVar3 = local_2c;
        if (bVar4) goto code_r0x100c77e4;
        local_28 = local_2c;
        sVar1 = FUN_100a14d0(*(undefined2 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
      } while (sVar1 != -1);
      uVar3 = 4;
    }
code_r0x100c77e4:
    iVar2 = *(int *)(*param_1 + 4);
    *(undefined4 *)((int)param_1 + iVar2 + 0x24) = 0;
    *(undefined4 *)((int)param_1 + iVar2 + 0x20) = 0;
  }
  local_14 = 0;
  FUN_10073a60((uint)(*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) << 2 |
               uVar3 | *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc),0);
  local_14 = 0xffffffff;
  FUN_1007a64a();
  ExceptionList = local_1c;
  return param_1;
}

