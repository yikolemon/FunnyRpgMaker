/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018c930 */

void FUN_18018c930(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  uVar11 = (longlong)param_2 - (longlong)param_1;
  do {
    local_68 = param_2;
    if ((longlong)uVar11 < 0x528) {
      if ((param_1 != param_2) && (param_1 + 5 != param_2)) {
        lVar6 = -0x28;
        puVar7 = param_1 + 5;
        puVar4 = param_1;
        do {
          puVar10 = puVar7;
          local_98 = puVar4[5];
          uStack_90 = puVar4[6];
          puVar4[6] = 0;
          local_88 = puVar4[7];
          uStack_80 = puVar4[8];
          puVar4[7] = 0;
          puVar4[8] = 0;
          local_78 = *(int *)(puVar4 + 9);
          lVar9 = lVar6;
          puVar7 = puVar10;
          do {
            puVar4 = puVar7;
            if (*(int *)(puVar7 + -1) <= local_78) break;
            *puVar7 = puVar7[-5];
            FUN_180004cea(puVar7 + 1);
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar7 + -4);
            *(undefined4 *)((longlong)puVar7 + 0xc) = *(undefined4 *)((longlong)puVar7 + -0x1c);
            *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar7 + -3);
            *(undefined4 *)((longlong)puVar7 + 0x14) = *(undefined4 *)((longlong)puVar7 + -0x14);
            puVar7[3] = puVar7[-2];
            puVar7[-4] = 0;
            puVar7[-3] = 0;
            puVar7[-2] = 0;
            *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar7 + -1);
            lVar9 = lVar9 + 0x28;
            puVar4 = param_1;
            puVar7 = puVar7 + -5;
          } while (lVar9 != 0);
          *puVar4 = local_98;
          if (puVar4 != &local_98) {
            FUN_180004cea(puVar4 + 1);
            puVar4[1] = uStack_90;
            puVar4[2] = local_88;
            puVar4[3] = uStack_80;
            uStack_90 = 0;
            local_88 = 0;
            uStack_80 = 0;
          }
          *(int *)(puVar4 + 4) = local_78;
          FUN_180004cea(&uStack_90);
          lVar6 = lVar6 + -0x28;
          puVar7 = puVar10 + 5;
          puVar4 = puVar10;
        } while (puVar10 + 5 != local_68);
      }
      return;
    }
    if ((longlong)param_3 < 1) {
      uVar3 = uVar11 / 0x50 + 1;
      puVar7 = param_1 + (uVar11 / 0x50) * 5 + -1;
      do {
        local_98 = puVar7[-4];
        uStack_80 = puVar7[-1];
        puVar7[-1] = 0;
        uStack_90 = puVar7[-3];
        local_88 = puVar7[-2];
        puVar7[-3] = 0;
        puVar7[-2] = 0;
        local_78 = *(int *)puVar7;
        FUN_18018d0f2(param_1,uVar3 - 2,uVar11 / 0x28,&local_98);
        FUN_180004cea(&uStack_90);
        uVar3 = uVar3 - 1;
        puVar7 = puVar7 + -5;
      } while (1 < uVar3);
      lVar6 = (longlong)local_68 - (longlong)param_1;
      puVar7 = local_68;
      do {
        puVar4 = puVar7 + -5;
        if (0x4f < uVar11) {
          local_98 = *puVar4;
          uStack_80 = puVar7[-2];
          puVar7[-2] = 0;
          uStack_90 = puVar7[-4];
          local_88 = puVar7[-3];
          puVar7[-4] = 0;
          puVar7[-3] = 0;
          local_78 = *(int *)(puVar7 + -1);
          *puVar4 = *param_1;
          if (puVar4 != param_1) {
            FUN_180004cea(puVar7 + -4);
            puVar7[-4] = param_1[1];
            puVar7[-3] = param_1[2];
            puVar7[-2] = param_1[3];
            param_1[1] = 0;
            param_1[2] = 0;
            param_1[3] = 0;
          }
          *(undefined4 *)(puVar7 + -1) = *(undefined4 *)(param_1 + 4);
          FUN_18018d0f2(param_1,0,(lVar6 + -0x28 >> 3) * -0x3333333333333333,&local_98);
          FUN_180004cea(&uStack_90);
        }
        local_68 = local_68 + -5;
        uVar11 = (longlong)local_68 - (longlong)param_1;
        lVar6 = lVar6 + -0x28;
        puVar7 = puVar4;
      } while (0x28 < lVar6);
      return;
    }
    puVar4 = param_1 + (uVar11 / 0x50) * 5;
    puVar7 = param_2 + -5;
    if ((longlong)puVar7 - (longlong)param_1 < 0x641) {
      FUN_18018d305(param_1,puVar4,puVar7);
    }
    else {
      uVar3 = ((ulonglong)((longlong)puVar7 - (longlong)param_1) >> 3) * -0x3333333333333333 + 1;
      uVar8 = uVar3 >> 3;
      lVar9 = (uVar3 & 0xfffffffffffffff8) * 5;
      lVar6 = (longlong)param_1 + lVar9;
      FUN_18018d305(param_1,lVar6,param_1 + uVar8 * 10);
      FUN_18018d305(puVar4 + uVar8 * -5,puVar4,lVar9 + (longlong)puVar4);
      FUN_18018d305(puVar7 + uVar8 * -10,puVar7 + uVar8 * -5,puVar7);
      FUN_18018d305(lVar6,puVar4,puVar7 + uVar8 * -5);
    }
    do {
      puVar7 = puVar4;
      if (puVar7 <= param_1) break;
      puVar4 = puVar7 + -5;
    } while (*(int *)(puVar7 + 4) == *(int *)(puVar7 + -1));
    puVar4 = param_1 + (uVar11 / 0x50) * 5;
    do {
      puVar5 = puVar4 + 5;
      puVar10 = puVar7;
      puVar12 = puVar5;
      if (local_68 <= puVar5) break;
      piVar1 = (int *)(puVar4 + 9);
      puVar4 = puVar5;
    } while (*(int *)(puVar7 + 4) == *piVar1);
