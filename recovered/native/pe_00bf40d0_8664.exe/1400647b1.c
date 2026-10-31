/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400647b1 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1400647b1(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  char param_5,int param_6,int param_7,int *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  longlong *plVar24;
  undefined8 uVar25;
  undefined7 extraout_var;
  longlong lVar26;
  longlong lVar27;
  uint *puVar28;
  ulonglong uVar29;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined7 extraout_var_05;
  undefined7 extraout_var_06;
  undefined8 uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  longlong *plVar35;
  bool bVar36;
  undefined1 auStackY_6478 [32];
  undefined *puVar37;
  undefined8 local_6418;
  undefined8 *local_6400;
  ulonglong local_63e8;
  ulonglong local_63c8;
  uint local_63b8;
  longlong local_6390 [7];
  longlong local_6358 [7];
  char local_6319;
  longlong local_6318 [7];
  int local_62e0 [12];
  longlong local_62b0 [773];
  longlong local_4a88 [1548];
  undefined1 local_1a28 [6184];
  undefined1 local_200 [216];
  undefined8 local_128;
  undefined2 local_120;
  int aiStack_110 [6];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  iVar14 = param_7;
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_6478;
  lVar2 = param_1[0x1e];
  plVar24 = param_1 + 1;
  lVar26 = *param_1;
  lVar6 = param_1[7];
  iVar13 = FUN_1400679af(lVar2);
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  FUN_1400679c0(local_6318,lVar26,plVar24,0x20);
  FUN_1400679c0(local_6358,lVar26,plVar24,0x14);
  FUN_1400679c0(local_6390,lVar26,plVar24,0x14);
  FUN_1400679d7(&local_128,plVar24);
  FUN_1400679ee(local_4a88,param_1,param_3,(int)lVar6,local_6358,local_6390,&local_128,iVar14,
                param_1 + 0x27,param_4);
  local_6319 = *(char *)((longlong)param_1 + 0xd) != '\0';
  iVar14 = FUN_140067b6e(lVar2);
  *param_8 = iVar14;
  if (*(char *)((longlong)param_1 + 0xd) == '\0') {
    uVar15 = 0x30;
  }
  else {
    uVar15 = FUN_140067b7f(lVar2);
  }
  plVar24 = FUN_140067b8d(lVar26,(longlong)(param_1 + 1),uVar15);
  if (plVar24 == (longlong *)0x0) {
    iVar14 = 0x40;
  }
  else {
    FUN_140067c45(local_6318);
    if ((int)param_1[1] == 0) {
      local_6400 = (undefined8 *)FUN_140067c73((longlong)local_6318);
      uVar25 = param_2[1];
      uVar30 = param_2[2];
      uVar4 = param_2[3];
      *local_6400 = *param_2;
      local_6400[1] = uVar25;
      local_6400[2] = uVar30;
      local_6400[3] = uVar4;
      plVar3 = param_1 + 0xc;
      iVar31 = 20000000;
      local_63c8 = 0;
      local_63e8 = 0;
      bVar5 = false;
      iVar22 = 0;
      bVar7 = false;
LAB_140064a3c:
      bVar36 = bVar7;
      plVar35 = param_1 + 1;
      uVar25 = FUN_140067c78((longlong)local_6400);
      if ((char)uVar25 == '\0') {
        bVar8 = FUN_140067c84(local_6400);
        iVar14 = (int)CONCAT71(extraout_var,bVar8);
        uVar29 = CONCAT71(extraout_var,bVar8) & 0xffffffff;
        if (((iVar14 == 0xe) || (iVar14 == 0xb)) &&
           (uVar29 = (ulonglong)bVar8, *(char *)((longlong)param_1 + 0xd) != '\0')) {
          uVar29 = 0;
        }
      }
      else {
        uVar29 = (ulonglong)((uint)((int)local_63c8 == 0) * 3 + 0xb);
      }
      cVar9 = *(char *)((longlong)param_1 + 0xc);
      bVar8 = (byte)uVar29;
      bVar7 = bVar5;
      if (cVar9 != '\0') {
        if ((((!bVar36) && ((bVar8 & 0xfe) != 10)) &&
            ((bVar8 != 0xd && (((bVar8 & 0xfd) != 1 && (bVar8 < 0x20)))))) &&
           ((bVar8 != 0xc && (bVar8 != 0xe)))) {
          FUN_140067cb3((longlong)plVar24);
          bVar7 = false;
          goto LAB_140064a3c;
        }
        uVar23 = (uint)local_63e8;
        uVar15 = 0;
        if ((byte)(bVar8 - 10) < 3) {
          uVar15 = uVar23;
        }
        if (0x1f < bVar8) {
          uVar15 = uVar23;
        }
        bVar7 = false;
        if (0x1f < bVar8) {
          bVar7 = bVar5;
        }
        if (0 < (int)uVar23) {
          local_63e8 = (ulonglong)uVar15;
        }
        if (!bVar5) {
          bVar7 = bVar5;
        }
        if (bVar8 == 0xc) {
          bVar7 = bVar5;
        }
      }
      bVar5 = bVar7;
      iVar14 = 0;
      if ((int)*plVar35 != 0) goto LAB_140066bed;
      iVar31 = iVar31 + -1;
      if (iVar31 == 0) {
LAB_140066be7:
        iVar14 = 0x12;
        goto LAB_140066bed;
      }
      iVar20 = (int)(uVar29 & 0xff);
      bVar7 = bVar36;
      switch(uVar29 & 0xff) {
      case 0:
      case 2:
      case 0x11:
        goto switchD_140064b6c_caseD_0;
      case 1:
      case 0x12:
        if (cVar9 == '\0') {
          cVar9 = FUN_140067dff((longlong)&local_128);
          if (cVar9 != '\0') break;
          iVar20 = 0;
        }
        else {
          iVar20 = *(int *)(*(longlong *)(lVar2 + 0x40) + 4);
        }
        plVar35 = local_6358;
        goto LAB_140064e7c;
      case 3:
      case 0x17:
        if (cVar9 == '\0') {
          cVar9 = FUN_140067dff((longlong)&local_128);
          if (cVar9 != '\0') break;
          iVar20 = 0;
        }
        else {
          iVar20 = **(int **)(lVar2 + 0x40);
        }
        plVar35 = local_6390;
LAB_140064e7c:
        iVar14 = 0;
        FUN_140067e03((longlong)param_1,(longlong)plVar24,plVar35,param_8,&local_6319,iVar20);
        if (*(char *)(lVar2 + 0x340) != '\0') goto LAB_140066bed;
        break;
      case 4:
        uVar29 = FUN_140067f2a((longlong)plVar24);
        if ((1 < (uint)uVar29) && (local_6319 == '\0')) {
          iVar20 = FUN_140067f37((longlong)plVar24,0);
          *param_8 = iVar20 + iVar13;
        }
        iVar20 = param_7;
        local_6319 = '\x01';
        if (*(char *)(lVar2 + 0x340) == '\0') {
          iVar14 = FUN_140067f8f((longlong)plVar24);
          param_7 = iVar14 + iVar20;
          iVar14 = *(int *)(lVar2 + 0x2e0);
          goto joined_r0x000140065191;
        }
        goto LAB_140066bed;
      case 5:
        uVar29 = FUN_140067f2a((longlong)plVar24);
        iVar14 = param_6;
        iVar20 = param_7;
        if ((uint)uVar29 != 0) {
          uVar15 = 0;
          do {
            iVar16 = FUN_140067f37((longlong)plVar24,uVar15);
            iVar14 = iVar14 + iVar16;
            iVar16 = FUN_140067f37((longlong)plVar24,uVar15 + 1);
            iVar20 = iVar20 + iVar16;
            FUN_14006807d(local_4a88,iVar14,iVar20);
            uVar15 = uVar15 + 2;
          } while (uVar15 < (uint)uVar29);
        }
        param_6 = iVar14;
        param_7 = iVar20;
        FUN_140067cb3((longlong)plVar24);
        goto LAB_140064a3c;
      case 6:
      case 7:
        uVar29 = FUN_140067f2a((longlong)plVar24);
        iVar14 = param_6;
        iVar20 = param_7;
        if ((uint)uVar29 != 0) {
          bVar36 = bVar8 != 6;
          uVar15 = 0;
          do {
            iVar18 = FUN_140067f37((longlong)plVar24,uVar15);
            iVar17 = iVar18;
            iVar16 = 0;
            if (bVar36) {
              iVar17 = 0;
              iVar16 = iVar18;
            }
            iVar20 = iVar20 + iVar16;
            iVar14 = iVar14 + iVar17;
            FUN_14006807d(local_4a88,iVar14,iVar20);
            uVar15 = uVar15 + 1;
            bVar36 = (bool)(bVar36 ^ 1);
          } while ((uint)uVar29 != uVar15);
        }
        param_6 = iVar14;
        param_7 = iVar20;
        FUN_140067cb3((longlong)plVar24);
        goto LAB_140064a3c;
      case 8:
      case 0x18:
        uVar29 = FUN_140067f2a((longlong)plVar24);
        uVar15 = 0;
        iVar20 = param_7;
        iVar14 = param_6;
        if (5 < (uint)uVar29) {
          uVar23 = 0;
          do {
            iVar17 = FUN_140067f37((longlong)plVar24,uVar23);
            iVar17 = iVar14 + iVar17;
            iVar18 = FUN_140067f37((longlong)plVar24,uVar23 + 1);
            iVar18 = iVar20 + iVar18;
            iVar16 = FUN_140067f37((longlong)plVar24,uVar23 + 2);
            iVar16 = iVar16 + iVar17;
            iVar19 = FUN_140067f37((longlong)plVar24,uVar23 + 3);
            iVar19 = iVar19 + iVar18;
            iVar14 = FUN_140067f37((longlong)plVar24,uVar23 + 4);
            iVar14 = iVar14 + iVar16;
            iVar20 = FUN_140067f37((longlong)plVar24,uVar23 + 5);
            iVar20 = iVar20 + iVar19;
            FUN_140068224(local_4a88,iVar17,iVar18,iVar16,iVar19,iVar14,iVar20);
            uVar15 = uVar23 + 6;
            uVar32 = uVar23 + 0xc;
            uVar23 = uVar15;
          } while (uVar32 <= (uint)uVar29);
        }
        if (bVar8 == 0x18) {
          param_6 = iVar14;
          param_7 = iVar20;
          iVar16 = FUN_140067f37((longlong)plVar24,uVar15);
          param_6 = iVar14 + iVar16;
          iVar17 = FUN_140067f37((longlong)plVar24,uVar15 | 1);
          param_7 = iVar20 + iVar17;
          FUN_14006807d(local_4a88,iVar14 + iVar16,param_7);
          iVar14 = param_6;
          iVar20 = param_7;
        }
        goto LAB_140065990;
      case 9:
        if (cVar9 != '\0') {
          FUN_140068455(local_4a88);
          local_6319 = '\x01';
        }
        break;
      case 10:
      case 0x1d:
        if (0xf < (int)local_63c8) goto LAB_140066be7;
        local_6400 = (undefined8 *)FUN_1400684c4((longlong)local_6318,(longlong)(int)local_63c8 + 1)
        ;
        uVar15 = FUN_140067cbc((longlong)plVar24);
        if ((*(char *)((longlong)param_1 + 0xc) != '\0') && (*(longlong *)(lVar2 + 0x3a8) != 0)) {
          puVar28 = (uint *)FUN_14001ccf2(uVar15,*(longlong *)(lVar2 + 0x3a8));
          if (puVar28 == (uint *)0x0) {
            uVar15 = 0xffffffff;
          }
          else {
            uVar15 = *puVar28;
          }
        }
        if (bVar8 == 0x1d) {
          bVar36 = FUN_1400684f4(lVar2,uVar15,local_6400);
          iVar20 = (int)CONCAT71(extraout_var_03,bVar36);
        }
        else {
          uVar25 = FUN_14006853b(lVar2,uVar15,local_6400);
          iVar20 = (int)uVar25;
        }
        iVar14 = 0x12;
        if (iVar20 != 0) goto LAB_140066bed;
        local_63c8 = (ulonglong)((int)local_63c8 + 1);
        goto LAB_140064a3c;
      case 0xb:
        iVar14 = 0x12;
        if ((int)local_63c8 < 1) goto LAB_140066bed;
        local_63c8 = (ulonglong)((int)local_63c8 - 1);
        local_6400 = (undefined8 *)FUN_1400684c4((longlong)local_6318,local_63c8);
        goto LAB_140064a3c;
      case 0xc:
        uVar10 = FUN_140067c84(local_6400);
        uVar15 = (uint)CONCAT71(extraout_var_00,uVar10);
        switch(uVar15) {
        case 0x13:
        case 0x19:
        case 0x1f:
        case 0x20:
          goto switchD_140064b6c_caseD_0;
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
switchD_140065325_caseD_14:
          if ((*(char *)((longlong)param_1 + 0xd) != '\0') || (0x25 < uVar15))
          goto switchD_140065c06_caseD_8;
          cVar9 = *(char *)((longlong)param_1 + 0xc);
          if ((uVar15 != 0x11) && ((cVar9 != '\0' && (0 < (int)local_63e8)))) {
            local_63e8 = 0;
            goto switchD_140065c06_caseD_8;
          }
          break;
        case 0x22:
          puVar37 = &DAT_1400f9f5c;
          goto LAB_140065b8f;
        case 0x23:
          FUN_1400685be((longlong)plVar24,&param_6,&param_7,local_4a88,0x1400f9f68,'\0');
          goto switchD_140065c06_caseD_8;
        case 0x24:
          puVar37 = &DAT_1400f9f74;
LAB_140065b8f:
          cVar9 = '\0';
LAB_140065bac:
          FUN_1400685be((longlong)plVar24,&param_6,&param_7,local_4a88,(longlong)puVar37,cVar9);
          goto LAB_140064a3c;
        case 0x25:
          puVar37 = &DAT_1400f9f80;
          cVar9 = '\x01';
          goto LAB_140065bac;
        default:
          if ((uVar15 != 8) && (uVar15 != 0xd)) goto switchD_140065325_caseD_14;
          goto switchD_140064b6c_caseD_0;
        }
        switch(uVar15) {
        case 1:
        case 2:
          if (cVar9 != '\0') {
            iVar14 = FUN_140067f37((longlong)plVar24,0);
            iVar20 = FUN_140067f37((longlong)plVar24,2);
            iVar16 = FUN_140067f37((longlong)plVar24,4);
            iVar17 = FUN_140067f37((longlong)plVar24,1);
            FUN_1400687c0((longlong)plVar24,2,iVar20 - (iVar17 + iVar14));
            iVar14 = FUN_140067f37((longlong)plVar24,3);
            FUN_1400687c0((longlong)plVar24,4,iVar16 - (iVar14 + iVar20));
            plVar35 = local_6358;
            if (uVar15 == 1) {
              plVar35 = local_6390;
            }
            iVar20 = *(int *)(*(longlong *)(lVar2 + 0x40) + (ulonglong)(uVar15 != 1) * 4);
            goto LAB_140064e7c;
          }
          goto switchD_140065c06_caseD_8;
        case 3:
          iVar14 = FUN_140067f8f((longlong)plVar24);
          iVar20 = FUN_140067f8f((longlong)plVar24);
          uVar15 = (uint)(iVar14 != 0 && iVar20 != 0);
          goto LAB_1400656d0;
        case 4:
          iVar14 = FUN_140067f8f((longlong)plVar24);
          iVar20 = FUN_140067f8f((longlong)plVar24);
          uVar15 = (uint)(iVar20 != 0 || iVar14 != 0);
          goto LAB_1400656d0;
        case 5:
          iVar14 = FUN_140067f8f((longlong)plVar24);
          bVar36 = iVar14 == 0;
          goto LAB_140066196;
        case 6:
          if (cVar9 == '\0') goto switchD_140065c06_caseD_8;
          lVar26 = *(longlong *)(lVar2 + 8);
          uVar15 = FUN_140067cbc((longlong)plVar24);
          uVar23 = FUN_140067cbc((longlong)plVar24);
          iVar13 = FUN_140067f8f((longlong)plVar24);
          iVar22 = FUN_140067f8f((longlong)plVar24);
          iVar31 = FUN_140067f8f((longlong)plVar24);
          iVar14 = 0x12;
          if ((param_5 != '\0') || (*(char *)(lVar2 + 0x5b) != '\0')) goto LAB_140066bed;
          lVar26 = *(longlong *)(*(longlong *)(lVar26 + 0xd0) + 0x50);
          if (*(longlong *)(lVar2 + 0x368) == 0) {
            if (lVar26 == 0) goto LAB_140066bed;
            iVar20 = **(int **)(lVar2 + 0x40);
          }
          else {
            iVar20 = **(int **)(lVar2 + 0x40);
            if (lVar26 == 0) {
              uVar29 = FUN_140068840(lVar2,uVar23);
              uVar23 = (uint)uVar29;
              uVar29 = FUN_140068840(lVar2,uVar15);
              uVar15 = (uint)uVar29;
            }
          }
          if ((int)(uVar23 | uVar15) < 0) goto LAB_140066bed;
          if (*(char *)(lVar2 + 0x5a) == '\0') {
            FUN_14001ca28(*(longlong *)(lVar2 + 0x18));
            uVar25 = FUN_1400688bc(lVar2,(ulonglong)uVar23,local_62b0);
            iVar14 = (int)uVar25;
            if (iVar14 != 0) goto LAB_140066bed;
            local_6418 = **(undefined8 **)(lVar2 + 0x40);
            uVar25 = **(undefined8 **)(lVar2 + 0x48);
            FUN_1400647b1(param_1,local_62b0,param_3,param_4,'\x01',0,0,local_62e0);
            FUN_140068964(lVar2,(longlong)local_62b0);
            if (local_6319 == '\0') {
              local_6418 = **(undefined8 **)(lVar2 + 0x40);
              uVar25 = **(undefined8 **)(lVar2 + 0x48);
            }
            *(undefined4 *)*(undefined8 **)(lVar2 + 0x40) = 0;
            *(undefined4 *)(*(longlong *)(lVar2 + 0x40) + 4) = 0;
            uVar30 = FUN_1400688bc(lVar2,(ulonglong)uVar15,local_62b0);
            iVar14 = (int)uVar30;
            if (iVar14 != 0) goto LAB_140066bed;
            FUN_1400647b1(param_1,local_62b0,param_3,param_4,'\x01',(iVar20 + iVar22) - iVar31,
                          iVar13,local_62e0);
            FUN_140068964(lVar2,(longlong)local_62b0);
            **(undefined8 **)(lVar2 + 0x40) = local_6418;
            **(undefined8 **)(lVar2 + 0x48) = uVar25;
          }
          else {
            lVar2 = *(longlong *)(lVar2 + 0x10);
            plVar3 = (longlong *)**(undefined8 **)(lVar2 + 0xf0);
            iVar14 = FUN_14001c971(plVar3,2);
            if (iVar14 != 0) goto LAB_140066bed;
            puVar28 = (uint *)plVar3[0x14];
            *puVar28 = uVar23;
            *(undefined2 *)(puVar28 + 1) = 0x202;
            puVar28[2] = 0;
            puVar28[3] = 0;
            puVar28[8] = uVar15;
            *(undefined2 *)(puVar28 + 9) = 2;
            uVar15 = FUN_140021867((iVar20 + iVar22) - iVar31);
            puVar28[10] = (int)uVar15 >> 0x10;
            uVar15 = FUN_140021867(iVar13);
            puVar28[0xb] = (int)uVar15 >> 0x10;
            *(undefined4 *)(lVar2 + 0xc0) = 2;
            *(longlong *)(lVar2 + 200) = plVar3[0xb];
            *(undefined4 *)(lVar2 + 0x60) = 0x636f6d70;
            *(undefined4 *)(plVar3 + 0x13) = 2;
          }
LAB_140066f96:
          iVar14 = 0;
          goto LAB_140066bed;
        case 7:
          if (cVar9 != '\0') {
            iVar14 = FUN_140067f8f((longlong)plVar24);
            *(int *)(*(longlong *)(lVar2 + 0x48) + 4) = iVar14;
            iVar14 = FUN_140067f8f((longlong)plVar24);
            **(int **)(lVar2 + 0x48) = iVar14;
            iVar14 = FUN_140067f8f((longlong)plVar24);
            iVar20 = FUN_140067f8f((longlong)plVar24);
            **(int **)(lVar2 + 0x40) = **(int **)(lVar2 + 0x40) + iVar20;
            piVar1 = (int *)(*(longlong *)(lVar2 + 0x40) + 4);
            *piVar1 = *piVar1 + iVar14;
            local_6319 = '\x01';
            if (*(char *)(lVar2 + 0x5b) != '\0') goto LAB_140066f96;
            if (bVar36) {
              param_6 = param_6 + iVar20;
              param_7 = param_7 + iVar14;
            }
          }
        default:
          goto switchD_140065c06_caseD_8;
        case 9:
          iVar14 = FUN_140067f8f((longlong)plVar24);
          if (SBORROW4(0,iVar14)) {
LAB_1400661e6:
            iVar14 = 0x7fffffff;
          }
          else if (-1 < -iVar14) {
            iVar14 = -iVar14;
          }
          break;
        case 10:
          iVar14 = FUN_140067f8f((longlong)plVar24);
          iVar20 = FUN_140067f8f((longlong)plVar24);
          iVar14 = iVar14 + iVar20;
          break;
        case 0xb:
          iVar14 = FUN_140067f8f((longlong)plVar24);
          iVar20 = FUN_140067f8f((longlong)plVar24);
          iVar14 = iVar20 - iVar14;
          break;
        case 0xc:
          if ((cVar9 == '\0') || (!bVar5)) {
            uVar15 = FUN_140067f8f((longlong)plVar24);
            uVar23 = FUN_140067f8f((longlong)plVar24);
          }
          else {
            uVar15 = FUN_140067cbc((longlong)plVar24);
            uVar23 = FUN_140067cbc((longlong)plVar24);
            bVar5 = false;
          }
          uVar15 = FUN_14001ecff(uVar23,uVar15);
          goto LAB_1400662d0;
        case 0xe:
          iVar20 = FUN_140067f8f((longlong)plVar24);
          iVar14 = -iVar20;
          if (SBORROW4(0,iVar20)) goto LAB_1400661e6;
          break;
        case 0xf:
          iVar14 = FUN_140067f8f((longlong)plVar24);
          iVar20 = FUN_140067f8f((longlong)plVar24);
          bVar36 = iVar20 == iVar14;
LAB_140066196:
          uVar15 = (uint)bVar36;
LAB_1400656d0:
          FUN_14006880a((longlong)plVar24,uVar15);
          goto LAB_140064a3c;
        case 0x10:
          if (cVar9 != '\0') {
            iVar22 = FUN_140067cbc((longlong)plVar24);
            uVar23 = FUN_140067cbc((longlong)plVar24);
            uVar29 = FUN_140067f2a((longlong)plVar24);
            uVar15 = (uint)uVar29 - uVar23;
            if ((uint)uVar29 < uVar23) goto LAB_140066e09;
            switch(iVar22) {
            case 0:
              if (uVar23 != 3) break;
              if (bVar36) {
                if (*(int *)(lVar2 + 0x2e0) == 0) break;
                iVar14 = 0x12;
                if (*(int *)(lVar2 + 0x2e4) != 7) goto LAB_140066bed;
              }
              FUN_1400689d4((longlong)plVar24,param_6);
              FUN_1400689d4((longlong)plVar24,param_7);
              iVar22 = 2;
              goto LAB_140066b41;
            case 1:
              iVar14 = 0x12;
              if (uVar23 != 0) goto LAB_140066bed;
              local_63e8 = 0;
              iVar22 = 0;
              bVar7 = false;
              if (bVar36) {
                iVar14 = FUN_140064426(lVar2,6);
                if (iVar14 != 0) goto LAB_140066f96;
                *(undefined8 *)(lVar2 + 0x2e0) = 1;
                local_63e8 = 0;
                iVar22 = 0;
                bVar7 = bVar36;
              }
              goto LAB_140064a3c;
            case 2:
              if (uVar23 == 0) {
                local_63e8 = 0;
                iVar22 = 0;
                bVar7 = false;
                if (!bVar36) goto LAB_140064a3c;
                if (*(int *)(lVar2 + 0x2e0) != 0) {
                  uVar15 = *(uint *)(lVar2 + 0x2e4);
                  *(uint *)(lVar2 + 0x2e4) = uVar15 + 1;
                  iVar22 = 0;
                  bVar7 = bVar36;
                  if (uVar15 - 1 < 6) {
                    iVar22 = FUN_140064426(lVar2,1);
                    iVar14 = 0x12;
                    if (iVar22 != 0) goto LAB_140066bed;
                    iVar14 = uVar15 * 2 + -6;
                    if (uVar15 < 4) {
                      iVar14 = uVar15 * 2;
                    }
                    aiStack_110[(longlong)iVar14 + 4] = param_6;
                    aiStack_110[(longlong)iVar14 + 5] = param_7;
                    if ((uVar15 == 6) || (iVar22 = 0, uVar15 == 3)) {
                      FUN_140068224(local_4a88,(int)local_f8,local_f8._4_4_,(int)uStack_f0,
                                    uStack_f0._4_4_,(int)local_e8,local_e8._4_4_);
LAB_140066750:
                      local_63e8 = 0;
                      iVar22 = 0;
                      bVar7 = bVar36;
                    }
                  }
                  goto LAB_140064a3c;
                }
              }
              break;
            case 3:
              iVar14 = 0x12;
              if (uVar23 != 1) goto LAB_140066bed;
              iVar22 = 1;
              local_63e8 = 0;
              bVar7 = false;
              if (bVar36) {
                FUN_140068a0a((longlong)local_6390);
                FUN_140068a0a((longlong)local_6358);
                FUN_1400679d7(&local_128,param_1 + 1);
                local_120 = 0x100;
                bVar7 = bVar36;
              }
              goto LAB_140064a3c;
            default:
              if (-1 < (int)uVar23) {
                iVar14 = 0x12;
                if (iVar22 < 0) goto LAB_140066bed;
                local_63e8 = 3;
                if (uVar23 < 3) {
                  local_63e8 = (ulonglong)uVar23;
                }
                iVar22 = 0;
                uVar29 = local_63e8;
                if (uVar23 != 0) {
                  do {
                    iVar14 = FUN_140067f8f((longlong)plVar24);
                    *(int *)((longlong)&uStack_60 + uVar29 * 4 + 4) = iVar14;
                    uVar29 = uVar29 - 1;
                  } while (uVar29 != 0);
                }
                goto LAB_140064a3c;
              }
              break;
            case 0xc:
            case 0xd:
              FUN_140067cb3((longlong)plVar24);
              local_63e8 = 0;
              iVar22 = 0;
              goto LAB_140064a3c;
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
              puVar28 = *(uint **)(lVar2 + 0x3c8);
              if (puVar28 != (uint *)0x0) {
                iVar22 = iVar22 + (uint)(iVar22 == 0x12) + -0xd;
                iVar14 = 0x12;
                if (uVar23 != *puVar28 * iVar22) goto LAB_140066bed;
                iVar20 = uVar15 + iVar22;
                iVar14 = 0;
                do {
                  iVar16 = FUN_140067f37((longlong)plVar24,uVar15);
                  if (1 < *puVar28) {
                    uVar29 = 1;
                    do {
                      iVar17 = *(int *)(*(longlong *)(puVar28 + 0x42) + uVar29 * 4);
                      iVar18 = FUN_140067f37((longlong)plVar24,((int)uVar29 + iVar20) - 1);
                      lVar26 = (longlong)iVar18 * (longlong)iVar17;
                      iVar16 = iVar16 + (int)((ulonglong)(lVar26 + (lVar26 >> 0x3f) + 0x8000) >>
                                             0x10);
                      uVar29 = uVar29 + 1;
                    } while (uVar29 < *puVar28);
                    iVar20 = iVar20 + (int)uVar29 + -1;
                  }
                  FUN_1400687c0((longlong)plVar24,uVar15,iVar16);
                  iVar14 = iVar14 + 1;
                  uVar15 = uVar15 + 1;
                } while (iVar14 != iVar22);
                FUN_140068a13((longlong)plVar24,uVar23 - iVar22);
                local_63e8 = 0;
                goto LAB_140064a3c;
              }
              break;
            case 0x13:
              if ((uVar23 == 1) && (puVar28 = *(uint **)(lVar2 + 0x3c8), puVar28 != (uint *)0x0)) {
                uVar15 = *(uint *)(lVar2 + 0x3d8);
                uVar32 = FUN_140067cbc((longlong)plVar24);
                uVar23 = *puVar28;
                if (uVar23 <= uVar15) {
                  iVar14 = 0x12;
                  if (uVar15 - uVar23 < uVar32) goto LAB_140066bed;
                  local_63e8 = 0;
                  iVar22 = 0;
                  if (*(longlong *)(lVar2 + 0x3d0) != 0) {
                    iVar22 = 0;
                    if (*(undefined8 **)(puVar28 + 0x42) != (undefined8 *)0x0) {
                      FUN_1400b3550((undefined8 *)
                                    (*(longlong *)(lVar2 + 0x3d0) + (ulonglong)uVar32 * 4),
                                    *(undefined8 **)(puVar28 + 0x42),(ulonglong)uVar23 << 2);
                      goto LAB_140066750;
                    }
                  }
                  goto LAB_140064a3c;
                }
              }
              break;
            case 0x14:
              iVar14 = 0x12;
              if (uVar23 == 2) {
                iVar14 = FUN_140067f8f((longlong)plVar24);
                iVar22 = FUN_140067f8f((longlong)plVar24);
                iVar14 = iVar14 + iVar22;
                goto LAB_140066b37;
              }
              goto LAB_140066bed;
            case 0x15:
              iVar14 = 0x12;
              if (uVar23 == 2) {
                iVar22 = FUN_140067f8f((longlong)plVar24);
                iVar14 = FUN_140067f8f((longlong)plVar24);
                iVar14 = iVar14 - iVar22;
                goto LAB_140066b37;
              }
              goto LAB_140066bed;
            case 0x16:
              iVar14 = 0x12;
              if (uVar23 == 2) {
                iVar14 = FUN_140067f8f((longlong)plVar24);
                iVar22 = FUN_140067f8f((longlong)plVar24);
                iVar14 = (int)((ulonglong)
                               ((longlong)iVar14 * (longlong)iVar22 +
                                ((longlong)iVar14 * (longlong)iVar22 >> 0x3f) + 0x8000) >> 0x10);
                goto LAB_140066b37;
              }
              goto LAB_140066bed;
            case 0x17:
              if (uVar23 == 2) {
                uVar15 = FUN_140067f8f((longlong)plVar24);
                uVar23 = FUN_140067f8f((longlong)plVar24);
                iVar14 = 0x12;
                if (uVar15 != 0) {
                  iVar14 = FUN_14001ecff(uVar23,uVar15);
                  goto LAB_140066b37;
                }
                goto LAB_140066bed;
              }
              break;
            case 0x18:
              if ((uVar23 == 2) && (*(longlong *)(lVar2 + 0x3c8) != 0)) {
                uVar15 = FUN_140067cbc((longlong)plVar24);
                iVar14 = 0x12;
                if (*(uint *)(lVar2 + 0x3d8) <= uVar15) goto LAB_140066bed;
                iVar14 = FUN_140067f8f((longlong)plVar24);
                *(int *)(*(longlong *)(lVar2 + 0x3d0) + (ulonglong)uVar15 * 4) = iVar14;
                local_63e8 = 0;
                iVar22 = 0;
                goto LAB_140064a3c;
              }
              break;
            case 0x19:
              if ((uVar23 == 1) && (*(longlong *)(lVar2 + 0x3c8) != 0)) {
                uVar15 = FUN_140067cbc((longlong)plVar24);
                iVar14 = 0x12;
                if (uVar15 < *(uint *)(lVar2 + 0x3d8)) {
                  iVar14 = *(int *)(*(longlong *)(lVar2 + 0x3d0) + (ulonglong)uVar15 * 4);
                  goto LAB_140066b37;
                }
                goto LAB_140066bed;
              }
              break;
            case 0x1b:
              iVar14 = 0x12;
              if (uVar23 == 4) {
                iVar22 = FUN_140067f8f((longlong)plVar24);
                iVar20 = FUN_140067f8f((longlong)plVar24);
                iVar14 = FUN_140067f8f((longlong)plVar24);
                iVar16 = FUN_140067f8f((longlong)plVar24);
                if (iVar20 <= iVar22) {
                  iVar14 = iVar16;
                }
                goto LAB_140066b37;
              }
              goto LAB_140066bed;
            case 0x1c:
              iVar14 = 0x12;
              if (uVar23 != 0) goto LAB_140066bed;
              lVar26 = *(longlong *)(lVar2 + 0x328);
              uVar15 = *(uint *)(lVar26 + 0x2c0);
              iVar14 = (uVar15 & 0xffff) + 1;
              uVar15 = FUN_1400633ff(uVar15);
              *(uint *)(lVar26 + 0x2c0) = uVar15;
LAB_140066b37:
              FUN_1400689d4((longlong)plVar24,iVar14);
              iVar22 = 1;
LAB_140066b41:
              local_63e8 = 0;
              goto LAB_140064a3c;
            }
LAB_140066e09:
            iVar14 = 0x12;
            goto LAB_140066bed;
          }
          goto LAB_140064a3c;
        case 0x11:
          if (cVar9 != '\0') {
            if (iVar22 < 1) {
              iVar14 = 0x12;
              if ((int)local_63e8 == 0) goto LAB_140066bed;
              local_63e8 = (ulonglong)((int)local_63e8 - 1);
              FUN_1400689d4((longlong)plVar24,*(undefined4 *)((longlong)&local_58 + local_63e8 * 4))
              ;
            }
            else {
              iVar22 = iVar22 + -1;
            }
          }
          goto LAB_140064a3c;
        case 0x12:
          FUN_140067f8f((longlong)plVar24);
          goto LAB_140064a3c;
        case 0x14:
          uVar15 = FUN_140067cbc((longlong)plVar24);
          iVar14 = FUN_140067f8f((longlong)plVar24);
          if (uVar15 < 0x20) {
            *(int *)((longlong)&local_d8 + (ulonglong)uVar15 * 4) = iVar14;
          }
          goto LAB_140064a3c;
        case 0x15:
          uVar15 = FUN_140067cbc((longlong)plVar24);
          if (uVar15 < 0x20) {
            FUN_1400689d4((longlong)plVar24,
                          *(undefined4 *)((longlong)&local_d8 + (ulonglong)uVar15 * 4));
          }
          goto LAB_140064a3c;
        case 0x16:
          iVar20 = FUN_140067f8f((longlong)plVar24);
          iVar16 = FUN_140067f8f((longlong)plVar24);
          iVar14 = FUN_140067f8f((longlong)plVar24);
          iVar17 = FUN_140067f8f((longlong)plVar24);
          if (iVar16 <= iVar20) {
            iVar14 = iVar17;
          }
          break;
        case 0x17:
          lVar26 = *(longlong *)(lVar2 + 0x328);
          uVar15 = *(uint *)(lVar26 + 0x2c0);
          uVar23 = FUN_1400633ff(uVar15);
          *(uint *)(lVar26 + 0x2c0) = uVar23;
          iVar14 = (uVar15 & 0xffff) + 1;
          break;
        case 0x18:
          iVar14 = FUN_140067f8f((longlong)plVar24);
          iVar20 = FUN_140067f8f((longlong)plVar24);
          iVar14 = (int)((ulonglong)
                         ((longlong)iVar14 * (longlong)iVar20 +
                          ((longlong)iVar14 * (longlong)iVar20 >> 0x3f) + 0x8000) >> 0x10);
          break;
        case 0x1a:
          uVar15 = FUN_140067f8f((longlong)plVar24);
          if ((int)uVar15 < 1) {
            uVar15 = 0;
          }
          else {
            uVar15 = FUN_140021ce9(uVar15);
          }
          goto LAB_1400662d0;
        case 0x1b:
          iVar14 = FUN_140067f8f((longlong)plVar24);
          FUN_1400689d4((longlong)plVar24,iVar14);
          break;
        case 0x1c:
          iVar20 = FUN_140067f8f((longlong)plVar24);
          iVar14 = FUN_140067f8f((longlong)plVar24);
          FUN_1400689d4((longlong)plVar24,iVar20);
          break;
        case 0x1d:
          uVar15 = FUN_140067cbc((longlong)plVar24);
          uVar29 = FUN_140067f2a((longlong)plVar24);
          uVar23 = (uint)uVar29;
          if (uVar23 != 0) {
            if ((int)uVar15 < 0) {
              uVar32 = uVar23 - 1;
            }
            else {
              uVar32 = 0;
              if (uVar15 < uVar23) {
                uVar32 = uVar23 + ~uVar15;
              }
            }
            uVar15 = FUN_140067f37((longlong)plVar24,uVar32);
LAB_1400662d0:
            FUN_1400689d4((longlong)plVar24,uVar15);
          }
          goto LAB_140064a3c;
        case 0x1e:
          uVar15 = FUN_140067cbc((longlong)plVar24);
          uVar23 = FUN_140067cbc((longlong)plVar24);
          FUN_140068a4c((longlong)plVar24,uVar23,uVar15);
          goto LAB_140064a3c;
        case 0x21:
          if (bVar36 && cVar9 != '\0') {
            param_7 = FUN_140067f8f((longlong)plVar24);
            param_6 = FUN_140067f8f((longlong)plVar24);
            *(undefined4 *)(lVar2 + 0x2e0) = 0;
            goto LAB_1400659c9;
          }
          goto switchD_140065c06_caseD_8;
        }
        FUN_1400689d4((longlong)plVar24,iVar14);
        goto LAB_140064a3c;
      case 0xd:
        if (cVar9 != '\0') {
          iVar20 = FUN_140067f8f((longlong)plVar24);
          **(int **)(lVar2 + 0x48) = iVar20;
          *(undefined4 *)(*(longlong *)(lVar2 + 0x48) + 4) = 0;
          iVar20 = FUN_140067f8f((longlong)plVar24);
          **(int **)(lVar2 + 0x40) = **(int **)(lVar2 + 0x40) + iVar20;
          local_6319 = '\x01';
          if (*(char *)(lVar2 + 0x5b) != '\0') goto LAB_140066bed;
          if (bVar36) {
            param_6 = param_6 + iVar20;
            goto LAB_1400659c9;
          }
          bVar36 = false;
        }
        break;
      case 0xe:
        if ((cVar9 == '\0') || (bVar36)) {
          uVar29 = FUN_140067f2a((longlong)plVar24);
          if ((((int)uVar29 == 1) || ((int)uVar29 == 5)) && (local_6319 == '\0')) {
            iVar22 = FUN_140067f37((longlong)plVar24,0);
            *param_8 = iVar22 + iVar13;
          }
          if ((((*(char *)(lVar2 + 0x340) == '\0') &&
               (FUN_140068455(local_4a88), *(char *)((longlong)param_1 + 0xd) == '\0')) &&
              (*(char *)((longlong)param_1 + 0xc) == '\0')) &&
             ((uVar29 = FUN_140067f2a((longlong)plVar24), 1 < (uint)uVar29 &&
              (iVar14 = 0x12, param_5 == '\0')))) {
            uVar15 = FUN_140067cbc((longlong)plVar24);
            uVar23 = FUN_140067cbc((longlong)plVar24);
            iVar13 = FUN_140067f8f((longlong)plVar24);
            iVar22 = FUN_140067f8f((longlong)plVar24);
            uVar25 = FUN_140068b1f(lVar2,(ulonglong)uVar15,local_62b0);
            iVar14 = (int)uVar25;
            if (iVar14 == 0) {
              FUN_1400647b1(param_1,local_62b0,param_3,param_4,'\x01',iVar22,iVar13,local_62e0);
              FUN_140068bd3(lVar2,(longlong)local_62b0);
              uVar25 = FUN_140068b1f(lVar2,(ulonglong)uVar23,local_62b0);
              iVar14 = (int)uVar25;
              if (iVar14 == 0) {
                iVar14 = 0;
                FUN_1400647b1(param_1,local_62b0,param_3,param_4,'\x01',0,0,local_62e0);
                FUN_140068bd3(lVar2,(longlong)local_62b0);
              }
            }
          }
          goto LAB_140066bed;
        }
        FUN_140067fe0(local_4a88,param_6,param_7);
        FUN_140068a0a((longlong)local_6390);
        FUN_140068a0a((longlong)local_6358);
        FUN_1400679d7(&local_128,plVar35);
        local_120 = 0x100;
        if (0 < (int)local_63c8) {
          local_63c8 = local_63c8 + 1;
          do {
            local_6400 = (undefined8 *)FUN_1400684c4((longlong)local_6318,local_63c8 - 2);
            local_63c8 = local_63c8 - 1;
          } while (1 < local_63c8);
          local_63c8 = 0;
        }
        local_6400[3] = local_6400[1];
LAB_1400659c9:
        bVar36 = true;
        break;
      case 0xf:
        if (*(char *)((longlong)param_1 + 0xd) != '\0') {
          iVar14 = 0x12;
          if (*(char *)((longlong)param_1 + 0x61) != '\0') goto LAB_140066bed;
          iVar14 = FUN_140067cbc((longlong)plVar24);
          if (-1 < iVar14) {
            *(int *)(param_1 + 0x12) = iVar14;
          }
        }
        break;
      case 0x10:
        if (*(char *)((longlong)param_1 + 0xd) != '\0') {
          iVar14 = 0x12;
          if ((param_1[0xd] == 0) ||
             ((cVar9 = (**(code **)(param_1[0x51] + 0x18))
                                 (plVar3,(int)param_1[0x12],
                                  *(undefined4 *)((longlong)param_1 + 0x94),param_1[0x13]),
              cVar9 != '\0' &&
              (iVar14 = (**(code **)(param_1[0x51] + 0x20))
                                  (plVar3,(int)param_1[0x12],
                                   *(undefined4 *)((longlong)param_1 + 0x94),param_1[0x13]),
              iVar14 != 0)))) goto LAB_140066bed;
          iVar14 = FUN_140067cbc((longlong)plVar24);
          uVar25 = FUN_140067cfd((longlong)plVar3,(longlong)plVar24,iVar14);
          iVar14 = (int)uVar25;
          if (iVar14 != 0) goto LAB_140066bed;
          *(undefined1 *)((longlong)param_1 + 0x61) = 1;
          goto LAB_140064a3c;
        }
        break;
      case 0x13:
      case 0x14:
        uVar29 = FUN_140067f2a((longlong)plVar24);
        if (((uint)uVar29 < 2) || (cVar9 = FUN_140067dff((longlong)&local_128), cVar9 == '\0')) {
          FUN_140067e03((longlong)param_1,(longlong)plVar24,local_6390,param_8,&local_6319,0);
          if (*(char *)(lVar2 + 0x340) != '\0') goto LAB_140066bed;
          if (bVar8 == 0x13) {
            lVar26 = FUN_140068c2d((longlong)local_6358);
            lVar27 = FUN_140068c2d((longlong)local_6390);
            FUN_140068bed(&local_128,local_6400,lVar26 + lVar27);
          }
          else {
            FUN_140068c32((undefined1 (*) [32])local_62b0,(longlong)param_1,local_1a28,local_200,
                          (int)lVar6);
            FUN_1400679d7((undefined8 *)local_62e0,plVar35);
            lVar26 = FUN_140068c2d((longlong)local_6358);
            lVar27 = FUN_140068c2d((longlong)local_6390);
            FUN_140068bed((undefined8 *)local_62e0,local_6400,lVar26 + lVar27);
            FUN_140068c7d(local_62b0,(longlong)local_6358,(longlong)local_6390,
                          (undefined8 *)local_62e0,0,'\0');
          }
        }
        break;
      case 0x15:
        uVar29 = FUN_140067f2a((longlong)plVar24);
        if ((2 < (uint)uVar29) && (local_6319 == '\0')) {
          iVar20 = FUN_140067f37((longlong)plVar24,0);
          *param_8 = iVar20 + iVar13;
        }
        iVar20 = param_7;
        local_6319 = '\x01';
        if (*(char *)(lVar2 + 0x340) != '\0') goto LAB_140066bed;
        iVar16 = FUN_140067f8f((longlong)plVar24);
        iVar14 = param_6;
        param_7 = iVar16 + iVar20;
        iVar17 = FUN_140067f8f((longlong)plVar24);
        param_6 = iVar17 + iVar14;
        if (*(int *)(lVar2 + 0x2e0) == 0) {
          FUN_140067fe0(local_4a88,param_6,iVar16 + iVar20);
        }
        break;
      case 0x16:
        uVar29 = FUN_140067f2a((longlong)plVar24);
        if ((1 < (uint)uVar29) && (local_6319 == '\0')) {
          iVar20 = FUN_140067f37((longlong)plVar24,0);
          *param_8 = iVar20 + iVar13;
        }
        iVar20 = param_6;
        local_6319 = '\x01';
        if (*(char *)(lVar2 + 0x340) != '\0') goto LAB_140066bed;
        iVar14 = FUN_140067f8f((longlong)plVar24);
        param_6 = iVar14 + iVar20;
        iVar14 = *(int *)(lVar2 + 0x2e0);
joined_r0x000140065191:
        if (iVar14 == 0) {
          FUN_140067fe0(local_4a88,param_6,param_7);
        }
        break;
      case 0x19:
        uVar29 = FUN_140067f2a((longlong)plVar24);
        uVar23 = (uint)uVar29;
        uVar15 = 0;
        iVar14 = param_6;
        iVar20 = param_7;
        if (6 < uVar23) {
          uVar32 = 0;
          do {
            iVar16 = FUN_140067f37((longlong)plVar24,uVar32);
            iVar14 = iVar14 + iVar16;
            iVar16 = FUN_140067f37((longlong)plVar24,uVar32 + 1);
            iVar20 = iVar20 + iVar16;
            FUN_14006807d(local_4a88,iVar14,iVar20);
            uVar15 = uVar32 + 2;
            uVar34 = uVar32 + 8;
            uVar32 = uVar15;
          } while (uVar34 < uVar23);
        }
        for (; uVar15 < uVar23; uVar15 = uVar15 + 6) {
          iVar17 = FUN_140067f37((longlong)plVar24,uVar15);
          iVar18 = FUN_140067f37((longlong)plVar24,uVar15 + 1);
          iVar16 = FUN_140067f37((longlong)plVar24,uVar15 + 2);
          iVar16 = iVar16 + iVar14 + iVar17;
          iVar19 = FUN_140067f37((longlong)plVar24,uVar15 + 3);
          iVar19 = iVar19 + iVar20 + iVar18;
          iVar33 = FUN_140067f37((longlong)plVar24,uVar15 + 4);
          iVar33 = iVar33 + iVar16;
          iVar21 = FUN_140067f37((longlong)plVar24,uVar15 + 5);
          iVar21 = iVar21 + iVar19;
          FUN_140068224(local_4a88,iVar14 + iVar17,iVar20 + iVar18,iVar16,iVar19,iVar33,iVar21);
          iVar14 = iVar33;
          iVar20 = iVar21;
        }
        param_6 = iVar14;
        param_7 = iVar20;
        FUN_140067cb3((longlong)plVar24);
        goto LAB_140064a3c;
      case 0x1a:
        uVar29 = FUN_140067f2a((longlong)plVar24);
        uVar23 = (uint)uVar29;
        iVar14 = param_6;
        iVar20 = param_7;
        for (uVar15 = uVar23 & 2; uVar15 < (uVar23 & 0xfffffffd); uVar15 = uVar15 + 4) {
          if ((uVar23 - uVar15 & 1) != 0) {
            iVar16 = FUN_140067f37((longlong)plVar24,uVar15);
            iVar14 = iVar14 + iVar16;
            uVar15 = uVar15 + 1;
          }
          iVar16 = FUN_140067f37((longlong)plVar24,uVar15);
          iVar16 = iVar20 + iVar16;
          iVar17 = FUN_140067f37((longlong)plVar24,uVar15 + 1);
          iVar17 = iVar17 + iVar14;
          iVar18 = FUN_140067f37((longlong)plVar24,uVar15 + 2);
          iVar18 = iVar18 + iVar16;
          iVar20 = FUN_140067f37((longlong)plVar24,uVar15 + 3);
          iVar20 = iVar20 + iVar18;
          FUN_140068224(local_4a88,iVar14,iVar16,iVar17,iVar18,iVar17,iVar20);
          iVar14 = iVar17;
        }
        goto LAB_140065990;
      case 0x1b:
        uVar29 = FUN_140067f2a((longlong)plVar24);
        uVar23 = (uint)uVar29;
        iVar14 = param_6;
        iVar20 = param_7;
        for (uVar15 = uVar23 & 2; uVar15 < (uVar23 & 0xfffffffd); uVar15 = uVar15 + 4) {
          if ((uVar23 - uVar15 & 1) != 0) {
            iVar16 = FUN_140067f37((longlong)plVar24,uVar15);
            iVar20 = iVar20 + iVar16;
            uVar15 = uVar15 + 1;
          }
          iVar17 = FUN_140067f37((longlong)plVar24,uVar15);
          iVar17 = iVar14 + iVar17;
          iVar16 = FUN_140067f37((longlong)plVar24,uVar15 + 1);
          iVar16 = iVar16 + iVar17;
          iVar18 = FUN_140067f37((longlong)plVar24,uVar15 + 2);
          iVar18 = iVar18 + iVar20;
          iVar14 = FUN_140067f37((longlong)plVar24,uVar15 + 3);
          iVar14 = iVar14 + iVar16;
          FUN_140068224(local_4a88,iVar17,iVar20,iVar16,iVar18,iVar14,iVar18);
          iVar20 = iVar18;
        }
        goto LAB_140065990;
      case 0x1c:
        bVar8 = FUN_140067c84(local_6400);
        uVar10 = FUN_140067c84(local_6400);
        uVar15 = (int)((uint)bVar8 << 0x18 | (int)CONCAT71(extraout_var_01,uVar10) << 0x10) >> 0x10;
        goto LAB_1400656d0;
      case 0x1e:
      case 0x1f:
        uVar29 = FUN_140067f2a((longlong)plVar24);
        local_63b8 = (uint)uVar29;
        uVar15 = local_63b8 & 2;
        iVar14 = param_6;
        iVar20 = param_7;
        if (uVar15 < (local_63b8 & 0xfffffffd)) {
          bVar36 = bVar8 == 0x1f;
          local_63b8 = local_63b8 & 0xfffffffd;
          do {
            iVar16 = FUN_140067f37((longlong)plVar24,uVar15);
            uVar23 = uVar15 + 1;
            iVar17 = FUN_140067f37((longlong)plVar24,uVar23);
            iVar18 = FUN_140067f37((longlong)plVar24,uVar15 + 2);
            iVar19 = FUN_140067f37((longlong)plVar24,uVar15 + 3);
            if (bVar36) {
              iVar33 = iVar14 + iVar16;
              iVar17 = iVar17 + iVar33;
              iVar18 = iVar18 + iVar20;
              iVar16 = iVar20;
              if (local_63b8 - uVar15 == 5) {
                iVar14 = FUN_140067f37((longlong)plVar24,uVar15 + 4);
                bVar36 = false;
                uVar15 = uVar23;
                iVar14 = iVar14 + iVar17;
                iVar20 = iVar19 + iVar18;
              }
              else {
                bVar36 = false;
                iVar14 = iVar17;
                iVar20 = iVar19 + iVar18;
              }
            }
            else {
              iVar16 = iVar20 + iVar16;
              iVar17 = iVar17 + iVar14;
              iVar18 = iVar18 + iVar16;
              bVar36 = true;
              iVar33 = iVar14;
              iVar14 = iVar19 + iVar17;
              iVar20 = iVar18;
              if (local_63b8 - uVar15 == 5) {
                iVar20 = FUN_140067f37((longlong)plVar24,uVar15 + 4);
                uVar15 = uVar23;
                iVar20 = iVar20 + iVar18;
                bVar36 = true;
              }
            }
            FUN_140068224(local_4a88,iVar33,iVar16,iVar17,iVar18,iVar14,iVar20);
            uVar15 = uVar15 + 4;
          } while (uVar15 < local_63b8);
        }
LAB_140065990:
        param_7 = iVar20;
        param_6 = iVar14;
        FUN_140067cb3((longlong)plVar24);
        goto LAB_140064a3c;
      default:
        if (bVar8 < 0xf7) {
          FUN_14006880a((longlong)plVar24,iVar20 + -0x8b);
        }
        else {
          uVar10 = FUN_140067c84(local_6400);
          uVar15 = (uint)CONCAT71(extraout_var_02,uVar10);
          if (bVar8 < 0xfb) {
            iVar14 = iVar20 * 0x100 + uVar15 + -0xf694;
LAB_140065a52:
            FUN_14006880a((longlong)plVar24,iVar14);
          }
          else {
            if (bVar8 != 0xff) {
              iVar14 = 0xfa94 - (iVar20 << 8 | uVar15);
              goto LAB_140065a52;
            }
            uVar10 = FUN_140067c84(local_6400);
            uVar11 = FUN_140067c84(local_6400);
            uVar12 = FUN_140067c84(local_6400);
            uVar15 = (int)CONCAT71(extraout_var_05,uVar11) << 8 |
                     (int)CONCAT71(extraout_var_04,uVar10) << 0x10 | uVar15 << 0x18 |
                     (uint)CONCAT71(extraout_var_06,uVar12);
            if (*(char *)((longlong)param_1 + 0xc) == '\0') {
              FUN_1400689d4((longlong)plVar24,uVar15);
            }
            else {
              bVar36 = true;
              if (bVar5) {
                bVar36 = bVar5;
              }
              if (uVar15 + 32000 < 0xfa01) {
                bVar36 = bVar5;
              }
              bVar5 = bVar36;
              FUN_14006880a((longlong)plVar24,uVar15);
            }
          }
        }
        goto LAB_140064a3c;
      }
switchD_140065c06_caseD_8:
      FUN_140067cb3((longlong)plVar24);
      bVar7 = bVar36;
      goto LAB_140064a3c;
    }
    iVar14 = 0;
  }
LAB_140066bed:
  FUN_140067118((int *)(param_1 + 1),iVar14);
  FUN_140069135((longlong)local_4a88);
  FUN_140069141(local_6390);
  FUN_140069141(local_6358);
  FUN_140069141(local_6318);
  FUN_14006916e(plVar24);
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_6478)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_6478);
switchD_140064b6c_caseD_0:
  goto switchD_140065c06_caseD_8;
}

