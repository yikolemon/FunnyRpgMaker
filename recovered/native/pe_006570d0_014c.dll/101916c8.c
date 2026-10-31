/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101916c8 */

void FUN_101916c8(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  ushort *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  int local_34;
  uint *local_30;
  int local_2c;
  uint *local_28;
  uint *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_64;
  local_14 = 0xffffffff;
  local_18 = &LAB_10196010;
  local_1c = ExceptionList;
  local_2c = *(int *)(param_1 + 0x290);
  ExceptionList = &local_1c;
  *(undefined1 *)(local_2c + 0xa8) = 1;
  puVar3 = *(undefined4 **)(param_1 + 0x30);
  local_44 = (undefined4 *)FUN_10191561(param_1,param_2,param_3);
  *(undefined1 *)((int)local_44 + 0x4e) = *(undefined1 *)((int)puVar3 + 0x4e);
  local_48 = puVar3;
  if ((DAT_1039d74c != 0) && ((*(byte *)(DAT_1039d74c + 0x27b5) & 1) != 0)) {
    FUN_100f99e6("[font] Texture #%03d: resize+repack %dx%d => Texture #%03d: %dx%d\n",*puVar3,
                 puVar3[7],puVar3[8],*local_44,local_44[7],local_44[8]);
  }
  FUN_10191be7(param_1);
  local_40 = (uint *)0x0;
  local_34 = 0;
  local_14 = 0;
  local_38 = *(uint **)(local_2c + 0x68);
  iVar6 = local_34;
  if (0 < (int)local_38) {
    puVar4 = (uint *)0x8;
    if ((uint *)0x8 < local_38) {
      puVar4 = local_38;
    }
    local_40 = (uint *)0x0;
    iVar5 = FUN_100fa1fa((int)puVar4 << 2);
    iVar6 = local_34;
    if ((iVar5 != 0) && (iVar6 = iVar5, *(int *)(local_2c + 0x70) != 0)) {
      FUN_1025b2d0(iVar5,*(int *)(local_2c + 0x70),(int)local_38 * 4);
    }
  }
  local_34 = iVar6;
  local_14 = 1;
  local_64 = *(undefined4 *)(local_2c + 0x5c);
  uStack_60 = *(undefined4 *)(local_2c + 0x60);
  uStack_5c = 0;
  uStack_58 = 0;
  *(undefined4 *)(local_2c + 0x5c) = 0;
  *(undefined4 *)(local_2c + 0x60) = 0;
  local_28 = *(uint **)(local_2c + 100);
  *(undefined4 *)(local_2c + 100) = 0;
  puVar4 = *(uint **)(local_2c + 0x70);
  local_3c = puVar4 + *(int *)(local_2c + 0x68);
  do {
    if (puVar4 == local_3c) {
      *(undefined4 *)(local_2c + 0x8c) = 0;
      *(undefined4 *)(local_2c + 0x90) = 0;
      uVar10 = 0;
      while ((int)uVar10 < *(int *)(local_2c + 0xac)) {
        iVar6 = *(int *)(*(int *)(local_2c + 0xbc) + (uVar10 >> 5) * 4);
        iVar5 = (uVar10 & 0x1f) * 0x50;
        puVar4 = *(uint **)(iVar6 + 0x2c + iVar5);
        local_3c = puVar4 + *(int *)(iVar6 + 0x24 + iVar5) * 0xb;
        local_4c = uVar10;
        for (; puVar4 != local_3c; puVar4 = puVar4 + 0xb) {
          if (puVar4[10] != 0xffffffff) {
            local_24 = local_28;
            local_30 = puVar4;
            puVar8 = (ushort *)FUN_10190112(param_1,puVar4[10]);
            local_30[6] = (uint)((float)*puVar8 * *(float *)(param_1 + 0x44));
            local_30[7] = (uint)((float)puVar8[1] * *(float *)(param_1 + 0x48));
            local_30[8] = (uint)((float)((uint)puVar8[2] + (uint)*puVar8) *
                                *(float *)(param_1 + 0x44));
            local_30[9] = (uint)((float)((uint)puVar8[3] + (uint)puVar8[1]) *
                                *(float *)(param_1 + 0x48));
            puVar4 = local_30;
          }
        }
        uVar10 = local_4c + 1;
      }
      local_24 = local_28;
      local_14 = 1;
      FUN_10191dae();
      local_24 = local_28;
      FUN_10191ffc();
      *(undefined1 *)(local_2c + 0xa8) = 0;
      local_24 = local_28;
      FUN_1019151f(param_1);
      puVar4 = local_28;
code_r0x101919fb:
      local_14 = 0xffffffff;
      local_24 = puVar4;
      if (local_34 != 0) {
        FUN_100fa2cb(local_34);
      }
      if (puVar4 == (uint *)0x0) {
        ExceptionList = local_1c;
      }
      else {
        local_40 = puVar4;
        FUN_100fa2cb(puVar4);
        ExceptionList = local_1c;
      }
      return;
    }
    local_30 = puVar4;
    if ((*puVar4 >> 0x1e & 1) != 0) {
      local_4c = (int)(*puVar4 << 0xc) >> 9;
      sVar1 = *(short *)((int)local_28 + local_4c + 4);
      sVar2 = *(short *)((int)local_28 + local_4c + 6);
      if (sVar1 != 0 || sVar2 != 0) {
        local_24 = local_28;
        local_14 = 1;
        iVar6 = FUN_1018fdef(param_1,sVar1,sVar2,puVar4);
        if (iVar6 == -1) {
          if ((DAT_1039d74c != 0) && ((*(byte *)(DAT_1039d74c + 0x27b5) & 1) != 0)) {
            local_24 = local_28;
            FUN_100f99e6("[font] Texture #%03d: resize failed. Will grow.\n",*local_44);
          }
          *(undefined1 *)((int)local_44 + 0x4f) = 1;
          *(ulonglong *)(local_2c + 0x5c) = CONCAT44(uStack_60,local_64);
          local_30 = *(uint **)(local_2c + 100);
          *(uint **)(local_2c + 100) = local_28;
          if (*(int *)(local_2c + 0x70) != 0) {
            *(undefined4 *)(local_2c + 0x6c) = 0;
            *(undefined4 *)(local_2c + 0x68) = 0;
            local_24 = local_30;
            FUN_100fa2cb(*(int *)(local_2c + 0x70));
            *(undefined4 *)(local_2c + 0x70) = 0;
          }
          iVar6 = *(int *)(local_2c + 0x6c);
          if (iVar6 < (int)local_38) {
            if (iVar6 == 0) {
              local_3c = (uint *)0x8;
            }
            else {
              local_3c = (uint *)(iVar6 / 2 + iVar6);
            }
            if ((int)local_3c <= (int)local_38) {
              local_3c = local_38;
            }
            local_24 = local_30;
            puVar9 = (uint *)FUN_100fa1fa((int)local_3c * 4);
            iVar6 = local_2c;
            puVar4 = local_30;
            if (*(int *)(local_2c + 0x70) != 0) {
              local_28 = puVar9;
              FUN_1025b2d0(puVar9,*(int *)(local_2c + 0x70),*(int *)(local_2c + 0x68) << 2);
              local_24 = puVar4;
              FUN_100fa2cb(*(undefined4 *)(iVar6 + 0x70));
              puVar9 = local_28;
            }
            puVar4 = local_30;
            *(uint **)(local_2c + 0x70) = puVar9;
            *(uint **)(local_2c + 0x6c) = local_3c;
            *(uint **)(local_2c + 0x68) = local_38;
            if ((local_34 != 0) && (puVar9 != (uint *)0x0)) {
              FUN_1025b2d0(puVar9,local_34,(int)local_38 << 2);
            }
          }
          else {
            *(uint **)(local_2c + 0x68) = local_38;
            puVar4 = local_30;
          }
          local_24 = puVar4;
          FUN_10191655();
          local_24 = local_30;
          FUN_10191ca8(param_1,param_2,param_3);
          puVar4 = local_30;
          goto code_r0x101919fb;
        }
        local_24 = local_28;
        puVar7 = (undefined2 *)FUN_10190112(param_1,iVar6);
        local_50 = (uint)(ushort)puVar7[3];
        local_54 = (uint)*(ushort *)((int)local_28 + local_4c + 2);
        local_24 = local_28;
        FUN_1018edc0(local_48,*(undefined2 *)((int)local_28 + local_4c),local_54,local_44,*puVar7,
                     puVar7[1],puVar7[2],local_50);
      }
    }
    puVar4 = local_30 + 1;
  } while( true );
}

