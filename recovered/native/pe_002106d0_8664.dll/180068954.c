/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180068954 */

undefined8 *
FUN_180068954(undefined8 *param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
             ulonglong param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 local_88 [2];
  longlong local_78;
  longlong local_70;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_1;
  if (param_2 != 0) {
    lVar13 = *(longlong *)(param_2 + 0x20);
    lVar12 = *(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 3;
    if (((*(longlong *)(param_2 + 0x28) - lVar13 >> 3) * 0x6db6db6db6db6db7 +
         lVar12 * -0x21cfb2b78c13521d == 0) && (param_3 < (ulonglong)(lVar12 * 0x21cfb2b78c13521d)))
    {
      lVar9 = param_3 * 0x38;
      lVar12 = *(longlong *)(lVar13 + 0x18 + lVar9);
      if (((ulonglong)((*(longlong *)(lVar13 + 0x20 + lVar9) - lVar12 >> 3) * -0x71c71c71c71c71c7)
           <= param_4) ||
         ((lVar5 = *(longlong *)(lVar13 + lVar9),
          (ulonglong)(((longlong *)(lVar13 + lVar9))[1] - lVar5 >> 2) <= param_5 ||
          (lVar13 = *(longlong *)(param_2 + 0x38) + param_3 * 0x1a8,
          (ulonglong)(*(longlong *)(lVar13 + 0xd8) - *(longlong *)(lVar13 + 0xd0) >> 5) <= param_5))
         )) {
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
      uVar2 = *(uint *)(lVar5 + param_5 * 4);
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      local_58 = param_1 + 5;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      FUN_180068018();
      *(undefined4 *)(param_1 + 8) = 0;
      *(int *)local_50 = (int)param_3;
      *(int *)((longlong)local_50 + 4) = (int)param_4;
      *(int *)(local_50 + 1) = (int)param_5;
      lVar9 = *(longlong *)(lVar13 + 0xd0);
      lVar5 = param_5 * 0x20;
      if (*(ulonglong *)(lVar9 + 0x18 + lVar5) < 0x10) {
        lVar9 = lVar9 + lVar5;
      }
      else {
        lVar9 = *(longlong *)(lVar9 + lVar5);
      }
      uVar6 = FUN_180061ed8(lVar9);
      plVar11 = (longlong *)(lVar12 + param_4 * 0x48);
      local_50[2] = uVar6;
      if ((int)uVar2 < 2000) {
        if ((ulonglong)(longlong)(int)uVar2 < (plVar11[1] - *plVar11 >> 2) + 1000U) {
          *(undefined4 *)(local_50 + 4) =
               *(undefined4 *)(*plVar11 + -4000 + (longlong)(int)uVar2 * 4);
          *(undefined1 *)((longlong)local_50 + 0x42) = 1;
        }
      }
      else if (uVar2 < 3000) {
        lVar12 = plVar11[3];
        if ((ulonglong)uVar2 < (plVar11[4] - lVar12 >> 5) + 2000U) {
          lVar9 = (ulonglong)uVar2 * 0x20;
          if (*(ulonglong *)(lVar12 + -0xf9e8 + lVar9) < 0x10) {
            lVar12 = lVar12 + lVar9 + -64000;
          }
          else {
            lVar12 = *(longlong *)(lVar12 + -64000 + lVar9);
          }
          uVar6 = FUN_180061ed8(lVar12);
          local_50[3] = uVar6;
          *(undefined1 *)(local_50 + 8) = 1;
        }
      }
      if ((ulonglong)(*(longlong *)(lVar13 + 0x108) - *(longlong *)(lVar13 + 0x100)) <= param_5) {
        return local_50;
      }
      cVar1 = *(char *)(*(longlong *)(lVar13 + 0x100) + param_5);
      if (cVar1 == '\x03') {
        lVar12 = *(longlong *)(lVar13 + 0x178);
        if ((ulonglong)((*(longlong *)(lVar13 + 0x180) - lVar12 >> 3) * -0x5555555555555555) <=
            param_5) {
          return local_50;
        }
        lVar9 = *(longlong *)(lVar13 + 0x148);
        if ((ulonglong)((*(longlong *)(lVar13 + 0x150) - lVar9 >> 3) * -0x5555555555555555) <=
            param_5) {
          return local_50;
        }
        lVar13 = param_5 * 0x18;
        uVar7 = *(longlong *)(lVar9 + 8 + lVar13) - *(longlong *)(lVar9 + lVar13) >> 5;
        uVar14 = *(longlong *)(lVar12 + 8 + lVar13) - *(longlong *)(lVar12 + lVar13) >> 2;
        if (uVar7 < uVar14) {
          uVar14 = uVar7;
        }
        FUN_18005b2ca(&local_78);
        FUN_1800682b6(local_58,&local_78);
        FUN_18005a1b0(&local_78);
        for (uVar7 = 0; uVar7 < uVar14; uVar7 = uVar7 + 1) {
          lVar5 = *(longlong *)(lVar9 + lVar13);
          lVar8 = uVar7 * 0x20;
          if (*(ulonglong *)(lVar5 + 0x18 + lVar8) < 0x10) {
            lVar5 = lVar5 + lVar8;
          }
          else {
            lVar5 = *(longlong *)(lVar5 + lVar8);
          }
          local_88[0] = FUN_180061ed8(lVar5);
          FUN_180068836(local_58,&local_78,uVar7 * 4 + *(longlong *)(lVar12 + lVar13),local_88);
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
      lVar12 = *(longlong *)(lVar13 + 0x178);
      if ((ulonglong)
          (*(longlong *)(lVar12 + 8 + param_5 * 0x18) - *(longlong *)(lVar12 + param_5 * 0x18)) < 5)
      {
        return local_50;
      }
      FUN_18005b2ca(&local_78);
      FUN_1800682b6(local_58,&local_78);
      plVar11 = (longlong *)(lVar12 + param_5 * 0x18);
      FUN_18005a1b0(&local_78);
      *(undefined1 *)((longlong)local_50 + 0x43) = 1;
      puVar4 = DAT_1804178d0;
      iVar3 = *(int *)*plVar11;
      if (iVar3 < 3) {
        FUN_180069100(&local_78,iVar3,(longlong)((int *)*plVar11)[1]);
        for (; local_78 != local_70; local_78 = local_78 + 8) {
          local_60 = local_50[6];
          FUN_180068660(local_58,local_88,&local_60,local_78);
        }
        FUN_180004cea(&local_78);
        if ((ulonglong)(plVar11[1] - *plVar11) < 9) {
          return local_50;
        }
        if (*(int *)(*plVar11 + 8) == 0) {
          return local_50;
        }
        lVar12 = *(longlong *)(lVar13 + 0x148);
        if ((ulonglong)((*(longlong *)(lVar13 + 0x150) - lVar12 >> 3) * -0x5555555555555555) <=
            param_5) {
          return local_50;
        }
        plVar11 = *(longlong **)(lVar12 + param_5 * 0x18);
        if ((ulonglong)(*(longlong *)(lVar12 + 8 + param_5 * 0x18) - (longlong)plVar11) < 0x41) {
          return local_50;
        }
        if (0xf < (ulonglong)plVar11[3]) {
          plVar11 = (longlong *)*plVar11;
        }
        local_88[0] = FUN_180061ed8(plVar11);
        local_60._0_4_ = 0xffffffff;
        FUN_180068836(local_58,&local_78);
        plVar11 = (longlong *)(lVar12 + param_5 * 0x18);
        lVar13 = *plVar11;
        if (*(ulonglong *)(lVar13 + 0x38) < 0x10) {
          lVar13 = lVar13 + 0x20;
        }
        else {
          lVar13 = *(longlong *)(lVar13 + 0x20);
        }
        local_88[0] = FUN_180061ed8(lVar13);
        local_60._0_4_ = 0xfffffffe;
        FUN_180068836(local_58,&local_78);
        lVar13 = *plVar11;
        if (*(ulonglong *)(lVar13 + 0x58) < 0x10) {
          lVar13 = lVar13 + 0x40;
        }
        else {
          lVar13 = *(longlong *)(lVar13 + 0x40);
        }
        local_88[0] = FUN_180061ed8(lVar13);
        local_60 = CONCAT44(local_60._4_4_,0xfffffffd);
        FUN_180068836(local_58,&local_78);
        return local_50;
      }
      if (iVar3 != 3) {
        return local_50;
      }
      for (puVar15 = DAT_1804178c8; puVar15 != puVar4; puVar15 = puVar15 + 4) {
        puVar10 = puVar15;
        if (0xf < (ulonglong)puVar15[3]) {
          puVar10 = (undefined8 *)*puVar15;
        }
        local_88[0] = FUN_180061ed8(puVar10);
        local_60 = local_50[6];
        FUN_180068660(local_58,&local_78,&local_60,local_88);
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

