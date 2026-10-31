/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10208523 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __fastcall
FUN_10208523(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4,char param_5,
            uint *param_6,uint *param_7,int *param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  char cVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  undefined *puVar22;
  uint *local_3eb8;
  int local_3eb4;
  int local_3eb0;
  int local_3eac;
  uint *local_3ea8;
  uint *local_3ea4;
  uint local_3ea0;
  uint *local_3e9c;
  uint *local_3e98;
  int local_3e94;
  uint local_3e90;
  uint local_3e8c;
  uint *local_3e88;
  int local_3e84;
  uint local_3e80;
  int *local_3e7c;
  int local_3e78;
  undefined4 local_3e74;
  uint local_3e70;
  int local_3e6c;
  undefined1 local_3e68 [28];
  undefined1 local_3e4c [31];
  char local_3e2d [29];
  undefined1 local_3e10 [28];
  undefined1 local_3df4 [3868];
  undefined1 local_2ed8 [7744];
  undefined1 local_1098 [3868];
  undefined1 local_17c [168];
  undefined1 local_d4 [4];
  undefined2 local_d0 [2];
  undefined4 auStack_cc [9];
  undefined8 local_a8;
  undefined4 local_a0 [32];
  undefined8 local_20;
  undefined4 local_18;
  uint local_14;
  
  local_3eb8 = param_7;
  local_14 = DAT_10388d00 ^ (uint)&local_3eb8;
  local_3eb0 = *(int *)(param_1 + 0xb0);
  piVar1 = (int *)(param_1 + 4);
  local_3e74 = *(undefined4 *)(param_1 + 0x34);
  local_3ea8 = param_2;
  local_3e78 = FUN_1020b0b2();
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[8] = 0;
  local_a0[9] = 0;
  local_a0[10] = 0;
  local_a0[0xb] = 0;
  local_a0[0xc] = 0;
  local_a0[0xd] = 0;
  local_a0[0xe] = 0;
  local_a0[0xf] = 0;
  local_a0[0x10] = 0;
  local_a0[0x11] = 0;
  local_a0[0x12] = 0;
  local_a0[0x13] = 0;
  local_a0[0x14] = 0;
  local_a0[0x15] = 0;
  local_a0[0x16] = 0;
  local_a0[0x17] = 0;
  local_a0[0x18] = 0;
  local_a0[0x19] = 0;
  local_a0[0x1a] = 0;
  local_a0[0x1b] = 0;
  local_a0[0x1c] = 0;
  local_a0[0x1d] = 0;
  local_a0[0x1e] = 0;
  local_a0[0x1f] = 0;
  local_20 = 0;
  local_18 = 0;
  auStack_cc[5] = 0;
  auStack_cc[6] = 0;
  auStack_cc[7] = 0;
  auStack_cc[8] = 0;
  local_a8 = 0;
  FUN_1020b0c2(piVar1,0x10);
  FUN_1020b0c2(piVar1,0x14);
  FUN_1020b0c2(piVar1,0x14);
  local_3e7c = piVar1;
  FUN_1020b0dc();
  FUN_1020b0ee(param_3,local_3e74,local_3e4c,local_3e68,local_d4,local_3eb8,param_1 + 0xf0,param_4);
  local_3e2d[0] = *(char *)(param_1 + 9) != '\0';
  iVar6 = FUN_1020b217();
  *param_8 = iVar6;
  local_3e94 = param_1;
  if (*(char *)(param_1 + 9) == '\0') {
    uVar7 = 0x30;
  }
  else {
    uVar7 = FUN_1020b227();
  }
  iVar6 = local_3e94;
  local_3eb8 = (uint *)FUN_1020b234(uVar7);
  if ((local_3eb8 == (uint *)0x0) || (FUN_1020b2c6(), *local_3e7c != 0)) {
LAB_1020a36c:
    FUN_1020a812();
    FUN_1020c4c8();
    FUN_1020c4d3();
    FUN_1020c4d3();
    FUN_1020c4d3();
    FUN_1020c4f5();
    if (DAT_10388d00 != (local_14 ^ (uint)&local_3eb8)) {
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    return;
  }
  local_3e88 = (uint *)FUN_1020b2e8();
  uVar13 = local_3ea8[1];
  uVar20 = local_3ea8[2];
  uVar14 = local_3ea8[3];
  *local_3e88 = *local_3ea8;
  local_3e88[1] = uVar13;
  local_3e88[2] = uVar20;
  local_3e88[3] = uVar14;
  local_3e6c = iVar6 + 0x5c;
  iVar6 = 20000000;
  local_3e84 = 0;
  local_3e9c = (uint *)0x0;
  iVar16 = 0;
  local_3e80 = 0;
LAB_1020871a:
  local_3ea0 = 0;
  iVar12 = iVar16;
LAB_10208722:
  cVar4 = FUN_1020b2ec();
  if (cVar4 == '\0') {
    puVar8 = (uint *)FUN_1020b2f6();
    if (((puVar8 == (uint *)0xe) || (puVar8 == (uint *)0xb)) &&
       (puVar8 = (uint *)((uint)puVar8 & 0xff), *(char *)(local_3e94 + 9) != '\0')) {
      puVar8 = (uint *)0x0;
    }
  }
  else {
    puVar8 = (uint *)((uint)(local_3e84 == 0) * 3 + 0xb);
  }
  iVar11 = local_3e6c;
  iVar16 = local_3e94;
  cVar4 = *(char *)(local_3e94 + 8);
  bVar5 = (byte)puVar8;
  cVar17 = (char)iVar12;
  if (cVar4 != '\0') {
    if (((((cVar17 == '\0') && ((bVar5 & 0xfe) != 10)) &&
         ((bVar5 != 0xd && (((bVar5 & 0xfd) != 1 && (bVar5 < 0x20)))))) && (bVar5 != 0xc)) &&
       (bVar5 != 0xe)) {
      FUN_1020b317();
      iVar12 = 0;
      goto LAB_10208722;
    }
    local_3ea8 = (uint *)CONCAT31(local_3ea8._1_3_,cVar4);
    puVar18 = (uint *)0x0;
    if ((byte)(bVar5 - 10) < 3) {
      puVar18 = local_3e9c;
    }
    if (0x1f < bVar5) {
      puVar18 = local_3e9c;
    }
    uVar20 = local_3e80 & 0xff;
    uVar13 = 0;
    if (0x1f < bVar5) {
      uVar13 = uVar20;
    }
    if (0 < (int)local_3e9c) {
      local_3e9c = puVar18;
    }
    if ((char)local_3e80 == '\0') {
      uVar13 = uVar20;
    }
    local_3eb4 = iVar6;
    local_3e80 = uVar13;
    if (bVar5 == 0xc) {
      local_3e80 = uVar20;
    }
  }
  if ((*local_3e7c != 0) || (iVar6 = iVar6 + -1, iVar6 == 0)) goto LAB_1020a36c;
  switch((uint)puVar8 & 0xff) {
  case 0:
  case 2:
  case 0x11:
    break;
  case 1:
  case 0x12:
    if (cVar4 == '\0') {
      cVar4 = FUN_1020b443();
      if (cVar4 != '\0') break;
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)(local_3eb0 + 0x20) + 4);
    }
    puVar9 = local_3e4c;
    goto LAB_1020894d;
  case 3:
  case 0x17:
    if (cVar4 == '\0') {
      cVar4 = FUN_1020b443();
      if (cVar4 != '\0') break;
      uVar7 = 0;
    }
    else {
      uVar7 = **(undefined4 **)(local_3eb0 + 0x20);
    }
    puVar9 = local_3e68;
LAB_1020894d:
    iVar16 = local_3eb0;
    FUN_1020b447(puVar9,param_8,local_3e2d,uVar7);
    cVar4 = *(char *)(iVar16 + 0x224);
joined_r0x102097aa:
    if (cVar4 != '\0') goto LAB_1020a36c;
    break;
  case 4:
    uVar13 = FUN_1020b545();
    if ((1 < uVar13) && (local_3e2d[0] == '\0')) {
      iVar16 = FUN_1020b54f();
      *param_8 = iVar16 + local_3e78;
    }
    puVar8 = param_7;
    local_3e2d[0] = '\x01';
    if (*(char *)(local_3eb0 + 0x224) == '\0') {
      iVar16 = FUN_1020b59a();
      param_7 = (uint *)(iVar16 + (int)puVar8);
      iVar16 = *(int *)(local_3eb0 + 0x1d4);
      goto joined_r0x10208e16;
    }
    goto LAB_1020a36c;
  case 5:
    local_3eb4 = iVar6;
    local_3eac = iVar12;
    puVar8 = (uint *)FUN_1020b545();
    puVar18 = param_7;
    if (puVar8 != (uint *)0x0) {
      puVar19 = (uint *)0x0;
      local_3ea8 = puVar8;
      do {
        iVar6 = FUN_1020b54f();
        param_6 = (uint *)((int)param_6 + iVar6);
        iVar6 = FUN_1020b54f();
        puVar18 = (uint *)((int)puVar18 + iVar6);
        FUN_1020b662(puVar18);
        puVar19 = (uint *)((int)puVar19 + 2);
      } while (puVar19 < local_3ea8);
    }
    goto LAB_10209510;
  case 6:
  case 7:
    local_3eb4 = iVar6;
    local_3eac = iVar12;
    iVar6 = FUN_1020b545();
    puVar18 = param_7;
    if (iVar6 != 0) {
      local_3ea8 = (uint *)CONCAT31(local_3ea8._1_3_,bVar5 != 6);
      iVar16 = 0;
      do {
        iVar10 = FUN_1020b54f();
        iVar11 = iVar10;
        iVar12 = 0;
        if (((uint)local_3ea8 & 1) != 0) {
          iVar11 = 0;
          iVar12 = iVar10;
        }
        puVar18 = (uint *)((int)puVar18 + iVar12);
        param_6 = (uint *)((int)param_6 + iVar11);
        FUN_1020b662(puVar18);
        iVar16 = iVar16 + 1;
        local_3ea8 = (uint *)((uint)local_3ea8 ^ 1);
      } while (iVar6 != iVar16);
    }
    goto LAB_10209510;
  case 8:
  case 0x18:
    local_3eb4 = iVar6;
    local_3eac = iVar12;
    local_3ea4 = puVar8;
    uVar13 = FUN_1020b545();
    puVar18 = param_7;
    if (5 < uVar13) {
      iVar6 = 0;
      local_3e90 = uVar13;
      do {
        iVar16 = FUN_1020b54f();
        iVar12 = FUN_1020b54f();
        local_3e98 = (uint *)(iVar12 + (int)puVar18);
        iVar11 = FUN_1020b54f();
        local_3ea8 = (uint *)((int)param_6 + iVar11 + iVar16);
        iVar16 = FUN_1020b54f();
        local_3e8c = iVar16 + iVar12 + (int)puVar18;
        iVar16 = FUN_1020b54f();
        param_6 = (uint *)(iVar16 + (int)local_3ea8);
        iVar16 = FUN_1020b54f();
        puVar18 = (uint *)(iVar16 + local_3e8c);
        FUN_1020b7e5(local_3e98,local_3ea8,local_3e8c,param_6,puVar18);
        uVar13 = iVar6 + 0xc;
        iVar6 = iVar6 + 6;
      } while (uVar13 <= local_3e90);
    }
    if ((char)local_3ea4 == '\x18') {
      param_7 = puVar18;
      iVar6 = FUN_1020b54f();
      param_6 = (uint *)((int)param_6 + iVar6);
      iVar6 = FUN_1020b54f();
      param_7 = (uint *)(iVar6 + (int)puVar18);
      FUN_1020b662(param_7);
      puVar18 = param_7;
    }
    goto LAB_10209510;
  case 9:
    if (cVar4 != '\0') {
      FUN_1020b9cc();
      local_3e2d[0] = '\x01';
    }
    break;
  case 10:
  case 0x1d:
    if (0xf < local_3e84) goto LAB_1020a36c;
    local_3e84 = local_3e84 + 1;
    puVar8 = (uint *)FUN_1020ba37();
    uVar7 = FUN_1020b31e();
    if ((*(char *)(local_3e94 + 8) != '\0') && (*(int *)(local_3eb0 + 0x268) != 0)) {
      FUN_101c06e3(uVar7,*(int *)(local_3eb0 + 0x268));
    }
    local_3e88 = puVar8;
    if (bVar5 == 0x1d) {
      iVar16 = FUN_1020ba59(puVar8);
    }
    else {
      iVar16 = FUN_1020ba97(puVar8);
    }
    if (iVar16 != 0) goto LAB_1020a36c;
    goto LAB_10208722;
  case 0xb:
    if (local_3e84 < 1) goto LAB_1020a36c;
    local_3e84 = local_3e84 + -1;
    local_3e88 = (uint *)FUN_1020ba37();
    goto LAB_10208722;
  case 0xc:
    uVar13 = FUN_1020b2f6();
    switch(uVar13) {
    case 0x13:
    case 0x19:
    case 0x1f:
    case 0x20:
      goto switchD_10208823_caseD_0;
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x21:
switchD_10208f99_caseD_14:
      if ((*(char *)(local_3e94 + 9) != '\0') || (0x25 < uVar13)) goto switchD_10208823_caseD_0;
      cVar4 = *(char *)(local_3e94 + 8);
      if ((uVar13 != 0x11) && ((cVar4 != '\0' && (0 < (int)local_3e9c)))) {
        local_3e9c = (uint *)0x0;
        goto switchD_10208823_caseD_0;
      }
      break;
    case 0x22:
      uVar7 = 0;
      puVar22 = &DAT_103125c4;
      goto LAB_1020968b;
    case 0x23:
      FUN_1020bb0a(&param_7,local_2ed8,&DAT_103125d0,0);
      goto switchD_10208823_caseD_0;
    case 0x24:
      uVar7 = 0;
      puVar22 = &DAT_103125dc;
      goto LAB_1020968b;
    case 0x25:
      uVar7 = 1;
      puVar22 = &DAT_103125e8;
LAB_1020968b:
      FUN_1020bb0a(&param_7,local_2ed8,puVar22,uVar7);
      goto LAB_10208722;
    default:
      if ((uVar13 != 8) && (uVar13 != 0xd)) goto switchD_10208f99_caseD_14;
      goto switchD_10208823_caseD_0;
    }
    switch(uVar13) {
    case 1:
    case 2:
      if (cVar4 == '\0') goto switchD_10208823_caseD_0;
      local_3e8c = FUN_1020b54f();
      local_3ea8 = (uint *)FUN_1020b54f();
      local_3e98 = (uint *)FUN_1020b54f();
      iVar16 = FUN_1020b54f();
      local_3eb4 = iVar6;
      local_3eac = iVar12;
      FUN_1020bcc7((int)local_3ea8 - (iVar16 + local_3e8c));
      iVar6 = FUN_1020b54f();
      FUN_1020bcc7((int)local_3e98 - (iVar6 + (int)local_3ea8));
      iVar12 = local_3eac;
      iVar6 = local_3eb4;
      puVar9 = local_3e4c;
      if (uVar13 == 1) {
        puVar9 = local_3e68;
      }
      FUN_1020b447(puVar9,param_8,local_3e2d,
                   *(undefined4 *)(*(int *)(local_3eb0 + 0x20) + (uint)(uVar13 != 1) * 4));
      cVar4 = *(char *)(local_3eb0 + 0x224);
      goto joined_r0x102097aa;
    case 3:
      FUN_1020b59a();
      FUN_1020b59a();
      goto LAB_1020930b;
    case 4:
      FUN_1020b59a();
      FUN_1020b59a();
      goto LAB_1020930b;
    case 5:
      FUN_1020b59a();
      goto LAB_1020930b;
    case 6:
      if (cVar4 == '\0') goto switchD_10208823_caseD_0;
      iVar6 = *(int *)(local_3eb0 + 4);
      local_3ea8 = (uint *)FUN_1020b31e();
      uVar13 = FUN_1020b31e();
      local_3e98 = (uint *)FUN_1020b59a();
      iVar16 = FUN_1020b59a();
      local_3e8c = FUN_1020b59a();
      if ((param_5 != '\0') || (*(char *)(local_3eb0 + 0x2f) != '\0')) goto LAB_1020a36c;
      iVar6 = *(int *)(*(int *)(iVar6 + 0x80) + 0x34);
      if (*(int *)(local_3eb0 + 0x244) == 0) {
        if (iVar6 == 0) goto LAB_1020a36c;
        local_3e90 = **(uint **)(local_3eb0 + 0x20);
      }
      else {
        local_3e90 = **(uint **)(local_3eb0 + 0x20);
        if (iVar6 == 0) {
          uVar13 = FUN_1020bd31();
          local_3ea8 = (uint *)FUN_1020bd31();
        }
      }
      if (-1 < (int)(uVar13 | (uint)local_3ea8)) {
        local_3e90 = local_3e90 + iVar16;
        if (*(char *)(local_3eb0 + 0x2e) == '\0') {
          FUN_101c042c(*(undefined4 *)(local_3eb0 + 0xc));
          iVar16 = FUN_1020bd98(local_3df4);
          iVar6 = local_3eb0;
          if (iVar16 == 0) {
            local_3ea4 = (uint *)**(int **)(local_3eb0 + 0x20);
            local_3eb4 = (*(int **)(local_3eb0 + 0x20))[1];
            local_3e88 = (uint *)**(undefined4 **)(local_3eb0 + 0x24);
            uVar7 = (*(undefined4 **)(local_3eb0 + 0x24))[1];
            FUN_10208523(param_3,param_4,1,0,0,local_3e10);
            FUN_1020be1e();
            piVar1 = *(int **)(iVar6 + 0x20);
            if (local_3e2d[0] == '\0') {
              local_3ea4 = (uint *)*piVar1;
              local_3eb4 = piVar1[1];
              local_3e88 = (uint *)**(undefined4 **)(local_3eb0 + 0x24);
              uVar7 = (*(undefined4 **)(local_3eb0 + 0x24))[1];
            }
            *piVar1 = 0;
            *(undefined4 *)(*(int *)(local_3eb0 + 0x20) + 4) = 0;
            iVar6 = FUN_1020bd98(local_3df4);
            if (iVar6 == 0) {
              FUN_10208523(param_3,param_4,1,local_3e90 - local_3e8c,local_3e98,local_3e10);
              iVar6 = local_3eb0;
              FUN_1020be1e();
              piVar1 = *(int **)(iVar6 + 0x20);
              piVar1[1] = local_3eb4;
              *piVar1 = (int)local_3ea4;
              puVar2 = *(undefined4 **)(iVar6 + 0x24);
              puVar2[1] = uVar7;
              *puVar2 = local_3e88;
            }
          }
        }
        else {
          local_3e94 = *(int *)(local_3eb0 + 8);
          iVar6 = **(int **)(local_3e94 + 0x9c);
          iVar16 = FUN_101c039e(iVar6,2);
          if (iVar16 == 0) {
            puVar8 = *(uint **)(iVar6 + 0x58);
            *puVar8 = uVar13;
            *(undefined2 *)(puVar8 + 1) = 0x202;
            puVar8[2] = 0;
            puVar8[3] = 0;
            puVar8[8] = (uint)local_3ea8;
            *(undefined2 *)(puVar8 + 9) = 2;
            iVar16 = FUN_101c5299(local_3e90 - local_3e8c);
            puVar8[10] = iVar16 >> 0x10;
            iVar16 = FUN_101c5299(local_3e98);
            puVar8[0xb] = iVar16 >> 0x10;
            *(undefined4 *)(local_3e94 + 0x80) = 2;
            *(undefined4 *)(local_3e94 + 0x84) = *(undefined4 *)(iVar6 + 0x34);
            *(undefined4 *)(local_3e94 + 0x48) = 0x636f6d70;
            *(undefined4 *)(iVar6 + 0x54) = 2;
          }
        }
      }
      goto LAB_1020a36c;
    case 7:
      local_3eac = iVar12;
      if (cVar4 == '\0') goto switchD_10208823_caseD_0;
      uVar7 = FUN_1020b59a();
      iVar16 = local_3eb0;
      *(undefined4 *)(*(int *)(local_3eb0 + 0x24) + 4) = uVar7;
      uVar7 = FUN_1020b59a();
      **(undefined4 **)(iVar16 + 0x24) = uVar7;
      iVar12 = FUN_1020b59a();
      iVar11 = FUN_1020b59a();
      **(int **)(iVar16 + 0x20) = **(int **)(iVar16 + 0x20) + iVar11;
      piVar1 = (int *)(*(int *)(iVar16 + 0x20) + 4);
      *piVar1 = *piVar1 + iVar12;
      local_3e2d[0] = '\x01';
      if (*(char *)(iVar16 + 0x2f) != '\0') goto LAB_1020a36c;
      if ((char)local_3eac == '\0') goto LAB_10209d86;
      param_6 = (uint *)((int)param_6 + iVar11);
      param_7 = (uint *)((int)param_7 + iVar12);
      iVar12 = iVar6;
LAB_102092e0:
      iVar12 = CONCAT31((int3)((uint)iVar12 >> 8),1);
    default:
      goto switchD_10208823_caseD_0;
    case 9:
      FUN_1020b59a();
      break;
    case 10:
      FUN_1020b59a();
      FUN_1020b59a();
      break;
    case 0xb:
      FUN_1020b59a();
      FUN_1020b59a();
      break;
    case 0xc:
      if ((cVar4 == '\0') || ((char)local_3e80 == '\0')) {
        local_3eb4 = iVar6;
        uVar7 = FUN_1020b59a();
        uVar15 = FUN_1020b59a();
      }
      else {
        local_3eb4 = iVar6;
        uVar7 = FUN_1020b31e();
        uVar15 = FUN_1020b31e();
        local_3e80 = 0;
      }
      FUN_101c2523(uVar15,uVar7);
      FUN_1020be78();
      iVar6 = local_3eb4;
      goto LAB_10208722;
    case 0xe:
      FUN_1020b59a();
      break;
    case 0xf:
      FUN_1020b59a();
      FUN_1020b59a();
LAB_1020930b:
      FUN_1020bd00();
      goto LAB_10208722;
    case 0x10:
      if (cVar4 != '\0') {
        local_3eb4 = iVar6;
        local_3eac = iVar12;
        iVar12 = FUN_1020b31e();
        puVar8 = (uint *)FUN_1020b31e();
        puVar18 = (uint *)FUN_1020b545();
        iVar16 = local_3eac;
        iVar6 = local_3eb4;
        local_3ea4 = puVar8;
        if (puVar18 < puVar8) goto LAB_1020a36c;
        switch(iVar12) {
        case 0:
          if ((puVar8 != (uint *)0x3) ||
             (((char)local_3eac != '\0' &&
              ((*(int *)(local_3eb0 + 0x1d4) == 0 || (*(int *)(local_3eb0 + 0x1d8) != 7))))))
          goto LAB_1020a36c;
          FUN_1020be78();
          FUN_1020be78();
          local_3ea0 = 2;
          local_3e9c = (uint *)0x0;
          iVar12 = iVar16;
          goto LAB_10208722;
        case 1:
          if (puVar8 != (uint *)0x0) goto LAB_1020a36c;
          local_3e9c = (uint *)0x0;
          local_3ea0 = 0;
          iVar12 = 0;
          if ((char)local_3eac != '\0') {
            iVar6 = FUN_10208170();
            if (iVar6 == 0) {
              *(undefined4 *)(local_3eb0 + 0x1d4) = 1;
              *(undefined4 *)(local_3eb0 + 0x1d8) = 0;
              goto LAB_1020a146;
            }
            goto LAB_1020a36c;
          }
          goto LAB_10208722;
        case 2:
          if (puVar8 != (uint *)0x0) goto LAB_1020a36c;
          local_3e9c = (uint *)0x0;
          local_3ea0 = 0;
          iVar12 = 0;
          if ((char)local_3eac != '\0') {
            if (*(int *)(local_3eb0 + 0x1d4) == 0) goto LAB_1020a36c;
            uVar13 = *(uint *)(local_3eb0 + 0x1d8);
            *(uint *)(local_3eb0 + 0x1d8) = uVar13 + 1;
            local_3ea0 = 0;
            iVar12 = iVar16;
            if (uVar13 - 1 < 6) {
              iVar12 = FUN_10208170();
              if (iVar12 != 0) goto LAB_1020a36c;
              iVar12 = uVar13 * 2 + -6;
              if (uVar13 < 4) {
                iVar12 = uVar13 * 2;
              }
              auStack_cc[iVar12 + 3] = param_6;
              auStack_cc[iVar12 + 4] = param_7;
              if ((uVar13 == 6) || (local_3ea0 = 0, iVar12 = iVar16, uVar13 == 3)) {
                FUN_1020b7e5(auStack_cc[6],auStack_cc[7],auStack_cc[8],(undefined4)local_a8,
                             local_a8._4_4_);
                goto LAB_1020871a;
              }
            }
          }
          goto LAB_10208722;
        case 3:
          if (puVar8 != (uint *)0x1) goto LAB_1020a36c;
          local_3e9c = (uint *)0x0;
          local_3ea0 = 1;
          iVar12 = 0;
          if ((char)local_3eac != '\0') {
            FUN_1020bea9();
            FUN_1020bea9();
            FUN_1020b0dc();
            local_d0[0] = 0x100;
            goto LAB_1020a2b3;
          }
          goto LAB_10208722;
        default:
          if (((int)puVar8 < 0) || (iVar12 < 0)) goto LAB_1020a36c;
          puVar18 = (uint *)0x3;
          if (puVar8 < (uint *)0x3) {
            puVar18 = puVar8;
          }
          local_3ea0 = 0;
          local_3e9c = puVar18;
          while (iVar12 = local_3eac, iVar6 = local_3eb4, puVar8 != (uint *)0x0) {
            uVar7 = FUN_1020b59a();
            local_a0[(int)puVar18 + 0x1f] = uVar7;
            puVar18 = (uint *)((int)puVar18 + -1);
            puVar8 = puVar18;
          }
          goto LAB_10208722;
        case 0xc:
        case 0xd:
          FUN_1020b317();
LAB_1020a146:
          local_3e9c = (uint *)0x0;
          local_3ea0 = 0;
          iVar12 = local_3eac;
          iVar6 = local_3eb4;
          goto LAB_10208722;
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
          local_3ea8 = *(uint **)(local_3eb0 + 0x284);
          if ((local_3ea8 == (uint *)0x0) ||
             (local_3ea0 = iVar12 + -0xd + (uint)(iVar12 == 0x12),
             puVar8 != (uint *)(*local_3ea8 * local_3ea0))) goto LAB_1020a36c;
          local_3e8c = local_3ea0 + ((int)puVar18 - (int)puVar8);
          uVar13 = 0;
          puVar8 = (uint *)((int)puVar18 - (int)puVar8);
          do {
            iVar6 = FUN_1020b54f();
            uVar20 = local_3e8c;
            local_3e98 = puVar8;
            if (1 < *local_3ea8) {
              uVar14 = 1;
              local_3e90 = uVar13;
              do {
                iVar16 = *(int *)(local_3ea8[0x22] + uVar14 * 4);
                iVar12 = FUN_1020b54f();
                lVar3 = (longlong)iVar12 * (longlong)iVar16;
                iVar16 = (int)(lVar3 >> 0x3f);
                lVar3 = lVar3 + CONCAT44(iVar16,iVar16) + 0x8000;
                iVar6 = iVar6 + ((int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10);
                uVar14 = uVar14 + 1;
              } while (uVar14 < *local_3ea8);
              local_3e8c = (uVar20 + uVar14) - 1;
              uVar13 = local_3e90;
            }
            local_3e98 = (uint *)((int)local_3e98 + 1);
            FUN_1020bcc7(iVar6);
            uVar13 = uVar13 + 1;
            puVar8 = local_3e98;
          } while (uVar13 != local_3ea0);
          FUN_1020beb1();
          local_3e9c = (uint *)0x0;
          iVar12 = local_3eac;
          iVar6 = local_3eb4;
          goto LAB_10208722;
        case 0x13:
          if ((puVar8 != (uint *)0x1) ||
             (puVar8 = *(uint **)(local_3eb0 + 0x284), puVar8 == (uint *)0x0)) goto LAB_1020a36c;
          uVar13 = *(uint *)(local_3eb0 + 0x28c);
          uVar14 = FUN_1020b31e();
          iVar16 = local_3eac;
          iVar6 = local_3eb4;
          uVar20 = *puVar8;
          if ((uVar13 < uVar20) || (uVar13 - uVar20 < uVar14)) goto LAB_1020a36c;
          local_3e9c = (uint *)0x0;
          local_3ea0 = 0;
          iVar12 = local_3eac;
          if (*(int *)(local_3eb0 + 0x288) != 0) goto code_r0x10209f18;
          goto LAB_10208722;
        case 0x14:
          if (puVar8 != (uint *)0x2) goto LAB_1020a36c;
          FUN_1020b59a();
          FUN_1020b59a();
          break;
        case 0x15:
          if (puVar8 != (uint *)0x2) goto LAB_1020a36c;
          FUN_1020b59a();
          FUN_1020b59a();
          break;
        case 0x16:
          if (puVar8 != (uint *)0x2) goto LAB_1020a36c;
          FUN_1020b59a();
          FUN_1020b59a();
          break;
        case 0x17:
          if (puVar8 != (uint *)0x2) goto LAB_1020a36c;
          iVar12 = FUN_1020b59a();
          uVar7 = FUN_1020b59a();
          iVar16 = local_3eac;
          iVar6 = local_3eb4;
          if (iVar12 == 0) goto LAB_1020a36c;
          FUN_101c2523(uVar7,iVar12);
          break;
        case 0x18:
          if (((puVar8 != (uint *)0x2) || (*(int *)(local_3eb0 + 0x284) == 0)) ||
             (uVar13 = FUN_1020b31e(), iVar16 = local_3eac, iVar6 = local_3eb4,
             *(uint *)(local_3eb0 + 0x28c) <= uVar13)) goto LAB_1020a36c;
          uVar7 = FUN_1020b59a();
          *(undefined4 *)(*(int *)(local_3eb0 + 0x288) + uVar13 * 4) = uVar7;
          local_3e9c = (uint *)0x0;
          goto LAB_1020871a;
        case 0x19:
          if (((puVar8 != (uint *)0x1) || (*(int *)(local_3eb0 + 0x284) == 0)) ||
             (uVar13 = FUN_1020b31e(), iVar16 = local_3eac, iVar6 = local_3eb4,
             *(uint *)(local_3eb0 + 0x28c) <= uVar13)) goto LAB_1020a36c;
          break;
        case 0x1b:
          if (puVar8 == (uint *)0x4) {
            FUN_1020b59a();
            FUN_1020b59a();
            FUN_1020b59a();
            FUN_1020b59a();
            iVar6 = local_3eb4;
            FUN_1020be78();
            local_3e9c = (uint *)0x0;
            iVar16 = local_3eac;
            goto LAB_1020a2b3;
          }
          goto LAB_1020a36c;
        case 0x1c:
          if (puVar8 != (uint *)0x0) goto LAB_1020a36c;
          iVar12 = *(int *)(local_3eb0 + 0x218);
          uVar7 = FUN_10207285(*(undefined4 *)(iVar12 + 0x284));
          *(undefined4 *)(iVar12 + 0x284) = uVar7;
        }
        FUN_1020be78();
        local_3e9c = (uint *)0x0;
LAB_1020a2b3:
        local_3ea0 = 1;
        iVar12 = iVar16;
      }
      goto LAB_10208722;
    case 0x11:
      if (cVar4 == '\0') goto LAB_10208722;
      if (0 < (int)local_3ea0) {
        local_3ea0 = local_3ea0 - 1;
        goto LAB_10208722;
      }
      if (local_3e9c == (uint *)0x0) goto LAB_1020a36c;
      local_3e9c = (uint *)((int)local_3e9c + -1);
      break;
    case 0x12:
      FUN_1020b59a();
      goto LAB_10208722;
    case 0x14:
      uVar13 = FUN_1020b31e();
      uVar7 = FUN_1020b59a();
      if (uVar13 < 0x20) {
        local_a0[uVar13] = uVar7;
      }
      goto LAB_10208722;
    case 0x15:
      uVar13 = FUN_1020b31e();
      if (0x1f < uVar13) goto LAB_10208722;
      break;
    case 0x16:
      local_3ea8 = (uint *)FUN_1020b59a();
      FUN_1020b59a();
      FUN_1020b59a();
      local_3eb4 = iVar6;
      local_3eac = iVar12;
      FUN_1020b59a();
      goto LAB_1020992b;
    case 0x17:
      iVar16 = *(int *)(local_3eb0 + 0x218);
      uVar7 = FUN_10207285(*(undefined4 *)(iVar16 + 0x284));
      *(undefined4 *)(iVar16 + 0x284) = uVar7;
      break;
    case 0x18:
      FUN_1020b59a();
      FUN_1020b59a();
      break;
    case 0x1a:
      iVar16 = FUN_1020b59a();
      if (0 < iVar16) {
        FUN_101c573d(iVar16);
      }
      FUN_1020be78();
      goto LAB_10208722;
    case 0x1b:
      FUN_1020b59a();
      FUN_1020be78();
      break;
    case 0x1c:
      local_3eb4 = iVar6;
      local_3eac = iVar12;
      FUN_1020b59a();
      FUN_1020b59a();
      FUN_1020be78();
LAB_1020992b:
      iVar6 = local_3eb4;
      FUN_1020be78();
      iVar12 = local_3eac;
      goto LAB_10208722;
    case 0x1d:
      FUN_1020b31e();
      iVar16 = FUN_1020b545();
      if (iVar16 != 0) {
        FUN_1020b54f();
        FUN_1020be78();
      }
      goto LAB_10208722;
    case 0x1e:
      uVar7 = FUN_1020b31e();
      FUN_1020b31e();
      FUN_1020bed8(uVar7);
      goto LAB_10208722;
    case 0x21:
      if (cVar17 != '\0' && cVar4 != '\0') {
        param_7 = (uint *)FUN_1020b59a();
        param_6 = (uint *)FUN_1020b59a();
        *(undefined4 *)(local_3eb0 + 0x1d4) = 0;
        goto LAB_102092e0;
      }
      goto switchD_10208823_caseD_0;
    }
    FUN_1020be78();
    goto LAB_10208722;
  case 0xd:
    if (cVar4 != '\0') {
      uVar7 = FUN_1020b59a();
      iVar16 = local_3eb0;
      **(undefined4 **)(local_3eb0 + 0x24) = uVar7;
      *(undefined4 *)(*(int *)(local_3eb0 + 0x24) + 4) = 0;
      local_3eb4 = iVar6;
      iVar11 = FUN_1020b59a();
      piVar1 = *(int **)(iVar16 + 0x20);
      *piVar1 = *piVar1 + iVar11;
      local_3e2d[0] = '\x01';
      if (*(char *)(iVar16 + 0x2f) != '\0') goto LAB_1020a36c;
      iVar6 = local_3eb4;
      if (cVar17 != '\0') {
        param_6 = (uint *)((int)param_6 + iVar11);
        goto LAB_102092e0;
      }
LAB_10209d86:
      local_3e2d[0] = '\x01';
      iVar12 = 0;
    }
    break;
  case 0xe:
    if ((cVar4 != '\0') && (cVar17 == '\0')) {
      FUN_1020b5dc(param_7);
      FUN_1020bea9();
      FUN_1020bea9();
      FUN_1020b0dc();
      local_d0[0] = 0x100;
      if (0 < local_3e84) {
        uVar13 = local_3e84 + 1;
        do {
          puVar8 = (uint *)FUN_1020ba37();
          uVar13 = uVar13 - 1;
        } while (1 < uVar13);
        local_3e84 = 0;
        local_3e88 = puVar8;
      }
      local_3e88[3] = local_3e88[1];
      goto LAB_102092e0;
    }
    iVar12 = FUN_1020b545();
    iVar16 = local_3e94;
    iVar6 = local_3eb0;
    if (((iVar12 == 1) || (iVar12 == 5)) && (local_3e2d[0] == '\0')) {
      iVar12 = FUN_1020b54f();
      *param_8 = iVar12 + local_3e78;
    }
    if (((*(char *)(iVar6 + 0x224) == '\0') && (FUN_1020b9cc(), *(char *)(iVar16 + 9) == '\0')) &&
       ((*(char *)(iVar16 + 8) == '\0' &&
        ((uVar13 = FUN_1020b545(), 1 < uVar13 && (param_5 == '\0')))))) {
      FUN_1020b31e();
      FUN_1020b31e();
      uVar7 = FUN_1020b59a();
      uVar15 = FUN_1020b59a();
      iVar6 = FUN_1020bfc0(local_3df4);
      if (iVar6 == 0) {
        FUN_10208523(param_3,param_4,1,uVar15,uVar7,local_3e10);
        FUN_1020c059();
        iVar6 = FUN_1020bfc0(local_3df4);
        if (iVar6 == 0) {
          FUN_10208523(param_3,param_4,1,0,0,local_3e10);
          FUN_1020c059();
        }
      }
    }
    goto LAB_1020a36c;
  case 0xf:
    if (*(char *)(local_3e94 + 9) != '\0') {
      if (*(char *)(local_3e94 + 0x5d) != '\0') goto LAB_1020a36c;
      iVar16 = FUN_1020b31e();
      if (-1 < iVar16) {
        *(int *)(local_3e94 + 0x78) = iVar16;
      }
    }
    break;
  case 0x10:
    if (*(char *)(local_3e94 + 9) != '\0') {
      if ((*(int *)(local_3e94 + 0x60) == 0) ||
         ((local_3eb4 = iVar6, local_3eac = iVar12,
          cVar4 = (**(code **)(*(int *)(local_3e94 + 0x224) + 0xc))
                            (local_3e6c,*(undefined4 *)(local_3e94 + 0x78),
                             *(undefined4 *)(local_3e94 + 0x7c),*(undefined4 *)(local_3e94 + 0x80)),
          cVar4 != '\0' &&
          (iVar6 = (**(code **)(*(int *)(iVar16 + 0x224) + 0x10))
                             (iVar11,*(undefined4 *)(iVar16 + 0x78),*(undefined4 *)(iVar16 + 0x7c),
                              *(undefined4 *)(iVar16 + 0x80)), iVar6 != 0)))) goto LAB_1020a36c;
      uVar7 = FUN_1020b31e();
      iVar6 = FUN_1020b350(uVar7);
      if (iVar6 != 0) goto LAB_1020a36c;
      *(undefined1 *)(iVar16 + 0x5d) = 1;
      iVar12 = local_3eac;
      iVar6 = local_3eb4;
      goto LAB_10208722;
    }
    break;
  case 0x13:
  case 0x14:
    uVar13 = FUN_1020b545();
    if ((uVar13 < 2) || (cVar4 = FUN_1020b443(), cVar4 == '\0')) {
      FUN_1020b447(local_3e68,param_8,local_3e2d,0);
      if (*(char *)(local_3eb0 + 0x224) != '\0') goto LAB_1020a36c;
      if (bVar5 == 0x13) {
        iVar16 = FUN_10151d91();
        iVar11 = FUN_10151d91();
        FUN_1020c071(iVar11 + iVar16);
      }
      else {
        FUN_1020c0a2(local_1098,local_17c,local_3e74);
        FUN_1020b0dc();
        iVar16 = FUN_10151d91();
        iVar11 = FUN_10151d91();
        FUN_1020c071(iVar11 + iVar16);
        FUN_1020c0df(local_3e68,local_3e10,0,0);
      }
    }
    break;
  case 0x15:
    uVar13 = FUN_1020b545();
    if ((2 < uVar13) && (local_3e2d[0] == '\0')) {
      iVar16 = FUN_1020b54f();
      *param_8 = iVar16 + local_3e78;
    }
    puVar8 = param_7;
    local_3e2d[0] = '\x01';
    if (*(char *)(local_3eb0 + 0x224) != '\0') goto LAB_1020a36c;
    local_3eb4 = iVar6;
    local_3eac = iVar12;
    iVar16 = FUN_1020b59a();
    param_7 = (uint *)(iVar16 + (int)puVar8);
    iVar6 = FUN_1020b59a();
    param_6 = (uint *)(iVar6 + (int)param_6);
    iVar12 = local_3eac;
    iVar6 = local_3eb4;
    if (*(int *)(local_3eb0 + 0x1d4) == 0) {
      FUN_1020b5dc((uint *)(iVar16 + (int)puVar8));
      iVar12 = local_3eac;
      iVar6 = local_3eb4;
    }
    break;
  case 0x16:
    uVar13 = FUN_1020b545();
    if ((1 < uVar13) && (local_3e2d[0] == '\0')) {
      iVar16 = FUN_1020b54f();
      *param_8 = iVar16 + local_3e78;
    }
    local_3e2d[0] = '\x01';
    if (*(char *)(local_3eb0 + 0x224) != '\0') goto LAB_1020a36c;
    iVar16 = FUN_1020b59a();
    param_6 = (uint *)(iVar16 + (int)param_6);
    iVar16 = *(int *)(local_3eb0 + 0x1d4);
joined_r0x10208e16:
    if (iVar16 == 0) {
      FUN_1020b5dc(param_7);
    }
    break;
  case 0x19:
    local_3eb4 = iVar6;
    local_3eac = iVar12;
    local_3e98 = (uint *)FUN_1020b545();
    puVar8 = (uint *)0x0;
    puVar18 = param_7;
    if ((uint *)0x6 < local_3e98) {
      puVar19 = (uint *)0x0;
      do {
        iVar6 = FUN_1020b54f();
        param_6 = (uint *)((int)param_6 + iVar6);
        iVar6 = FUN_1020b54f();
        puVar18 = (uint *)((int)puVar18 + iVar6);
        FUN_1020b662(puVar18);
        puVar8 = (uint *)((int)puVar19 + 2);
        puVar21 = puVar19 + 2;
        puVar19 = puVar8;
      } while (puVar21 < local_3e98);
    }
    if (puVar8 < local_3e98) {
      do {
        iVar6 = FUN_1020b54f();
        iVar16 = FUN_1020b54f();
        local_3e8c = iVar16 + (int)puVar18;
        iVar12 = FUN_1020b54f();
        local_3ea8 = (uint *)((int)param_6 + iVar12 + iVar6);
        iVar6 = FUN_1020b54f();
        local_3e90 = iVar6 + iVar16 + (int)puVar18;
        iVar6 = FUN_1020b54f();
        local_3ea4 = (uint *)(iVar6 + (int)local_3ea8);
        iVar6 = FUN_1020b54f();
        param_6 = local_3ea4;
        puVar18 = (uint *)(iVar6 + local_3e90);
        FUN_1020b7e5(local_3e8c,local_3ea8,local_3e90,local_3ea4,puVar18);
        puVar8 = (uint *)((int)puVar8 + 6);
      } while (puVar8 < local_3e98);
    }
    goto LAB_10209510;
  case 0x1a:
    local_3eb4 = iVar6;
    local_3eac = iVar12;
    local_3e8c = FUN_1020b545();
    local_3e90 = local_3e8c & 0xfffffffd;
    uVar13 = local_3e8c & 2;
    puVar18 = param_7;
    if (uVar13 < local_3e90) {
      do {
        if ((local_3e8c - uVar13 & 1) != 0) {
          iVar6 = FUN_1020b54f();
          param_6 = (uint *)((int)param_6 + iVar6);
          uVar13 = uVar13 + 1;
        }
        local_3e98 = param_6;
        iVar6 = FUN_1020b54f();
        local_3ea8 = (uint *)((int)puVar18 + iVar6);
        iVar6 = FUN_1020b54f();
        param_6 = (uint *)(iVar6 + (int)param_6);
        iVar6 = FUN_1020b54f();
        iVar6 = iVar6 + (int)local_3ea8;
        iVar16 = FUN_1020b54f();
        puVar18 = (uint *)(iVar16 + iVar6);
        FUN_1020b7e5(local_3ea8,param_6,iVar6,param_6,puVar18);
        uVar13 = uVar13 + 4;
      } while (uVar13 < local_3e90);
    }
    goto LAB_10209510;
  case 0x1b:
    local_3eb4 = iVar6;
    local_3eac = iVar12;
    local_3e8c = FUN_1020b545();
    local_3e90 = local_3e8c & 0xfffffffd;
    uVar13 = local_3e8c & 2;
    puVar18 = param_7;
    if (uVar13 < local_3e90) {
      do {
        if ((local_3e8c - uVar13 & 1) != 0) {
          iVar6 = FUN_1020b54f();
          uVar13 = uVar13 + 1;
          puVar18 = (uint *)((int)puVar18 + iVar6);
        }
        local_3ea8 = puVar18;
        iVar6 = FUN_1020b54f();
        iVar16 = FUN_1020b54f();
        local_3e98 = (uint *)((int)param_6 + iVar16 + iVar6);
        iVar6 = FUN_1020b54f();
        puVar18 = (uint *)(iVar6 + (int)local_3ea8);
        iVar6 = FUN_1020b54f();
        param_6 = (uint *)(iVar6 + (int)local_3e98);
        FUN_1020b7e5(local_3ea8,local_3e98,puVar18,param_6,puVar18);
        uVar13 = uVar13 + 4;
      } while (uVar13 < local_3e90);
    }
    goto LAB_10209510;
  case 0x1c:
    FUN_1020b2f6();
    FUN_1020b2f6();
    goto LAB_1020930b;
  case 0x1e:
  case 0x1f:
    local_3eb4 = iVar6;
    local_3eac = iVar12;
    uVar20 = FUN_1020b545();
    uVar13 = uVar20 & 2;
    puVar18 = param_7;
    if (uVar13 < (uVar20 & 0xfffffffd)) {
      local_3e98 = param_6;
      local_3e90 = CONCAT31((int3)((uint)puVar8 >> 8),bVar5 == 0x1f);
      local_3e8c = uVar20 & 0xfffffffd;
      do {
        local_3ea8 = puVar18;
        local_3ea4 = (uint *)FUN_1020b54f();
        local_3e70 = uVar13 + 1;
        iVar6 = FUN_1020b54f();
        iVar16 = FUN_1020b54f();
        iVar12 = FUN_1020b54f();
        if ((char)local_3e90 == '\0') {
          local_3ea8 = (uint *)((int)local_3ea8 + (int)local_3ea4);
          puVar8 = (uint *)(iVar6 + (int)local_3e98);
          puVar19 = (uint *)(iVar16 + (int)local_3ea8);
          param_6 = (uint *)(iVar12 + (int)puVar8);
          local_3e90 = CONCAT31((int3)((uint)local_3ea8 >> 8),1);
          puVar18 = puVar19;
          local_3ea4 = puVar8;
          if (local_3e8c - uVar13 == 5) {
            iVar6 = FUN_1020b54f();
            puVar8 = local_3ea4;
            puVar18 = (uint *)(iVar6 + (int)puVar19);
            uVar13 = local_3e70;
          }
        }
        else {
          puVar8 = (uint *)(iVar6 + (int)local_3e98 + (int)local_3ea4);
          local_3e98 = (uint *)(iVar16 + (int)local_3ea8);
          puVar18 = (uint *)(iVar12 + (int)local_3e98);
          param_6 = puVar8;
          if (local_3e8c - uVar13 == 5) {
            iVar6 = FUN_1020b54f();
            uVar13 = local_3e70;
            param_6 = (uint *)(iVar6 + (int)puVar8);
          }
          local_3e90 = 0;
          puVar19 = local_3e98;
        }
        FUN_1020b7e5(local_3ea8,puVar8,puVar19,param_6,puVar18);
        uVar13 = uVar13 + 4;
        local_3e98 = param_6;
      } while (uVar13 < local_3e8c);
    }
LAB_10209510:
    param_7 = puVar18;
    FUN_1020b317();
    iVar12 = local_3eac;
    iVar6 = local_3eb4;
    goto LAB_10208722;
  default:
    if (bVar5 < 0xf7) goto LAB_1020930b;
    local_3eb4 = iVar6;
    local_3eac = iVar12;
    iVar6 = FUN_1020b2f6();
    if ((0xfa < bVar5) && (bVar5 == 0xff)) {
      iVar16 = FUN_1020b2f6();
      iVar12 = FUN_1020b2f6();
      uVar13 = FUN_1020b2f6();
      if (*(char *)(local_3e94 + 8) == '\0') {
        FUN_1020be78();
        iVar12 = local_3eac;
        iVar6 = local_3eb4;
        goto LAB_10208722;
      }
      uVar14 = local_3e80 & 0xff;
      uVar20 = 1;
      if ((char)local_3e80 != '\0') {
        uVar20 = uVar14;
      }
      local_3e80 = uVar20;
      if ((iVar12 << 8 | iVar16 << 0x10 | iVar6 << 0x18 | uVar13) + 32000 < 0xfa01) {
        local_3e80 = uVar14;
      }
    }
    FUN_1020bd00();
    iVar12 = local_3eac;
    iVar6 = local_3eb4;
    goto LAB_10208722;
  }
switchD_10208823_caseD_0:
  FUN_1020b317();
  goto LAB_10208722;
code_r0x10209f18:
  local_3ea0 = 0;
  if (puVar8[0x22] != 0) goto LAB_1020a31d;
  goto LAB_10208722;
LAB_1020a31d:
  FUN_1025b2d0(*(int *)(local_3eb0 + 0x288) + uVar14 * 4,puVar8[0x22],uVar20 << 2);
  goto LAB_1020871a;
}

