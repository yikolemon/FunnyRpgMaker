/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045fc9b */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __fastcall
FUN_0045fc9b(int *param_1,uint *param_2,undefined4 param_3,undefined4 *param_4,char param_5,
            uint *param_6,uint *param_7,int *param_8)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined3 extraout_var;
  uint uVar15;
  undefined3 extraout_var_00;
  int iVar16;
  int iVar17;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar18;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  int iVar19;
  undefined4 uVar20;
  uint *puVar21;
  undefined4 extraout_ECX;
  int *piVar22;
  undefined4 extraout_EDX;
  uint *puVar23;
  undefined4 uVar24;
  int iVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  int iVar30;
  uint uVar31;
  uint *puVar32;
  bool bVar33;
  undefined8 uVar34;
  int *in_stack_0000001c;
  undefined4 *in_stack_00000020;
  undefined *puVar35;
  int *piVar36;
  int iVar37;
  int local_3ea0;
  uint local_3e9c;
  uint *local_3e98;
  int local_3e90;
  int local_3e8c;
  uint *local_3e88;
  uint local_3e84;
  uint *local_3e80;
  int local_3e68 [4];
  undefined4 uStack_3e58;
  int local_3e4c [7];
  char local_3e2d;
  int local_3e2c [5];
  char cStack_3e15;
  int local_3e10 [6];
  int iStack_3df8;
  uint local_3df4 [6];
  uint auStack_3ddc [961];
  int local_2ed8 [1936];
  undefined1 local_1098 [3868];
  undefined1 local_17c [168];
  undefined4 local_d4;
  undefined2 local_d0 [2];
  int aiStack_cc [9];
  undefined8 local_a8;
  uint local_a0 [32];
  undefined8 local_20;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xffffc148;
  iVar30 = param_1[0x2c];
  piVar1 = param_1 + 1;
  iVar25 = *param_1;
  iVar19 = param_1[0xd];
  puVar23 = param_7;
  iVar11 = FUN_0046282a(iVar30);
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
  aiStack_cc[5] = 0;
  aiStack_cc[6] = 0;
  aiStack_cc[7] = 0;
  aiStack_cc[8] = 0;
  local_a8 = 0;
  FUN_0046283a(local_3e2c,iVar25,piVar1,0x10);
  FUN_0046283a(local_3e4c,iVar25,piVar1,0x14);
  FUN_0046283a(local_3e68,iVar25,piVar1,0x14);
  FUN_00462854(&local_d4,piVar1);
  iVar37 = iVar30;
  FUN_00462866(local_2ed8,param_1,param_3,iVar19,local_3e4c,local_3e68,&local_d4,puVar23,
               param_1 + 0x3c,param_4);
  local_3e2d = *(char *)((int)param_1 + 9) != '\0';
  iVar12 = FUN_0046298f(iVar30);
  *param_8 = iVar12;
  if (*(char *)((int)param_1 + 9) == '\0') {
    uVar13 = 0x30;
  }
  else {
    uVar13 = FUN_0046299f(iVar30);
  }
  piVar14 = FUN_004629ac(iVar25,(int)(param_1 + 1),uVar13);
  if (piVar14 == (int *)0x0) {
    iVar30 = 0x40;
    piVar36 = piVar14;
  }
  else {
    FUN_00462a3e(local_3e2c);
    if (*piVar1 == 0) {
      local_3e88 = (uint *)FUN_00462a60((int)local_3e2c);
      uVar13 = param_2[1];
      uVar31 = param_2[2];
      uVar15 = param_2[3];
      *local_3e88 = *param_2;
      local_3e88[1] = uVar13;
      local_3e88[2] = uVar31;
      local_3e88[3] = uVar15;
      piVar2 = param_1 + 0x17;
      iVar25 = 20000000;
      local_3e84 = 0;
      uVar20 = 0;
      local_3e80 = (uint *)0x0;
LAB_0045fe92:
      local_3e9c = 0;
      local_3ea0 = 0;
      uVar24 = uVar20;
      piVar36 = piVar14;
LAB_0045fe9a:
      cVar7 = (char)uVar24;
      uVar20 = FUN_00462a64((int)local_3e88);
      if ((char)uVar20 == '\0') {
        bVar6 = FUN_00462a6e(local_3e88);
        uVar13 = CONCAT31(extraout_var,bVar6);
        piVar22 = piVar36;
        if (((uVar13 == 0xe) || (uVar13 == 0xb)) &&
           (uVar13 = (uint)bVar6, *(char *)((int)param_1 + 9) != '\0')) {
          uVar13 = 0;
        }
      }
      else {
        uVar13 = (uint)(local_3e84 == 0) * 3 + 0xb;
        piVar22 = piVar36;
      }
      cVar3 = (char)param_1[2];
      bVar6 = (byte)uVar13;
      puVar23 = local_3e80;
      if (cVar3 != '\0') {
        if (((((cVar7 == '\0') && ((bVar6 & 0xfe) != 10)) &&
             ((bVar6 != 0xd && (((bVar6 & 0xfd) != 1 && (bVar6 < 0x20)))))) && (bVar6 != 0xc)) &&
           (bVar6 != 0xe)) {
          FUN_00462a8f((int)piVar22);
          uVar24 = 0;
          piVar36 = piVar22;
          goto LAB_0045fe9a;
        }
        uVar31 = 0;
        if ((byte)(bVar6 - 10) < 3) {
          uVar31 = local_3e9c;
        }
        if (0x1f < bVar6) {
          uVar31 = local_3e9c;
        }
        puVar23 = (uint *)0x0;
        if (0x1f < bVar6) {
          puVar23 = local_3e80;
        }
        if (0 < (int)local_3e9c) {
          local_3e9c = uVar31;
        }
        if ((char)local_3e80 == '\0') {
          puVar23 = local_3e80;
        }
        if (bVar6 == 0xc) {
          puVar23 = local_3e80;
        }
      }
      local_3e80 = puVar23;
      iVar30 = 0;
      piVar36 = piVar22;
      if (*piVar1 != 0) goto LAB_00461ae4;
      iVar25 = iVar25 + -1;
      piVar14 = piVar22;
      if (iVar25 == 0) goto LAB_00461adf;
      uVar31 = uVar13 & 0xff;
      switch(uVar31) {
      case 0:
      case 2:
      case 0x11:
        break;
      case 1:
      case 0x12:
        if (cVar3 == '\0') {
          cVar7 = FUN_00462bbb((int)&local_d4);
          if (cVar7 != '\0') break;
          iVar30 = 0;
        }
        else {
          iVar30 = *(int *)(*(int *)(iVar37 + 0x20) + 4);
        }
        piVar14 = local_3e4c;
        goto LAB_004600c5;
      case 3:
      case 0x17:
        if (cVar3 == '\0') {
          cVar7 = FUN_00462bbb((int)&local_d4);
          if (cVar7 != '\0') break;
          iVar30 = 0;
        }
        else {
          iVar30 = **(int **)(iVar37 + 0x20);
        }
        piVar14 = local_3e68;
LAB_004600c5:
        iVar12 = iVar37;
        FUN_00462bbf((int)param_1,(int)piVar22,piVar14,param_8,&local_3e2d,iVar30);
        cVar7 = *(char *)(iVar37 + 0x224);
        iVar37 = iVar12;
joined_r0x00460f22:
        iVar30 = 0;
        piVar36 = piVar22;
        if (cVar7 != '\0') goto LAB_00461ae4;
        break;
      case 4:
        uVar13 = FUN_00462cbd((int)piVar22);
        if ((1 < uVar13) && (local_3e2d == '\0')) {
          iVar12 = FUN_00462cc7((int)piVar22,0);
          *param_8 = iVar12 + iVar11;
        }
        puVar23 = param_7;
        local_3e2d = '\x01';
        piVar36 = piVar22;
        if (*(char *)(iVar37 + 0x224) == '\0') {
          iVar30 = FUN_00462d12((int)piVar22);
          param_7 = (uint *)(iVar30 + (int)puVar23);
          iVar30 = *(int *)(iVar37 + 0x1d4);
          goto joined_r0x0046058e;
        }
        goto LAB_00461ae4;
      case 5:
        uVar13 = FUN_00462cbd((int)piVar22);
        puVar23 = param_6;
        puVar29 = param_7;
        piVar36 = piVar22;
        if (uVar13 != 0) {
          uVar31 = 0;
          piVar14 = piVar22;
          do {
            piVar22 = piVar14;
            iVar30 = FUN_00462cc7((int)piVar14,uVar31);
            puVar23 = (uint *)((int)puVar23 + iVar30);
            iVar30 = FUN_00462cc7((int)piVar14,uVar31 + 1);
            puVar29 = (uint *)((int)puVar29 + iVar30);
            FUN_00462dda(local_2ed8,(int)puVar23,(int)puVar29);
            uVar31 = uVar31 + 2;
            piVar14 = piVar22;
            piVar36 = piVar22;
          } while (uVar31 < uVar13);
        }
        goto LAB_00460c88;
      case 6:
      case 7:
        uVar13 = FUN_00462cbd((int)piVar22);
        puVar23 = param_6;
        puVar29 = param_7;
        piVar36 = piVar22;
        if (uVar13 != 0) {
          uVar15 = (uint)(bVar6 != 6);
          uVar31 = 0;
          do {
            iVar16 = FUN_00462cc7((int)piVar22,uVar31);
            iVar12 = iVar16;
            iVar30 = 0;
            if ((uVar15 & 1) != 0) {
              iVar12 = 0;
              iVar30 = iVar16;
            }
            puVar29 = (uint *)((int)puVar29 + iVar30);
            puVar23 = (uint *)((int)puVar23 + iVar12);
            FUN_00462dda(local_2ed8,(int)puVar23,(int)puVar29);
            uVar31 = uVar31 + 1;
            uVar15 = uVar15 ^ 1;
            piVar36 = piVar22;
          } while (uVar13 != uVar31);
        }
        goto LAB_00460c88;
      case 8:
      case 0x18:
        uVar15 = FUN_00462cbd((int)piVar22);
        cVar7 = (char)uVar13;
        uVar31 = 0;
        puVar23 = param_6;
        puVar29 = param_7;
        if (5 < uVar15) {
          uVar27 = 0;
          piVar14 = piVar22;
          do {
            piVar22 = piVar14;
            iVar30 = FUN_00462cc7((int)piVar14,uVar27);
            iVar30 = (int)puVar23 + iVar30;
            iVar12 = FUN_00462cc7((int)piVar14,uVar27 + 1);
            local_3e98 = (uint *)(iVar12 + (int)puVar29);
            iVar12 = FUN_00462cc7((int)piVar14,uVar27 + 2);
            iVar12 = iVar12 + iVar30;
            iVar16 = FUN_00462cc7((int)piVar14,uVar27 + 3);
            iVar17 = FUN_00462cc7((int)piVar14,uVar27 + 4);
            puVar23 = (uint *)(iVar17 + iVar12);
            iVar17 = FUN_00462cc7((int)piVar14,uVar27 + 5);
            puVar29 = (uint *)(iVar17 + iVar16 + (int)local_3e98);
            FUN_00462f5d(local_2ed8,iVar30,(int)local_3e98,iVar12,iVar16 + (int)local_3e98,
                         (int)puVar23,(int)puVar29);
            cVar7 = (char)uVar13;
            uVar31 = uVar27 + 6;
            uVar28 = uVar27 + 0xc;
            uVar27 = uVar31;
            piVar14 = piVar22;
          } while (uVar28 <= uVar15);
        }
        piVar36 = piVar22;
        if (cVar7 == '\x18') {
          param_6 = puVar23;
          param_7 = puVar29;
          iVar30 = FUN_00462cc7((int)piVar22,uVar31);
          param_6 = (uint *)((int)puVar23 + iVar30);
          iVar12 = FUN_00462cc7((int)piVar22,uVar31 | 1);
          param_7 = (uint *)(iVar12 + (int)puVar29);
          FUN_00462dda(local_2ed8,(int)puVar23 + iVar30,(int)param_7);
          puVar23 = param_6;
          puVar29 = param_7;
        }
        goto LAB_00460c88;
      case 9:
        if (cVar3 != '\0') {
          FUN_00463144(local_2ed8);
          local_3e2d = '\x01';
        }
        break;
      case 10:
      case 0x1d:
        if (0xf < (int)local_3e84) goto LAB_00461adf;
        local_3e84 = local_3e84 + 1;
        local_3e88 = (uint *)FUN_004631af((int)local_3e2c,local_3e84);
        iVar30 = FUN_00462a96((int)piVar22);
        piVar36 = piVar22;
        if (((char)param_1[2] != '\0') && (*(int *)(iVar37 + 0x268) != 0)) {
          piVar14 = (int *)FUN_0041ccd3(iVar30,*(int *)(iVar37 + 0x268));
          iVar30 = -1;
          piVar36 = piVar22;
          if (piVar14 != (int *)0x0) {
            iVar30 = *piVar14;
          }
        }
        if (bVar6 == 0x1d) {
          bVar33 = FUN_004631d1(iVar37,iVar30,local_3e88);
          iVar12 = CONCAT31(extraout_var_00,bVar33);
        }
        else {
          iVar12 = FUN_0046320f(iVar37,iVar30,local_3e88);
        }
        iVar30 = 0x12;
        if (iVar12 != 0) goto LAB_00461ae4;
        goto LAB_0045fe9a;
      case 0xb:
        iVar30 = 0x12;
        if ((int)local_3e84 < 1) goto LAB_00461ae4;
        local_3e84 = local_3e84 - 1;
        local_3e88 = (uint *)FUN_004631af((int)local_3e2c,local_3e84);
        piVar36 = piVar22;
        goto LAB_0045fe9a;
      case 0xc:
        uVar8 = FUN_00462a6e(local_3e88);
        uVar13 = CONCAT31(extraout_var_01,uVar8);
        switch(uVar13) {
        case 0x13:
        case 0x19:
        case 0x1f:
        case 0x20:
          goto switchD_0045ff9b_caseD_0;
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
switchD_00460711_caseD_14:
          if ((*(char *)((int)param_1 + 9) != '\0') || (0x25 < uVar13))
          goto switchD_0045ff9b_caseD_0;
          cVar3 = (char)param_1[2];
          if ((uVar13 != 0x11) && ((cVar3 != '\0' && (0 < (int)local_3e9c)))) {
            local_3e9c = 0;
            goto switchD_0045ff9b_caseD_0;
          }
          break;
        case 0x22:
          cVar7 = '\0';
          puVar35 = &DAT_004e6b64;
          goto LAB_00460e03;
        case 0x23:
          FUN_00463282((int)piVar22,(int *)&param_6,(int *)&param_7,local_2ed8,0x4e6b70,'\0');
          goto switchD_0045ff9b_caseD_0;
        case 0x24:
          cVar7 = '\0';
          puVar35 = &DAT_004e6b7c;
          goto LAB_00460e03;
        case 0x25:
          cVar7 = '\x01';
          puVar35 = &DAT_004e6b88;
LAB_00460e03:
          FUN_00463282((int)piVar22,(int *)&param_6,(int *)&param_7,local_2ed8,(int)puVar35,cVar7);
          piVar36 = piVar22;
          goto LAB_0045fe9a;
        default:
          if ((uVar13 != 8) && (uVar13 != 0xd)) goto switchD_00460711_caseD_14;
          goto switchD_0045ff9b_caseD_0;
        }
        piVar36 = piVar22;
        piVar14 = piVar22;
        switch(uVar13) {
        case 1:
        case 2:
          if (cVar3 == '\0') goto switchD_0045ff9b_caseD_0;
          iVar30 = FUN_00462cc7((int)piVar22,0);
          iVar12 = FUN_00462cc7((int)piVar22,2);
          local_3e98 = (uint *)FUN_00462cc7((int)piVar22,4);
          iVar16 = FUN_00462cc7((int)piVar22,1);
          piVar36 = piVar22;
          FUN_0046343f((int)piVar22,2,iVar12 - (iVar16 + iVar30));
          iVar30 = FUN_00462cc7((int)piVar22,3);
          FUN_0046343f((int)piVar22,4,(int)local_3e98 - (iVar30 + iVar12));
          piVar14 = local_3e4c;
          if (uVar13 == 1) {
            piVar14 = local_3e68;
          }
          FUN_00462bbf((int)param_1,(int)piVar22,piVar14,param_8,&local_3e2d,
                       *(int *)(*(int *)(iVar37 + 0x20) + (uint)(uVar13 != 1) * 4));
          cVar7 = *(char *)(iVar37 + 0x224);
          piVar22 = piVar36;
          goto joined_r0x00460f22;
        case 3:
          iVar30 = FUN_00462d12((int)piVar22);
          iVar12 = FUN_00462d12((int)piVar22);
          uVar31 = (uint)(iVar30 != 0 && iVar12 != 0);
          goto LAB_00460a83;
        case 4:
          iVar30 = FUN_00462d12((int)piVar22);
          iVar12 = FUN_00462d12((int)piVar22);
          uVar31 = (uint)(iVar12 != 0 || iVar30 != 0);
          goto LAB_00460a83;
        case 5:
          iVar30 = FUN_00462d12((int)piVar22);
          uVar31 = (uint)(iVar30 == 0);
          goto LAB_00460a83;
        case 6:
          if (cVar3 == '\0') goto switchD_0045ff9b_caseD_0;
          iVar25 = *(int *)(iVar37 + 4);
          uVar13 = FUN_00462a96((int)piVar22);
          uVar31 = FUN_00462a96((int)piVar22);
          iVar12 = FUN_00462d12((int)piVar22);
          iVar16 = FUN_00462d12((int)piVar22);
          iVar17 = FUN_00462d12((int)piVar22);
          iVar30 = 0x12;
          if ((param_5 != '\0') || (*(char *)(iVar37 + 0x2f) != '\0')) goto LAB_00461ae4;
          iVar25 = *(int *)(*(int *)(iVar25 + 0x80) + 0x34);
          if (*(int *)(iVar37 + 0x244) == 0) {
            if (iVar25 == 0) goto LAB_00461ae4;
            local_3e90 = **(int **)(iVar37 + 0x20);
          }
          else {
            local_3e90 = **(int **)(iVar37 + 0x20);
            if (iVar25 == 0) {
              iVar25 = iVar37;
              uVar31 = FUN_004634a9(iVar37,uVar31);
              uVar13 = FUN_004634a9(iVar37,uVar13);
              iVar37 = iVar25;
            }
          }
          if ((int)(uVar31 | uVar13) < 0) goto LAB_00461ae4;
          if (*(char *)(iVar37 + 0x2e) != '\0') {
            iVar25 = *(int *)(iVar37 + 8);
            piVar14 = (int *)**(undefined4 **)(iVar25 + 0x9c);
            iVar30 = FUN_0041c98e(piVar14,2);
            if (iVar30 == 0) {
              puVar23 = (uint *)piVar14[0x16];
              *puVar23 = uVar31;
              *(undefined2 *)(puVar23 + 1) = 0x202;
              iVar30 = 0;
              puVar23[2] = 0;
              puVar23[3] = 0;
              puVar23[8] = uVar13;
              *(undefined2 *)(puVar23 + 9) = 2;
              uVar13 = FUN_00421311((local_3e90 + iVar16) - iVar17);
              puVar23[10] = (int)uVar13 >> 0x10;
              uVar13 = FUN_00421311(iVar12);
              puVar23[0xb] = (int)uVar13 >> 0x10;
              *(undefined4 *)(iVar25 + 0x80) = 2;
              *(int *)(iVar25 + 0x84) = piVar14[0xd];
              *(undefined4 *)(iVar25 + 0x48) = 0x636f6d70;
              piVar14[0x15] = 2;
            }
            goto LAB_00461ae4;
          }
          iVar25 = iVar37;
          FUN_0041ca1c(*(int *)(iVar37 + 0xc));
          iVar30 = FUN_00463510(iVar37,uVar31,local_3df4);
          if (iVar30 != 0) goto LAB_00461ae4;
          uVar20 = *(undefined4 *)(*(int *)(iVar25 + 0x24) + 4);
          FUN_0045fc9b(param_1,local_3df4,param_3,param_4,'\x01',(uint *)0x0,(uint *)0x0,local_3e10)
          ;
          FUN_00463596(iVar25,(int)local_3df4);
          if (cStack_3e15 == '\0') {
            uVar20 = *(undefined4 *)(*(int *)(iVar12 + 0x24) + 4);
          }
          **(undefined4 **)(iVar25 + 0x20) = 0;
          *(undefined4 *)(*(int *)(iVar12 + 0x20) + 4) = 0;
          iVar30 = FUN_00463510(iVar12,local_3e90 + iVar16,local_3df4);
          if (iVar30 != 0) goto LAB_00461ae4;
          FUN_0045fc9b(piVar1,auStack_3ddc,in_stack_0000001c,in_stack_00000020,'\x01',
                       (uint *)(iVar11 - iVar19),local_3e80,&iStack_3df8);
          FUN_00463596((int)local_3e80,(int)auStack_3ddc);
          piVar14 = (int *)local_3e80[8];
          piVar14[1] = local_3e84;
          *piVar14 = iVar19;
          puVar4 = (undefined4 *)local_3e80[9];
          puVar4[1] = uVar20;
          *puVar4 = uStack_3e58;
          piVar14 = in_stack_0000001c;
          goto LAB_0045fe41;
        case 7:
          if (cVar3 == '\0') goto switchD_0045ff9b_caseD_0;
          iVar30 = FUN_00462d12((int)piVar22);
          *(int *)(*(int *)(iVar37 + 0x24) + 4) = iVar30;
          iVar30 = iVar37;
          iVar12 = FUN_00462d12((int)piVar22);
          **(int **)(iVar37 + 0x24) = iVar12;
          iVar12 = FUN_00462d12((int)piVar22);
          iVar16 = FUN_00462d12((int)piVar22);
          **(int **)(iVar37 + 0x20) = **(int **)(iVar37 + 0x20) + iVar16;
          piVar36 = (int *)(*(int *)(iVar37 + 0x20) + 4);
          *piVar36 = *piVar36 + iVar12;
          local_3e2d = '\x01';
          if (*(char *)(iVar37 + 0x2f) != '\0') goto LAB_0045fe41;
          piVar22 = piVar14;
          iVar37 = iVar30;
          if (cVar7 == '\0') goto LAB_004614fe;
          param_6 = (uint *)((int)param_6 + iVar16);
          param_7 = (uint *)((int)param_7 + iVar12);
LAB_00460a58:
          uVar24 = 1;
        default:
          goto switchD_0045ff9b_caseD_0;
        case 9:
          uVar13 = FUN_00462d12((int)piVar22);
          if (SBORROW4(0,uVar13)) {
LAB_004613ff:
            uVar13 = 0x7fffffff;
          }
          else if (-1 < (int)-uVar13) {
            uVar13 = -uVar13;
          }
          break;
        case 10:
          iVar30 = FUN_00462d12((int)piVar22);
          iVar12 = FUN_00462d12((int)piVar22);
          uVar13 = iVar30 + iVar12;
          break;
        case 0xb:
          iVar30 = FUN_00462d12((int)piVar22);
          iVar12 = FUN_00462d12((int)piVar22);
          uVar13 = iVar12 - iVar30;
          break;
        case 0xc:
          if ((cVar3 == '\0') || ((char)local_3e80 == '\0')) {
            uVar13 = FUN_00462d12((int)piVar22);
            uVar31 = FUN_00462d12((int)piVar22);
          }
          else {
            uVar13 = FUN_00462a96((int)piVar22);
            uVar31 = FUN_00462a96((int)piVar22);
            local_3e80 = (uint *)0x0;
          }
          iVar30 = FUN_0041eaa0(uVar31,uVar13);
          FUN_004635f0((int)piVar22,iVar30);
          goto LAB_0045fe9a;
        case 0xe:
          iVar30 = FUN_00462d12((int)piVar22);
          uVar13 = -iVar30;
          if (SBORROW4(0,iVar30)) goto LAB_004613ff;
          break;
        case 0xf:
          iVar30 = FUN_00462d12((int)piVar22);
          iVar12 = FUN_00462d12((int)piVar22);
          uVar31 = (uint)(iVar12 == iVar30);
LAB_00460a83:
          FUN_00463478((int)piVar22,uVar31);
          goto LAB_0045fe9a;
        case 0x10:
          if (cVar3 != '\0') {
            iVar12 = FUN_00462a96((int)piVar22);
            uVar13 = FUN_00462a96((int)piVar22);
            uVar20 = uVar24;
            uVar31 = FUN_00462cbd((int)piVar22);
            if (uVar31 < uVar13) goto LAB_00461adf;
            cVar7 = (char)uVar20;
            uVar24 = uVar20;
            piVar36 = piVar14;
            switch(iVar12) {
            case 0:
              if (uVar13 == 3) {
                if (cVar7 != '\0') {
                  if (*(int *)(iVar37 + 0x1d4) == 0) break;
                  iVar30 = 0x12;
                  if (*(int *)(iVar37 + 0x1d8) != 7) goto LAB_00461ae4;
                }
                FUN_004635f0((int)piVar14,param_6);
                FUN_004635f0((int)piVar14,param_7);
                local_3ea0 = 2;
                local_3e9c = 0;
                goto LAB_0045fe9a;
              }
              break;
            case 1:
              iVar30 = 0x12;
              if (uVar13 != 0) goto LAB_00461ae4;
              local_3e9c = 0;
              local_3ea0 = 0;
              uVar24 = 0;
              if (cVar7 != '\0') {
                iVar30 = FUN_0045f8e8(iVar37,6);
                if (iVar30 == 0) {
                  *(undefined4 *)(iVar37 + 0x1d4) = 1;
                  *(undefined4 *)(iVar37 + 0x1d8) = 0;
                  goto LAB_004618be;
                }
                goto LAB_0045fe41;
              }
              goto LAB_0045fe9a;
            case 2:
              if (uVar13 == 0) {
                local_3e9c = 0;
                local_3ea0 = 0;
                uVar24 = 0;
                if (cVar7 == '\0') goto LAB_0045fe9a;
                if (*(int *)(iVar37 + 0x1d4) != 0) {
                  uVar13 = *(uint *)(iVar37 + 0x1d8);
                  *(uint *)(iVar37 + 0x1d8) = uVar13 + 1;
                  local_3ea0 = 0;
                  uVar24 = uVar20;
                  if (uVar13 - 1 < 6) {
                    iVar12 = FUN_0045f8e8(iVar37,1);
                    iVar30 = 0x12;
                    piVar36 = piVar14;
                    if (iVar12 != 0) goto LAB_00461ae4;
                    iVar30 = uVar13 * 2 + -6;
                    if (uVar13 < 4) {
                      iVar30 = uVar13 * 2;
                    }
                    aiStack_cc[iVar30 + 3] = (int)param_6;
                    aiStack_cc[iVar30 + 4] = (int)param_7;
                    if ((uVar13 == 6) || (local_3ea0 = 0, uVar13 == 3)) {
                      FUN_00462f5d(local_2ed8,aiStack_cc[5],aiStack_cc[6],aiStack_cc[7],
                                   aiStack_cc[8],(int)local_a8,local_a8._4_4_);
                      goto LAB_0045fe92;
                    }
                  }
                  goto LAB_0045fe9a;
                }
              }
              break;
            case 3:
              iVar30 = 0x12;
              if (uVar13 != 1) goto LAB_00461ae4;
              local_3e9c = 0;
              local_3ea0 = 1;
              uVar24 = 0;
              if (cVar7 != '\0') {
                FUN_00463621((int)local_3e68);
                FUN_00463621((int)local_3e4c);
                FUN_00462854(&local_d4,piVar1);
                local_d0[0] = 0x100;
                goto LAB_00461a2b;
              }
              goto LAB_0045fe9a;
            default:
              if (-1 < (int)uVar13) {
                iVar30 = 0x12;
                if (iVar12 < 0) goto LAB_00461ae4;
                local_3e9c = 3;
                if (uVar13 < 3) {
                  local_3e9c = uVar13;
                }
                local_3ea0 = 0;
                uVar31 = local_3e9c;
                while (uVar24 = uVar20, piVar36 = piVar14, uVar13 != 0) {
                  uVar13 = FUN_00462d12((int)piVar14);
                  local_a0[uVar31 + 0x1f] = uVar13;
                  uVar31 = uVar31 - 1;
                  uVar13 = uVar31;
                }
                goto LAB_0045fe9a;
              }
              break;
            case 0xc:
            case 0xd:
              FUN_00462a8f((int)piVar14);
LAB_004618be:
              local_3e9c = 0;
              local_3ea0 = 0;
              uVar24 = uVar20;
              piVar36 = piVar14;
              goto LAB_0045fe9a;
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
              puVar23 = *(uint **)(iVar37 + 0x284);
              if (puVar23 != (uint *)0x0) {
                local_3ea0 = iVar12 + -0xd + (uint)(iVar12 == 0x12);
                iVar30 = 0x12;
                if (uVar13 != *puVar23 * local_3ea0) goto LAB_00461ae4;
                local_3e8c = local_3ea0 + (int)(uVar31 - uVar13);
                iVar30 = 0;
                puVar29 = (uint *)(uVar31 - uVar13);
                do {
                  iVar12 = FUN_00462cc7((int)piVar14,(uint)puVar29);
                  if (1 < *puVar23) {
                    uVar31 = 1;
                    piVar14 = piVar36;
                    do {
                      iVar16 = *(int *)(puVar23[0x22] + uVar31 * 4);
                      iVar17 = FUN_00462cc7((int)piVar14,(local_3e8c + uVar31) - 1);
                      lVar5 = (longlong)iVar17 * (longlong)iVar16;
                      iVar16 = (int)(lVar5 >> 0x3f);
                      lVar5 = lVar5 + CONCAT44(iVar16,iVar16) + 0x8000;
                      iVar12 = iVar12 + ((int)((ulonglong)lVar5 >> 0x20) << 0x10 |
                                        (uint)lVar5 >> 0x10);
                      uVar31 = uVar31 + 1;
                    } while (uVar31 < *puVar23);
                    local_3e8c = local_3e8c + uVar31 + -1;
                    piVar36 = piVar14;
                  }
                  local_3e98 = (uint *)((int)puVar29 + 1);
                  FUN_0046343f((int)piVar14,(uint)puVar29,iVar12);
                  iVar30 = iVar30 + 1;
                  puVar29 = local_3e98;
                } while (iVar30 != local_3ea0);
                FUN_00463629((int)piVar14,uVar13 - local_3ea0);
                local_3e9c = 0;
                goto LAB_0045fe9a;
              }
              break;
            case 0x13:
              if ((uVar13 != 1) || (puVar23 = *(uint **)(iVar37 + 0x284), puVar23 == (uint *)0x0))
              break;
              uVar13 = *(uint *)(iVar37 + 0x28c);
              uVar15 = FUN_00462a96((int)piVar14);
              uVar31 = *puVar23;
              if (uVar13 < uVar31) break;
              iVar30 = 0x12;
              piVar36 = piVar14;
              if (uVar13 - uVar31 < uVar15) goto LAB_00461ae4;
              local_3e9c = 0;
              local_3ea0 = 0;
              uVar24 = uVar20;
              if (*(int *)(iVar37 + 0x288) != 0) goto code_r0x00461690;
              goto LAB_0045fe9a;
            case 0x14:
              iVar30 = 0x12;
              if (uVar13 == 2) {
                iVar30 = FUN_00462d12((int)piVar14);
                iVar12 = FUN_00462d12((int)piVar14);
                uVar31 = iVar30 + iVar12;
                goto LAB_00461a1c;
              }
              goto LAB_00461ae4;
            case 0x15:
              iVar30 = 0x12;
              if (uVar13 == 2) {
                iVar30 = FUN_00462d12((int)piVar14);
                iVar12 = FUN_00462d12((int)piVar14);
                uVar31 = iVar12 - iVar30;
                goto LAB_00461a1c;
              }
              goto LAB_00461ae4;
            case 0x16:
              iVar30 = 0x12;
              if (uVar13 == 2) {
                iVar30 = FUN_00462d12((int)piVar14);
                iVar12 = FUN_00462d12((int)piVar14);
                iVar16 = (int)((longlong)iVar12 * (longlong)iVar30 >> 0x3f);
                lVar5 = (longlong)iVar12 * (longlong)iVar30 + CONCAT44(iVar16,iVar16) + 0x8000;
                uVar31 = (int)((ulonglong)lVar5 >> 0x20) << 0x10 | (uint)lVar5 >> 0x10;
                goto LAB_00461a1c;
              }
              goto LAB_00461ae4;
            case 0x17:
              if (uVar13 == 2) {
                uVar13 = FUN_00462d12((int)piVar14);
                uVar31 = FUN_00462d12((int)piVar14);
                iVar30 = 0x12;
                if (uVar13 != 0) {
                  piVar14 = piVar36;
                  uVar31 = FUN_0041eaa0(uVar31,uVar13);
                  piVar36 = piVar14;
                  goto LAB_00461a1c;
                }
                goto LAB_00461ae4;
              }
              break;
            case 0x18:
              if ((uVar13 == 2) && (*(int *)(iVar37 + 0x284) != 0)) {
                uVar13 = FUN_00462a96((int)piVar14);
                iVar30 = 0x12;
                piVar36 = piVar14;
                if (*(uint *)(iVar37 + 0x28c) <= uVar13) goto LAB_00461ae4;
                iVar30 = FUN_00462d12((int)piVar14);
                *(int *)(*(int *)(iVar37 + 0x288) + uVar13 * 4) = iVar30;
                goto LAB_0045fe92;
              }
              break;
            case 0x19:
              if ((uVar13 == 1) && (*(int *)(iVar37 + 0x284) != 0)) {
                uVar13 = FUN_00462a96((int)piVar14);
                iVar30 = 0x12;
                piVar36 = piVar14;
                if (uVar13 < *(uint *)(iVar37 + 0x28c)) {
                  uVar31 = *(uint *)(*(int *)(iVar37 + 0x288) + uVar13 * 4);
                  goto LAB_00461a1c;
                }
                goto LAB_00461ae4;
              }
              break;
            case 0x1b:
              iVar30 = 0x12;
              if (uVar13 == 4) {
                piVar36 = piVar14;
                iVar12 = FUN_00462d12((int)piVar14);
                iVar16 = FUN_00462d12((int)piVar14);
                iVar30 = FUN_00462d12((int)piVar14);
                iVar17 = FUN_00462d12((int)piVar14);
                if (iVar16 <= iVar12) {
                  iVar30 = iVar17;
                }
                FUN_004635f0((int)piVar14,iVar30);
                piVar14 = piVar36;
                goto LAB_00461a2b;
              }
              goto LAB_00461ae4;
            case 0x1c:
              iVar30 = 0x12;
              if (uVar13 != 0) goto LAB_00461ae4;
              iVar30 = *(int *)(iVar37 + 0x218);
              uVar13 = *(uint *)(iVar30 + 0x284);
              uVar31 = (uVar13 & 0xffff) + 1;
              uVar13 = FUN_0045e9fd(uVar13);
              *(uint *)(iVar30 + 0x284) = uVar13;
              piVar36 = piVar14;
LAB_00461a1c:
              FUN_004635f0((int)piVar14,uVar31);
              piVar14 = piVar36;
LAB_00461a2b:
              local_3e9c = 0;
              local_3ea0 = 1;
              uVar24 = uVar20;
              piVar36 = piVar14;
              goto LAB_0045fe9a;
            }
LAB_00461adf:
            iVar30 = 0x12;
            piVar36 = piVar14;
            goto LAB_00461ae4;
          }
          goto LAB_0045fe9a;
        case 0x11:
          if (cVar3 == '\0') goto LAB_0045fe9a;
          if (0 < local_3ea0) {
            local_3ea0 = local_3ea0 + -1;
            goto LAB_0045fe9a;
          }
          iVar30 = 0x12;
          if (local_3e9c == 0) goto LAB_00461ae4;
          iVar30 = local_3e9c + 0x1f;
          local_3e9c = local_3e9c - 1;
          uVar13 = local_a0[iVar30];
          break;
        case 0x12:
          FUN_00462d12((int)piVar22);
          piVar36 = piVar22;
          goto LAB_0045fe9a;
        case 0x14:
          uVar13 = FUN_00462a96((int)piVar22);
          uVar31 = FUN_00462d12((int)piVar22);
          if (uVar13 < 0x20) {
            local_a0[uVar13] = uVar31;
          }
          goto LAB_0045fe9a;
        case 0x15:
          uVar13 = FUN_00462a96((int)piVar22);
          piVar36 = piVar22;
          if (0x1f < uVar13) goto LAB_0045fe9a;
          uVar13 = local_a0[uVar13];
          break;
        case 0x16:
          iVar12 = FUN_00462d12((int)piVar22);
          iVar16 = FUN_00462d12((int)piVar22);
          iVar30 = FUN_00462d12((int)piVar22);
          iVar17 = FUN_00462d12((int)piVar22);
          if (iVar16 <= iVar12) {
            iVar30 = iVar17;
          }
          goto LAB_004610a3;
        case 0x17:
          iVar30 = *(int *)(iVar37 + 0x218);
          uVar13 = *(uint *)(iVar30 + 0x284);
          uVar31 = FUN_0045e9fd(uVar13);
          *(uint *)(iVar30 + 0x284) = uVar31;
          uVar13 = (uVar13 & 0xffff) + 1;
          piVar36 = piVar22;
          break;
        case 0x18:
          iVar30 = FUN_00462d12((int)piVar22);
          iVar12 = FUN_00462d12((int)piVar22);
          iVar16 = (int)((longlong)iVar12 * (longlong)iVar30 >> 0x3f);
          lVar5 = (longlong)iVar12 * (longlong)iVar30 + CONCAT44(iVar16,iVar16) + 0x8000;
          uVar13 = (int)((ulonglong)lVar5 >> 0x20) << 0x10 | (uint)lVar5 >> 0x10;
          break;
        case 0x1a:
          uVar13 = FUN_00462d12((int)piVar22);
          if ((int)uVar13 < 1) {
            uVar20 = 0;
          }
          else {
            uVar34 = FUN_004217b5(extraout_ECX,extraout_EDX,uVar13);
            uVar20 = (undefined4)uVar34;
          }
          FUN_004635f0((int)piVar22,uVar20);
          piVar36 = piVar22;
          goto LAB_0045fe9a;
        case 0x1b:
          uVar13 = FUN_00462d12((int)piVar22);
          FUN_004635f0((int)piVar22,uVar13);
          break;
        case 0x1c:
          iVar12 = FUN_00462d12((int)piVar22);
          iVar30 = FUN_00462d12((int)piVar22);
          FUN_004635f0((int)piVar22,iVar12);
LAB_004610a3:
          FUN_004635f0((int)piVar22,iVar30);
          goto LAB_0045fe9a;
        case 0x1d:
          uVar13 = FUN_00462a96((int)piVar22);
          uVar31 = FUN_00462cbd((int)piVar22);
          if (uVar31 != 0) {
            if ((int)uVar13 < 0) {
              uVar13 = 0xffffffff;
LAB_004614ab:
              uVar15 = uVar31 + uVar13;
            }
            else {
              uVar15 = 0;
              if (uVar13 < uVar31) {
                uVar13 = ~uVar13;
                goto LAB_004614ab;
              }
            }
            piVar14 = piVar36;
            iVar30 = FUN_00462cc7((int)piVar36,uVar15);
            FUN_004635f0((int)piVar36,iVar30);
            piVar36 = piVar14;
          }
          goto LAB_0045fe9a;
        case 0x1e:
          uVar13 = FUN_00462a96((int)piVar22);
          uVar31 = FUN_00462a96((int)piVar22);
          FUN_00463650((int)piVar22,uVar31,uVar13);
          goto LAB_0045fe9a;
        case 0x21:
          if (cVar7 != '\0' && cVar3 != '\0') {
            param_7 = (uint *)FUN_00462d12((int)piVar22);
            param_6 = (uint *)FUN_00462d12((int)piVar22);
            *(undefined4 *)(iVar37 + 0x1d4) = 0;
            piVar22 = piVar14;
            goto LAB_00460a58;
          }
          goto switchD_0045ff9b_caseD_0;
        }
        FUN_004635f0((int)piVar22,uVar13);
        goto LAB_0045fe9a;
      case 0xd:
        if (cVar3 != '\0') {
          iVar12 = FUN_00462d12((int)piVar22);
          **(int **)(iVar37 + 0x24) = iVar12;
          *(undefined4 *)(*(int *)(iVar37 + 0x24) + 4) = 0;
          iVar12 = iVar37;
          iVar16 = FUN_00462d12((int)piVar22);
          **(int **)(iVar37 + 0x20) = **(int **)(iVar37 + 0x20) + iVar16;
          local_3e2d = '\x01';
          if (*(char *)(iVar37 + 0x2f) != '\0') goto LAB_00461ae4;
          piVar22 = piVar36;
          iVar37 = iVar12;
          if (cVar7 != '\0') {
            param_6 = (uint *)((int)param_6 + iVar16);
            goto LAB_00460a58;
          }
LAB_004614fe:
          local_3e2d = '\x01';
          uVar24 = 0;
        }
        break;
      case 0xe:
        if ((cVar3 != '\0') && (cVar7 == '\0')) {
          FUN_00462d54(local_2ed8,(int)param_6,(int)param_7);
          FUN_00463621((int)local_3e68);
          FUN_00463621((int)local_3e4c);
          FUN_00462854(&local_d4,piVar1);
          local_d0[0] = 0x100;
          if (0 < (int)local_3e84) {
            local_3e84 = local_3e84 + 1;
            do {
              local_3e88 = (uint *)FUN_004631af((int)local_3e2c,local_3e84 - 2);
              local_3e84 = local_3e84 - 1;
            } while (1 < local_3e84);
            local_3e84 = 0;
          }
          local_3e88[3] = local_3e88[1];
          goto LAB_00460a58;
        }
        iVar19 = FUN_00462cbd((int)piVar22);
        iVar25 = iVar37;
        if (((iVar19 == 1) || (iVar19 == 5)) && (local_3e2d == '\0')) {
          iVar19 = FUN_00462cc7((int)piVar22,0);
          *param_8 = iVar19 + iVar11;
        }
        piVar36 = piVar22;
        if (((*(char *)(iVar37 + 0x224) == '\0') &&
            (FUN_00463144(local_2ed8), piVar36 = piVar22, *(char *)((int)param_1 + 9) == '\0')) &&
           (((char)param_1[2] == '\0' &&
            ((uVar13 = FUN_00462cbd((int)piVar22), piVar36 = piVar22, 1 < uVar13 &&
             (iVar30 = 0x12, param_5 == '\0')))))) {
          uVar13 = FUN_00462a96((int)piVar22);
          uVar31 = FUN_00462a96((int)piVar22);
          puVar23 = (uint *)FUN_00462d12((int)piVar22);
          puVar29 = (uint *)FUN_00462d12((int)piVar22);
          iVar30 = FUN_00463738(iVar25,uVar13,local_3df4);
          if (iVar30 == 0) {
            FUN_0045fc9b(param_1,local_3df4,param_3,param_4,'\x01',puVar29,puVar23,local_3e10);
            FUN_004637d1((int)local_3e98,(int)auStack_3ddc);
            iVar30 = FUN_00463738((int)local_3e98,uVar31,auStack_3ddc);
            if (iVar30 == 0) {
              iVar30 = 0;
              FUN_0045fc9b(piVar1,auStack_3ddc,in_stack_0000001c,in_stack_00000020,'\x01',
                           (uint *)0x0,(uint *)0x0,&iStack_3df8);
              FUN_004637d1((int)local_3e80,(int)auStack_3ddc);
              piVar36 = in_stack_0000001c;
            }
          }
        }
        goto LAB_00461ae4;
      case 0xf:
        if (*(char *)((int)param_1 + 9) != '\0') {
          iVar30 = 0x12;
          if (*(char *)((int)param_1 + 0x5d) != '\0') goto LAB_00461ae4;
          iVar30 = FUN_00462a96((int)piVar22);
          if (-1 < iVar30) {
            param_1[0x1e] = iVar30;
          }
        }
        break;
      case 0x10:
        if (*(char *)((int)param_1 + 9) != '\0') {
          iVar30 = 0x12;
          if ((param_1[0x18] == 0) ||
             ((cVar7 = (**(code **)(param_1[0x89] + 0xc))
                                 (piVar2,param_1[0x1e],param_1[0x1f],param_1[0x20]), cVar7 != '\0'
              && (iVar30 = (**(code **)(param_1[0x89] + 0x10))
                                     (piVar2,param_1[0x1e],param_1[0x1f],param_1[0x20]),
                 piVar36 = piVar22, iVar30 != 0)))) goto LAB_00461ae4;
          piVar36 = piVar22;
          iVar30 = FUN_00462a96((int)piVar22);
          iVar30 = FUN_00462ac8((int)piVar2,(int)piVar22,iVar30);
          if (iVar30 != 0) goto LAB_00461ae4;
          *(undefined1 *)((int)param_1 + 0x5d) = 1;
          goto LAB_0045fe9a;
        }
        break;
      case 0x13:
      case 0x14:
        uVar13 = FUN_00462cbd((int)piVar22);
        if ((uVar13 < 2) || (cVar7 = FUN_00462bbb((int)&local_d4), cVar7 == '\0')) {
          FUN_00462bbf((int)param_1,(int)piVar22,local_3e68,param_8,&local_3e2d,0);
          piVar36 = piVar22;
          if (*(char *)(iVar37 + 0x224) != '\0') goto LAB_00461ae4;
          if (bVar6 == 0x13) {
            iVar30 = FUN_0046381a((int)local_3e4c);
            iVar12 = FUN_0046381a((int)local_3e68);
            FUN_004637e9(&local_d4,local_3e88,iVar12 + iVar30);
          }
          else {
            FUN_0046381e((int *)local_3df4,(int)param_1,(int)local_1098,(int)local_17c,iVar19);
            FUN_00462854(local_3e10,piVar1);
            iVar30 = FUN_0046381a((int)local_3e4c);
            iVar12 = FUN_0046381a((int)local_3e68);
            FUN_004637e9(local_3e10,local_3e88,iVar12 + iVar30);
            FUN_0046385b((int *)local_3df4,(int)local_3e4c,(int)local_3e68,local_3e10,0,'\0');
          }
        }
        break;
      case 0x15:
        uVar13 = FUN_00462cbd((int)piVar22);
        piVar36 = piVar22;
        if ((2 < uVar13) && (local_3e2d == '\0')) {
          iVar12 = FUN_00462cc7((int)piVar22,0);
          *param_8 = iVar12 + iVar11;
          piVar36 = piVar22;
        }
        puVar23 = param_7;
        local_3e2d = '\x01';
        if (*(char *)(iVar37 + 0x224) != '\0') goto LAB_00461ae4;
        piVar22 = piVar36;
        iVar30 = FUN_00462d12((int)piVar36);
        puVar29 = param_6;
        param_7 = (uint *)(iVar30 + (int)puVar23);
        iVar12 = FUN_00462d12((int)piVar36);
        param_6 = (uint *)(iVar12 + (int)puVar29);
        if (*(int *)(iVar37 + 0x1d4) == 0) {
          FUN_00462d54(local_2ed8,(int)param_6,iVar30 + (int)puVar23);
        }
        break;
      case 0x16:
        uVar13 = FUN_00462cbd((int)piVar22);
        if ((1 < uVar13) && (local_3e2d == '\0')) {
          iVar12 = FUN_00462cc7((int)piVar22,0);
          *param_8 = iVar12 + iVar11;
        }
        puVar23 = param_6;
        local_3e2d = '\x01';
        piVar36 = piVar22;
        if (*(char *)(iVar37 + 0x224) != '\0') goto LAB_00461ae4;
        iVar30 = FUN_00462d12((int)piVar22);
        param_6 = (uint *)(iVar30 + (int)puVar23);
        iVar30 = *(int *)(iVar37 + 0x1d4);
joined_r0x0046058e:
        if (iVar30 == 0) {
          FUN_00462d54(local_2ed8,(int)param_6,(int)param_7);
        }
        break;
      case 0x19:
        local_3e98 = (uint *)FUN_00462cbd((int)piVar22);
        puVar21 = (uint *)0x0;
        puVar23 = param_6;
        puVar29 = param_7;
        if ((uint *)0x6 < local_3e98) {
          puVar32 = (uint *)0x0;
          piVar14 = piVar22;
          do {
            piVar22 = piVar14;
            iVar30 = FUN_00462cc7((int)piVar14,(uint)puVar32);
            puVar23 = (uint *)((int)puVar23 + iVar30);
            iVar30 = FUN_00462cc7((int)piVar14,(int)puVar32 + 1);
            puVar29 = (uint *)((int)puVar29 + iVar30);
            FUN_00462dda(local_2ed8,(int)puVar23,(int)puVar29);
            puVar21 = (uint *)((int)puVar32 + 2);
            puVar26 = puVar32 + 2;
            puVar32 = puVar21;
            piVar14 = piVar22;
          } while (puVar26 < local_3e98);
        }
        for (; piVar36 = piVar22, puVar21 < local_3e98; puVar21 = (uint *)((int)puVar21 + 6)) {
          piVar14 = piVar22;
          iVar30 = FUN_00462cc7((int)piVar22,(uint)puVar21);
          iVar12 = FUN_00462cc7((int)piVar22,(int)puVar21 + 1);
          iVar16 = FUN_00462cc7((int)piVar22,(int)puVar21 + 2);
          iVar16 = iVar16 + (int)puVar23 + iVar30;
          iVar17 = FUN_00462cc7((int)piVar22,(int)puVar21 + 3);
          iVar17 = iVar17 + iVar12 + (int)puVar29;
          iVar18 = FUN_00462cc7((int)piVar22,(uint)(puVar21 + 1));
          puVar32 = (uint *)(iVar18 + iVar16);
          iVar18 = FUN_00462cc7((int)piVar22,(int)puVar21 + 5);
          puVar26 = (uint *)(iVar18 + iVar17);
          FUN_00462f5d(local_2ed8,(int)puVar23 + iVar30,iVar12 + (int)puVar29,iVar16,iVar17,
                       (int)puVar32,(int)puVar26);
          puVar23 = puVar32;
          puVar29 = puVar26;
          piVar22 = piVar14;
        }
        goto LAB_00460c88;
      case 0x1a:
        uVar31 = FUN_00462cbd((int)piVar22);
        puVar21 = param_6;
        puVar29 = param_7;
        for (uVar13 = uVar31 & 2; puVar23 = puVar21, piVar36 = piVar22,
            uVar13 < (uVar31 & 0xfffffffd); uVar13 = uVar13 + 4) {
          piVar14 = piVar22;
          if ((uVar31 - uVar13 & 1) != 0) {
            iVar30 = FUN_00462cc7((int)piVar22,uVar13);
            puVar23 = (uint *)((int)puVar23 + iVar30);
            uVar13 = uVar13 + 1;
          }
          iVar30 = FUN_00462cc7((int)piVar22,uVar13);
          iVar30 = (int)puVar29 + iVar30;
          iVar12 = FUN_00462cc7((int)piVar22,uVar13 + 1);
          puVar21 = (uint *)(iVar12 + (int)puVar23);
          iVar12 = FUN_00462cc7((int)piVar22,uVar13 + 2);
          iVar12 = iVar12 + iVar30;
          iVar16 = FUN_00462cc7((int)piVar22,uVar13 + 3);
          puVar29 = (uint *)(iVar16 + iVar12);
          FUN_00462f5d(local_2ed8,(int)puVar23,iVar30,(int)puVar21,iVar12,(int)puVar21,(int)puVar29)
          ;
          piVar22 = piVar14;
          local_3e98 = puVar23;
        }
        goto LAB_00460c88;
      case 0x1b:
        uVar31 = FUN_00462cbd((int)piVar22);
        puVar23 = param_6;
        puVar29 = param_7;
        for (uVar13 = uVar31 & 2; piVar36 = piVar22, uVar13 < (uVar31 & 0xfffffffd);
            uVar13 = uVar13 + 4) {
          piVar14 = piVar22;
          if ((uVar31 - uVar13 & 1) != 0) {
            iVar30 = FUN_00462cc7((int)piVar22,uVar13);
            puVar29 = (uint *)((int)puVar29 + iVar30);
            uVar13 = uVar13 + 1;
          }
          iVar30 = FUN_00462cc7((int)piVar22,uVar13);
          iVar30 = (int)puVar23 + iVar30;
          iVar12 = FUN_00462cc7((int)piVar22,uVar13 + 1);
          local_3e98 = (uint *)(iVar12 + iVar30);
          iVar12 = FUN_00462cc7((int)piVar22,uVar13 + 2);
          puVar21 = (uint *)(iVar12 + (int)puVar29);
          iVar12 = FUN_00462cc7((int)piVar22,uVar13 + 3);
          puVar23 = (uint *)(iVar12 + (int)local_3e98);
          FUN_00462f5d(local_2ed8,iVar30,(int)puVar29,(int)local_3e98,(int)puVar21,(int)puVar23,
                       (int)puVar21);
          puVar29 = puVar21;
          piVar22 = piVar14;
        }
        goto LAB_00460c88;
      case 0x1c:
        bVar6 = FUN_00462a6e(local_3e88);
        uVar8 = FUN_00462a6e(local_3e88);
        uVar31 = (int)((uint)bVar6 << 0x18 | CONCAT31(extraout_var_02,uVar8) << 0x10) >> 0x10;
        piVar36 = piVar22;
        goto LAB_00460a83;
      case 0x1e:
      case 0x1f:
        uVar13 = FUN_00462cbd((int)piVar22);
        uVar31 = uVar13 & 0xfffffffd;
        uVar13 = uVar13 & 2;
        puVar23 = param_6;
        puVar29 = param_7;
        piVar36 = piVar22;
        if (uVar13 < uVar31) {
          local_3e98 = param_6;
          bVar33 = bVar6 == 0x1f;
          piVar14 = piVar22;
          do {
            piVar22 = piVar14;
            iVar30 = FUN_00462cc7((int)piVar14,uVar13);
            uVar15 = uVar13 + 1;
            iVar12 = FUN_00462cc7((int)piVar14,uVar15);
            iVar16 = FUN_00462cc7((int)piVar14,uVar13 + 2);
            iVar17 = FUN_00462cc7((int)piVar14,uVar13 + 3);
            if (bVar33) {
              local_3e98 = (uint *)((int)local_3e98 + iVar30);
              puVar32 = (uint *)(iVar12 + (int)local_3e98);
              puVar26 = (uint *)(iVar16 + (int)puVar29);
              puVar23 = puVar32;
              puVar21 = puVar29;
              if (uVar31 - uVar13 == 5) {
                iVar30 = FUN_00462cc7((int)piVar22,uVar13 + 4);
                uVar13 = uVar15;
                puVar23 = (uint *)(iVar30 + (int)puVar32);
                puVar21 = puVar29;
              }
              bVar33 = false;
              puVar29 = (uint *)(iVar17 + (int)puVar26);
            }
            else {
              puVar21 = (uint *)((int)puVar29 + iVar30);
              puVar32 = (uint *)(iVar12 + (int)local_3e98);
              puVar26 = (uint *)(iVar16 + (int)puVar21);
              puVar23 = (uint *)(iVar17 + (int)puVar32);
              bVar33 = true;
              puVar29 = puVar26;
              if (uVar31 - uVar13 == 5) {
                iVar30 = FUN_00462cc7((int)piVar22,uVar13 + 4);
                puVar29 = (uint *)(iVar30 + (int)puVar26);
                uVar13 = uVar15;
              }
            }
            FUN_00462f5d(local_2ed8,(int)local_3e98,(int)puVar21,(int)puVar32,(int)puVar26,
                         (int)puVar23,(int)puVar29);
            uVar13 = uVar13 + 4;
            piVar14 = piVar22;
            piVar36 = piVar22;
            local_3e98 = puVar23;
          } while (uVar13 < uVar31);
        }
LAB_00460c88:
        param_7 = puVar29;
        param_6 = puVar23;
        FUN_00462a8f((int)piVar22);
        goto LAB_0045fe9a;
      default:
        if (bVar6 < 0xf7) {
          uVar31 = uVar31 - 0x8b;
          goto LAB_00460a83;
        }
        uVar8 = FUN_00462a6e(local_3e88);
        uVar13 = CONCAT31(extraout_var_03,uVar8);
        puVar23 = local_3e80;
        if (bVar6 < 0xfb) {
          uVar13 = (uVar31 * 0x100 + uVar13) - 0xf694;
        }
        else if (bVar6 == 0xff) {
          uVar8 = FUN_00462a6e(local_3e88);
          uVar9 = FUN_00462a6e(local_3e88);
          uVar10 = FUN_00462a6e(local_3e88);
          uVar13 = CONCAT31(extraout_var_05,uVar9) << 8 |
                   CONCAT31(extraout_var_04,uVar8) << 0x10 | uVar13 << 0x18 |
                   CONCAT31(extraout_var_06,uVar10);
          if ((char)param_1[2] == '\0') {
            FUN_004635f0((int)piVar22,uVar13);
            piVar36 = piVar22;
            goto LAB_0045fe9a;
          }
          puVar23 = (uint *)0x1;
          if ((char)local_3e80 != '\0') {
            puVar23 = local_3e80;
          }
          if (uVar13 + 32000 < 0xfa01) {
            puVar23 = local_3e80;
          }
        }
        else {
          uVar13 = 0xfa94 - (uVar31 << 8 | uVar13);
        }
        local_3e80 = puVar23;
        FUN_00463478((int)piVar22,uVar13);
        piVar36 = piVar22;
        goto LAB_0045fe9a;
      }
switchD_0045ff9b_caseD_0:
      FUN_00462a8f((int)piVar22);
      piVar36 = piVar22;
      goto LAB_0045fe9a;
    }
LAB_0045fe41:
    iVar30 = 0;
    piVar36 = piVar14;
  }
LAB_00461ae4:
  FUN_00461f8a(piVar1,iVar30);
  FUN_00463c44((int)local_2ed8);
  FUN_00463c4f(local_3e68);
  FUN_00463c4f(local_3e4c);
  FUN_00463c4f(local_3e2c);
  FUN_00463c71(piVar36);
  if (DAT_0050e8c0 != (local_14 ^ (uint)&stack0xffffc148)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&stack0xffffc148);
  }
  return;
code_r0x00461690:
  local_3ea0 = 0;
  if ((uint *)puVar23[0x22] != (uint *)0x0) goto LAB_00461a95;
  goto LAB_0045fe9a;
LAB_00461a95:
  FUN_004878c0((uint *)(*(int *)(iVar37 + 0x288) + uVar15 * 4),(uint *)puVar23[0x22],uVar31 << 2);
  goto LAB_0045fe92;
}

