/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10198d2b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10198d2b(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_30;
  iVar1 = FUN_10199fcf();
  if (*(char *)(iVar1 + 0x31) == '\x01') {
    local_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    local_14 = 0;
    if (*(code **)(iVar1 + 0x38) == (code *)0x0) {
      bVar3 = false;
    }
    else {
      local_28 = &local_24;
      local_2c = (int *)0x1;
      local_30 = 0;
      iVar2 = (**(code **)(iVar1 + 0x38))();
      bVar3 = iVar2 == 0;
    }
    *(bool *)(iVar1 + 0x30) = bVar3;
    *(undefined1 *)(iVar1 + 0x31) = 0;
  }
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
  if ((*(char *)(iVar1 + 0x30) == '\x01') && (*(code **)(iVar1 + 0x3c) != (code *)0x0)) {
    local_2c = &local_24;
    local_30 = 0;
    iVar2 = (**(code **)(iVar1 + 0x3c))();
    if (iVar2 == 0) {
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
      if (*(int *)(iVar1 + 0x40) == 0 || *(int *)(iVar1 + 0x40) != local_24) {
        *(int *)(iVar1 + 0x40) = local_24;
        local_2c = (int *)((uStack_20 & 0x10) >> 4);
        local_30 = 0x278;
        FUN_100f95cc();
        local_2c = (int *)((uStack_20 & 0x20) >> 5);
        local_30 = 0x279;
        FUN_100f95cc();
        local_2c = (int *)(uStack_20 >> 0xe & 1);
        local_30 = 0x27a;
        FUN_100f95cc();
        local_2c = (int *)(uStack_20 >> 0xd & 1);
        local_30 = 0x27b;
        FUN_100f95cc();
        local_2c = (int *)(uStack_20 >> 0xf & 1);
        local_30 = 0x27c;
        FUN_100f95cc();
        local_2c = (int *)(uStack_20 >> 0xc & 1);
        local_30 = 0x27d;
        FUN_100f95cc();
        local_2c = (int *)((uStack_20 & 4) >> 2);
        local_30 = 0x27e;
        FUN_100f95cc();
        local_2c = (int *)((uStack_20 & 8) >> 3);
        local_30 = 0x27f;
        FUN_100f95cc();
        local_2c = (int *)(uStack_20 & 1);
        local_30 = 0x280;
        FUN_100f95cc();
        local_2c = (int *)((uStack_20 & 2) >> 1);
        local_30 = 0x281;
        FUN_100f95cc();
        local_2c = (int *)(uStack_20 >> 8 & 1);
        local_30 = 0x282;
        FUN_100f95cc();
        local_2c = (int *)(uStack_20 >> 9 & 1);
        local_30 = 0x283;
        FUN_100f95cc();
        fVar4 = (float)(int)((uStack_20 >> 0x10 & 0xff) - 0x1e) / _DAT_10301be0;
        fVar5 = DAT_1028b430;
        if (fVar4 <= DAT_1028b430) {
          fVar5 = fVar4;
        }
        local_28 = (int *)(~-(uint)(fVar4 < 0.0) & (uint)fVar5);
        local_2c = (int *)(uint)(DAT_102b71b8 < fVar4);
        local_30 = 0x284;
        FUN_100f9356();
        fVar4 = (float)(int)((uStack_20 >> 0x18) - 0x1e) / _DAT_10301be0;
        fVar5 = DAT_1028b430;
        if (fVar4 <= DAT_1028b430) {
          fVar5 = fVar4;
        }
        local_28 = (int *)(~-(uint)(fVar4 < 0.0) & (uint)fVar5);
        local_2c = (int *)(uint)(DAT_102b71b8 < fVar4);
        local_30 = 0x285;
        FUN_100f9356();
        local_2c = (int *)((uStack_20 & 0x40) >> 6);
        local_30 = 0x286;
        FUN_100f95cc();
        local_2c = (int *)(uStack_20 >> 7 & 1);
        local_30 = 0x287;
        FUN_100f95cc();
        fVar4 = (float)((short)uStack_1c + 0x1ea9) / _DAT_10301be4;
        fVar5 = DAT_1028b430;
        if (fVar4 <= DAT_1028b430) {
          fVar5 = fVar4;
        }
        local_28 = (int *)(~-(uint)(fVar4 < 0.0) & (uint)fVar5);
        local_2c = (int *)(uint)(DAT_102b71b8 < fVar4);
        local_30 = 0x288;
        FUN_100f9356();
        fVar4 = (float)((short)uStack_1c + -0x1ea9) / _DAT_10301be8;
        fVar5 = DAT_1028b430;
        if (fVar4 <= DAT_1028b430) {
          fVar5 = fVar4;
        }
        local_28 = (int *)(~-(uint)(fVar4 < 0.0) & (uint)fVar5);
        local_2c = (int *)(uint)(DAT_102b71b8 < fVar4);
        local_30 = 0x289;
        FUN_100f9356();
        fVar4 = (float)(uStack_1c._2_2_ + -0x1ea9) / _DAT_10301be8;
        fVar5 = DAT_1028b430;
        if (fVar4 <= DAT_1028b430) {
          fVar5 = fVar4;
        }
        local_28 = (int *)(~-(uint)(fVar4 < 0.0) & (uint)fVar5);
        local_2c = (int *)(uint)(DAT_102b71b8 < fVar4);
        local_30 = 0x28a;
        FUN_100f9356();
        fVar4 = (float)(uStack_1c._2_2_ + 0x1ea9) / _DAT_10301be4;
        fVar5 = DAT_1028b430;
        if (fVar4 <= DAT_1028b430) {
          fVar5 = fVar4;
        }
        local_28 = (int *)(~-(uint)(fVar4 < 0.0) & (uint)fVar5);
        local_2c = (int *)(uint)(DAT_102b71b8 < fVar4);
        local_30 = 0x28b;
        FUN_100f9356();
        fVar4 = (float)((short)uStack_18 + 0x1ea9) / _DAT_10301be4;
        fVar5 = DAT_1028b430;
        if (fVar4 <= DAT_1028b430) {
          fVar5 = fVar4;
        }
        local_28 = (int *)(~-(uint)(fVar4 < 0.0) & (uint)fVar5);
        local_2c = (int *)(uint)(DAT_102b71b8 < fVar4);
        local_30 = 0x28c;
        FUN_100f9356();
        fVar4 = (float)((short)uStack_18 + -0x1ea9) / _DAT_10301be8;
        fVar5 = DAT_1028b430;
        if (fVar4 <= DAT_1028b430) {
          fVar5 = fVar4;
        }
        local_28 = (int *)(~-(uint)(fVar4 < 0.0) & (uint)fVar5);
        local_2c = (int *)(uint)(DAT_102b71b8 < fVar4);
        local_30 = 0x28d;
        FUN_100f9356();
        fVar4 = (float)(uStack_18._2_2_ + -0x1ea9) / _DAT_10301be8;
        fVar5 = DAT_1028b430;
        if (fVar4 <= DAT_1028b430) {
          fVar5 = fVar4;
        }
        local_28 = (int *)(~-(uint)(fVar4 < 0.0) & (uint)fVar5);
        local_2c = (int *)(uint)(DAT_102b71b8 < fVar4);
        local_30 = 0x28e;
        FUN_100f9356();
        fVar4 = (float)(uStack_18._2_2_ + 0x1ea9) / _DAT_10301be4;
        fVar5 = DAT_1028b430;
        if (fVar4 <= DAT_1028b430) {
          fVar5 = fVar4;
        }
        local_28 = (int *)(~-(uint)(fVar4 < 0.0) & (uint)fVar5);
        local_2c = (int *)(uint)(DAT_102b71b8 < fVar4);
        local_30 = 0x28f;
        FUN_100f9356();
      }
    }
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

