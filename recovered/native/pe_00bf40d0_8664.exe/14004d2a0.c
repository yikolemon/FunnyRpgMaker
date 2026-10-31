/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004d2a0 */

uint FUN_14004d2a0(longlong *param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined1 (*pauVar15) [32];
  char *pcVar16;
  char *pcVar17;
  char cVar18;
  short sVar19;
  undefined2 uVar20;
  int iVar21;
  char cVar22;
  short sVar23;
  uint uVar24;
  uint *puVar25;
  longlong lVar26;
  char *pcVar27;
  ulonglong uVar28;
  undefined1 auStackY_c8 [32];
  char local_80;
  undefined4 *local_60;
  undefined8 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_c8;
  lVar26 = *(longlong *)(*(longlong *)(param_2 + 0x24) + 8);
  lVar10 = FUN_14001f8b9(lVar26,"sfnt");
  uVar7 = 0xb;
  if (lVar10 == 0) goto LAB_14004d36e;
  lVar11 = FUN_14001f8d7(*(longlong **)(param_2 + 0x24),"postscript-cmaps",'\x01');
  uVar12 = FUN_14001f8b9(lVar26,"pshinter");
  lVar13 = FUN_14001f8b9(lVar26,"psaux");
  if (lVar13 == 0) goto LAB_14004d36e;
  *(longlong *)(param_2 + 0xbe) = lVar13;
  lVar13 = FUN_14001f8d7(*(longlong **)(param_2 + 0x24),"cff-load",'\x01');
  uVar14 = FUN_140020a41((longlong)param_1,0);
  uVar7 = (uint)uVar14;
  if ((uint)uVar14 != 0) goto LAB_14004d36e;
  iVar6 = (**(code **)(lVar10 + 8))(param_1,param_2,param_3,param_4);
  if (iVar6 == 0) {
    uVar7 = 2;
    if (param_2[0x3c] != 0x4f54544f) goto LAB_14004d36e;
    if (-1 < (int)param_3) {
      iVar8 = (**(code **)(param_2 + 0xa8))(param_2,0x68656164,param_1,0);
      if (iVar8 == 0) {
        uVar7 = (**(code **)(lVar10 + 0x10))(param_1,param_2,param_3,param_4);
        if (uVar7 != 0) goto LAB_14004d36e;
        cVar18 = '\0';
      }
      else {
        uVar7 = (**(code **)(lVar10 + 0x40))(param_2,param_1);
        cVar18 = '\x01';
        if (((char)uVar7 != -0x72) && ((uVar7 & 0xff) != 0)) goto LAB_14004d36e;
      }
      local_4c = (**(code **)(param_2 + 0xa8))(param_2,0x43464632,param_1,0);
      if (local_4c != 0) {
        uVar7 = local_4c;
        if (((char)local_4c != -0x72) ||
           (uVar7 = (**(code **)(param_2 + 0xa8))(param_2,0x43464620,param_1,0), local_4c = uVar7,
           uVar7 != 0)) goto LAB_14004d36e;
        goto LAB_14004d3e5;
      }
      *(undefined1 *)(param_2 + 0x100) = 1;
      bVar5 = true;
      local_80 = '\x01';
      goto LAB_14004d3f7;
    }
LAB_14004d627:
    uVar7 = 0;
    goto LAB_14004d36e;
  }
  uVar14 = FUN_140020a41((longlong)param_1,0);
  uVar7 = (uint)uVar14;
  if ((uint)uVar14 != 0) goto LAB_14004d36e;
  local_4c = 0;
  cVar18 = '\x01';
LAB_14004d3e5:
  bVar5 = false;
  local_80 = '\0';
LAB_14004d3f7:
  lVar10 = *(longlong *)(param_2 + 0x26);
  pauVar15 = FUN_14001c423(lVar10,0x1138,(int *)&local_4c);
  uVar7 = local_4c;
  if (local_4c != 0) goto LAB_14004d36e;
  *(undefined1 (**) [32])(param_2 + 0xf8) = pauVar15;
  local_4c = FUN_140051083(lVar26,param_1,param_3,pauVar15,(longlong)param_2,cVar18,local_80);
  uVar7 = local_4c;
  if (local_4c != 0) goto LAB_14004d36e;
  if ((int)param_3 < 0) {
    *param_2 = *(undefined4 *)(*pauVar15 + 0x1c);
    goto LAB_14004d627;
  }
  *(undefined8 *)(pauVar15[0x86] + 0x10) = uVar12;
  *(longlong *)(pauVar15[0x86] + 0x18) = lVar11;
  *(longlong *)pauVar15[0x87] = lVar13;
  param_2[1] = param_3 & 0xffff;
  param_2[4] = *(undefined4 *)pauVar15[1];
  uVar7 = 0xb;
  if ((lVar11 == 0 && *(int *)pauVar15[0x33] == 0xffff) ||
     (((*(byte *)((longlong)param_2 + 9) & 1) != 0 &&
      (uVar7 = FUN_140081d9b((longlong)param_2,param_3 >> 0x10), local_4c = uVar7, uVar7 != 0))))
  goto LAB_14004d36e;
  if (pauVar15[0x30][0x1c] == '\0') {
    uVar7 = 1000;
    if (cVar18 == '\0') {
      uVar7 = (uint)*(ushort *)(param_2 + 0x1a);
    }
    *(uint *)pauVar15[0x31] = uVar7;
  }
  uVar7 = *(uint *)(pauVar15[0x30] + 0x18);
  if (uVar7 == 0) {
    uVar7 = *(uint *)(pauVar15[0x30] + 0x14);
  }
  uVar24 = -uVar7;
  if ((int)-uVar7 < 0) {
    uVar24 = uVar7;
  }
  if (uVar24 == 0x10000) {
    iVar8 = *(int *)(pauVar15[0x31] + 8);
  }
  else {
    iVar8 = FUN_14001ecff(*(uint *)pauVar15[0x31],uVar24);
    *(int *)pauVar15[0x31] = iVar8;
    iVar8 = FUN_14001ecff(*(uint *)(pauVar15[0x30] + 0xc),uVar24);
    *(int *)(pauVar15[0x30] + 0xc) = iVar8;
    iVar8 = FUN_14001ecff(*(uint *)(pauVar15[0x30] + 0x14),uVar24);
    *(int *)(pauVar15[0x30] + 0x14) = iVar8;
    iVar8 = FUN_14001ecff(*(uint *)(pauVar15[0x30] + 0x10),uVar24);
    *(int *)(pauVar15[0x30] + 0x10) = iVar8;
    iVar8 = FUN_14001ecff(*(uint *)(pauVar15[0x30] + 0x18),uVar24);
    *(int *)(pauVar15[0x30] + 0x18) = iVar8;
    iVar8 = FUN_14001ecff(*(uint *)(pauVar15[0x31] + 4),uVar24);
    *(int *)(pauVar15[0x31] + 4) = iVar8;
    iVar8 = FUN_14001ecff(*(uint *)(pauVar15[0x31] + 8),uVar24);
  }
  *(int *)(pauVar15[0x31] + 4) = (int)*(short *)(pauVar15[0x31] + 6);
  *(int *)(pauVar15[0x31] + 8) = iVar8 >> 0x10;
  uVar28 = (ulonglong)*(uint *)(pauVar15[0x45] + 8);
  if (uVar28 != 0) {
    puVar25 = (uint *)(pauVar15[0x30] + 0xc);
    do {
      lVar26 = *(longlong *)(pauVar15[0x45] + uVar28 * 8 + 8);
      if (*(char *)(lVar26 + 0x3c) == '\0') {
        uVar12 = *(undefined8 *)(pauVar15[0x30] + 0x14);
        *(undefined8 *)(lVar26 + 0x2c) = *(undefined8 *)puVar25;
        *(undefined8 *)(lVar26 + 0x34) = uVar12;
        *(undefined8 *)(lVar26 + 0x44) = *(undefined8 *)(pauVar15[0x31] + 4);
        iVar8 = *(int *)pauVar15[0x31];
LAB_14004d774:
        *(int *)(lVar26 + 0x40) = iVar8;
      }
      else if (pauVar15[0x30][0x1c] != '\0') {
        uVar7 = *(uint *)pauVar15[0x31];
        uVar24 = 1;
        if (((1 < uVar7) && (uVar4 = *(uint *)(lVar26 + 0x40), 1 < uVar4)) &&
           (uVar24 = uVar4, uVar7 < uVar4)) {
          uVar24 = uVar7;
        }
        FUN_140021abe(puVar25,(uint *)(lVar26 + 0x2c),uVar24);
        FUN_140021c62((uint *)(lVar26 + 0x44),puVar25,uVar24);
        iVar8 = FUN_14001de7c(*(uint *)(lVar26 + 0x40),*(uint *)pauVar15[0x31],uVar24);
        goto LAB_14004d774;
      }
      uVar7 = *(uint *)(lVar26 + 0x38);
      if (uVar7 == 0) {
        uVar7 = *(uint *)(lVar26 + 0x34);
      }
      uVar24 = -uVar7;
      if ((int)-uVar7 < 0) {
        uVar24 = uVar7;
      }
      if (uVar24 == 0x10000) {
        iVar8 = *(int *)(lVar26 + 0x48);
      }
      else {
        iVar8 = FUN_14001ecff(*(uint *)(lVar26 + 0x40),uVar24);
        *(int *)(lVar26 + 0x40) = iVar8;
        iVar8 = FUN_14001ecff(*(uint *)(lVar26 + 0x2c),uVar24);
        *(int *)(lVar26 + 0x2c) = iVar8;
        iVar8 = FUN_14001ecff(*(uint *)(lVar26 + 0x34),uVar24);
        *(int *)(lVar26 + 0x34) = iVar8;
        iVar8 = FUN_14001ecff(*(uint *)(lVar26 + 0x30),uVar24);
        *(int *)(lVar26 + 0x30) = iVar8;
        iVar8 = FUN_14001ecff(*(uint *)(lVar26 + 0x38),uVar24);
        *(int *)(lVar26 + 0x38) = iVar8;
        iVar8 = FUN_14001ecff(*(uint *)(lVar26 + 0x44),uVar24);
        *(int *)(lVar26 + 0x44) = iVar8;
        iVar8 = FUN_14001ecff(*(uint *)(lVar26 + 0x48),uVar24);
      }
      uVar28 = uVar28 - 1;
      *(int *)(lVar26 + 0x44) = (int)*(short *)(lVar26 + 0x46);
      *(int *)(lVar26 + 0x48) = iVar8 >> 0x10;
    } while (uVar28 != 0);
  }
  if (cVar18 != '\0') {
    *param_2 = *(undefined4 *)(*pauVar15 + 0x1c);
    if (*(int *)pauVar15[0x33] == 0xffff) {
      iVar8 = *(int *)pauVar15[0x28];
    }
    else {
      iVar8 = *(int *)(pauVar15[0x27] + 8) + 1;
    }
    param_2[4] = iVar8;
    param_2[0x16] = (int)*(short *)(pauVar15[0x31] + 0x12);
    sVar3 = *(short *)(pauVar15[0x31] + 0x16);
    param_2[0x17] = (int)sVar3;
    param_2[0x18] = *(int *)(pauVar15[0x31] + 0x18) + 0xffff >> 0x10;
    iVar8 = *(int *)(pauVar15[0x31] + 0x1c) + 0xffff;
    iVar21 = iVar8 >> 0x10;
    param_2[0x19] = iVar21;
    uVar7 = *(uint *)pauVar15[0x31];
    *(short *)(param_2 + 0x1a) = (short)uVar7;
    *(short *)((longlong)param_2 + 0x6a) = (short)((uint)iVar8 >> 0x10);
    sVar23 = (short)((ulonglong)((uVar7 & 0xffff) * 0xc) * 0x1999999a >> 0x20);
    iVar21 = iVar21 - sVar3;
    sVar19 = (short)iVar21;
    if (iVar21 <= sVar23) {
      sVar19 = sVar23;
    }
    *(short *)(param_2 + 0x1b) = sVar3;
    *(short *)((longlong)param_2 + 0x6e) = sVar19;
    *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)pauVar15[0x30];
    *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(pauVar15[0x30] + 2);
    if ((*(uint *)(pauVar15[0x2f] + 0x10) != 0) &&
       (pcVar16 = (char *)FUN_14004e23d((longlong)pauVar15,*(uint *)(pauVar15[0x2f] + 0x10)),
       pcVar16 != (char *)0x0)) {
      uVar12 = FUN_140051726(lVar10,pcVar16);
      *(undefined8 *)(param_2 + 6) = uVar12;
    }
    if (*(longlong *)(param_2 + 6) == 0) {
      pcVar16 = (char *)FUN_14005176a((longlong)pauVar15,param_3 & 0xffff);
      *(char **)(param_2 + 6) = pcVar16;
      if ((pcVar16 != (char *)0x0) && (FUN_140051824(pcVar16), *(longlong *)(param_2 + 6) != 0))
      goto LAB_14004d90b;
      pcVar16 = (char *)FUN_14004e23d((longlong)pauVar15,*(uint *)(pauVar15[0x34] + 8));
      if (pcVar16 != (char *)0x0) {
        uVar12 = FUN_140051726(lVar10,pcVar16);
        *(undefined8 *)(param_2 + 6) = uVar12;
      }
    }
    else {
LAB_14004d90b:
      pcVar17 = (char *)FUN_14004e23d((longlong)pauVar15,*(uint *)(pauVar15[0x2f] + 0xc));
      pcVar16 = *(char **)(param_2 + 6);
      if (pcVar16 != (char *)0x0 && pcVar17 != (char *)0x0) {
        cVar22 = *pcVar17;
        while (cVar22 != '\0') {
          cVar2 = *pcVar16;
          pcVar27 = pcVar16;
          while (cVar22 != cVar2) {
            if ((cVar22 == ' ') || (cVar22 == '-')) goto LAB_14004d95a;
            if ((cVar2 != ' ') && (cVar2 != '-')) {
              if ((cVar2 != '\0') ||
                 (pcVar16 = (char *)FUN_140051726(lVar10,pcVar17), pcVar16 == (char *)0x0))
              goto LAB_14004da04;
              FUN_1400518dc(*(char **)(param_2 + 6),pcVar16);
              goto LAB_14004da16;
            }
            pcVar1 = pcVar27 + 1;
            pcVar27 = pcVar27 + 1;
            cVar2 = *pcVar1;
          }
          pcVar16 = pcVar27 + 1;
LAB_14004d95a:
          pcVar27 = pcVar17 + 1;
          pcVar17 = pcVar17 + 1;
          cVar22 = *pcVar27;
        }
      }
    }
LAB_14004da04:
    pcVar16 = (char *)FUN_140051726(lVar10,"Regular");
LAB_14004da16:
    *(char **)(param_2 + 8) = pcVar16;
    param_2[2] = (uint)(iVar6 == 0) * 8 + (uint)(pauVar15[0x2f][0x18] != '\0') * 4 | param_2[2] |
                 0x811;
    uVar7 = (uint)(*(int *)(pauVar15[0x2f] + 0x1c) != 0);
    pcVar16 = (char *)FUN_14004e23d((longlong)pauVar15,*(uint *)(pauVar15[0x2f] + 0x14));
    if ((pcVar16 != (char *)0x0) &&
       ((iVar6 = strcmp(pcVar16,"Bold"), iVar6 == 0 || (iVar6 = strcmp(pcVar16,"Black"), iVar6 == 0)
        ))) {
      uVar7 = uVar7 | 2;
    }
    if ((((uVar7 & 2) == 0) && (pcVar16 = *(char **)(param_2 + 8), pcVar16 != (char *)0x0)) &&
       ((iVar6 = strncmp(pcVar16,"Bold",4), iVar6 == 0 ||
        (iVar6 = strncmp(pcVar16,"Black",5), iVar6 == 0)))) {
      uVar7 = uVar7 | 2;
    }
    param_2[3] = uVar7;
  }
  iVar6 = *(int *)pauVar15[0x33];
  if (!bVar5 && iVar6 == 0xffff) {
    *(byte *)((longlong)param_2 + 9) = *(byte *)((longlong)param_2 + 9) | 2;
    iVar6 = *(int *)pauVar15[0x33];
  }
  if ((cVar18 != '\0') && (iVar6 != 0xffff)) {
    *(byte *)((longlong)param_2 + 9) = *(byte *)((longlong)param_2 + 9) | 0x10;
  }
  iVar6 = param_2[0xe];
  lVar26 = (longlong)iVar6;
  if (0 < lVar26) {
    lVar10 = 0;
    do {
      lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x10) + lVar10 * 8);
      sVar3 = *(short *)(lVar11 + 0xc);
      if (sVar3 == 3) {
        if (*(short *)(lVar11 + 0xe) == 1) goto LAB_14004dbbc;
      }
      else if (sVar3 == 0) goto LAB_14004dbbc;
      lVar10 = lVar10 + 1;
    } while (lVar26 != lVar10);
  }
  if ((cVar18 == '\0') || (uVar7 = local_4c, *(int *)pauVar15[0x33] == 0xffff)) {
    local_58 = 0x10003756e6963;
    local_60 = param_2;
    uVar7 = FUN_14001f301((uint *)&DAT_1400f5dc0,0,(longlong *)&local_60,(undefined8 *)0x0);
    if ((uVar7 == 0) || (((char)uVar7 == -0x5d || (local_4c = uVar7, (uVar7 & 0xff) == 7)))) {
      local_4c = 0;
      if ((*(longlong *)(param_2 + 0x22) == 0) && (iVar6 != param_2[0xe])) {
        *(undefined8 *)(param_2 + 0x22) =
             *(undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar26 * 8);
      }
LAB_14004dbbc:
      uVar7 = local_4c;
      if (*(int *)(pauVar15[6] + 8) != 0) {
        if (*(int *)(pauVar15[6] + 4) == 0) {
          uVar9 = 0x41444f42;
          uVar20 = 0;
        }
        else if (*(int *)(pauVar15[6] + 4) == 1) {
          uVar9 = 0x41444245;
          uVar20 = 1;
        }
        else {
          uVar9 = 0x41444243;
          uVar20 = 2;
        }
        local_58 = CONCAT26(uVar20,0x700000000);
        local_58 = CONCAT44(local_58._4_4_,uVar9);
        local_60 = param_2;
        uVar7 = FUN_14001f301((uint *)&DAT_1400f5d70,0,(longlong *)&local_60,(undefined8 *)0x0);
        local_4c = uVar7;
      }
    }
  }
LAB_14004d36e:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_c8)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_c8);
}

