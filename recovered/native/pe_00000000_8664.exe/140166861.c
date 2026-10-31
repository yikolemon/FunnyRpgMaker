/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140166861 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140166861(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,int param_6,int param_7,int *param_8)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  undefined4 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  char *pcVar28;
  byte bVar29;
  ulonglong uVar30;
  int *piVar31;
  bool bVar32;
  undefined1 auStack_6478 [32];
  undefined8 local_6458;
  char *local_6450;
  undefined1 *local_6448;
  undefined1 *local_6440;
  undefined8 *local_6438;
  undefined8 local_6430;
  int local_641c;
  undefined8 local_6418;
  longlong local_6410;
  longlong local_6408;
  undefined4 *local_6400;
  undefined8 *local_63f8;
  ulonglong local_63f0;
  ulonglong local_63e8;
  undefined8 local_63e0;
  int *local_63d8;
  uint local_63cc;
  ulonglong local_63c8;
  int local_63bc;
  undefined8 local_63b8;
  undefined8 local_63b0;
  undefined8 local_63a8;
  undefined4 local_639c;
  undefined8 *local_6398;
  char local_6390 [56];
  char local_6358 [63];
  char local_6319;
  undefined1 local_6318 [56];
  undefined1 local_62e0 [48];
  undefined1 local_62b0 [6184];
  undefined1 local_4a88 [12384];
  undefined1 local_1a28 [6184];
  undefined1 local_200 [216];
  undefined1 local_128 [8];
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
  
  local_6410 = CONCAT44(local_6410._4_4_,param_7);
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_6478;
  lVar23 = param_1[0x1e];
  piVar31 = (int *)(param_1 + 1);
  uVar22 = *param_1;
  uVar6 = *(undefined4 *)(param_1 + 7);
  local_6418 = param_2;
  local_63b0 = param_3;
  local_63bc = FUN_140169a5f(lVar23);
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
  FUN_140169a70(local_6318,uVar22,piVar31,0x20);
  FUN_140169a70(local_6358,uVar22,piVar31,0x14);
  FUN_140169a70(local_6390,uVar22,piVar31,0x14);
  local_63d8 = piVar31;
  FUN_140169a87(local_128,piVar31);
  local_6438 = param_1 + 0x27;
  local_6440 = (undefined1 *)CONCAT44(local_6440._4_4_,(undefined4)local_6410);
  local_6458 = local_6358;
  local_6450 = local_6390;
  local_6448 = local_128;
  local_6430 = param_4;
  local_63a8 = param_4;
  local_639c = uVar6;
  FUN_140169a9e(local_4a88,param_1,local_63b0,uVar6);
  local_6319 = *(char *)((longlong)param_1 + 0xd) != '\0';
  iVar5 = FUN_140169c1e(lVar23);
  *param_8 = iVar5;
  if (*(char *)((longlong)param_1 + 0xd) == '\0') {
    uVar6 = 0x30;
  }
  else {
    uVar6 = FUN_140169c2f(lVar23);
  }
  piVar31 = (int *)(param_1 + 1);
  lVar17 = FUN_140169c3d(uVar22,piVar31,uVar6);
  if (lVar17 == 0) {
    iVar5 = 0x40;
  }
  else {
    FUN_140169cf5(local_6318);
    if (*piVar31 == 0) {
      puVar18 = (undefined4 *)FUN_140169d23();
      uVar6 = local_6418[1];
      uVar14 = local_6418[2];
      uVar15 = local_6418[3];
      uVar22 = *(undefined8 *)(local_6418 + 4);
      uVar3 = *(undefined8 *)(local_6418 + 6);
      *puVar18 = *local_6418;
      puVar18[1] = uVar6;
      puVar18[2] = uVar14;
      puVar18[3] = uVar15;
      *(undefined8 *)(puVar18 + 4) = uVar22;
      *(undefined8 *)(puVar18 + 6) = uVar3;
      local_6398 = param_1 + 0xc;
      local_63c8 = 0;
      local_63e8 = 0;
      local_63cc = 0;
      local_63f0 = 0;
      uVar6 = 0;
      iVar24 = 20000000;
      local_6410 = lVar17;
      local_6408 = lVar23;
      local_63f8 = param_1;
      uVar25 = local_63e8;
LAB_140166aec:
      local_63e8 = uVar25;
      cVar4 = FUN_140169d28(puVar18);
      if (cVar4 == '\0') {
        uVar11 = FUN_140169d34(puVar18);
        uVar25 = (ulonglong)uVar11;
        if (((uVar11 == 0xe) || (uVar11 == 0xb)) &&
           (uVar25 = (ulonglong)(byte)uVar11, *(char *)((longlong)param_1 + 0xd) != '\0')) {
          uVar25 = 0;
        }
      }
      else {
        uVar25 = (ulonglong)((uint)((int)local_63c8 == 0) * 3 + 0xb);
      }
      puVar2 = local_6398;
      cVar4 = *(char *)((longlong)param_1 + 0xc);
      bVar29 = (byte)uVar25;
      uVar11 = local_63cc;
      if (cVar4 != '\0') {
        if (((((char)uVar6 == '\0') && ((bVar29 & 0xfe) != 10)) &&
            ((bVar29 != 0xd && (((bVar29 & 0xfd) != 1 && (bVar29 < 0x20)))))) &&
           ((bVar29 != 0xc && (bVar29 != 0xe)))) {
          FUN_140169d63();
          uVar6 = 0;
          uVar25 = local_63e8;
          goto LAB_140166aec;
        }
        uVar13 = (uint)local_63e8;
        uVar12 = 0;
        if ((byte)(bVar29 - 10) < 3) {
          uVar12 = uVar13;
        }
        if (0x1f < bVar29) {
          uVar12 = uVar13;
        }
        uVar11 = 0;
        if (0x1f < bVar29) {
          uVar11 = local_63cc & 0xff;
        }
        local_63e8 = local_63e8 & 0xffffffff;
        if (0 < (int)uVar13) {
          local_63e8 = (ulonglong)uVar12;
        }
        if ((char)local_63cc == '\0') {
          uVar11 = local_63cc & 0xff;
        }
        if (bVar29 == 0xc) {
          uVar11 = local_63cc & 0xff;
        }
      }
      local_63cc = uVar11;
      iVar7 = 0;
      local_6400 = puVar18;
      iVar5 = 0;
      if (*piVar31 != 0) goto LAB_140168c9d;
      iVar24 = iVar24 + -1;
      if (iVar24 == 0) {
LAB_140168c97:
        iVar5 = 0x12;
        goto LAB_140168c9d;
      }
      local_6418 = (undefined4 *)CONCAT44(local_6418._4_4_,uVar6);
      iVar8 = (int)(uVar25 & 0xff);
      iVar5 = iVar7;
      switch(uVar25 & 0xff) {
      case 0:
      case 2:
      case 0x11:
        goto switchD_140166c1c_caseD_0;
      case 1:
      case 0x12:
        if (cVar4 == '\0') {
          local_641c = iVar24;
          cVar4 = FUN_140169eaf(local_128);
          if (cVar4 != '\0') break;
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(*(longlong *)(lVar23 + 0x40) + 4);
          local_641c = iVar24;
        }
        local_6450 = (char *)CONCAT44(local_6450._4_4_,uVar6);
        pcVar28 = local_6358;
        goto LAB_140166f2c;
      case 3:
      case 0x17:
        if (cVar4 == '\0') {
          local_641c = iVar24;
          cVar4 = FUN_140169eaf(local_128);
          if (cVar4 != '\0') break;
          uVar6 = 0;
        }
        else {
          uVar6 = **(undefined4 **)(lVar23 + 0x40);
          local_641c = iVar24;
        }
        local_6450 = (char *)CONCAT44(local_6450._4_4_,uVar6);
        pcVar28 = local_6390;
LAB_140166f2c:
        local_6458 = &local_6319;
        FUN_140169eb3(param_1,lVar17,pcVar28,param_8);
        iVar5 = 0;
        if (*(char *)(lVar23 + 0x340) != '\0') goto LAB_140168c9d;
        break;
      case 4:
        local_641c = iVar24;
        uVar11 = FUN_140169fda(lVar17);
        if ((1 < uVar11) && (local_6319 == '\0')) {
          iVar24 = FUN_140169fe7(lVar17,0);
          *param_8 = iVar24 + local_63bc;
        }
        iVar24 = param_7;
        local_6319 = '\x01';
        if (*(char *)(lVar23 + 0x340) == '\0') {
          param_7 = FUN_14016a03f(lVar17);
          param_7 = param_7 + iVar24;
          iVar5 = *(int *)(lVar23 + 0x2e0);
          goto joined_r0x000140167241;
        }
        goto LAB_140168c9d;
      case 5:
        local_641c = iVar24;
        uVar11 = FUN_140169fda(lVar17);
        iVar5 = param_6;
        iVar24 = param_7;
        if (uVar11 != 0) {
          uVar12 = 0;
          do {
            iVar7 = FUN_140169fe7(lVar17,uVar12);
            iVar5 = iVar5 + iVar7;
            iVar7 = FUN_140169fe7(lVar17,uVar12 + 1);
            iVar24 = iVar24 + iVar7;
            FUN_14016a12d(local_4a88,iVar5,iVar24);
            uVar12 = uVar12 + 2;
          } while (uVar12 < uVar11);
        }
        param_6 = iVar5;
        param_7 = iVar24;
        FUN_140169d63(lVar17);
        puVar18 = local_6400;
        param_1 = local_63f8;
        uVar6 = (undefined4)local_6418;
        iVar24 = local_641c;
        uVar25 = local_63e8;
        goto LAB_140166aec;
      case 6:
      case 7:
        local_641c = iVar24;
        iVar7 = FUN_140169fda(lVar17);
        lVar17 = local_6410;
        iVar5 = param_6;
        iVar24 = param_7;
        if (iVar7 != 0) {
          bVar32 = bVar29 != 6;
          iVar8 = 0;
          do {
            iVar26 = FUN_140169fe7(lVar17,iVar8);
            iVar10 = iVar26;
            iVar9 = 0;
            if (bVar32) {
              iVar10 = 0;
              iVar9 = iVar26;
            }
            iVar24 = iVar24 + iVar9;
            iVar5 = iVar5 + iVar10;
            FUN_14016a12d(local_4a88,iVar5,iVar24);
            iVar8 = iVar8 + 1;
            bVar32 = (bool)(bVar32 ^ 1);
          } while (iVar7 != iVar8);
        }
        param_6 = iVar5;
        param_7 = iVar24;
        FUN_140169d63(lVar17);
        piVar31 = (int *)(local_63f8 + 1);
        puVar18 = local_6400;
        param_1 = local_63f8;
        lVar23 = local_6408;
        uVar6 = (undefined4)local_6418;
        iVar24 = local_641c;
        uVar25 = local_63e8;
        goto LAB_140166aec;
      case 8:
      case 0x18:
        local_641c = iVar24;
        local_63e0 = uVar25;
        uVar12 = FUN_140169fda(lVar17);
        lVar23 = local_6410;
        uVar11 = 0;
        iVar24 = param_7;
        iVar5 = param_6;
        if (5 < uVar12) {
          local_63b8 = CONCAT44(local_63b8._4_4_,uVar12);
          uVar12 = 0;
          do {
            iVar7 = FUN_140169fe7(lVar23,uVar12);
            iVar7 = iVar5 + iVar7;
            iVar8 = FUN_140169fe7(lVar23,uVar12 + 1);
            iVar8 = iVar24 + iVar8;
            iVar9 = FUN_140169fe7(lVar23,uVar12 + 2);
            iVar9 = iVar9 + iVar7;
            iVar10 = FUN_140169fe7(lVar23,uVar12 + 3);
            iVar10 = iVar10 + iVar8;
            iVar5 = FUN_140169fe7(lVar23,uVar12 + 4);
            iVar5 = iVar5 + iVar9;
            iVar24 = FUN_140169fe7(lVar23,uVar12 + 5);
            iVar24 = iVar24 + iVar10;
            local_6448 = (undefined1 *)CONCAT44(local_6448._4_4_,iVar24);
            local_6450 = (char *)CONCAT44(local_6450._4_4_,iVar5);
            local_6458 = (char *)CONCAT44(local_6458._4_4_,iVar10);
            FUN_14016a2d4(local_4a88,iVar7,iVar8,iVar9);
            uVar11 = uVar12 + 6;
            uVar13 = uVar12 + 0xc;
            uVar12 = uVar11;
          } while (uVar13 <= (uint)local_63b8);
        }
        if ((char)local_63e0 == '\x18') {
          param_6 = iVar5;
          param_7 = iVar24;
          iVar7 = FUN_140169fe7(lVar23,uVar11);
          param_6 = iVar5 + iVar7;
          param_7 = FUN_140169fe7(lVar23,uVar11 | 1);
          param_7 = iVar24 + param_7;
          FUN_14016a12d(local_4a88,iVar5 + iVar7,param_7);
          iVar5 = param_6;
          iVar24 = param_7;
        }
        goto LAB_140167a40;
      case 9:
        local_641c = iVar24;
        if (cVar4 != '\0') {
          FUN_14016a505(local_4a88);
          local_6319 = '\x01';
        }
        break;
      case 10:
      case 0x1d:
        if (0xf < (int)local_63c8) goto LAB_140168c97;
        puVar18 = (undefined4 *)FUN_14016a574(local_6318,(longlong)(int)local_63c8 + 1);
        uVar6 = FUN_140169d6c(lVar17);
        if ((*(char *)((longlong)param_1 + 0xc) != '\0') && (*(longlong *)(lVar23 + 0x3a8) != 0)) {
          puVar21 = (undefined4 *)FUN_1401292ee(uVar6);
          if (puVar21 == (undefined4 *)0x0) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = *puVar21;
          }
        }
        if (bVar29 == 0x1d) {
          iVar7 = FUN_14016a5a4(lVar23,uVar6,puVar18);
        }
        else {
          iVar7 = FUN_14016a5eb(lVar23,uVar6,puVar18);
        }
        iVar5 = 0x12;
        if (iVar7 != 0) goto LAB_140168c9d;
        local_63c8 = (ulonglong)((int)local_63c8 + 1);
        uVar6 = (undefined4)local_6418;
        uVar25 = local_63e8;
        goto LAB_140166aec;
      case 0xb:
        iVar5 = 0x12;
        if (0 < (int)local_63c8) {
          local_63c8 = (ulonglong)((int)local_63c8 - 1);
          puVar18 = (undefined4 *)FUN_14016a574(local_6318);
          goto LAB_140167c7c;
        }
        goto LAB_140168c9d;
      case 0xc:
        uVar11 = FUN_140169d34(puVar18);
        puVar2 = local_63f8;
        lVar20 = local_6408;
        lVar19 = local_6410;
        switch(uVar11) {
        case 0x13:
        case 0x19:
        case 0x1f:
        case 0x20:
          goto switchD_140166c1c_caseD_0;
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
switchD_1401673d5_caseD_14:
          local_641c = iVar24;
          if ((*(char *)((longlong)param_1 + 0xd) != '\0') || (0x25 < uVar11))
          goto switchD_140167cb6_caseD_8;
          cVar4 = *(char *)((longlong)param_1 + 0xc);
          if ((uVar11 != 0x11) && ((cVar4 != '\0' && (0 < (int)local_63e8)))) {
            local_63e8 = 0;
            goto switchD_140167cb6_caseD_8;
          }
          break;
        case 0x22:
          local_6458 = "\x01";
          goto LAB_140167c3f;
        case 0x23:
          local_6458 = "\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01";
          local_6450 = (char *)((ulonglong)local_6450._1_7_ << 8);
          local_641c = iVar24;
          FUN_14016a66e(lVar17,&param_6,&param_7,local_4a88);
          goto switchD_140167cb6_caseD_8;
        case 0x24:
          local_6458 = "\x01\x01\x01\x01\x01";
LAB_140167c3f:
          local_6450 = (char *)((ulonglong)local_6450._1_7_ << 8);
LAB_140167c5c:
          FUN_14016a66e(lVar17,&param_6,&param_7,local_4a88);
          goto LAB_140167c7c;
        case 0x25:
          local_6458 = "\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01";
          local_6450 = (char *)CONCAT71(local_6450._1_7_,1);
          goto LAB_140167c5c;
        default:
          if ((uVar11 != 8) && (uVar11 != 0xd)) goto switchD_1401673d5_caseD_14;
          goto switchD_140166c1c_caseD_0;
        }
        uVar6 = (undefined4)local_6418;
        uVar25 = local_63e8;
        switch(uVar11) {
        case 1:
        case 2:
          if (cVar4 != '\0') {
            iVar5 = FUN_140169fe7(lVar17,0);
            iVar24 = FUN_140169fe7(lVar17,2);
            iVar7 = FUN_140169fe7(lVar17,4);
            iVar8 = FUN_140169fe7(local_6410,1);
            FUN_14016a870(local_6410,2,iVar24 - (iVar8 + iVar5));
            iVar5 = FUN_140169fe7(local_6410,3);
            lVar17 = local_6410;
            piVar31 = (int *)(param_1 + 1);
            FUN_14016a870(local_6410,4,iVar7 - (iVar5 + iVar24));
            pcVar28 = local_6358;
            if (uVar11 == 1) {
              pcVar28 = local_6390;
            }
            local_6450 = (char *)CONCAT44(local_6450._4_4_,
                                          *(undefined4 *)
                                           (*(longlong *)(lVar23 + 0x40) +
                                           (ulonglong)(uVar11 != 1) * 4));
            goto LAB_140166f2c;
          }
          goto switchD_140167cb6_caseD_8;
        case 3:
          iVar5 = FUN_14016a03f(lVar17);
          iVar7 = FUN_14016a03f(lVar17);
          uVar11 = (uint)(iVar5 != 0 && iVar7 != 0);
          goto LAB_140167780;
        case 4:
          iVar5 = FUN_14016a03f(lVar17);
          iVar7 = FUN_14016a03f(lVar17);
          uVar11 = (uint)(iVar7 != 0 || iVar5 != 0);
          goto LAB_140167780;
        case 5:
          iVar5 = FUN_14016a03f(lVar17);
          bVar32 = iVar5 == 0;
          goto LAB_140168246;
        case 6:
          if (cVar4 == '\0') goto switchD_140167cb6_caseD_8;
          lVar23 = *(longlong *)(lVar23 + 8);
          uVar11 = FUN_140169d6c(lVar17);
          uVar12 = FUN_140169d6c(lVar17);
          uVar6 = FUN_14016a03f(lVar17);
          iVar24 = FUN_14016a03f(lVar17);
          iVar7 = FUN_14016a03f(lVar17);
          lVar19 = local_6408;
          iVar5 = 0x12;
          lVar17 = local_6410;
          piVar31 = local_63d8;
          if ((param_5 != '\0') || (*(char *)(local_6408 + 0x5b) != '\0')) goto LAB_140168c9d;
          lVar23 = *(longlong *)(*(longlong *)(lVar23 + 0xd0) + 0x50);
          if (*(longlong *)(local_6408 + 0x368) == 0) {
            if (lVar23 == 0) goto LAB_140168c9d;
            iVar8 = **(int **)(local_6408 + 0x40);
          }
          else {
            iVar8 = **(int **)(local_6408 + 0x40);
            if (lVar23 == 0) {
              uVar12 = FUN_14016a8f0(local_6408,uVar12);
              uVar11 = FUN_14016a8f0(lVar19,uVar11);
            }
          }
          lVar23 = local_6408;
          lVar17 = local_6410;
          piVar31 = local_63d8;
          if ((int)(uVar12 | uVar11) < 0) goto LAB_140168c9d;
          if (*(char *)(local_6408 + 0x5a) == '\0') {
            FUN_140129024(*(undefined8 *)(local_6408 + 0x18));
            iVar5 = FUN_14016a96c(lVar23,uVar12,local_62b0);
            lVar23 = local_6408;
            lVar17 = local_6410;
            piVar31 = local_63d8;
            if (iVar5 != 0) goto LAB_140168c9d;
            local_6418 = (undefined4 *)**(undefined8 **)(local_6408 + 0x40);
            uVar22 = **(undefined8 **)(local_6408 + 0x48);
            local_6440 = local_62e0;
            local_6448 = (undefined1 *)((ulonglong)local_6448 & 0xffffffff00000000);
            local_6450 = (char *)((ulonglong)local_6450 & 0xffffffff00000000);
            local_6458 = (char *)CONCAT71(local_6458._1_7_,1);
            FUN_140166861(local_63f8,local_62b0,local_63b0,local_63a8);
            FUN_14016aa14(lVar23,local_62b0);
            puVar2 = *(undefined8 **)(lVar23 + 0x40);
            if (local_6319 == '\0') {
              local_6418 = (undefined4 *)*puVar2;
              uVar22 = **(undefined8 **)(local_6408 + 0x48);
            }
            *(undefined4 *)puVar2 = 0;
            *(undefined4 *)(*(longlong *)(local_6408 + 0x40) + 4) = 0;
            iVar5 = FUN_14016a96c(local_6408,uVar11,local_62b0);
            lVar17 = local_6410;
            piVar31 = local_63d8;
            if (iVar5 != 0) goto LAB_140168c9d;
            local_6440 = local_62e0;
            local_6448 = (undefined1 *)CONCAT44(local_6448._4_4_,uVar6);
            local_6450 = (char *)CONCAT44(local_6450._4_4_,(iVar8 + iVar24) - iVar7);
            local_6458 = (char *)CONCAT71(local_6458._1_7_,1);
            FUN_140166861(local_63f8,local_62b0,local_63b0,local_63a8);
            lVar23 = local_6408;
            FUN_14016aa14(local_6408,local_62b0);
            **(undefined8 **)(lVar23 + 0x40) = local_6418;
            **(undefined8 **)(lVar23 + 0x48) = uVar22;
          }
          else {
            lVar23 = *(longlong *)(local_6408 + 0x10);
            lVar19 = **(longlong **)(lVar23 + 0xf0);
            iVar5 = FUN_140128f6d(lVar19,2);
            lVar17 = local_6410;
            piVar31 = local_63d8;
            if (iVar5 != 0) goto LAB_140168c9d;
            puVar1 = *(uint **)(lVar19 + 0xa0);
            *puVar1 = uVar12;
            *(undefined2 *)(puVar1 + 1) = 0x202;
            puVar1[2] = 0;
            puVar1[3] = 0;
            puVar1[8] = uVar11;
            *(undefined2 *)(puVar1 + 9) = 2;
            iVar5 = FUN_14012e438((iVar8 + iVar24) - iVar7);
            puVar1[10] = iVar5 >> 0x10;
            iVar5 = FUN_14012e438(uVar6);
            puVar1[0xb] = iVar5 >> 0x10;
            *(undefined4 *)(lVar23 + 0xc0) = 2;
            *(undefined8 *)(lVar23 + 200) = *(undefined8 *)(lVar19 + 0x58);
            *(undefined4 *)(lVar23 + 0x60) = 0x636f6d70;
            *(undefined4 *)(lVar19 + 0x98) = 2;
          }
LAB_140169046:
          iVar5 = 0;
          lVar17 = local_6410;
          piVar31 = local_63d8;
          goto LAB_140168c9d;
        case 7:
          if (cVar4 != '\0') {
            uVar6 = FUN_14016a03f(lVar17);
            *(undefined4 *)(*(longlong *)(lVar23 + 0x48) + 4) = uVar6;
            uVar6 = FUN_14016a03f(lVar17);
            **(undefined4 **)(lVar23 + 0x48) = uVar6;
            iVar5 = FUN_14016a03f(lVar17);
            uVar22 = FUN_14016a03f(lVar17);
            **(int **)(lVar23 + 0x40) = **(int **)(lVar23 + 0x40) + (int)uVar22;
            piVar31 = (int *)(*(longlong *)(lVar23 + 0x40) + 4);
            *piVar31 = *piVar31 + iVar5;
            local_6319 = '\x01';
            if (*(char *)(lVar23 + 0x5b) != '\0') goto LAB_140169046;
            if ((char)local_6418 == '\0') {
              local_6418 = (undefined4 *)((ulonglong)local_6418._4_4_ << 0x20);
            }
            else {
              param_6 = param_6 + (int)uVar22;
              param_7 = param_7 + iVar5;
              local_6418 = (undefined4 *)
                           CONCAT44(local_6418._4_4_,(int)CONCAT71((int7)((ulonglong)uVar22 >> 8),1)
                                   );
            }
            piVar31 = (int *)(local_63f8 + 1);
            lVar17 = local_6410;
            param_1 = local_63f8;
            lVar23 = local_6408;
          }
        default:
          goto switchD_140167cb6_caseD_8;
        case 9:
          uVar11 = FUN_14016a03f(lVar17);
          if (!SBORROW4(0,uVar11)) {
            if (-1 < (int)-uVar11) {
              uVar11 = -uVar11;
            }
            goto LAB_1401682a0;
          }
LAB_140168296:
          uVar25 = 0x7fffffff;
          break;
        case 10:
          iVar5 = FUN_14016a03f(lVar17);
          iVar7 = FUN_14016a03f(lVar17);
          uVar25 = (ulonglong)(uint)(iVar5 + iVar7);
          break;
        case 0xb:
          iVar5 = FUN_14016a03f(lVar17);
          iVar7 = FUN_14016a03f(lVar17);
          uVar11 = iVar7 - iVar5;
          goto LAB_1401682a0;
        case 0xc:
          if ((cVar4 == '\0') || ((char)local_63cc == '\0')) {
            uVar14 = FUN_14016a03f(lVar17);
            uVar6 = FUN_14016a03f(lVar17);
          }
          else {
            uVar14 = FUN_140169d6c(lVar17);
            uVar6 = FUN_140169d6c(lVar17);
            local_63cc = 0;
          }
          uVar6 = FUN_14012b378(uVar6,uVar14);
          goto LAB_140168380;
        case 0xe:
          iVar5 = FUN_14016a03f(lVar17);
          uVar11 = -iVar5;
          if (SBORROW4(0,iVar5)) goto LAB_140168296;
LAB_1401682a0:
          uVar25 = (ulonglong)uVar11;
          break;
        case 0xf:
          iVar5 = FUN_14016a03f(lVar17);
          iVar7 = FUN_14016a03f(lVar17);
          bVar32 = iVar7 == iVar5;
LAB_140168246:
          uVar11 = (uint)bVar32;
LAB_140167780:
          FUN_14016a8ba(lVar17,uVar11);
          goto LAB_140167c7c;
        case 0x10:
          if (cVar4 != '\0') {
            local_6400 = puVar18;
            iVar7 = FUN_140169d6c(lVar17);
            uVar11 = FUN_140169d6c(lVar17);
            uVar12 = FUN_140169fda(lVar17);
            param_1 = local_63f8;
            puVar18 = local_6400;
            lVar23 = local_6408;
            lVar17 = local_6410;
            iVar24 = local_641c;
            local_63e0 = CONCAT44(local_63e0._4_4_,uVar11);
            if (uVar12 < uVar11) goto LAB_140168eb9;
            uVar14 = (undefined4)local_6418;
            switch(iVar7) {
            case 0:
              if (uVar11 != 3) break;
              if ((char)local_6418 != '\0') {
                if (*(int *)(local_6408 + 0x2e0) == 0) break;
                iVar5 = 0x12;
                piVar31 = (int *)(local_63f8 + 1);
                if (*(int *)(local_6408 + 0x2e4) != 7) goto LAB_140168c9d;
              }
              piVar31 = (int *)(local_63f8 + 1);
              FUN_14016aa84(local_6410,param_6);
              FUN_14016aa84(lVar17,param_7);
              local_63f0 = 2;
              goto LAB_140168bf1;
            case 1:
              iVar5 = 0x12;
              piVar31 = (int *)(local_63f8 + 1);
              if (uVar11 != 0) goto LAB_140168c9d;
              local_63e8 = 0;
              local_63f0 = 0;
              uVar6 = 0;
              uVar25 = local_63e8;
              if ((char)local_6418 != '\0') {
                iVar5 = FUN_1401664d6(local_6408,6);
                if (iVar5 != 0) goto LAB_140169046;
                *(undefined8 *)(local_6408 + 0x2e0) = 1;
                local_63e8 = 0;
                local_63f0 = 0;
                piVar31 = (int *)(local_63f8 + 1);
                lVar17 = local_6410;
                puVar18 = local_6400;
                param_1 = local_63f8;
                lVar23 = local_6408;
                uVar6 = (undefined4)local_6418;
                iVar24 = local_641c;
                uVar25 = local_63e8;
              }
              goto LAB_140166aec;
            case 2:
              if (uVar11 == 0) {
                local_63e8 = 0;
                local_63f0 = 0;
                piVar31 = (int *)(local_63f8 + 1);
                uVar6 = 0;
                uVar25 = local_63e8;
                if ((char)local_6418 == '\0') goto LAB_140166aec;
                if (*(int *)(local_6408 + 0x2e0) != 0) {
                  uVar11 = *(uint *)(local_6408 + 0x2e4);
                  *(uint *)(local_6408 + 0x2e4) = uVar11 + 1;
                  local_63f0 = 0;
                  piVar31 = (int *)(local_63f8 + 1);
                  uVar6 = uVar14;
                  if (uVar11 - 1 < 6) {
                    iVar7 = FUN_1401664d6(local_6408,1);
                    puVar18 = local_6400;
                    iVar24 = local_641c;
                    iVar5 = 0x12;
                    if (iVar7 != 0) goto LAB_140168c9d;
                    iVar5 = uVar11 * 2 + -6;
                    if (uVar11 < 4) {
                      iVar5 = uVar11 * 2;
                    }
                    aiStack_110[(longlong)iVar5 + 4] = param_6;
                    aiStack_110[(longlong)iVar5 + 5] = param_7;
                    if (uVar11 != 6) {
                      local_63f0 = 0;
                      uVar6 = (undefined4)local_6418;
                      uVar25 = local_63e8;
                      if (uVar11 != 3) goto LAB_140166aec;
                    }
                    local_6448 = (undefined1 *)CONCAT44(local_6448._4_4_,local_e8._4_4_);
                    local_6450 = (char *)CONCAT44(local_6450._4_4_,(undefined4)local_e8);
                    local_6458 = (char *)CONCAT44(local_6458._4_4_,uStack_f0._4_4_);
                    FUN_14016a2d4(local_4a88,local_f8 & 0xffffffff,local_f8._4_4_,
                                  uStack_f0 & 0xffffffff);
LAB_140168800:
                    local_63f0 = 0;
                    uVar6 = (undefined4)local_6418;
                    uVar25 = local_63e8;
                  }
                  goto LAB_140166aec;
                }
              }
              break;
            case 3:
              iVar5 = 0x12;
              piVar31 = (int *)(local_63f8 + 1);
              if (uVar11 != 1) goto LAB_140168c9d;
              local_63f0 = 1;
              local_63e8 = 0;
              uVar6 = 0;
              uVar25 = local_63e8;
              if ((char)local_6418 != '\0') {
                FUN_14016aaba(local_6390);
                FUN_14016aaba(local_6358);
                FUN_140169a87(local_128,piVar31);
                local_120 = 0x100;
                uVar6 = uVar14;
                uVar25 = local_63e8;
              }
              goto LAB_140166aec;
            default:
              if (-1 < (int)uVar11) {
                iVar5 = 0x12;
                piVar31 = (int *)(local_63f8 + 1);
                if (iVar7 < 0) goto LAB_140168c9d;
                uVar25 = 3;
                if (uVar11 < 3) {
                  uVar25 = (ulonglong)uVar11;
                }
                local_63f0 = 0;
                uVar6 = uVar14;
                local_63e8 = uVar25;
                if (uVar11 != 0) {
                  do {
                    uVar6 = FUN_14016a03f(local_6410);
                    *(undefined4 *)((longlong)&uStack_60 + uVar25 * 4 + 4) = uVar6;
                    uVar25 = uVar25 - 1;
                  } while (uVar25 != 0);
                  piVar31 = (int *)(local_63f8 + 1);
                  lVar17 = local_6410;
                  puVar18 = local_6400;
                  param_1 = local_63f8;
                  lVar23 = local_6408;
                  uVar6 = (undefined4)local_6418;
                  iVar24 = local_641c;
                  uVar25 = local_63e8;
                }
                goto LAB_140166aec;
              }
              break;
            case 0xc:
            case 0xd:
              FUN_140169d63(local_6410);
              local_63e8 = 0;
              local_63f0 = 0;
              goto LAB_140167a4c;
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
              puVar1 = *(uint **)(local_6408 + 0x3c8);
              if (puVar1 != (uint *)0x0) {
                uVar13 = (iVar7 + (uint)(iVar7 == 0x12)) - 0xd;
                local_63f0 = (ulonglong)uVar13;
                iVar5 = 0x12;
                piVar31 = (int *)(local_63f8 + 1);
                if (uVar11 != *puVar1 * uVar13) goto LAB_140168c9d;
                uVar25 = (ulonglong)((uVar12 - uVar11) + uVar13);
                iVar24 = 0;
                iVar5 = uVar12 - uVar11;
                do {
                  iVar7 = FUN_140169fe7(lVar17,iVar5);
                  lVar23 = local_6410;
                  if (1 < *puVar1) {
                    uVar30 = 1;
                    local_63b8 = uVar25;
                    do {
                      iVar8 = *(int *)(*(longlong *)(puVar1 + 0x42) + uVar30 * 4);
                      iVar9 = FUN_140169fe7(lVar23,(int)uVar30 + (int)uVar25 + -1);
                      lVar17 = (longlong)iVar9 * (longlong)iVar8;
                      iVar7 = iVar7 + (int)((ulonglong)(lVar17 + (lVar17 >> 0x3f) + 0x8000) >> 0x10)
                      ;
                      uVar30 = uVar30 + 1;
                    } while (uVar30 < *puVar1);
                    uVar25 = (ulonglong)(((int)local_63b8 + (int)uVar30) - 1);
                  }
                  lVar17 = local_6410;
                  FUN_14016a870(local_6410,iVar5,iVar7);
                  iVar24 = iVar24 + 1;
                  iVar5 = iVar5 + 1;
                } while (iVar24 != (int)local_63f0);
                FUN_14016aac3(lVar17,(int)local_63e0 - (int)local_63f0);
                local_63e8 = 0;
                piVar31 = (int *)(local_63f8 + 1);
                puVar18 = local_6400;
                param_1 = local_63f8;
                lVar23 = local_6408;
                uVar6 = (undefined4)local_6418;
                iVar24 = local_641c;
                uVar25 = local_63e8;
                goto LAB_140166aec;
              }
              break;
            case 0x13:
              if ((uVar11 == 1) && (puVar1 = *(uint **)(local_6408 + 0x3c8), puVar1 != (uint *)0x0))
              {
                uVar11 = *(uint *)(local_6408 + 0x3d8);
                uVar13 = FUN_140169d6c(local_6410);
                param_1 = local_63f8;
                puVar18 = local_6400;
                lVar23 = local_6408;
                lVar17 = local_6410;
                iVar24 = local_641c;
                uVar12 = *puVar1;
                if (uVar12 <= uVar11) {
                  iVar5 = 0x12;
                  piVar31 = (int *)(local_63f8 + 1);
                  if (uVar11 - uVar12 < uVar13) goto LAB_140168c9d;
                  local_63e8 = 0;
                  local_63f0 = 0;
                  uVar6 = (undefined4)local_6418;
                  uVar25 = local_63e8;
                  if (*(longlong *)(local_6408 + 0x3d0) != 0) {
                    local_63f0 = 0;
                    if (*(longlong *)(puVar1 + 0x42) != 0) {
                      FUN_1401c5180(*(longlong *)(local_6408 + 0x3d0) + (ulonglong)uVar13 * 4,
                                    *(longlong *)(puVar1 + 0x42),(ulonglong)uVar12 << 2);
                      goto LAB_140168800;
                    }
                  }
                  goto LAB_140166aec;
                }
              }
              break;
            case 0x14:
              iVar5 = 0x12;
              piVar31 = (int *)(local_63f8 + 1);
              if (uVar11 == 2) {
                iVar5 = FUN_14016a03f(local_6410);
                iVar24 = FUN_14016a03f(lVar17);
                uVar11 = iVar5 + iVar24;
                goto LAB_1401685ab;
              }
              goto LAB_140168c9d;
            case 0x15:
              iVar5 = 0x12;
              piVar31 = (int *)(local_63f8 + 1);
              if (uVar11 == 2) {
                iVar5 = FUN_14016a03f(local_6410);
                iVar24 = FUN_14016a03f(lVar17);
                uVar11 = iVar24 - iVar5;
LAB_140168acf:
                uVar25 = (ulonglong)uVar11;
                goto LAB_140168be7;
              }
              goto LAB_140168c9d;
            case 0x16:
              iVar5 = 0x12;
              piVar31 = (int *)(local_63f8 + 1);
              if (uVar11 == 2) {
                iVar5 = FUN_14016a03f(local_6410);
                iVar24 = FUN_14016a03f(lVar17);
                uVar25 = (longlong)iVar5 * (longlong)iVar24 +
                         ((longlong)iVar5 * (longlong)iVar24 >> 0x3f) + 0x8000U >> 0x10;
                goto LAB_140168be7;
              }
              goto LAB_140168c9d;
            case 0x17:
              if (uVar11 == 2) {
                iVar24 = FUN_14016a03f(local_6410);
                uVar6 = FUN_14016a03f(lVar17);
                param_1 = local_63f8;
                lVar23 = local_6408;
                iVar5 = 0x12;
                piVar31 = (int *)(local_63f8 + 1);
                if (iVar24 != 0) {
                  uVar11 = FUN_14012b378(uVar6,iVar24);
                  goto LAB_140168acf;
                }
                goto LAB_140168c9d;
              }
              break;
            case 0x18:
              if ((uVar11 == 2) && (*(longlong *)(local_6408 + 0x3c8) != 0)) {
                uVar11 = FUN_140169d6c(local_6410);
                param_1 = local_63f8;
                lVar23 = local_6408;
                iVar5 = 0x12;
                piVar31 = (int *)(local_63f8 + 1);
                if (*(uint *)(local_6408 + 0x3d8) <= uVar11) goto LAB_140168c9d;
                uVar6 = FUN_14016a03f(lVar17);
                *(undefined4 *)(*(longlong *)(lVar23 + 0x3d0) + (ulonglong)uVar11 * 4) = uVar6;
                local_63e8 = 0;
                local_63f0 = 0;
                puVar18 = local_6400;
                uVar6 = (undefined4)local_6418;
                iVar24 = local_641c;
                uVar25 = local_63e8;
                goto LAB_140166aec;
              }
              break;
            case 0x19:
              if ((uVar11 == 1) && (*(longlong *)(local_6408 + 0x3c8) != 0)) {
                uVar11 = FUN_140169d6c(local_6410);
                iVar5 = 0x12;
                piVar31 = (int *)(local_63f8 + 1);
                if (uVar11 < *(uint *)(local_6408 + 0x3d8)) {
                  uVar25 = (ulonglong)
                           *(uint *)(*(longlong *)(local_6408 + 0x3d0) + (ulonglong)uVar11 * 4);
                  param_1 = local_63f8;
                  lVar23 = local_6408;
                  goto LAB_140168be7;
                }
                goto LAB_140168c9d;
              }
              break;
            case 0x1b:
              iVar5 = 0x12;
              piVar31 = (int *)(local_63f8 + 1);
              if (uVar11 == 4) {
                iVar5 = FUN_14016a03f(local_6410);
                iVar24 = FUN_14016a03f(lVar17);
                uVar11 = FUN_14016a03f(lVar17);
                uVar12 = FUN_14016a03f(lVar17);
                if (iVar24 <= iVar5) {
                  uVar11 = uVar12;
                }
                uVar25 = (ulonglong)uVar11;
                goto LAB_140168be7;
              }
              goto LAB_140168c9d;
            case 0x1c:
              iVar5 = 0x12;
              piVar31 = (int *)(local_63f8 + 1);
              if (uVar11 == 0) {
                lVar19 = *(longlong *)(local_6408 + 0x328);
                uVar11 = (*(uint *)(lVar19 + 0x2c0) & 0xffff) + 1;
                uVar6 = FUN_1401654af();
                *(undefined4 *)(lVar19 + 0x2c0) = uVar6;
LAB_1401685ab:
                piVar31 = (int *)(param_1 + 1);
                uVar25 = (ulonglong)uVar11;
LAB_140168be7:
                FUN_14016aa84(lVar17,uVar25);
                local_63f0 = 1;
LAB_140168bf1:
                local_63e8 = 0;
                goto LAB_140167a87;
              }
              goto LAB_140168c9d;
            }
LAB_140168eb9:
            iVar5 = 0x12;
            lVar17 = local_6410;
            piVar31 = local_63d8;
            goto LAB_140168c9d;
          }
          goto LAB_140166aec;
        case 0x11:
          if (cVar4 != '\0') {
            if ((int)local_63f0 < 1) {
              iVar5 = 0x12;
              lVar17 = local_6410;
              piVar31 = (int *)(local_63f8 + 1);
              if ((int)local_63e8 == 0) goto LAB_140168c9d;
              local_63e8 = (ulonglong)((int)local_63e8 - 1);
              FUN_14016aa84(local_6410,*(undefined4 *)((longlong)&local_58 + local_63e8 * 4));
            }
            else {
              local_63f0 = (ulonglong)((int)local_63f0 - 1);
            }
            piVar31 = (int *)(puVar2 + 1);
            lVar17 = lVar19;
            param_1 = puVar2;
            lVar23 = lVar20;
            uVar6 = (undefined4)local_6418;
            iVar24 = local_641c;
            uVar25 = local_63e8;
          }
          goto LAB_140166aec;
        case 0x12:
          FUN_14016a03f(lVar17);
          goto LAB_140167c7c;
        case 0x14:
          uVar11 = FUN_140169d6c(lVar17);
          uVar14 = FUN_14016a03f(lVar17);
          uVar6 = (undefined4)local_6418;
          uVar25 = local_63e8;
          if (uVar11 < 0x20) {
            *(undefined4 *)((longlong)&local_d8 + (ulonglong)uVar11 * 4) = uVar14;
          }
          goto LAB_140166aec;
        case 0x15:
          uVar11 = FUN_140169d6c(lVar17);
          uVar6 = (undefined4)local_6418;
          uVar25 = local_63e8;
          if (uVar11 < 0x20) {
            FUN_14016aa84(lVar17,*(undefined4 *)((longlong)&local_d8 + (ulonglong)uVar11 * 4));
            uVar25 = local_63e8;
          }
          goto LAB_140166aec;
        case 0x16:
          iVar5 = FUN_14016a03f(lVar17);
          iVar24 = FUN_14016a03f(lVar17);
          uVar11 = FUN_14016a03f(lVar17);
          uVar12 = FUN_14016a03f(lVar17);
          if (iVar24 <= iVar5) {
            uVar11 = uVar12;
          }
          uVar25 = (ulonglong)uVar11;
          iVar24 = local_641c;
          break;
        case 0x17:
          lVar19 = *(longlong *)(lVar23 + 0x328);
          uVar25 = (ulonglong)((*(uint *)(lVar19 + 0x2c0) & 0xffff) + 1);
          uVar6 = FUN_1401654af();
          *(undefined4 *)(lVar19 + 0x2c0) = uVar6;
          break;
        case 0x18:
          iVar5 = FUN_14016a03f(lVar17);
          iVar7 = FUN_14016a03f(lVar17);
          uVar25 = (longlong)iVar5 * (longlong)iVar7 + ((longlong)iVar5 * (longlong)iVar7 >> 0x3f) +
                   0x8000U >> 0x10;
          break;
        case 0x1a:
          iVar5 = FUN_14016a03f(lVar17);
          if (iVar5 < 1) {
            uVar6 = 0;
            lVar17 = local_6410;
          }
          else {
            uVar6 = FUN_14012e8ba(iVar5);
            lVar17 = local_6410;
          }
          goto LAB_140168380;
        case 0x1b:
          uVar11 = FUN_14016a03f(lVar17);
          uVar25 = (ulonglong)uVar11;
          FUN_14016aa84(lVar17,uVar11);
          break;
        case 0x1c:
          uVar6 = FUN_14016a03f(lVar17);
          uVar11 = FUN_14016a03f(lVar17);
          uVar25 = (ulonglong)uVar11;
          FUN_14016aa84(lVar17,uVar6);
          break;
        case 0x1d:
          uVar11 = FUN_140169d6c(lVar17);
          uVar12 = FUN_140169fda(lVar17);
          lVar19 = local_6410;
          uVar6 = (undefined4)local_6418;
          uVar25 = local_63e8;
          if (uVar12 != 0) {
            if ((int)uVar11 < 0) {
              iVar5 = uVar12 - 1;
            }
            else {
              iVar5 = 0;
              if (uVar11 < uVar12) {
                iVar5 = uVar12 + ~uVar11;
              }
            }
            uVar6 = FUN_140169fe7(local_6410,iVar5);
            lVar17 = lVar19;
LAB_140168380:
            FUN_14016aa84(lVar17,uVar6);
            piVar31 = (int *)(local_63f8 + 1);
            param_1 = local_63f8;
            lVar23 = local_6408;
            uVar6 = (undefined4)local_6418;
            iVar24 = local_641c;
            uVar25 = local_63e8;
          }
          goto LAB_140166aec;
        case 0x1e:
          uVar6 = FUN_140169d6c(lVar17);
          uVar14 = FUN_140169d6c(lVar17);
          FUN_14016aafc(lVar17,uVar14,uVar6);
          goto LAB_140167c7c;
        case 0x21:
          if ((char)local_6418 != '\0' && cVar4 != '\0') {
            param_7 = FUN_14016a03f(lVar17);
            puVar18 = (undefined4 *)FUN_14016a03f(lVar17);
            param_6 = (int)puVar18;
            *(undefined4 *)(lVar23 + 0x2e0) = 0;
            goto LAB_140167a79;
          }
          goto switchD_140167cb6_caseD_8;
        }
        FUN_14016aa84(lVar17,uVar25);
LAB_140167c7c:
        uVar6 = (undefined4)local_6418;
        uVar25 = local_63e8;
        goto LAB_140166aec;
      case 0xd:
        local_641c = iVar24;
        if (cVar4 != '\0') {
          uVar6 = FUN_14016a03f(lVar17);
          **(undefined4 **)(lVar23 + 0x48) = uVar6;
          *(undefined4 *)(*(longlong *)(lVar23 + 0x48) + 4) = 0;
          puVar18 = (undefined4 *)FUN_14016a03f(lVar17);
          **(int **)(lVar23 + 0x40) = **(int **)(lVar23 + 0x40) + (int)puVar18;
          local_6319 = '\x01';
          if (*(char *)(lVar23 + 0x5b) != '\0') goto LAB_140168c9d;
          if ((char)local_6418 != '\0') {
            param_6 = param_6 + (int)puVar18;
            goto LAB_140167a79;
          }
          local_6418 = (undefined4 *)((ulonglong)local_6418 & 0xffffffff00000000);
        }
        break;
      case 0xe:
        if ((cVar4 == '\0') || ((char)uVar6 != '\0')) {
          iVar24 = FUN_140169fda(lVar17);
          if (((iVar24 == 1) || (iVar24 == 5)) && (local_6319 == '\0')) {
            iVar24 = FUN_140169fe7(lVar17,0);
            *param_8 = iVar24 + local_63bc;
          }
          if ((((*(char *)(lVar23 + 0x340) == '\0') &&
               (FUN_14016a505(local_4a88), *(char *)((longlong)param_1 + 0xd) == '\0')) &&
              (*(char *)((longlong)param_1 + 0xc) == '\0')) &&
             ((uVar11 = FUN_140169fda(lVar17), 1 < uVar11 &&
              (iVar5 = 0x12, piVar31 = local_63d8, param_5 == '\0')))) {
            uVar6 = FUN_140169d6c(lVar17);
            uVar14 = FUN_140169d6c(lVar17);
            uVar15 = FUN_14016a03f(lVar17);
            uVar16 = FUN_14016a03f(lVar17);
            iVar5 = FUN_14016abcf(local_6408,uVar6,local_62b0);
            lVar17 = local_6410;
            piVar31 = local_63d8;
            if (iVar5 == 0) {
              local_6440 = local_62e0;
              local_6448 = (undefined1 *)CONCAT44(local_6448._4_4_,uVar15);
              local_6450 = (char *)CONCAT44(local_6450._4_4_,uVar16);
              local_6458 = (char *)CONCAT71(local_6458._1_7_,1);
              FUN_140166861(local_63f8,local_62b0,local_63b0,local_63a8);
              lVar23 = local_6408;
              FUN_14016ac83(local_6408,local_62b0);
              iVar5 = FUN_14016abcf(lVar23,uVar14,local_62b0);
              lVar17 = local_6410;
              piVar31 = local_63d8;
              if (iVar5 == 0) {
                local_6440 = local_62e0;
                iVar5 = 0;
                local_6448 = (undefined1 *)((ulonglong)local_6448 & 0xffffffff00000000);
                local_6450 = (char *)((ulonglong)local_6450 & 0xffffffff00000000);
                local_6458 = (char *)CONCAT71(local_6458._1_7_,1);
                FUN_140166861(local_63f8,local_62b0,local_63b0,local_63a8);
                FUN_14016ac83(local_6408,local_62b0);
                lVar17 = local_6410;
                piVar31 = local_63d8;
              }
            }
          }
          goto LAB_140168c9d;
        }
        FUN_14016a090(local_4a88,param_6,param_7);
        FUN_14016aaba(local_6390);
        FUN_14016aaba(local_6358);
        FUN_140169a87(local_128,piVar31);
        local_120 = 0x100;
        puVar18 = local_6400;
        local_641c = iVar24;
        if (0 < (int)local_63c8) {
          uVar25 = (local_63c8 & 0xffffffff) + 1;
          do {
            puVar18 = (undefined4 *)FUN_14016a574(local_6318,uVar25 - 2);
            uVar25 = uVar25 - 1;
          } while (1 < uVar25);
          local_63c8 = 0;
        }
        *(undefined8 *)(puVar18 + 6) = *(undefined8 *)(puVar18 + 2);
        local_6400 = puVar18;
LAB_140167a79:
        local_6418 = (undefined4 *)
                     CONCAT44(local_6418._4_4_,(int)CONCAT71((int7)((ulonglong)puVar18 >> 8),1));
        break;
      case 0xf:
        local_641c = iVar24;
        if (*(char *)((longlong)param_1 + 0xd) != '\0') {
          iVar5 = 0x12;
          if (*(char *)((longlong)param_1 + 0x61) != '\0') goto LAB_140168c9d;
          iVar5 = FUN_140169d6c(lVar17);
          if (-1 < iVar5) {
            *(int *)(param_1 + 0x12) = iVar5;
          }
        }
        break;
      case 0x10:
        local_641c = iVar24;
        if (*(char *)((longlong)param_1 + 0xd) == '\0') break;
        iVar5 = 0x12;
        if ((param_1[0xd] != 0) &&
           ((cVar4 = (**(code **)(param_1[0x51] + 0x18))
                               (local_6398,*(undefined4 *)(param_1 + 0x12),
                                *(undefined4 *)((longlong)param_1 + 0x94),param_1[0x13]),
            cVar4 == '\0' ||
            (iVar5 = (**(code **)(param_1[0x51] + 0x20))
                               (puVar2,*(undefined4 *)(param_1 + 0x12),
                                *(undefined4 *)((longlong)param_1 + 0x94),param_1[0x13]), iVar5 == 0
            )))) {
          uVar6 = FUN_140169d6c(lVar17);
          iVar5 = FUN_140169dad(puVar2,lVar17,uVar6);
          if (iVar5 == 0) {
            *(undefined1 *)((longlong)param_1 + 0x61) = 1;
            goto LAB_140167a87;
          }
        }
        goto LAB_140168c9d;
      case 0x13:
      case 0x14:
        local_641c = iVar24;
        uVar11 = FUN_140169fda(lVar17);
        if ((uVar11 < 2) || (cVar4 = FUN_140169eaf(local_128), cVar4 == '\0')) {
          local_6458 = &local_6319;
          local_6450 = (char *)((ulonglong)local_6450 & 0xffffffff00000000);
          FUN_140169eb3(param_1,lVar17,local_6390,param_8);
          if (*(char *)(lVar23 + 0x340) != '\0') goto LAB_140168c9d;
          if (bVar29 == 0x13) {
            lVar19 = FUN_14016acdd(local_6358);
            lVar20 = FUN_14016acdd(local_6390);
            FUN_14016ac9d(local_128,local_6400,lVar19 + lVar20);
          }
          else {
            local_6458._0_4_ = local_639c;
            FUN_14016ace2(local_62b0,param_1,local_1a28,local_200);
            FUN_140169a87(local_62e0,piVar31);
            lVar19 = FUN_14016acdd(local_6358);
            lVar20 = FUN_14016acdd(local_6390);
            FUN_14016ac9d(local_62e0,local_6400,lVar19 + lVar20);
            local_6450 = (char *)((ulonglong)local_6450 & 0xffffffffffffff00);
            local_6458 = (char *)((ulonglong)local_6458._4_4_ << 0x20);
            FUN_14016ad2d(local_62b0,local_6358,local_6390,local_62e0);
          }
        }
        break;
      case 0x15:
        local_641c = iVar24;
        uVar11 = FUN_140169fda(lVar17);
        if ((2 < uVar11) && (local_6319 == '\0')) {
          iVar24 = FUN_140169fe7(lVar17,0);
          *param_8 = iVar24 + local_63bc;
        }
        iVar24 = param_7;
        local_6319 = '\x01';
        if (*(char *)(lVar23 + 0x340) != '\0') goto LAB_140168c9d;
        iVar7 = FUN_14016a03f(lVar17);
        iVar5 = param_6;
        param_7 = iVar7 + iVar24;
        param_6 = FUN_14016a03f(lVar17);
        param_6 = param_6 + iVar5;
        if (*(int *)(lVar23 + 0x2e0) == 0) {
          FUN_14016a090(local_4a88,param_6,iVar7 + iVar24);
        }
        break;
      case 0x16:
        local_641c = iVar24;
        uVar11 = FUN_140169fda(lVar17);
        if ((1 < uVar11) && (local_6319 == '\0')) {
          iVar5 = FUN_140169fe7(lVar17,0);
          *param_8 = iVar5 + local_63bc;
        }
        iVar24 = param_6;
        local_6319 = '\x01';
        iVar5 = 0;
        if (*(char *)(lVar23 + 0x340) != '\0') goto LAB_140168c9d;
        param_6 = FUN_14016a03f(lVar17);
        param_6 = param_6 + iVar24;
        iVar5 = *(int *)(lVar23 + 0x2e0);
joined_r0x000140167241:
        if (iVar5 == 0) {
          FUN_14016a090(local_4a88,param_6,param_7);
        }
        break;
      case 0x19:
        local_641c = iVar24;
        uVar11 = FUN_140169fda(lVar17);
        lVar23 = local_6410;
        uVar12 = 0;
        iVar5 = param_6;
        iVar24 = param_7;
        if (6 < uVar11) {
          uVar13 = 0;
          do {
            iVar7 = FUN_140169fe7(lVar23,uVar13);
            iVar5 = iVar5 + iVar7;
            iVar7 = FUN_140169fe7(lVar23,uVar13 + 1);
            iVar24 = iVar24 + iVar7;
            FUN_14016a12d(local_4a88,iVar5,iVar24);
            uVar12 = uVar13 + 2;
            uVar27 = uVar13 + 8;
            uVar13 = uVar12;
          } while (uVar27 < uVar11);
        }
        lVar17 = local_6410;
        local_63b8 = CONCAT44(local_63b8._4_4_,uVar11);
        if (uVar12 < uVar11) {
          do {
            iVar7 = FUN_140169fe7(lVar17,uVar12);
            iVar7 = iVar5 + iVar7;
            iVar8 = FUN_140169fe7(lVar17,uVar12 + 1);
            iVar8 = iVar24 + iVar8;
            iVar9 = FUN_140169fe7(lVar17,uVar12 + 2);
            iVar9 = iVar9 + iVar7;
            iVar10 = FUN_140169fe7(lVar17,uVar12 + 3);
            iVar10 = iVar10 + iVar8;
            iVar5 = FUN_140169fe7(lVar17,uVar12 + 4);
            iVar5 = iVar5 + iVar9;
            iVar24 = FUN_140169fe7(lVar17,uVar12 + 5);
            iVar24 = iVar24 + iVar10;
            local_6448 = (undefined1 *)CONCAT44(local_6448._4_4_,iVar24);
            local_6450 = (char *)CONCAT44(local_6450._4_4_,iVar5);
            local_6458 = (char *)CONCAT44(local_6458._4_4_,iVar10);
            FUN_14016a2d4(local_4a88,iVar7,iVar8,iVar9);
            uVar12 = uVar12 + 6;
          } while (uVar12 < (uint)local_63b8);
        }
        param_6 = iVar5;
        param_7 = iVar24;
        FUN_140169d63(lVar17);
        piVar31 = (int *)(local_63f8 + 1);
        puVar18 = local_6400;
        param_1 = local_63f8;
        lVar23 = local_6408;
        uVar6 = (undefined4)local_6418;
        iVar24 = local_641c;
        uVar25 = local_63e8;
        goto LAB_140166aec;
      case 0x1a:
        local_641c = iVar24;
        uVar12 = FUN_140169fda(lVar17);
        iVar5 = param_6;
        iVar24 = param_7;
        lVar23 = local_6410;
        for (uVar11 = uVar12 & 2; local_6410 = lVar23, uVar11 < (uVar12 & 0xfffffffd);
            uVar11 = uVar11 + 4) {
          if ((uVar12 - uVar11 & 1) != 0) {
            iVar7 = FUN_140169fe7(lVar23,uVar11);
            iVar5 = iVar5 + iVar7;
            uVar11 = uVar11 + 1;
          }
          iVar7 = FUN_140169fe7(lVar23,uVar11);
          iVar7 = iVar24 + iVar7;
          iVar8 = FUN_140169fe7(lVar23,uVar11 + 1);
          iVar8 = iVar8 + iVar5;
          iVar9 = FUN_140169fe7(lVar23,uVar11 + 2);
          iVar9 = iVar9 + iVar7;
          iVar24 = FUN_140169fe7(lVar23,uVar11 + 3);
          iVar24 = iVar24 + iVar9;
          local_6448 = (undefined1 *)CONCAT44(local_6448._4_4_,iVar24);
          local_6450 = (char *)CONCAT44(local_6450._4_4_,iVar8);
          local_6458 = (char *)CONCAT44(local_6458._4_4_,iVar9);
          FUN_14016a2d4(local_4a88,iVar5,iVar7,iVar8);
          iVar5 = iVar8;
          lVar23 = local_6410;
        }
        goto LAB_140167a40;
      case 0x1b:
        local_641c = iVar24;
        uVar12 = FUN_140169fda(lVar17);
        iVar5 = param_6;
        iVar24 = param_7;
        lVar23 = local_6410;
        for (uVar11 = uVar12 & 2; local_6410 = lVar23, uVar11 < (uVar12 & 0xfffffffd);
            uVar11 = uVar11 + 4) {
          if ((uVar12 - uVar11 & 1) != 0) {
            iVar7 = FUN_140169fe7(lVar23,uVar11);
            iVar24 = iVar24 + iVar7;
            uVar11 = uVar11 + 1;
          }
          iVar7 = FUN_140169fe7(lVar23,uVar11);
          iVar7 = iVar5 + iVar7;
          iVar8 = FUN_140169fe7(lVar23,uVar11 + 1);
          iVar8 = iVar8 + iVar7;
          iVar9 = FUN_140169fe7(lVar23,uVar11 + 2);
          iVar9 = iVar9 + iVar24;
          iVar5 = FUN_140169fe7(lVar23,uVar11 + 3);
          iVar5 = iVar5 + iVar8;
          local_6448 = (undefined1 *)CONCAT44(local_6448._4_4_,iVar9);
          local_6450 = (char *)CONCAT44(local_6450._4_4_,iVar5);
          local_6458 = (char *)CONCAT44(local_6458._4_4_,iVar9);
          FUN_14016a2d4(local_4a88,iVar7,iVar24,iVar8);
          iVar24 = iVar9;
          lVar23 = local_6410;
        }
        goto LAB_140167a40;
      case 0x1c:
        iVar5 = FUN_140169d34(puVar18);
        iVar7 = FUN_140169d34(puVar18);
        uVar11 = (iVar5 << 0x18 | iVar7 << 0x10) >> 0x10;
        goto LAB_140167780;
      case 0x1e:
      case 0x1f:
        local_641c = iVar24;
        uVar12 = FUN_140169fda(lVar17);
        uVar11 = uVar12 & 2;
        lVar23 = local_6410;
        iVar5 = param_6;
        iVar24 = param_7;
        if (uVar11 < (uVar12 & 0xfffffffd)) {
          local_63e0 = CONCAT44(local_63e0._4_4_,
                                (int)CONCAT71((int7)((ulonglong)lVar17 >> 8),bVar29 == 0x1f));
          local_63b8 = CONCAT44(local_63b8._4_4_,uVar12) & 0xfffffffffffffffd;
          do {
            lVar23 = local_6410;
            iVar7 = FUN_140169fe7(local_6410,uVar11);
            uVar12 = uVar11 + 1;
            iVar8 = FUN_140169fe7(lVar23,uVar12);
            iVar9 = FUN_140169fe7(lVar23,uVar11 + 2);
            iVar10 = FUN_140169fe7(lVar23,uVar11 + 3);
            if ((char)local_63e0 == '\0') {
              iVar7 = iVar24 + iVar7;
              iVar8 = iVar8 + iVar5;
              iVar9 = iVar9 + iVar7;
              local_63e0 = CONCAT44(local_63e0._4_4_,(int)CONCAT71((int7)((ulonglong)lVar23 >> 8),1)
                                   );
              iVar26 = iVar5;
              iVar5 = iVar10 + iVar8;
              iVar24 = iVar9;
              if ((uint)local_63b8 - uVar11 == 5) {
                iVar24 = FUN_140169fe7(local_6410,uVar11 + 4);
                uVar11 = uVar12;
                iVar24 = iVar24 + iVar9;
              }
            }
            else {
              iVar26 = iVar5 + iVar7;
              iVar8 = iVar8 + iVar26;
              iVar9 = iVar9 + iVar24;
              iVar7 = iVar24;
              if ((uint)local_63b8 - uVar11 == 5) {
                iVar5 = FUN_140169fe7(local_6410,uVar11 + 4);
                local_63e0 = local_63e0 & 0xffffffff00000000;
                uVar11 = uVar12;
                iVar5 = iVar5 + iVar8;
                iVar24 = iVar10 + iVar9;
              }
              else {
                local_63e0 = (ulonglong)local_63e0._4_4_ << 0x20;
                iVar5 = iVar8;
                iVar24 = iVar10 + iVar9;
              }
            }
            local_6448 = (undefined1 *)CONCAT44(local_6448._4_4_,iVar24);
            local_6450 = (char *)CONCAT44(local_6450._4_4_,iVar5);
            local_6458 = (char *)CONCAT44(local_6458._4_4_,iVar9);
            FUN_14016a2d4(local_4a88,iVar26,iVar7,iVar8);
            uVar11 = uVar11 + 4;
            lVar23 = local_6410;
          } while (uVar11 < (uint)local_63b8);
        }
LAB_140167a40:
        param_7 = iVar24;
        param_6 = iVar5;
        lVar17 = lVar23;
        FUN_140169d63(lVar17);
LAB_140167a4c:
        piVar31 = (int *)(local_63f8 + 1);
        puVar18 = local_6400;
        param_1 = local_63f8;
        lVar23 = local_6408;
        uVar6 = (undefined4)local_6418;
        iVar24 = local_641c;
        uVar25 = local_63e8;
        goto LAB_140166aec;
      default:
        if (bVar29 < 0xf7) goto code_r0x000140167572;
        uVar11 = FUN_140169d34(puVar18);
        if (bVar29 < 0xfb) {
          iVar5 = iVar8 * 0x100 + uVar11 + -0xf694;
        }
        else {
          if (bVar29 == 0xff) {
            local_641c = iVar24;
            iVar5 = FUN_140169d34(puVar18);
            iVar24 = FUN_140169d34(puVar18);
            local_6400 = puVar18;
            uVar12 = FUN_140169d34(puVar18);
            uVar12 = iVar24 << 8 | iVar5 << 0x10 | uVar11 << 0x18 | uVar12;
            if (*(char *)((longlong)param_1 + 0xc) == '\0') {
              FUN_14016aa84(lVar17,uVar12);
            }
            else {
              uVar13 = local_63cc & 0xff;
              uVar11 = 1;
              if ((char)local_63cc != '\0') {
                uVar11 = uVar13;
              }
              local_63cc = uVar11;
              if (uVar12 + 32000 < 0xfa01) {
                local_63cc = uVar13;
              }
              FUN_14016a8ba(lVar17,uVar12);
            }
            puVar18 = local_6400;
            uVar6 = (undefined4)local_6418;
            iVar24 = local_641c;
            uVar25 = local_63e8;
            goto LAB_140166aec;
          }
          iVar5 = 0xfa94 - (iVar8 << 8 | uVar11);
        }
        FUN_14016a8ba(lVar17,iVar5);
        uVar6 = (undefined4)local_6418;
        uVar25 = local_63e8;
        goto LAB_140166aec;
      }
switchD_140167cb6_caseD_8:
      FUN_140169d63(lVar17);
LAB_140167a87:
      puVar18 = local_6400;
      uVar6 = (undefined4)local_6418;
      iVar24 = local_641c;
      uVar25 = local_63e8;
      goto LAB_140166aec;
    }
    iVar5 = 0;
  }
LAB_140168c9d:
  FUN_1401691c8(piVar31,iVar5);
  FUN_14016b1e5(local_4a88);
  FUN_14016b1f1(local_6390);
  FUN_14016b1f1(local_6358);
  FUN_14016b1f1(local_6318);
  FUN_14016b21e(lVar17);
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_6478)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_6478);
code_r0x000140167572:
  FUN_14016a8ba(lVar17,iVar8 + -0x8b);
  puVar18 = local_6400;
  uVar6 = (undefined4)local_6418;
  uVar25 = local_63e8;
  goto LAB_140166aec;
switchD_140166c1c_caseD_0:
  local_641c = iVar24;
  goto switchD_140167cb6_caseD_8;
}

