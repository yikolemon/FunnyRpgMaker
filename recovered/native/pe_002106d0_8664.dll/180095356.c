/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180095356 */

void FUN_180095356(longlong param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  longlong lVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  ushort uVar9;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [38];
  undefined2 local_72;
  uint *local_70;
  ushort local_64;
  ushort local_62;
  undefined8 local_60 [4];
  
  local_60[0] = 0xfffffffffffffffe;
  uVar9 = (ushort)param_3;
  local_62 = (ushort)param_2;
  lVar2 = *(longlong *)(param_1 + 8);
  local_64 = uVar9;
  if ((*(byte *)(param_1 + 0x11) & 8) == 0) {
    if (uVar9 < local_62) {
                    /* WARNING: Subroutine does not return */
      FUN_180239ab0(8);
    }
    if ((param_2 & 0xffff) < 0x100) {
      if (*(longlong *)(lVar2 + 0x28) == 0) {
        local_70 = (uint *)FUN_180239630(0x20);
        local_70[4] = 0;
        local_70[5] = 0;
        local_70[6] = 0;
        local_70[7] = 0;
        local_70[0] = 0;
        local_70[1] = 0;
        local_70[2] = 0;
        local_70[3] = 0;
        *(uint **)(lVar2 + 0x28) = local_70;
      }
      uVar5 = param_2 & 0xff;
      if (uVar9 < (ushort)uVar5) {
        return;
      }
      uVar8 = param_3 & 0xffff;
      if (0xfe < uVar8) {
        param_3 = 0xff;
      }
      if ((ushort)param_3 <= (ushort)uVar5) {
        param_3 = uVar5;
      }
      param_2 = param_3 + 1;
      do {
        pbVar1 = (byte *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar5 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar5 & 7));
        uVar5 = uVar5 + 1;
      } while ((param_2 & 0xffff) != uVar5);
      if (uVar8 < 0x100) {
        return;
      }
      local_62 = (ushort)param_2;
      param_3 = (uint)local_64;
    }
    sVar3 = (short)param_3 - (short)param_2;
    if ((ushort)(sVar3 + 1U) < 5) {
      if (sVar3 == -1) {
        return;
      }
      do {
        FUN_180096010(param_1,param_2);
        param_2 = param_2 + 1;
      } while ((short)((short)param_3 + 1) != (short)param_2);
      return;
    }
  }
  else {
    FUN_1800928f6(*(undefined8 *)(param_1 + 0x18),local_b8,&local_62,local_60);
    FUN_1800928f6(*(undefined8 *)(param_1 + 0x18),local_98,&local_64,&local_62);
    iVar6 = FUN_1800929ec(local_b8,local_98);
    if (0 < iVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_180239ab0(8);
    }
    for (uVar5 = 0; uVar5 < 0x100; uVar5 = uVar5 + 1) {
      local_72 = (undefined2)uVar5;
      FUN_1800928f6(*(undefined8 *)(param_1 + 0x18),local_d8,&local_72,&local_70);
      iVar6 = FUN_1800929ec(local_b8,local_d8);
      if ((iVar6 < 1) && (iVar6 = FUN_1800929ec(local_d8,local_98), iVar6 < 1)) {
        puVar7 = *(uint **)(lVar2 + 0x28);
        if (puVar7 == (uint *)0x0) {
          puVar7 = (uint *)FUN_180239630(0x20);
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[0] = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          *(uint **)(lVar2 + 0x28) = puVar7;
          local_70 = puVar7;
        }
        pbVar1 = (byte *)((longlong)puVar7 + (ulonglong)(uVar5 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar5 & 7));
      }
      FUN_1800010ec(local_d8);
    }
    FUN_1800010ec(local_98);
    FUN_1800010ec(local_b8);
  }
  puVar7 = *(uint **)(lVar2 + 0x38);
  if (puVar7 == (uint *)0x0) {
    puVar7 = (uint *)FUN_180239630(0x10);
    puVar7[0] = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(uint **)(lVar2 + 0x38) = puVar7;
    local_70 = puVar7;
  }
  else {
    uVar5 = puVar7[1];
    uVar9 = local_62;
    if (uVar5 < *puVar7) goto code_r0x0001800955cc;
  }
  uVar9 = local_62;
  FUN_180095faa(puVar7,1);
  uVar5 = puVar7[1];
code_r0x0001800955cc:
  uVar4 = local_64;
  puVar7[1] = uVar5 + 1;
  *(ushort *)(*(longlong *)(puVar7 + 2) + (ulonglong)uVar5 * 2) = uVar9;
  puVar7 = *(uint **)(lVar2 + 0x38);
  uVar5 = puVar7[1];
  if (*puVar7 <= uVar5) {
    FUN_180095faa(puVar7,1);
    uVar5 = puVar7[1];
  }
  puVar7[1] = uVar5 + 1;
  *(ushort *)(*(longlong *)(puVar7 + 2) + (ulonglong)uVar5 * 2) = uVar4;
  return;
}

