/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043c724 */

int __cdecl FUN_0043c724(int param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_7c [3];
  bool local_79;
  uint *local_78;
  uint *local_74;
  uint local_70;
  int *local_6c;
  int local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  uint local_4c;
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
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_7c;
  local_60 = *(int *)(param_1 + 100);
  local_6c = *(int **)(param_1 + 0x68);
  local_1c = 0;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uVar11 = (uint)*(ushort *)(param_1 + 0xe);
  puVar3 = *(uint **)(param_1 + 0x2e0);
  if (puVar3 == (uint *)0x0) {
    local_1c = (**(code **)(param_1 + 0x204))(param_1,0x66766172,local_6c,local_18);
    piVar6 = local_6c;
    if (local_1c != 0) goto LAB_0043cd70;
    local_74 = (uint *)FUN_00420b00((int)local_6c);
    local_1c = FUN_00420fcf(piVar6,0x4e2928,(int)&local_2c);
    if (local_1c != 0) goto LAB_0043cd70;
    if (uVar11 < uStack_24 >> 0x10) {
      local_1c = 8;
      goto LAB_0043cd70;
    }
    uVar14 = uStack_20 & 0xffff;
    local_78 = (uint *)(uStack_28 >> 0x10);
    puVar5 = FUN_0041c507(local_60,0x54,&local_1c);
    *(uint **)(param_1 + 0x2e0) = puVar5;
    if (local_1c != 0) goto LAB_0043cd70;
    local_79 = (int)local_78 * 4 + 6U != uVar14;
    uVar14 = uStack_28 >> 0x10;
    *puVar5 = uVar14;
  }
  else {
    uVar14 = *puVar3;
    local_74 = (uint *)0x0;
    local_79 = true;
  }
  uVar15 = uVar14 * 2 + 3 & 0xfffffffc;
  local_50 = uVar14 * uVar11 * 4;
  local_68 = uVar11 * 0xc;
  iVar7 = uVar14 * 0x18;
  local_78 = puVar3;
  if (puVar3 == (uint *)0x0) {
    *(uint *)(*(int *)(param_1 + 0x2e0) + 0x10) =
         local_68 + uVar14 * 0x1d + local_50 + uVar15 + 0x14;
    local_70 = uVar14;
    local_64 = uVar14 * uVar11;
    local_5c = uVar11;
    local_58 = uVar14 * 0x18;
    local_54 = uVar15;
    puVar3 = FUN_0041c507(local_60,*(size_t *)(*(int *)(param_1 + 0x2e0) + 0x10),&local_1c);
    if (local_1c != 0) goto LAB_0043cd70;
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
      iVar9 = 0;
      uVar11 = local_70;
      do {
        *(int *)(puVar3[3] + iVar9) = iVar7;
        iVar7 = iVar7 + 5;
        iVar9 = iVar9 + 0x18;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    local_78 = puVar3;
    local_1c = FUN_00420696((int)local_6c,(int)local_74 + (uStack_28 & 0xffff));
    piVar6 = local_6c;
    uVar11 = local_70;
    if (local_1c != 0) goto LAB_0043cd70;
    if (local_70 != 0) {
      local_74 = local_78 + 5;
      piVar13 = (int *)local_78[3];
      uVar14 = 0;
      do {
        local_1c = 0;
        local_1c = FUN_00420fcf(piVar6,0x4e294c,(int)&local_40);
        if (local_1c != 0) goto LAB_0043cd70;
        piVar13[4] = local_40;
        piVar13[1] = local_3c;
        piVar13[2] = local_38;
        piVar13[3] = local_34;
        piVar13[5] = (uint)local_2e;
        *(char *)*piVar13 = (char)((uint)local_40 >> 0x18);
        *(undefined1 *)(*piVar13 + 1) = *(undefined1 *)((int)piVar13 + 0x12);
        *(undefined1 *)(*piVar13 + 2) = *(undefined1 *)((int)piVar13 + 0x11);
        *(char *)(*piVar13 + 3) = (char)piVar13[4];
        *(undefined1 *)(*piVar13 + 4) = 0;
        *(undefined2 *)((int)local_74 + uVar14 * 2) = local_30;
        iVar7 = piVar13[2];
        if ((iVar7 < piVar13[1]) || (piVar13[3] < iVar7)) {
          piVar13[1] = iVar7;
          piVar13[3] = iVar7;
        }
        piVar13 = piVar13 + 6;
        uVar14 = uVar14 + 1;
      } while (uVar11 != uVar14);
    }
    iVar7 = FUN_0041c6b3(local_60,4,0,local_64,0,&local_1c);
    piVar6 = local_6c;
    *(int *)(*(int *)(param_1 + 0x2e0) + 0x14) = iVar7;
    uVar11 = 0;
    if (local_1c != 0) goto LAB_0043cd70;
    if (uStack_24._2_2_ != 0) {
      iVar7 = local_1c;
      if (*(char *)(*(int *)(param_1 + 0x2e0) + 0x18) == '\0') {
        uVar11 = FUN_00420b00((int)local_6c);
        FUN_0043f049(param_1);
        local_1c = FUN_00420696((int)piVar6,uVar11);
        uVar11 = 0;
        if (local_1c != 0) goto LAB_0043cd70;
        iVar7 = 0;
        if (uStack_24._2_2_ == 0) goto LAB_0043cc5a;
      }
      local_1c = iVar7;
      iVar7 = *(int *)(*(int *)(param_1 + 0x2e0) + 0x14);
      local_74 = (uint *)local_78[4];
      local_4c = (uint)(local_79 ^ 1) * 2 + local_70 * 4 + 4;
      uVar14 = 0;
      piVar6 = local_6c;
      do {
        local_64 = uVar14;
        local_1c = FUN_00420be1(piVar6,local_4c);
        piVar6 = local_6c;
        if (local_1c != 0) goto LAB_0043cd70;
        local_48 = iVar7;
        uVar2 = FUN_00420d1e((int)local_6c);
        local_74[1] = (uint)uVar2;
        FUN_00420d1e((int)piVar6);
        uVar11 = local_70;
        if (local_70 != 0) {
          uVar14 = *local_74;
          uVar15 = 0;
          do {
            uVar4 = FUN_00420d5c((int)piVar6);
            *(uint *)(uVar14 + uVar15 * 4) = uVar4;
            uVar15 = uVar15 + 1;
          } while (uVar11 != uVar15);
        }
        iVar7 = local_48;
        uVar14 = 0xffff;
        if (local_79 == false) {
          uVar2 = FUN_00420d1e((int)local_6c);
          uVar14 = (uint)uVar2;
        }
        puVar3 = local_74;
        local_74[2] = uVar14;
        FUN_0043f2d5(param_1,uVar11,*local_74,iVar7);
        piVar6 = local_6c;
        iVar7 = iVar7 + uVar11 * 4;
        FUN_00420cde(local_6c);
        uVar14 = local_64 + 1;
        local_74 = puVar3 + 3;
        uVar11 = uStack_24 >> 0x10;
      } while (uVar14 < uVar11);
    }
LAB_0043cc5a:
    if (local_5c != uVar11) {
      iVar7 = *(int *)(param_1 + 0x21c);
      cVar1 = (**(code **)(iVar7 + 0xb0))(param_1,0x11,&local_40,local_44);
      uVar11 = local_70;
      uVar10 = 0x11;
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(iVar7 + 0xb0))(param_1,2,&local_40,local_44);
        uVar10 = 2;
        if (cVar1 == '\0') goto LAB_0043cd1f;
      }
      cVar1 = (**(code **)(iVar7 + 0xb0))(param_1,6,&local_40,local_44);
      if (cVar1 != '\0') {
        *(uint *)(param_1 + 0x2f0) = local_5c;
        uVar14 = local_78[4];
        uVar15 = uStack_24 >> 0x10;
        *(undefined4 *)(uVar14 + 4 + uVar15 * 0xc) = uVar10;
        *(undefined4 *)(uVar14 + 8 + uVar15 * 0xc) = 6;
        if (uVar11 != 0) {
          iVar7 = *(int *)(uVar14 + uVar15 * 0xc);
          puVar8 = (undefined4 *)(local_78[3] + 8);
          uVar14 = 0;
          do {
            *(undefined4 *)(iVar7 + uVar14 * 4) = *puVar8;
            uVar14 = uVar14 + 1;
            puVar8 = puVar8 + 6;
          } while (uVar11 != uVar14);
        }
      }
    }
LAB_0043cd1f:
    FUN_0043f541(param_1);
    uVar14 = local_70;
    iVar7 = local_58;
    uVar15 = local_54;
  }
  if ((param_2 != (undefined4 *)0x0) &&
     (puVar3 = FUN_0042188d(local_60,*(uint **)(*(int *)(param_1 + 0x2e0) + 0xc),
                            *(uint *)(*(int *)(param_1 + 0x2e0) + 0x10),&local_1c), local_1c == 0))
  {
    piVar6 = (int *)((int)puVar3 + uVar15 + 0x14);
    puVar3[3] = (uint)piVar6;
    uVar11 = (int)puVar3 + iVar7 + uVar15 + 0x14;
    puVar3[4] = uVar11;
    if (puVar3[2] != 0) {
      iVar7 = (int)puVar3 + iVar7 + local_68 + uVar15 + 0x14;
      iVar9 = 0;
      uVar11 = 0;
      do {
        *(int *)(puVar3[4] + iVar9) = iVar7;
        uVar11 = uVar11 + 1;
        iVar9 = iVar9 + 0xc;
        iVar7 = iVar7 + uVar14 * 4;
      } while (uVar11 < puVar3[2]);
      piVar6 = (int *)puVar3[3];
      uVar11 = puVar3[4];
    }
    if (uVar14 != 0) {
      iVar7 = uVar11 + local_68 + local_50;
      do {
        *piVar6 = iVar7;
        iVar9 = piVar6[4];
        if (iVar9 < 0x736c6e74) {
          if (iVar9 == 0x6974616c) {
            pcVar12 = "Italic";
            goto LAB_0043c8a9;
          }
          if (iVar9 == 0x6f70737a) {
            pcVar12 = "OpticalSize";
            goto LAB_0043c8a9;
          }
        }
        else {
          if (iVar9 == 0x736c6e74) {
            pcVar12 = "Slant";
          }
          else {
            pcVar12 = "Weight";
            if (iVar9 != 0x77676874) {
              if (iVar9 != 0x77647468) goto LAB_0043c8ab;
              pcVar12 = "Width";
            }
          }
LAB_0043c8a9:
          *piVar6 = (int)pcVar12;
        }
LAB_0043c8ab:
        iVar7 = iVar7 + 5;
        piVar6 = piVar6 + 6;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    *param_2 = puVar3;
  }
LAB_0043cd70:
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_7c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_7c);
  }
  return local_1c;
}

