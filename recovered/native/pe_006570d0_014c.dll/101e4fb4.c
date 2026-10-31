/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e4fb4 */

int FUN_101e4fb4(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_7c [3];
  bool local_79;
  uint *local_78;
  uint *local_74;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined2 local_30;
  ushort local_2e;
  undefined4 local_2c;
  uint uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  int local_1c;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_7c;
  local_60 = *(undefined4 *)(param_1 + 100);
  local_6c = *(undefined4 *)(param_1 + 0x68);
  local_1c = 0;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uVar11 = (uint)*(ushort *)(param_1 + 0xe);
  puVar3 = *(uint **)(param_1 + 0x2e0);
  if (puVar3 == (uint *)0x0) {
    local_1c = (**(code **)(param_1 + 0x204))(param_1,0x66766172,local_6c,local_18);
    uVar10 = local_6c;
    if (local_1c != 0) goto LAB_101e5600;
    local_74 = (uint *)FUN_101c4a88(local_6c);
    local_1c = FUN_101c4f57(uVar10,&DAT_1030e388,&local_2c);
    if (local_1c != 0) goto LAB_101e5600;
    if (uVar11 < uStack_24 >> 0x10) {
      local_1c = 8;
      goto LAB_101e5600;
    }
    uVar13 = uStack_20 & 0xffff;
    local_78 = (uint *)(uStack_28 >> 0x10);
    puVar5 = (uint *)FUN_101bff17(local_60,0x54,&local_1c);
    *(uint **)(param_1 + 0x2e0) = puVar5;
    if (local_1c != 0) goto LAB_101e5600;
    local_79 = (int)local_78 * 4 + 6U != uVar13;
    uVar13 = uStack_28 >> 0x10;
    *puVar5 = uVar13;
  }
  else {
    uVar13 = *puVar3;
    local_74 = (uint *)0x0;
    local_79 = true;
  }
  uVar14 = uVar13 * 2 + 3 & 0xfffffffc;
  local_50 = uVar13 * uVar11 * 4;
  local_68 = uVar11 * 0xc;
  iVar7 = uVar13 * 0x18;
  local_78 = puVar3;
  if (puVar3 == (uint *)0x0) {
    *(uint *)(*(int *)(param_1 + 0x2e0) + 0x10) =
         local_68 + uVar13 * 0x1d + local_50 + uVar14 + 0x14;
    local_70 = uVar13;
    local_64 = uVar13 * uVar11;
    local_5c = uVar11;
    local_58 = uVar13 * 0x18;
    local_54 = uVar14;
    puVar3 = (uint *)FUN_101bff17(local_60,*(undefined4 *)(*(int *)(param_1 + 0x2e0) + 0x10),
                                  &local_1c);
    if (local_1c != 0) goto LAB_101e5600;
    *(uint **)(*(int *)(param_1 + 0x2e0) + 0xc) = puVar3;
    *puVar3 = local_70;
    puVar3[1] = 0xffffffff;
    puVar3[2] = local_5c;
    uVar11 = (int)puVar3 + local_54 + 0x14;
    puVar3[3] = uVar11;
    uVar11 = uVar11 + local_58;
    puVar3[4] = uVar11;
    if (local_5c != 0) {
      iVar7 = 0;
      do {
        *(uint *)(puVar3[4] + iVar7) = uVar11 + local_68;
        iVar7 = iVar7 + 0xc;
        uVar11 = uVar11 + local_70 * 4;
      } while (local_68 != iVar7);
      uVar11 = puVar3[4];
    }
    if (local_70 != 0) {
      iVar7 = uVar11 + local_68 + local_64 * 4;
      iVar2 = 0;
      uVar11 = local_70;
      do {
        *(int *)(puVar3[3] + iVar2) = iVar7;
        iVar7 = iVar7 + 5;
        iVar2 = iVar2 + 0x18;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    local_78 = puVar3;
    local_1c = FUN_101c461e(local_6c,(int)local_74 + (uStack_28 & 0xffff));
    uVar10 = local_6c;
    uVar11 = local_70;
    if (local_1c != 0) goto LAB_101e5600;
    if (local_70 != 0) {
      local_74 = local_78 + 5;
      piVar6 = (int *)local_78[3];
      uVar13 = 0;
      do {
        local_1c = 0;
        local_1c = FUN_101c4f57(uVar10,&DAT_1030e3ac,&local_40);
        if (local_1c != 0) goto LAB_101e5600;
        piVar6[4] = local_40;
        piVar6[1] = local_3c;
        piVar6[2] = local_38;
        piVar6[3] = local_34;
        piVar6[5] = (uint)local_2e;
        *(char *)*piVar6 = (char)((uint)local_40 >> 0x18);
        *(undefined1 *)(*piVar6 + 1) = *(undefined1 *)((int)piVar6 + 0x12);
        *(undefined1 *)(*piVar6 + 2) = *(undefined1 *)((int)piVar6 + 0x11);
        *(char *)(*piVar6 + 3) = (char)piVar6[4];
        *(undefined1 *)(*piVar6 + 4) = 0;
        *(undefined2 *)((int)local_74 + uVar13 * 2) = local_30;
        iVar7 = piVar6[2];
        if ((iVar7 < piVar6[1]) || (piVar6[3] < iVar7)) {
          piVar6[1] = iVar7;
          piVar6[3] = iVar7;
        }
        piVar6 = piVar6 + 6;
        uVar13 = uVar13 + 1;
      } while (uVar11 != uVar13);
    }
    uVar4 = FUN_101c00c3(local_60,4,0,local_64,0,&local_1c);
    uVar10 = local_6c;
    *(undefined4 *)(*(int *)(param_1 + 0x2e0) + 0x14) = uVar4;
    uVar11 = 0;
    if (local_1c != 0) goto LAB_101e5600;
    if (uStack_24._2_2_ != 0) {
      iVar7 = local_1c;
      if (*(char *)(*(int *)(param_1 + 0x2e0) + 0x18) == '\0') {
        uVar4 = FUN_101c4a88(local_6c);
        FUN_101e78d9();
        local_1c = FUN_101c461e(uVar10,uVar4);
        uVar11 = 0;
        if (local_1c != 0) goto LAB_101e5600;
        iVar7 = 0;
        if (uStack_24._2_2_ == 0) goto LAB_101e54ea;
      }
      local_1c = iVar7;
      iVar7 = *(int *)(*(int *)(param_1 + 0x2e0) + 0x14);
      local_74 = (uint *)local_78[4];
      local_4c = (uint)(local_79 ^ 1) * 2 + local_70 * 4 + 4;
      uVar13 = 0;
      uVar10 = local_6c;
      do {
        local_64 = uVar13;
        local_1c = FUN_101c4b69(uVar10,local_4c);
        uVar10 = local_6c;
        if (local_1c != 0) goto LAB_101e5600;
        local_48 = iVar7;
        uVar11 = FUN_101c4ca6(local_6c);
        local_74[1] = uVar11 & 0xffff;
        FUN_101c4ca6(uVar10);
        uVar11 = local_70;
        if (local_70 != 0) {
          uVar13 = *local_74;
          uVar14 = 0;
          do {
            uVar4 = FUN_101c4ce4(uVar10);
            *(undefined4 *)(uVar13 + uVar14 * 4) = uVar4;
            uVar14 = uVar14 + 1;
          } while (uVar11 != uVar14);
        }
        iVar7 = local_48;
        uVar13 = 0xffff;
        if (local_79 == false) {
          uVar13 = FUN_101c4ca6(local_6c);
          uVar13 = uVar13 & 0xffff;
        }
        puVar3 = local_74;
        local_74[2] = uVar13;
        FUN_101e7b65(*local_74,iVar7);
        uVar10 = local_6c;
        iVar7 = iVar7 + uVar11 * 4;
        FUN_101c4c66(local_6c);
        uVar13 = local_64 + 1;
        local_74 = puVar3 + 3;
        uVar11 = uStack_24 >> 0x10;
      } while (uVar13 < uVar11);
    }
LAB_101e54ea:
    if (local_5c != uVar11) {
      iVar7 = *(int *)(param_1 + 0x21c);
      cVar1 = (**(code **)(iVar7 + 0xb0))(param_1,0x11,&local_40,local_44);
      uVar11 = local_70;
      uVar10 = 0x11;
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(iVar7 + 0xb0))(param_1,2,&local_40,local_44);
        uVar10 = 2;
        if (cVar1 == '\0') goto LAB_101e55af;
      }
      cVar1 = (**(code **)(iVar7 + 0xb0))(param_1,6,&local_40,local_44);
      if (cVar1 != '\0') {
        *(uint *)(param_1 + 0x2f0) = local_5c;
        uVar13 = local_78[4];
        uVar14 = uStack_24 >> 0x10;
        *(undefined4 *)(uVar13 + 4 + uVar14 * 0xc) = uVar10;
        *(undefined4 *)(uVar13 + 8 + uVar14 * 0xc) = 6;
        if (uVar11 != 0) {
          iVar7 = *(int *)(uVar13 + uVar14 * 0xc);
          puVar8 = (undefined4 *)(local_78[3] + 8);
          uVar13 = 0;
          do {
            *(undefined4 *)(iVar7 + uVar13 * 4) = *puVar8;
            uVar13 = uVar13 + 1;
            puVar8 = puVar8 + 6;
          } while (uVar11 != uVar13);
        }
      }
    }
LAB_101e55af:
    FUN_101e7dd1();
    uVar13 = local_70;
    iVar7 = local_58;
    uVar14 = local_54;
  }
  if ((param_2 != (int *)0x0) &&
     (iVar2 = FUN_101c5815(local_60,*(undefined4 *)(*(int *)(param_1 + 0x2e0) + 0xc),
                           *(undefined4 *)(*(int *)(param_1 + 0x2e0) + 0x10),&local_1c),
     local_1c == 0)) {
    piVar6 = (int *)(iVar2 + uVar14 + 0x14);
    *(int **)(iVar2 + 0xc) = piVar6;
    iVar9 = iVar2 + uVar14 + iVar7 + 0x14;
    *(int *)(iVar2 + 0x10) = iVar9;
    if (*(int *)(iVar2 + 8) != 0) {
      iVar7 = iVar2 + iVar7 + local_68 + uVar14 + 0x14;
      iVar9 = 0;
      uVar11 = 0;
      do {
        *(int *)(*(int *)(iVar2 + 0x10) + iVar9) = iVar7;
        uVar11 = uVar11 + 1;
        iVar9 = iVar9 + 0xc;
        iVar7 = iVar7 + uVar13 * 4;
      } while (uVar11 < *(uint *)(iVar2 + 8));
      piVar6 = *(int **)(iVar2 + 0xc);
      iVar9 = *(int *)(iVar2 + 0x10);
    }
    if (uVar13 != 0) {
      iVar7 = iVar9 + local_68 + local_50;
      do {
        *piVar6 = iVar7;
        iVar9 = piVar6[4];
        if (iVar9 < 0x736c6e74) {
          if (iVar9 == 0x6974616c) {
            pcVar12 = "Italic";
            goto LAB_101e5139;
          }
          if (iVar9 == 0x6f70737a) {
            pcVar12 = "OpticalSize";
            goto LAB_101e5139;
          }
        }
        else {
          if (iVar9 == 0x736c6e74) {
            pcVar12 = "Slant";
          }
          else {
            pcVar12 = "Weight";
            if (iVar9 != 0x77676874) {
              if (iVar9 != 0x77647468) goto LAB_101e513b;
              pcVar12 = "Width";
            }
          }
LAB_101e5139:
          *piVar6 = (int)pcVar12;
        }
LAB_101e513b:
        iVar7 = iVar7 + 5;
        piVar6 = piVar6 + 6;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    *param_2 = iVar2;
  }
LAB_101e5600:
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_7c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_1c;
}