LAB_18018ca95:
    if (puVar12 < local_68) {
      if (*(int *)(puVar12 + 4) <= *(int *)(puVar10 + 4)) {
        if (*(int *)(puVar12 + 4) < *(int *)(puVar10 + 4)) goto joined_r0x00018018cad0;
        if (puVar12 == puVar5) {
          puVar5 = puVar5 + 5;
        }
        else {
          FUN_18018d35e(puVar5,puVar12);
          puVar5 = puVar5 + 5;
        }
      }
      puVar12 = puVar12 + 5;
      goto LAB_18018ca95;
    }
joined_r0x00018018cad0:
    while (puVar4 = puVar7, param_1 < puVar4) {
      puVar7 = puVar4 + -5;
      if (*(int *)(puVar10 + 4) <= *(int *)(puVar4 + -1)) {
        if (*(int *)(puVar10 + 4) < *(int *)(puVar4 + -1)) break;
        puVar2 = puVar10 + -5;
        bVar13 = puVar4 != puVar10;
        puVar10 = puVar2;
        if (bVar13) {
          FUN_18018d35e(puVar2,puVar7);
        }
      }
    }
    if ((puVar12 != local_68) || (puVar4 != param_1)) {
      if (puVar4 == param_1) {
        if (puVar5 != puVar12) {
          FUN_18018d35e(puVar10,puVar5);
        }
        puVar5 = puVar5 + 5;
        FUN_18018d35e(puVar10,puVar12);
        puVar7 = param_1;
        puVar10 = puVar10 + 5;
        puVar12 = puVar12 + 5;
      }
      else {
        puVar7 = puVar4 + -5;
        if (puVar12 == local_68) {
          puVar2 = puVar10 + -5;
          if (puVar4 != puVar10) {
            FUN_18018d35e(puVar7,puVar2);
          }
          puVar5 = puVar5 + -5;
          FUN_18018d35e(puVar2,puVar5);
          puVar10 = puVar2;
        }
        else {
          FUN_18018d35e(puVar12,puVar7);
          puVar12 = puVar12 + 5;
        }
      }
      goto LAB_18018ca95;
    }
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    if ((longlong)puVar10 - (longlong)param_1 < (longlong)param_2 - (longlong)puVar5) {
      FUN_18018c930(param_1,puVar10);
      param_1 = puVar5;
    }
    else {
      FUN_18018c930(puVar5,local_68);
      local_68 = puVar10;
    }
    uVar11 = (longlong)local_68 - (longlong)param_1;
    param_2 = local_68;
  } while( true );
}

