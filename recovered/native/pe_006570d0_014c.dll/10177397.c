/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10177397 */

undefined4 __fastcall FUN_10177397(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  
  iVar3 = FUN_10171b39();
  iVar9 = *param_1;
  pbVar6 = *(byte **)(iVar9 + 0xac);
  if (*(byte **)(iVar9 + 0xb0) <= pbVar6) {
    if (*(int *)(iVar9 + 0x20) == 0) {
      param_1[0x11fc] = 0;
      goto LAB_101774f7;
    }
    FUN_10170e8c();
    pbVar6 = *(byte **)(iVar9 + 0xac);
  }
  *(byte **)(iVar9 + 0xac) = pbVar6 + 1;
  bVar1 = *pbVar6;
  uVar4 = (uint)bVar1;
  param_1[0x11fc] = uVar4;
  if ((((byte)(bVar1 - 5) < 0xfc) || (iVar9 = *param_1, *(int *)(iVar9 + 8) < (int)uVar4)) ||
     (iVar3 != uVar4 * 2 + 6)) goto LAB_101774f7;
  iVar3 = 0;
  do {
    pbVar6 = *(byte **)(iVar9 + 0xac);
    if (pbVar6 < *(byte **)(iVar9 + 0xb0)) {
LAB_10177432:
      *(byte **)(iVar9 + 0xac) = pbVar6 + 1;
      uVar4 = (uint)*pbVar6;
    }
    else {
      if (*(int *)(iVar9 + 0x20) != 0) {
        FUN_10170e8c();
        pbVar6 = *(byte **)(iVar9 + 0xac);
        goto LAB_10177432;
      }
      uVar4 = 0;
    }
    iVar9 = *param_1;
    pbVar6 = *(byte **)(iVar9 + 0xac);
    if (pbVar6 < *(byte **)(iVar9 + 0xb0)) {
LAB_10177465:
      *(byte **)(iVar9 + 0xac) = pbVar6 + 1;
      uVar7 = (uint)*pbVar6;
    }
    else {
      if (*(int *)(iVar9 + 0x20) != 0) {
        FUN_10170e8c();
        pbVar6 = *(byte **)(iVar9 + 0xac);
        goto LAB_10177465;
      }
      uVar7 = 0;
    }
    iVar9 = *param_1;
    iVar2 = *(int *)(iVar9 + 8);
    iVar5 = 0;
    if (0 < iVar2) {
      iVar5 = 0;
      puVar8 = (uint *)(param_1 + 0x11a7);
      while (*puVar8 != uVar4) {
        iVar5 = iVar5 + 1;
        puVar8 = puVar8 + 0x12;
        if (iVar2 == iVar5) {
          return 0;
        }
      }
    }
    if (iVar5 == iVar2) {
      return 0;
    }
    param_1[iVar5 * 0x12 + 0x11ab] = uVar7 >> 4;
    if ((0x3f < (byte)uVar7) || (param_1[iVar5 * 0x12 + 0x11ac] = uVar7 & 0xf, 3 < (uVar7 & 0xf)))
    goto LAB_101774f7;
    param_1[iVar3 + 0x11fd] = iVar5;
    iVar3 = iVar3 + 1;
  } while (iVar3 < param_1[0x11fc]);
  pbVar6 = *(byte **)(iVar9 + 0xac);
  if (pbVar6 < *(byte **)(iVar9 + 0xb0)) {
LAB_10177540:
    *(byte **)(iVar9 + 0xac) = pbVar6 + 1;
    uVar4 = (uint)*pbVar6;
  }
  else {
    if (*(int *)(iVar9 + 0x20) != 0) {
      FUN_10170e8c();
      pbVar6 = *(byte **)(iVar9 + 0xac);
      goto LAB_10177540;
    }
    uVar4 = 0;
  }
  param_1[0x11f4] = uVar4;
  iVar9 = *param_1;
  pbVar6 = *(byte **)(iVar9 + 0xac);
  if (pbVar6 < *(byte **)(iVar9 + 0xb0)) {
LAB_10177579:
    *(byte **)(iVar9 + 0xac) = pbVar6 + 1;
    uVar4 = (uint)*pbVar6;
  }
  else {
    if (*(int *)(iVar9 + 0x20) != 0) {
      FUN_10170e8c();
      pbVar6 = *(byte **)(iVar9 + 0xac);
      goto LAB_10177579;
    }
    uVar4 = 0;
  }
  param_1[0x11f5] = uVar4;
  iVar9 = *param_1;
  pbVar6 = *(byte **)(iVar9 + 0xac);
  if (pbVar6 < *(byte **)(iVar9 + 0xb0)) {
LAB_101775b2:
    *(byte **)(iVar9 + 0xac) = pbVar6 + 1;
    uVar4 = (uint)*pbVar6;
  }
  else {
    if (*(int *)(iVar9 + 0x20) != 0) {
      FUN_10170e8c();
      pbVar6 = *(byte **)(iVar9 + 0xac);
      goto LAB_101775b2;
    }
    uVar4 = 0;
  }
  param_1[0x11f6] = uVar4 >> 4;
  uVar7 = uVar4 & 0xf;
  param_1[0x11f7] = uVar7;
  iVar9 = param_1[0x11f4];
  if (param_1[0x11f3] == 0) {
    if ((iVar9 == 0) && (uVar4 >> 4 == 0 && uVar7 == 0)) {
      param_1[0x11f5] = 0x3f;
      return 1;
    }
  }
  else if (((iVar9 < 0x40) && (iVar9 <= param_1[0x11f5] && param_1[0x11f5] < 0x40)) &&
          (uVar7 < 0xe && (byte)uVar4 < 0xe0)) {
    return 1;
  }
LAB_101774f7:
  FUN_10170e07();
  return 0;
}

