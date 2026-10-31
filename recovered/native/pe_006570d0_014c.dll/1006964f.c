/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006964f */

uint * FUN_1006964f(uint *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_50;
  undefined4 local_4c [2];
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_34;
  uint local_30;
  uint *local_2c;
  uint local_28;
  uint *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_50;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2390;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 0x18);
    iVar5 = *(int *)(param_2 + 0x2c) - *(int *)(param_2 + 0x28) >> 3;
    if (((*(int *)(param_2 + 0x1c) - iVar4 >> 3) * -0x33333333 + iVar5 * -0x3cf3cf3d == 0) &&
       (param_3 < (uint)(iVar5 * 0x3cf3cf3d))) {
      iVar5 = *(int *)(iVar4 + 0x14 + param_3 * 0x28);
      if (((uint)(*(int *)(iVar4 + 0x18 + param_3 * 0x28) - iVar5 >> 5) <= param_4) ||
         ((iVar4 = iVar4 + param_3 * 0x28, iVar2 = *(int *)(iVar4 + 4),
          (uint)(*(int *)(iVar4 + 8) - iVar2 >> 2) <= param_5 ||
          (local_24 = (uint *)(*(int *)(param_2 + 0x28) + param_3 * 0xa8),
          (uint)((*(int *)((int)local_24 + 0x50) - *(int *)((int)local_24 + 0x4c) >> 2) *
                -0x49249249) <= param_5)))) {
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
      local_28 = *(uint *)(iVar2 + param_5 * 4);
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
      local_34 = iVar5;
      uVar3 = FUN_1006235a();
      iVar4 = local_34 + param_4 * 0x20;
      param_1[3] = uVar3;
      if ((int)local_28 < 2000) {
        if (local_28 < (*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 2) + 1000U) {
          param_1[5] = *(uint *)(*(int *)(iVar4 + 4) + -4000 + local_28 * 4);
          *(undefined1 *)((int)param_1 + 0x26) = 1;
        }
      }
      else if ((local_28 < 3000) &&
              (local_28 <
               (*(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x14) >> 2) * -0x49249249 + 2000U)) {
        uVar3 = FUN_1006235a();
        param_1[4] = uVar3;
        *(undefined1 *)(param_1 + 9) = 1;
      }
      if ((uint)(*(int *)((int)local_24 + 0x60) - *(int *)((int)local_24 + 0x5c)) <= param_5) {
        ExceptionList = local_1c;
        return param_1;
      }
      cVar1 = *(char *)(*(int *)((int)local_24 + 0x5c) + param_5);
      if (cVar1 == '\x03') {
        local_28 = *(int *)((int)local_24 + 0x8c);
        if ((uint)((int)(*(int *)((int)local_24 + 0x90) - local_28) >> 4) <= param_5) {
          ExceptionList = local_1c;
          return param_1;
        }
        local_34 = *(int *)((int)local_24 + 0x7c);
        if ((uint)((int)(*(int *)((int)local_24 + 0x80) - local_34) >> 4) <= param_5) {
          ExceptionList = local_1c;
          return param_1;
        }
        local_24 = (uint *)(param_5 * 0x10);
        uVar3 = (*(int *)(local_34 + 8 + (int)local_24) - *(int *)(local_34 + 4 + (int)local_24) >>
                2) * -0x49249249;
        local_44 = *(int *)(local_28 + 8 + (int)local_24) - *(int *)(local_28 + 4 + (int)local_24)
                   >> 2;
        if (uVar3 < local_44) {
          local_44 = uVar3;
        }
        FUN_1005c1aa();
        local_14 = 4;
        FUN_100686dc(&local_40);
        local_14 = 0xffffffff;
        local_28 = local_28 + (int)local_24;
        local_34 = local_34 + (int)local_24;
        FUN_1005ae6a();
        for (local_24 = (uint *)0x0; local_24 < local_44; local_24 = (uint *)((int)local_24 + 1)) {
          local_14 = 3;
          local_4c[0] = FUN_1006235a();
          FUN_10068b70(&local_40,(int)local_24 * 4 + *(int *)(local_28 + 4),local_4c);
        }
        ExceptionList = local_1c;
        return param_1;
      }
      if (cVar1 != '\x02') {
        if (cVar1 != '\x01') {
          ExceptionList = local_1c;
          return param_1;
        }
        *(undefined1 *)((int)param_1 + 0x25) = 1;
        ExceptionList = local_1c;
        return param_1;
      }
      local_44 = *(int *)((int)local_24 + 0x8c);
      local_50 = param_5 * 0x10;
      if ((uint)(*(int *)(local_44 + 8 + local_50) - *(int *)(local_44 + 4 + local_50)) < 5) {
        ExceptionList = local_1c;
        return param_1;
      }
      FUN_1005c1aa();
      local_14 = 7;
      FUN_100686dc(&local_40);
      local_14 = 0xffffffff;
      iVar5 = local_44 + local_50;
      FUN_1005ae6a();
      *(undefined1 *)((int)param_1 + 0x27) = 1;
      iVar4 = **(int **)(iVar5 + 4);
      local_44 = iVar5;
      if (iVar4 < 3) {
        local_14 = 3;
        FUN_10069d19((*(int **)(iVar5 + 4))[1]);
        local_14 = 6;
        local_34 = local_3c;
        while (local_40 != local_34) {
          local_30 = param_1[7];
          local_28 = local_40;
          FUN_10068a44(local_4c,&local_30,local_40);
          local_40 = local_28 + 4;
        }
        local_14 = 0xffffffff;
        FUN_10004eae();
        if ((uint)(*(int *)(local_44 + 8) - *(int *)(local_44 + 4)) < 9) {
          ExceptionList = local_1c;
          return param_1;
        }
        if (*(int *)(*(int *)(local_44 + 4) + 8) == 0) {
          ExceptionList = local_1c;
          return param_1;
        }
        iVar4 = *(int *)((int)local_24 + 0x7c);
        if ((uint)(*(int *)((int)local_24 + 0x80) - iVar4 >> 4) <= param_5) {
          ExceptionList = local_1c;
          return param_1;
        }
        if ((uint)((*(int *)(iVar4 + 8 + local_50) - *(int *)(iVar4 + 4 + local_50) >> 2) *
                  -0x49249249) < 3) {
          ExceptionList = local_1c;
          return param_1;
        }
        local_14 = 3;
        local_24 = (uint *)iVar4;
        local_4c[0] = FUN_1006235a();
        local_30 = 0xffffffff;
        FUN_10068b70(&local_40,&local_30,local_4c);
        local_24 = (uint *)((int)local_24 + local_50);
        local_4c[0] = FUN_1006235a();
        local_30 = 0xfffffffe;
        FUN_10068b70(&local_40,&local_30,local_4c);
        local_4c[0] = FUN_1006235a();
        local_30 = 0xfffffffd;
        FUN_10068b70(&local_40,&local_30,local_4c);
        ExceptionList = local_1c;
        return param_1;
      }
      if (iVar4 != 3) {
        ExceptionList = local_1c;
        return param_1;
      }
      local_28 = DAT_1039c99c;
      for (local_24 = (uint *)DAT_1039c998; local_24 != (uint *)local_28;
          local_24 = (uint *)((int)local_24 + 0x18)) {
        local_14 = 3;
        local_4c[0] = FUN_1006235a();
        local_30 = param_1[7];
        FUN_10068a44(&local_40,&local_30,local_4c);
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

