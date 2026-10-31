/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180069428 */

undefined8 *
FUN_180069428(undefined8 *param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
             ulonglong param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 local_90 [2];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_1;
  if (param_2 != 0) {
    lVar12 = *(longlong *)(param_2 + 0x28);
    lVar10 = *(longlong *)(param_2 + 0x50) - *(longlong *)(param_2 + 0x48) >> 4;
    if (((*(longlong *)(param_2 + 0x30) - lVar12 >> 3) * -0x71c71c71c71c71c7 +
         lVar10 * 0x79435e50d79435e5 == 0) && (param_3 < (ulonglong)(lVar10 * -0x79435e50d79435e5)))
    {
      lVar10 = *(longlong *)(lVar12 + 0x28 + param_3 * 0x48);
      if (((ulonglong)(*(longlong *)(lVar12 + 0x30 + param_3 * 0x48) - lVar10 >> 6) <= param_4) ||
         ((lVar12 = lVar12 + param_3 * 0x48, lVar7 = *(longlong *)(lVar12 + 8),
          (ulonglong)(*(longlong *)(lVar12 + 0x10) - lVar7 >> 2) <= param_5 ||
          (lVar12 = *(longlong *)(param_2 + 0x48) + param_3 * 0x130,
          (ulonglong)
          ((*(longlong *)(lVar12 + 0x80) - *(longlong *)(lVar12 + 0x78) >> 3) * -0x3333333333333333)
          <= param_5)))) {
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = 0;
        local_58 = param_1 + 5;
        param_1[2] = 0;
        param_1[3] = 0;
        *(undefined4 *)(param_1 + 4) = 0;
        FUN_180068018();
        *(undefined4 *)(local_50 + 8) = 0;
        return local_50;
      }
      uVar2 = *(uint *)(lVar7 + param_5 * 4);
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      local_58 = param_1 + 5;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      FUN_180068018();
      *(undefined4 *)(local_50 + 8) = 0;
      *(int *)local_50 = (int)param_3;
      *(int *)((longlong)local_50 + 4) = (int)param_4;
      *(int *)(local_50 + 1) = (int)param_5;
      lVar7 = *(longlong *)(lVar12 + 0x78);
      if (*(ulonglong *)(lVar7 + 0x20 + param_5 * 0x28) < 0x10) {
        lVar7 = lVar7 + param_5 * 0x28 + 8;
      }
      else {
        lVar7 = *(longlong *)(lVar7 + 8 + param_5 * 0x28);
      }
      uVar5 = FUN_180061ed8(lVar7);
      lVar10 = lVar10 + param_4 * 0x40;
      local_50[2] = uVar5;
      if ((int)uVar2 < 2000) {
        if ((ulonglong)(longlong)(int)uVar2 <
            (*(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8) >> 2) + 1000U) {
          *(undefined4 *)(local_50 + 4) =
               *(undefined4 *)(*(longlong *)(lVar10 + 8) + -4000 + (longlong)(int)uVar2 * 4);
          *(undefined1 *)((longlong)local_50 + 0x42) = 1;
        }
      }
      else if (uVar2 < 3000) {
        uVar13 = (ulonglong)uVar2;
        lVar7 = *(longlong *)(lVar10 + 0x28);
        if (uVar13 < (*(longlong *)(lVar10 + 0x30) - lVar7 >> 3) * -0x3333333333333333 + 2000U) {
          if (*(ulonglong *)(lVar7 + -0x13860 + uVar13 * 0x28) < 0x10) {
            lVar10 = lVar7 + uVar13 * 0x28 + -0x13878;
          }
          else {
            lVar10 = *(longlong *)(lVar7 + -0x13878 + uVar13 * 0x28);
          }
          uVar5 = FUN_180061ed8(lVar10);
          local_50[3] = uVar5;
          *(undefined1 *)(local_50 + 8) = 1;
        }
      }
      if ((ulonglong)(*(longlong *)(lVar12 + 0xa0) - *(longlong *)(lVar12 + 0x98)) <= param_5) {
        return local_50;
      }
      cVar1 = *(char *)(*(longlong *)(lVar12 + 0x98) + param_5);
      if (cVar1 == '\x03') {
        lVar10 = *(longlong *)(lVar12 + 0xf8);
        if ((ulonglong)(*(longlong *)(lVar12 + 0x100) - lVar10 >> 5) <= param_5) {
          return local_50;
        }
        lVar7 = *(longlong *)(lVar12 + 0xd8);
        if ((ulonglong)(*(longlong *)(lVar12 + 0xe0) - lVar7 >> 5) <= param_5) {
          return local_50;
        }
        lVar12 = param_5 * 0x20;
        uVar6 = (*(longlong *)(lVar7 + 0x10 + lVar12) - *(longlong *)(lVar7 + 8 + lVar12) >> 3) *
                -0x3333333333333333;
        uVar13 = *(longlong *)(lVar10 + 0x10 + lVar12) - *(longlong *)(lVar10 + 8 + lVar12) >> 2;
        if (uVar6 < uVar13) {
          uVar13 = uVar6;
        }
        FUN_18005b2ca(&local_78);
        FUN_1800682b6(local_58,&local_78);
        FUN_18005a1b0(&local_78);
        for (uVar6 = 0; uVar6 < uVar13; uVar6 = uVar6 + 1) {
          lVar8 = *(longlong *)(lVar7 + lVar12 + 8);
          if (*(ulonglong *)(lVar8 + 0x20 + uVar6 * 0x28) < 0x10) {
            lVar8 = lVar8 + uVar6 * 0x28 + 8;
          }
          else {
            lVar8 = *(longlong *)(lVar8 + 8 + uVar6 * 0x28);
          }
          local_90[0] = FUN_180061ed8(lVar8);
          FUN_180068836(local_58,&local_78,uVar6 * 4 + *(longlong *)(lVar10 + lVar12 + 8),local_90);
        }
        return local_50;
      }
      if (cVar1 != '\x02') {
        if (cVar1 != '\x01') {
          return local_50;
        }
        *(undefined1 *)((longlong)local_50 + 0x41) = 1;
        return local_50;
      }
      lVar10 = *(longlong *)(lVar12 + 0xf8);
      local_80 = param_5 * 0x20;
      if ((ulonglong)
          (*(longlong *)(lVar10 + 0x10 + local_80) - *(longlong *)(lVar10 + 8 + local_80)) < 5) {
        return local_50;
      }
      FUN_18005b2ca(&local_78);
      FUN_1800682b6(local_58,&local_78);
      lVar10 = lVar10 + local_80;
      FUN_18005a1b0(&local_78);
      *(undefined1 *)((longlong)local_50 + 0x43) = 1;
      puVar4 = DAT_1804178d0;
      iVar3 = **(int **)(lVar10 + 8);
      if (iVar3 < 3) {
        FUN_180069be1(&local_78,iVar3,(longlong)(*(int **)(lVar10 + 8))[1]);
        for (; local_78 != local_70; local_78 = local_78 + 8) {
          local_60 = local_50[6];
          FUN_180068660(local_58,local_90,&local_60,local_78);
        }
        FUN_180004cea(&local_78);
        if ((ulonglong)(*(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8)) < 9) {
          return local_50;
        }
        if (*(int *)(*(longlong *)(lVar10 + 8) + 8) == 0) {
          return local_50;
        }
        lVar10 = *(longlong *)(lVar12 + 0xd8);
        if ((ulonglong)(*(longlong *)(lVar12 + 0xe0) - lVar10 >> 5) <= param_5) {
          return local_50;
        }
        lVar12 = *(longlong *)(lVar10 + 8 + local_80);
        if ((ulonglong)
            ((*(longlong *)(lVar10 + 0x10 + local_80) - lVar12 >> 3) * -0x3333333333333333) < 3) {
          return local_50;
        }
        if (*(ulonglong *)(lVar12 + 0x20) < 0x10) {
          lVar12 = lVar12 + 8;
        }
        else {
          lVar12 = *(longlong *)(lVar12 + 8);
        }
        local_90[0] = FUN_180061ed8(lVar12);
        local_60._0_4_ = 0xffffffff;
        FUN_180068836(local_58,&local_78);
        lVar10 = lVar10 + local_80;
        lVar12 = *(longlong *)(lVar10 + 8);
        if (*(ulonglong *)(lVar12 + 0x48) < 0x10) {
          lVar12 = lVar12 + 0x30;
        }
        else {
          lVar12 = *(longlong *)(lVar12 + 0x30);
        }
        local_90[0] = FUN_180061ed8(lVar12);
        local_60._0_4_ = 0xfffffffe;
        FUN_180068836(local_58,&local_78);
        lVar12 = *(longlong *)(lVar10 + 8);
        if (*(ulonglong *)(lVar12 + 0x70) < 0x10) {
          lVar12 = lVar12 + 0x58;
        }
        else {
          lVar12 = *(longlong *)(lVar12 + 0x58);
        }
        local_90[0] = FUN_180061ed8(lVar12);
        local_60 = CONCAT44(local_60._4_4_,0xfffffffd);
        FUN_180068836(local_58,&local_78);
        return local_50;
      }
      if (iVar3 != 3) {
        return local_50;
      }
      for (puVar11 = DAT_1804178c8; puVar11 != puVar4; puVar11 = puVar11 + 4) {
        puVar9 = puVar11;
        if (0xf < (ulonglong)puVar11[3]) {
          puVar9 = (undefined8 *)*puVar11;
        }
        local_90[0] = FUN_180061ed8(puVar9);
        local_60 = local_50[6];
        FUN_180068660(local_58,&local_78,&local_60,local_90);
      }
      return local_50;
    }
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  local_58 = param_1 + 5;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_180068018();
  *(undefined4 *)(local_50 + 8) = 0;
  return local_50;
}

