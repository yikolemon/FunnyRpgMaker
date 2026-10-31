/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00406667 */

int * __cdecl FUN_00406667(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  undefined1 local_40 [4];
  char local_3c;
  int local_38;
  short *local_34;
  short *local_30;
  uint local_2c;
  short *local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_40;
  local_18 = &LAB_00407140;
  local_1c = ExceptionList;
  local_34 = (short *)*param_2;
  local_38 = param_2[1];
  if (local_38 == 0) {
    uVar3 = 2;
  }
  else {
    uVar3 = local_38 + 2;
    local_24 = CONCAT22(local_24._2_2_,*(short *)(param_2 + 2));
    iVar5 = 0;
    do {
      uVar3 = uVar3 + (*(short *)((int)local_34 + iVar5) == *(short *)((int)param_2 + 10) ||
                      *(short *)((int)local_34 + iVar5) == *(short *)(param_2 + 2));
      iVar5 = iVar5 + 2;
    } while (local_38 * 2 != iVar5);
  }
  uVar1 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20);
  local_30 = (short *)(uVar1 - uVar3);
  if (uVar1 < uVar3) {
    local_30 = (short *)0x0;
  }
  local_28 = (short *)0x0;
  if ((int)(uint)(uVar1 == 0) <= *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x24)) {
    local_28 = local_30;
  }
  local_14 = 0xffffffff;
  ExceptionList = &local_1c;
  FUN_00404fb4(local_40,param_1);
  uVar3 = 4;
  if (local_3c != '\x01') goto code_r0x00406941;
  iVar5 = *(int *)(*param_1 + 4);
  if (((*(uint *)((int)param_1 + iVar5 + 0x14) & 0x1c0) != 0x40) && (local_28 != (short *)0x0)) {
    do {
      local_2c = 0;
      local_14 = 1;
      sVar2 = FUN_00405198(*(void **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),
                           *(undefined2 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
      if (sVar2 == -1) {
        local_24 = 4;
        goto code_r0x004067e2;
      }
      local_30 = (short *)((int)local_30 + -1);
    } while (local_30 != (short *)0x0);
    iVar5 = *(int *)(*param_1 + 4);
    local_28 = (short *)0x0;
    local_30 = (short *)0x0;
  }
  local_2c = 0;
  local_14 = 1;
  sVar2 = FUN_00405198(*(void **)((int)param_1 + iVar5 + 0x38),*(undefined2 *)(param_2 + 2));
  local_24 = (uint)(sVar2 == -1) << 2;
  local_30 = local_28;
code_r0x004067e2:
  local_34 = local_34 + local_38;
  psVar4 = (short *)*param_2;
  while (psVar4 != local_34) {
    sVar2 = *psVar4;
    local_28 = psVar4;
    if (sVar2 == *(short *)(param_2 + 2)) {
      if (local_24 == 0) {
        sVar2 = *(short *)((int)param_2 + 10);
code_r0x00406836:
        local_2c = 0;
        local_14 = 1;
        sVar2 = FUN_00405198(*(void **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),sVar2);
        if (sVar2 != -1) {
          sVar2 = *local_28;
          goto code_r0x0040686b;
        }
        goto LAB_0040691f;
      }
    }
    else {
      if ((local_24 == 0) && (sVar2 == *(short *)((int)param_2 + 10))) goto code_r0x00406836;
      if (local_24 != 0) goto LAB_004068a0;
code_r0x0040686b:
      local_2c = 0;
      local_14 = 1;
      sVar2 = FUN_00405198(*(void **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),sVar2);
      if (sVar2 == -1) goto LAB_0040691f;
    }
LAB_004068a0:
    psVar4 = local_28 + 1;
  }
  uVar3 = local_2c;
  if (local_24 == 0) {
    local_2c = 0;
    local_14 = 1;
    sVar2 = FUN_00405198(*(void **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),
                         *(undefined2 *)(param_2 + 2));
    local_24 = (uint)(sVar2 == -1) << 2;
    uVar3 = local_2c;
    uVar1 = local_24;
    if (sVar2 != -1) {
      for (; local_2c = uVar1, local_24 = local_2c, local_30 != (short *)0x0;
          local_30 = (short *)((int)local_30 + -1)) {
        sVar2 = FUN_00405198(*(void **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),
                             *(undefined2 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
        if (sVar2 == -1) goto LAB_0040691f;
        uVar1 = local_24;
        uVar3 = local_2c;
      }
    }
  }
code_r0x00406927:
  local_2c = uVar3;
  iVar5 = *(int *)(*param_1 + 4);
  *(undefined4 *)((int)param_1 + iVar5 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + iVar5 + 0x20) = 0;
  uVar3 = local_24;
code_r0x00406941:
  local_14 = 0;
  iVar5 = *(int *)(*param_1 + 4);
  FUN_00405f74((void *)((int)param_1 + iVar5),
               (uint)(*(int *)((int)param_1 + iVar5 + 0x38) == 0) << 2 |
               uVar3 | *(uint *)((int)param_1 + iVar5 + 0xc),'\0');
  local_14 = 0xffffffff;
  FUN_004051ca();
  ExceptionList = local_1c;
  return param_1;
LAB_0040691f:
  local_24 = 4;
  uVar3 = local_2c;
  goto code_r0x00406927;
}

