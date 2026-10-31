/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016402e */

void FUN_1016402e(int param_1)

{
  short sVar1;
  undefined4 ***pppuVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined4 ****ppppuVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  float10 fVar9;
  undefined4 ****ppppuVar10;
  undefined4 ****ppppuVar12;
  undefined4 ****ppppuVar13;
  undefined4 ***local_60;
  undefined4 ***local_5c;
  undefined4 ***local_58;
  undefined4 ***local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 ***local_48;
  undefined4 ***local_44;
  undefined4 ***local_40;
  undefined4 ***local_3c;
  short local_36;
  undefined4 **local_34;
  undefined4 ***local_30;
  undefined4 ***local_2c;
  float local_28;
  undefined4 ***local_24;
  undefined4 ***pppuStack_20;
  undefined4 ***pppuStack_1c;
  undefined4 ***pppuStack_18;
  uint local_14;
  float fVar11;
  
  local_14 = DAT_10388d00 ^ (uint)&local_60;
  iVar6 = *(int *)(param_1 + 0x154);
  if ((((*(float *)(param_1 + 200) <= *(float *)(iVar6 + 0x298) &&
         *(float *)(iVar6 + 0x298) != *(float *)(param_1 + 200)) &&
       (*(float *)(iVar6 + 0x290) <= *(float *)(param_1 + 0xd0) &&
        *(float *)(param_1 + 0xd0) != *(float *)(iVar6 + 0x290))) &&
      (*(float *)(param_1 + 0xc4) <= *(float *)(iVar6 + 0x294) &&
       *(float *)(iVar6 + 0x294) != *(float *)(param_1 + 0xc4))) &&
     (*(float *)(iVar6 + 0x28c) <= *(float *)(param_1 + 0xcc) &&
      *(float *)(param_1 + 0xcc) != *(float *)(iVar6 + 0x28c))) {
    pppuVar2 = *(undefined4 ****)(*(int *)(param_1 + 0x158) + 0x2e8);
    local_5c = (undefined4 ***)0x0;
    local_60 = pppuVar2;
    FUN_1018de6c();
    local_60 = (undefined4 ***)(param_1 + 0x114);
    local_5c = (undefined4 ***)(param_1 + 0x11c);
    local_58 = (undefined4 ****)0x0;
    FUN_101881b4();
    if (*(short *)(param_1 + 0x4c) == 0) {
      iVar6 = param_1 + 0x16c;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x18c) + *(short *)(param_1 + 0x4c) * 0x18 + -0x18;
    }
    local_5c = (undefined4 ***)
               (*(float *)((uint)(*(short *)(param_1 + 0x1de) < 1) * 0x10 + 0xd8 + param_1) +
               *(float *)(param_1 + 0xbc));
    local_60 = *(undefined4 ****)(param_1 + 0xd8);
    fVar9 = (float10)FUN_100fdbca();
    local_28 = (float)fVar9;
    uVar4 = *(uint *)(param_1 + 4);
    fVar11 = 0.0;
    if ((uVar4 >> 8 & 1) != 0) {
      fVar11 = DAT_1028b430;
    }
    ppppuVar10 = (undefined4 ****)(fVar11 + local_28);
    ppppuVar13 = *(undefined4 *****)(param_1 + 0xe0);
    ppppuVar12 = ppppuVar10;
    if (*(char *)(param_1 + 0x1f1) == '\x01') {
      local_5c = (undefined4 ***)
                 (*(float *)((uint)(*(short *)(param_1 + 0x1de) < 1) * 0x10 + 0xd8 + param_1) +
                 *(float *)(iVar6 + 8));
      local_60 = ppppuVar13;
      local_40 = ppppuVar10;
      local_3c = ppppuVar13;
      fVar9 = (float10)FUN_100ea38a();
      ppppuVar10 = (undefined4 ****)(float)fVar9;
      uVar4 = *(uint *)(param_1 + 4);
      ppppuVar12 = (undefined4 ****)local_40;
      ppppuVar13 = (undefined4 ****)local_3c;
      local_2c = ppppuVar10;
    }
    if (((uVar4 >> 9 & 1) != 0) &&
       (ppppuVar5 = *(undefined4 *****)(param_1 + 0x40), 0 < (int)ppppuVar5)) {
      uVar4 = 0;
      local_40 = ppppuVar12;
      local_3c = ppppuVar13;
      local_34 = pppuVar2;
      local_30 = ppppuVar10;
      do {
        ppppuVar3 = (undefined4 ****)local_48;
        if ((*(uint *)(*(int *)(param_1 + 0x28) + (uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
          sVar1 = *(short *)(*(int *)(param_1 + 0x18) + uVar4 * 2);
          if (*(short *)(param_1 + 0x1c6) == sVar1) {
            bVar8 = *(short *)(param_1 + 0x4e) == *(short *)(param_1 + 0x4c);
          }
          else {
            bVar8 = false;
          }
          puVar7 = (uint *)(sVar1 * 0x74 + *(int *)(param_1 + 0x10));
          fVar11 = (float)puVar7[3];
          if ((bool)((fVar11 < *(float *)(param_1 + 0xfc) || fVar11 == *(float *)(param_1 + 0xfc)) |
                    bVar8)) {
            local_36 = *(short *)(param_1 + 0x1c0);
            local_44 = (undefined4 ***)(int)*(short *)(param_1 + 0x1e2);
            ppppuVar3 = ppppuVar5;
            if (((((short)puVar7[0x17] != -1) || ((*puVar7 & 0x40000020) == 0)) ||
                ((*(uint *)(param_1 + 4) & 0x1e000) == 0x4000)) && ((float)puVar7[9] < fVar11)) {
              local_48 = ppppuVar13;
              if ((undefined4 ****)(uVar4 + 1) != (undefined4 ****)local_44) {
                if ((((*(uint *)(param_1 + 4) >> 0xc & 1) == 0) || (local_36 != sVar1 && !bVar8)) &&
                   (local_48 = ppppuVar10, (*(uint *)(param_1 + 4) & 0x1800) == 0)) {
                  local_48 = ppppuVar13;
                }
              }
              if ((float)ppppuVar12 < (float)local_48) {
                local_60 = (undefined4 ***)(int)sVar1;
                local_54 = (undefined4 ***)FUN_101659d8();
                local_60 = (undefined4 ***)puVar7[3];
                local_58 = local_48;
                local_5c = local_40;
                local_50 = 0x3f800000;
                FUN_1018b5da();
                ppppuVar5 = *(undefined4 *****)(param_1 + 0x40);
                ppppuVar12 = (undefined4 ****)local_40;
                ppppuVar13 = (undefined4 ****)local_3c;
                ppppuVar10 = (undefined4 ****)local_30;
                ppppuVar3 = (undefined4 ****)local_48;
              }
            }
          }
        }
        local_48 = ppppuVar3;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)ppppuVar5);
      uVar4 = *(uint *)(param_1 + 4);
    }
    if ((uVar4 & 0x500) != 0) {
      local_24 = *(undefined4 ****)(param_1 + 0xc4);
      pppuStack_20 = *(undefined4 ****)(param_1 + 200);
      pppuStack_1c = *(undefined4 ****)(param_1 + 0xcc);
      pppuStack_18 = *(undefined4 ****)(param_1 + 0xd0);
      ppppuVar13 = *(undefined4 *****)(param_1 + 0x78);
      if ((uVar4 & 0x500) == 0x500) {
        local_5c = &pppuStack_1c;
        local_4c = 0;
        local_54 = (undefined4 ****)0x0;
        local_60 = &local_24;
        local_50 = 0x3f800000;
        local_58 = ppppuVar13;
        FUN_1018b762();
      }
      else if ((uVar4 >> 10 & 1) == 0) {
        if ((uVar4 >> 8 & 1) != 0) {
          local_50 = 0x3f800000;
          local_60 = local_24;
          local_5c = pppuStack_1c;
          local_58 = pppuStack_20;
          local_54 = ppppuVar13;
          local_48 = local_24;
          local_44 = pppuStack_1c;
          FUN_1018b44e();
          local_50 = 0x3f800000;
          local_58 = pppuStack_18;
          local_5c = local_44;
          local_60 = local_48;
          local_54 = ppppuVar13;
          FUN_1018b44e();
        }
      }
      else {
        local_50 = 0x3f800000;
        local_60 = local_24;
        local_5c = pppuStack_20;
        local_58 = pppuStack_18;
        local_54 = ppppuVar13;
        local_48 = pppuStack_18;
        local_44 = pppuStack_20;
        FUN_1018b5da();
        local_50 = 0x3f800000;
        local_58 = local_48;
        local_5c = local_44;
        local_60 = pppuStack_1c;
        local_54 = ppppuVar13;
        FUN_1018b5da();
      }
      uVar4 = *(uint *)(param_1 + 4);
    }
    if ((((char)uVar4 < '\0') &&
        (ppppuVar13 = *(undefined4 *****)(param_1 + 0x54),
        (float)ppppuVar13 < *(float *)(param_1 + 0xd0))) &&
       ((*(float *)(param_1 + 0x108) <= (float)ppppuVar13 &&
        ((float)ppppuVar13 < *(float *)(param_1 + 0x110))))) {
      local_54 = *(undefined4 ****)(param_1 + 0x7c);
      local_5c = *(undefined4 ****)(param_1 + 0x84);
      local_60 = *(undefined4 ****)(param_1 + 0x80);
      local_50 = 0x3f800000;
      local_58 = ppppuVar13;
      FUN_1018b44e();
    }
    FUN_10188384();
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_60)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

