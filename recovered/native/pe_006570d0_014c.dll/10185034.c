/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10185034 */

void __fastcall
FUN_10185034(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  uint local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_34;
  uVar9 = (int)param_2 - (int)param_1;
  puVar7 = param_1;
  if ((int)uVar9 < 0x81) {
LAB_1018534c:
    local_34 = puVar7;
    puVar7 = local_34;
    local_18 = param_4;
    local_28 = param_2;
    if ((local_34 != param_2) && (puVar10 = local_34 + 1, puVar10 != param_2)) {
      puVar4 = (undefined4 *)0x0;
      puVar8 = puVar10;
      do {
        local_30 = (undefined4 *)*puVar8;
        local_2c = puVar4;
        local_1c = local_30;
        do {
          cVar2 = FUN_1018545a((int)local_34 + (int)puVar4);
          if (cVar2 == '\0') {
            puVar11 = (undefined4 *)((int)puVar4 + (int)puVar10);
            break;
          }
          *(undefined4 *)((int)puVar10 + (int)puVar4) = *(undefined4 *)((int)puVar7 + (int)puVar4);
          puVar4 = puVar4 + -1;
          puVar11 = local_34;
        } while (puVar4 != (undefined4 *)0xfffffffc);
        *puVar11 = local_30;
        puVar8 = puVar8 + 1;
        puVar4 = local_2c + 1;
      } while (puVar8 != local_28);
    }
LAB_10185437:
    if (DAT_10388d00 != (local_14 ^ (uint)&local_34)) {
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    return;
  }
  local_24 = param_3;
LAB_1018506e:
  local_2c = param_1;
  local_28 = param_2;
  if (0 < (int)local_24) {
    puVar10 = param_1 + (uVar9 >> 3);
    puVar7 = param_2 + -1;
    iVar5 = (int)puVar7 - (int)param_1 >> 2;
    local_20 = param_2;
    if (0x28 < iVar5) {
      uVar9 = iVar5 + 1;
      uVar6 = uVar9 >> 3;
      local_34 = param_1 + uVar6;
      local_30 = puVar7;
      FUN_101855bc((int)param_1 + (uVar9 & 0xfffffff8),param_4);
      FUN_101855bc(puVar10 + uVar6,param_4);
      puVar7 = local_30 + -uVar6;
      FUN_101855bc(local_30,param_4);
    }
    FUN_101855bc(puVar7,param_4);
    puVar7 = puVar10;
    local_18 = param_4;
    while (local_30 = puVar7, puVar8 = local_28, local_2c < puVar7) {
      cVar2 = FUN_1018545a(puVar7);
      puVar8 = local_28;
      if ((cVar2 != '\0') ||
         (cVar2 = FUN_1018545a(puVar7 + -1), puVar7 = puVar7 + -1, puVar8 = local_28, cVar2 != '\0')
         ) break;
    }
    do {
      puVar7 = puVar10;
      puVar10 = puVar7 + 1;
      if (puVar8 <= puVar10) goto LAB_1018517d;
      cVar2 = FUN_1018545a(local_30);
      if ((cVar2 != '\0') || (cVar2 = FUN_1018545a(puVar10), cVar2 != '\0')) goto LAB_1018517d;
    } while( true );
  }
  uVar6 = uVar9 >> 3;
  do {
    local_18 = local_2c[uVar6 - 1];
    FUN_101854b9(uVar9 >> 2,&local_18,param_4);
    bVar1 = 1 < uVar6;
    uVar6 = uVar6 - 1;
  } while (bVar1);
  iVar5 = (int)local_28 - (int)local_2c;
  puVar7 = local_28;
  do {
    puVar7 = puVar7 + -1;
    local_18 = *puVar7;
    *puVar7 = *local_2c;
    iVar5 = iVar5 + -4;
    FUN_101854b9(iVar5 >> 2,&local_18,param_4);
  } while (4 < iVar5);
  goto LAB_10185437;
LAB_1018517d:
  puVar7 = puVar7 + 1;
  local_34 = puVar7;
  puVar10 = local_30;
LAB_1018518d:
  for (; puVar7 < puVar8; puVar7 = puVar7 + 1) {
    cVar2 = FUN_1018545a(puVar7);
    if (cVar2 == '\0') {
      cVar2 = FUN_1018545a(puVar10);
      if (cVar2 != '\0') break;
      if (puVar7 == local_34) {
        local_34 = local_34 + 1;
      }
      else {
        uVar3 = *local_34;
        *local_34 = *puVar7;
        *puVar7 = uVar3;
        local_34 = local_34 + 1;
      }
    }
  }
  puVar4 = local_30;
  param_2 = puVar10;
  if (local_2c < local_30) {
    do {
      puVar11 = puVar4 + -1;
      cVar2 = FUN_1018545a(puVar10);
      param_2 = puVar10;
      if (cVar2 == '\0') {
        cVar2 = FUN_1018545a(puVar11);
        puVar8 = local_28;
        if (cVar2 != '\0') break;
        param_2 = puVar10 + -1;
        if (puVar4 != puVar10) {
          uVar3 = *param_2;
          *param_2 = *puVar11;
          *puVar11 = uVar3;
        }
      }
      puVar4 = puVar11;
      puVar10 = param_2;
      puVar8 = local_28;
    } while (local_2c < puVar11);
  }
  param_1 = local_34;
  if ((puVar7 != puVar8) || (puVar4 != local_2c)) {
    if (puVar4 == local_2c) {
      if (local_34 != puVar7) {
        uVar3 = *param_2;
        *param_2 = *local_34;
        *local_34 = uVar3;
      }
      local_34 = local_34 + 1;
      uVar3 = *param_2;
      *param_2 = *puVar7;
      *puVar7 = uVar3;
      puVar10 = param_2 + 1;
      puVar7 = puVar7 + 1;
      local_30 = local_2c;
    }
    else {
      local_30 = puVar4 + -1;
      if (puVar7 == puVar8) {
        puVar10 = param_2 + -1;
        uVar3 = param_2[-1];
        if (puVar4 != param_2) {
          uVar3 = *local_30;
          *local_30 = param_2[-1];
          *puVar10 = uVar3;
        }
        *puVar10 = local_34[-1];
        local_34[-1] = uVar3;
        local_34 = local_34 + -1;
      }
      else {
        uVar3 = *puVar7;
        *puVar7 = *local_30;
        *local_30 = uVar3;
        puVar7 = puVar7 + 1;
        puVar10 = param_2;
      }
    }
    goto LAB_1018518d;
  }
  local_24 = (local_24 >> 2) + (local_24 >> 1);
  if ((int)param_2 - (int)local_2c < (int)local_20 - (int)local_34) {
    FUN_10185034(local_24,param_4);
    param_2 = puVar8;
  }
  else {
    FUN_10185034(local_24,param_4);
    local_34 = local_2c;
    param_1 = local_2c;
  }
  uVar9 = (int)param_2 - (int)param_1;
  puVar7 = local_34;
  if ((int)uVar9 < 0x81) goto LAB_1018534c;
  goto LAB_1018506e;
}

