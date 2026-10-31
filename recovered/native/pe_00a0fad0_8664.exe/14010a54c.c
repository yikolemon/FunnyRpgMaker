/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010a54c */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14010a54c(undefined8 param_1,int param_2,undefined2 *param_3,longlong *param_4,
                  longlong *param_5,longlong param_6)

{
  short sVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  short *psVar14;
  undefined1 uVar15;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  undefined1 uVar22;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined2 *local_68;
  undefined8 local_60;
  short local_58;
  short sStack_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  ulonglong local_48;
  undefined1 uVar16;
  
  puVar18 = auStack_a8;
  puVar19 = auStack_a8;
  local_48 = DAT_1401c9640 ^ (ulonglong)&local_68;
  if (param_2 == 0) {
    puVar21 = *(ushort **)(param_6 + 0x2a0);
  }
  else if (param_2 == 1) {
    puVar21 = *(ushort **)(param_6 + 0x2a8);
  }
  else {
    puVar21 = *(ushort **)(param_6 + 0x2b0);
  }
  puVar5 = auStack_a8;
  local_68 = param_3;
  local_60 = param_1;
  if (*(int *)(param_6 + 0x158) == 1) goto LAB_14010a77a;
  local_58 = param_3[10] + 0x76c;
  sStack_56 = param_3[8] + 1;
  local_54 = 0;
  local_52 = param_3[6];
  local_50 = param_3[4];
  local_4e = param_3[2];
  local_4c = *param_3;
  local_4a = 0;
  if (param_2 == 2) {
    local_80 = 0;
    local_88 = 0;
    iVar7 = FUN_140122004();
  }
  else {
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    iVar7 = FUN_140121ea8(*(undefined8 *)(param_6 + 0x2b8),0,&local_58,puVar21);
  }
  puVar5 = auStack_a8;
  if ((iVar7 == 0) ||
     (uVar12 = (longlong)iVar7 * 2 + 0x10,
     uVar12 = -(ulonglong)((ulonglong)((longlong)iVar7 * 2) < uVar12) & uVar12, puVar5 = auStack_a8,
     uVar12 == 0)) goto LAB_14010a77a;
  if (uVar12 < 0x401) {
    uVar8 = uVar12 + 0xf;
    if (uVar8 <= uVar12) {
      uVar8 = 0xffffffffffffff0;
    }
    lVar3 = -(uVar8 & 0xfffffffffffffff0);
    puVar18 = auStack_a8 + lVar3;
    puVar9 = (undefined4 *)((longlong)&local_68 + lVar3);
    puVar5 = auStack_a8 + lVar3;
    if (puVar9 == (undefined4 *)0x0) goto LAB_14010a77a;
    *puVar9 = 0xcccc;
LAB_14010a6ca:
    puVar17 = puVar9 + 4;
    puVar19 = puVar18;
  }
  else {
    puVar9 = (undefined4 *)_malloc_base();
    puVar17 = (undefined4 *)0x0;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 0xdddd;
      goto LAB_14010a6ca;
    }
  }
  puVar5 = puVar19;
  if (puVar17 != (undefined4 *)0x0) {
    uVar2 = *(undefined8 *)(param_6 + 0x2b8);
    puVar9 = puVar17;
    if (param_2 == 2) {
      *(int *)(puVar19 + 0x28) = iVar7;
      *(undefined4 **)(puVar19 + 0x20) = puVar17;
      *(undefined8 *)(puVar19 + -8) = 0x14010a6fb;
      iVar7 = FUN_140122004();
    }
    else {
      *(undefined8 *)(puVar19 + 0x30) = 0;
      *(int *)(puVar19 + 0x28) = iVar7;
      *(undefined4 **)(puVar19 + 0x20) = puVar17;
      *(undefined8 *)(puVar19 + -8) = 0x14010a710;
      iVar7 = FUN_140121ea8(uVar2,0,&local_58);
    }
    while ((iVar7 = iVar7 + -1, 0 < iVar7 && (*param_5 != 0))) {
      *(undefined2 *)*param_4 = *(undefined2 *)puVar9;
      *param_4 = *param_4 + 2;
      *param_5 = *param_5 + -1;
      puVar9 = (undefined4 *)((longlong)puVar9 + 2);
    }
    if (puVar17[-4] == 0xdddd) {
      *(undefined8 *)(puVar19 + -8) = 0x14010a74e;
      FUN_1401212e0();
    }
LAB_14010a750:
    uVar12 = local_48 ^ (ulonglong)&local_68;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar19 + -8) = &UNK_14010a75c;
    FUN_1400d3720(uVar12);
  }
