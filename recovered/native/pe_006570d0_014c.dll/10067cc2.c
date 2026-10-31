/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10067cc2 */

uint * FUN_10067cc2(uint *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *local_50;
  undefined4 local_4c [2];
  int local_44;
  int local_40;
  uint local_38;
  int *local_34;
  uint local_30;
  uint *local_2c;
  int local_28;
  uint *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_50;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c22e0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x14);
    iVar6 = *(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x20) >> 3;
    if (((*(int *)(param_2 + 0x18) - iVar3 >> 2) * 0x3cf3cf3d + iVar6 * -0x4f72c235 == 0) &&
       (param_3 < (uint)(iVar6 * 0x4f72c235))) {
      iVar6 = param_3 * 0x54;
      local_24 = *(uint **)(iVar3 + 0xc + iVar6);
      if (((uint)((*(int *)(iVar3 + 0x10 + iVar6) - (int)local_24 >> 2) * 0x38e38e39) <= param_4) ||
         ((iVar4 = *(int *)(iVar3 + iVar6),
          (uint)(((int *)(iVar3 + iVar6))[1] - iVar4 >> 2) <= param_5 ||
          (local_28 = *(int *)(param_2 + 0x20) + param_3 * 0xe8,
          (uint)((*(int *)(local_28 + 0x7c) - *(int *)(local_28 + 0x78) >> 3) * -0x55555555) <=
          param_5)))) {
        local_24 = param_1 + 6;
        param_1[4] = 0;
        param_1[5] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        local_20 = (undefined1 *)&local_50;
        FUN_10068390();
        param_1[9] = 0;
        ExceptionList = local_1c;
        return param_1;
      }
      uVar5 = *(uint *)(iVar4 + param_5 * 4);
      local_2c = param_1 + 6;
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      local_20 = (undefined1 *)&local_50;
      FUN_10068390();
      param_1[9] = 0;
      local_14 = 3;
      *param_1 = param_3;
      param_1[1] = param_4;
      param_1[2] = param_5;
      local_38 = param_5 * 3;
      local_34 = (int *)uVar5;
      uVar5 = FUN_1006235a();
      piVar1 = (int *)((int)local_24 + param_4 * 0x24);
      param_1[3] = uVar5;
      if ((int)local_34 < 2000) {
        if (local_34 < (piVar1[1] - *piVar1 >> 2) + 1000U) {
          param_1[5] = *(uint *)(*piVar1 + -4000 + (int)local_34 * 4);
          *(undefined1 *)((int)param_1 + 0x26) = 1;
        }
      }
      else if ((local_34 < 3000) && (local_34 < (piVar1[4] - piVar1[3] >> 3) * -0x55555555 + 2000U))
      {
        uVar5 = FUN_1006235a();
        param_1[4] = uVar5;
        *(undefined1 *)(param_1 + 9) = 1;
      }
      if ((uint)(*(int *)(local_28 + 0x94) - *(int *)(local_28 + 0x90)) <= param_5) {
        ExceptionList = local_1c;
        return param_1;
      }
      cVar2 = *(char *)(*(int *)(local_28 + 0x90) + param_5);
      if (cVar2 == '\x03') {
        local_34 = *(int **)(local_28 + 0xcc);
        if ((uint)((*(int *)(local_28 + 0xd0) - (int)local_34 >> 2) * -0x55555555) <= param_5) {
          ExceptionList = local_1c;
          return param_1;
        }
        iVar3 = *(int *)(local_28 + 0xb4);
        if ((uint)((*(int *)(local_28 + 0xb8) - iVar3 >> 2) * -0x55555555) <= param_5) {
          ExceptionList = local_1c;
          return param_1;
        }
        local_24 = (uint *)(param_5 * 0xc);
        uVar5 = (*(int *)(iVar3 + 4 + (int)local_24) - *(int *)(iVar3 + (int)local_24) >> 3) *
                -0x55555555;
        local_38 = *(int *)((int)local_34 + 4 + (int)local_24) -
                   *(int *)((int)local_34 + (int)local_24) >> 2;
        if (uVar5 < local_38) {
          local_38 = uVar5;
        }
        local_28 = iVar3;
        FUN_1005c1aa();
        local_14 = 4;
        FUN_100686dc(&local_44);
        local_14 = 0xffffffff;
        local_34 = (int *)((int)local_34 + (int)local_24);
        local_28 = local_28 + (int)local_24;
        FUN_1005ae6a();
        for (local_24 = (uint *)0x0; local_24 < local_38; local_24 = (uint *)((int)local_24 + 1)) {
          local_14 = 3;
          local_4c[0] = FUN_1006235a();
          FUN_10068b70(&local_44,(int)local_24 * 4 + *local_34,local_4c);
        }
        ExceptionList = local_1c;
        return param_1;
      }
      if (cVar2 != '\x02') {
        if (cVar2 != '\x01') {
          ExceptionList = local_1c;
          return param_1;
        }
        *(undefined1 *)((int)param_1 + 0x25) = 1;
        ExceptionList = local_1c;
        return param_1;
      }
      local_24 = *(uint **)(local_28 + 0xcc);
      if ((uint)(*(int *)((int)local_24 + 4 + local_38 * 4) - *(int *)((int)local_24 + local_38 * 4)
                ) < 5) {
        ExceptionList = local_1c;
        return param_1;
      }
      FUN_1005c1aa();
      local_14 = 7;
      FUN_100686dc(&local_44);
      local_14 = 0xffffffff;
      piVar1 = (int *)((int)local_24 + local_38 * 4);
      FUN_1005ae6a();
      *(undefined1 *)((int)param_1 + 0x27) = 1;
      iVar3 = *(int *)*piVar1;
      local_50 = piVar1;
      if (iVar3 < 3) {
        local_14 = 3;
        FUN_10068416(((int *)*piVar1)[1]);
        local_14 = 6;
        local_34 = (int *)local_40;
        while ((int *)local_44 != local_34) {
          local_30 = param_1[7];
          local_24 = (uint *)local_44;
          FUN_10068a44(local_4c,&local_30,local_44);
          local_44 = (int)local_24 + 4;
        }
        local_14 = 0xffffffff;
        FUN_10004eae();
        if ((uint)(local_50[1] - *local_50) < 9) {
          ExceptionList = local_1c;
          return param_1;
        }
        if (*(int *)(*local_50 + 8) == 0) {
          ExceptionList = local_1c;
          return param_1;
        }
        local_24 = *(uint **)(local_28 + 0xb4);
        if ((uint)((*(int *)(local_28 + 0xb8) - (int)local_24 >> 2) * -0x55555555) <= param_5) {
          ExceptionList = local_1c;
          return param_1;
        }
        if ((uint)((*(int *)((int)local_24 + 4 + local_38 * 4) -
                    *(int *)((int)local_24 + local_38 * 4) >> 3) * -0x55555555) < 3) {
          ExceptionList = local_1c;
          return param_1;
        }
        local_14 = 3;
        local_4c[0] = FUN_1006235a();
        local_30 = 0xffffffff;
        FUN_10068b70(&local_44,&local_30,local_4c);
        local_24 = (uint *)((int)local_24 + local_38 * 4);
        local_4c[0] = FUN_1006235a();
        local_30 = 0xfffffffe;
        FUN_10068b70(&local_44,&local_30,local_4c);
        local_4c[0] = FUN_1006235a();
        local_30 = 0xfffffffd;
        FUN_10068b70(&local_44,&local_30,local_4c);
        ExceptionList = local_1c;
        return param_1;
      }
      if (iVar3 != 3) {
        ExceptionList = local_1c;
        return param_1;
      }
      local_28 = DAT_1039c99c;
      for (local_24 = (uint *)DAT_1039c998; local_24 != (uint *)local_28;
          local_24 = (uint *)((int)local_24 + 0x18)) {
        local_14 = 3;
        local_4c[0] = FUN_1006235a();
        local_30 = param_1[7];
        FUN_10068a44(&local_44,&local_30,local_4c);
      }
      ExceptionList = local_1c;
      return param_1;
    }
  }
  local_24 = param_1 + 6;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10068390();
  param_1[9] = 0;
  ExceptionList = local_1c;
  return param_1;
}

