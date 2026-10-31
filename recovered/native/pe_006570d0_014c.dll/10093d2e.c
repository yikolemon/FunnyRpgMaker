/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10093d2e */

void __thiscall FUN_10093d2e(int param_1,ushort param_2,ushort param_3)

{
  byte *pbVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  short sVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 local_7c [24];
  undefined1 local_64 [24];
  undefined1 local_4c [24];
  int local_34;
  undefined2 local_2e;
  uint *local_2c;
  int local_28;
  uint *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  uVar6 = param_3;
  local_20 = local_7c;
  puVar9 = (uint *)(uint)param_3;
  uVar7 = (uint)param_2;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c39f0;
  local_1c = ExceptionList;
  local_28 = *(int *)(param_1 + 4);
  ExceptionList = &local_1c;
  local_34 = param_1;
  if ((*(byte *)(param_1 + 9) & 8) == 0) {
    if (param_3 < param_2) {
      local_20 = local_7c;
                    /* WARNING: Subroutine does not return */
      FUN_10228760(8);
    }
    local_20 = local_7c;
    if (param_2 < 0x100) {
      local_20 = local_7c;
      if (*(int *)(local_28 + 0x18) == 0) {
        local_20 = local_7c;
        puVar3 = (undefined4 *)FUN_10228350(0x20);
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined4 **)(local_28 + 0x18) = puVar3;
      }
      puVar4 = (uint *)(uVar7 & 0xff);
      if (uVar6 < (ushort)puVar4) {
        ExceptionList = local_1c;
        return;
      }
      puVar10 = puVar9;
      if ((uint *)0xfe < puVar9) {
        puVar10 = (uint *)0xff;
      }
      if ((ushort)puVar10 <= (ushort)puVar4) {
        puVar10 = puVar4;
      }
      uVar7 = (int)puVar10 + 1;
      local_24 = (uint *)(uVar7 & 0xffff);
      do {
        pbVar1 = (byte *)(*(int *)(local_28 + 0x18) + ((uint)puVar4 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)puVar4 & 7));
        puVar4 = (uint *)((int)puVar4 + 1);
      } while (local_24 != puVar4);
      if (puVar9 < (uint *)0x100) {
        ExceptionList = local_1c;
        return;
      }
      param_2 = (ushort)uVar7;
      local_2c = puVar9;
    }
    sVar8 = param_3 - (short)uVar7;
    if ((ushort)(sVar8 + 1U) < 5) {
      if (sVar8 == -1) {
        ExceptionList = local_1c;
        return;
      }
      sVar8 = param_3 + 1;
      local_14 = 0xffffffff;
      do {
        FUN_1009470c(uVar7 & 0xffff);
        uVar7 = (uVar7 & 0xffff) + 1;
      } while (sVar8 != (short)uVar7);
      ExceptionList = local_1c;
      return;
    }
  }
  else {
    FUN_100914ae(local_7c,&param_2,&stack0x00000006);
    local_14 = 0;
    FUN_100914ae(local_64,&param_3,&stack0x0000000a);
    local_14 = 1;
    iVar5 = FUN_100915e6(local_64);
    if (0 < iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_10228760(8);
    }
    puVar9 = (uint *)0x0;
    while (puVar9 < (uint *)0x100) {
      local_2e = SUB42(puVar9,0);
      local_14 = 1;
      local_24 = puVar9;
      FUN_100914ae(local_4c,&local_2e,&local_2c);
      local_14 = 2;
      iVar5 = FUN_100915e6(local_4c);
      if ((iVar5 < 1) && (iVar5 = FUN_100915e6(local_64), iVar5 < 1)) {
        puVar9 = *(uint **)(local_28 + 0x18);
        if (puVar9 == (uint *)0x0) {
          puVar9 = (uint *)FUN_10228350(0x20);
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          *(uint **)(local_28 + 0x18) = puVar9;
          local_2c = puVar9;
        }
        pbVar1 = (byte *)((int)puVar9 + ((uint)local_24 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)local_24 & 7));
      }
      local_14 = 0xffffffff;
      FUN_10001134();
      puVar9 = (uint *)((int)local_24 + 1);
    }
    local_14 = 0xffffffff;
    FUN_10001134();
    FUN_10001134();
  }
  puVar9 = *(uint **)(local_28 + 0x20);
  if (puVar9 == (uint *)0x0) {
    local_14 = 0xffffffff;
    puVar9 = (uint *)FUN_10228350(0xc);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(uint **)(local_28 + 0x20) = puVar9;
    local_24 = puVar9;
  }
  else {
    uVar7 = puVar9[1];
    uVar6 = param_2;
    if (uVar7 < *puVar9) goto code_r0x1009400c;
  }
  uVar6 = param_2;
  local_14 = 0xffffffff;
  FUN_100946a8(1);
  uVar7 = puVar9[1];
code_r0x1009400c:
  uVar2 = param_3;
  puVar9[1] = uVar7 + 1;
  *(ushort *)(puVar9[2] + uVar7 * 2) = uVar6;
  puVar9 = *(uint **)(local_28 + 0x20);
  uVar7 = puVar9[1];
  if (*puVar9 <= uVar7) {
    local_14 = 0xffffffff;
    FUN_100946a8(1);
    uVar7 = puVar9[1];
  }
  puVar9[1] = uVar7 + 1;
  *(ushort *)(puVar9[2] + uVar7 * 2) = uVar2;
  ExceptionList = local_1c;
  return;
}