LAB_14010a77a:
  puVar19 = puVar5;
  uVar2 = local_60;
  uVar10 = *puVar21;
  do {
    if ((uVar10 == 0) || (uVar12 = 0, *param_5 == 0)) goto LAB_14010a750;
    uVar16 = 0;
    uVar15 = 0;
    uVar8 = uVar12;
    puVar20 = puVar21;
    do {
      puVar20 = puVar20 + 1;
      iVar7 = (int)uVar8;
      uVar11 = iVar7 + 1;
      uVar8 = (ulonglong)uVar11;
      uVar12 = uVar12 + 1;
    } while (*puVar20 == *puVar21);
    uVar10 = *puVar21;
    iVar13 = 100;
    uVar22 = 1;
    if (uVar10 < 0x65) {
      if (uVar10 == 100) {
        if ((uVar11 != 1) && (uVar22 = uVar15, uVar11 != 2)) {
          if (uVar11 == 3) {
            iVar13 = 0x61;
          }
          else {
            if (uVar11 != 4) goto LAB_14010a9e2;
            iVar13 = iVar7 + 0x3e;
          }
        }
        goto LAB_14010aa00;
      }
      if (uVar10 != 0x27) {
        if (uVar10 == 0x41) {
LAB_14010a7f1:
          *(undefined8 *)(puVar19 + -8) = 0x14010a800;
          iVar7 = FUN_1401156b0(puVar21,L"am/pm");
          if (iVar7 == 0) {
            puVar20 = puVar21 + 5;
          }
          else {
            *(undefined8 *)(puVar19 + -8) = 0x14010a86b;
            iVar7 = FUN_1401156b0(puVar21,&DAT_140176148);
            if (iVar7 == 0) {
              puVar20 = puVar21 + 3;
            }
          }
          iVar13 = 0x70;
          uVar22 = uVar15;
        }
        else {
          iVar13 = 0x48;
          if (uVar10 == 0x48) {
            if ((uVar11 != 1) && (uVar22 = uVar15, uVar11 != 2)) goto LAB_14010a9e2;
          }
          else {
            if (uVar10 != 0x4d) {
              if (uVar10 != 0x61) goto LAB_14010a9e2;
              goto LAB_14010a7f1;
            }
            if ((uVar11 == 1) || (uVar22 = uVar16, uVar11 == 2)) {
              iVar13 = 0x6d;
            }
            else if (uVar11 == 3) {
              iVar13 = 0x62;
              uVar22 = uVar15;
            }
            else {
              if (uVar11 != 4) goto LAB_14010a9e2;
              iVar13 = iVar7 + 0x3f;
              uVar22 = uVar15;
            }
          }
        }
        goto LAB_14010aa00;
      }
      if ((uVar11 & 1) == 0) {
        puVar20 = puVar21 + (int)uVar11;
      }
      else {
        puVar20 = puVar21 + uVar12;
        uVar10 = *puVar20;
        if (uVar10 == 0) goto LAB_14010a750;
        do {
          if ((*param_5 == 0) || (puVar20 = puVar20 + 1, uVar10 == 0x27)) break;
          *(ushort *)*param_4 = uVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          uVar10 = *puVar20;
        } while (uVar10 != 0);
      }
    }
    else {
      if (uVar10 == 0x68) {
        if ((uVar11 != 1) && (uVar22 = uVar16, uVar11 != 2)) goto LAB_14010a9e2;
        iVar13 = 0x49;
      }
      else if (uVar10 == 0x6d) {
        if ((uVar11 != 1) && (uVar22 = uVar16, uVar11 != 2)) goto LAB_14010a9e2;
        iVar13 = 0x4d;
      }
      else if (uVar10 == 0x73) {
        if ((uVar11 != 1) && (uVar22 = uVar16, uVar11 != 2)) goto LAB_14010a9e2;
        iVar13 = 0x53;
      }
      else {
        if (uVar10 == 0x74) {
          if (*(int *)(local_68 + 4) < 0xc) {
            psVar14 = *(short **)(param_6 + 0x290);
          }
          else {
            psVar14 = *(short **)(param_6 + 0x298);
          }
          if ((uVar11 == 1) && (*param_5 != 0)) {
            *(short *)*param_4 = *psVar14;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
          }
          else {
            while ((sVar1 = *psVar14, sVar1 != 0 && (*param_5 != 0))) {
              psVar14 = psVar14 + 1;
              *(short *)*param_4 = sVar1;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 + -1;
            }
          }
          goto LAB_14010aa2b;
        }
        if (uVar10 != 0x79) {
LAB_14010a9e2:
          puVar20 = puVar21 + 1;
          *(ushort *)*param_4 = uVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          goto LAB_14010aa2b;
        }
        if (uVar11 == 2) {
          iVar13 = 0x79;
          uVar22 = uVar15;
        }
        else {
          if (uVar11 != 4) goto LAB_14010a9e2;
          iVar13 = iVar7 + 0x56;
          uVar22 = uVar15;
        }
      }
LAB_14010aa00:
      puVar4 = local_68;
      puVar19[0x30] = uVar22;
      *(longlong *)(puVar19 + 0x28) = param_6;
      *(longlong **)(puVar19 + 0x20) = param_5;
      *(undefined8 *)(puVar19 + -8) = 0x14010aa1d;
      cVar6 = FUN_140109670(uVar2,iVar13,puVar4,param_4);
      if (cVar6 == '\0') {
        *(undefined8 *)(puVar19 + -8) = 0x14010aa43;
        puVar9 = (undefined4 *)FUN_140113dd4();
        *puVar9 = 0x16;
        goto LAB_14010a750;
      }
    }
LAB_14010aa2b:
    uVar10 = *puVar20;
    puVar21 = puVar20;
  } while( true );
}

