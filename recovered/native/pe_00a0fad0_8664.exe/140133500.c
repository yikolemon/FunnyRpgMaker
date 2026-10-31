/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140133500 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140133500(longlong *param_1,undefined8 param_2,undefined4 param_3,byte *param_4,int param_5
                  ,byte *param_6,int param_7,UINT param_8)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  BOOL BVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  BYTE *pBVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_88 [2];
  byte *local_80;
  undefined8 local_78;
  _cpinfo local_70;
  ulonglong local_58;
  
  puVar17 = auStack_d8;
  puVar18 = auStack_d8;
  puVar19 = auStack_d8;
  local_58 = DAT_1401c9640 ^ (ulonglong)local_88;
  local_80 = param_6;
  local_88[0] = param_3;
  local_78 = param_2;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_14013386b;
  }
  else {
    sVar11 = __strncnt((char *)param_4,(longlong)param_5);
    param_5 = (int)sVar11;
  }
  if (param_7 < 1) {
    puVar19 = auStack_d8;
    if (param_7 < -1) goto LAB_14013386b;
  }
  else {
    sVar11 = __strncnt((char *)param_6,(longlong)param_7);
    param_7 = (int)sVar11;
  }
  if (param_8 == 0) {
    param_8 = *(UINT *)(*param_1 + 0xc);
  }
  if ((param_5 == 0) || (param_7 == 0)) {
    local_70.LeadByte[10] = '\0';
    local_70.LeadByte[0xb] = '\0';
    local_70._18_2_ = 0;
    local_70.MaxCharSize = 0;
    local_70.DefaultChar[0] = '\0';
    local_70.DefaultChar[1] = '\0';
    local_70.LeadByte[0] = '\0';
    local_70.LeadByte[1] = '\0';
    local_70.LeadByte[2] = '\0';
    local_70.LeadByte[3] = '\0';
    local_70.LeadByte[4] = '\0';
    local_70.LeadByte[5] = '\0';
    local_70.LeadByte[6] = '\0';
    local_70.LeadByte[7] = '\0';
    local_70.LeadByte[8] = '\0';
    local_70.LeadByte[9] = '\0';
    puVar19 = auStack_d8;
    if ((param_5 == param_7) ||
       (((puVar19 = auStack_d8, 1 < param_7 || (puVar19 = auStack_d8, 1 < param_5)) ||
        (BVar7 = GetCPInfo(param_8,&local_70), puVar19 = auStack_d8, BVar7 == 0))))
    goto LAB_14013386b;
    if (0 < param_5) {
      puVar19 = auStack_d8;
      if (1 < local_70.MaxCharSize) {
        pBVar12 = local_70.LeadByte;
        bVar2 = local_70.LeadByte[0];
        while (((puVar19 = auStack_d8, bVar2 != 0 && (puVar19 = auStack_d8, pBVar12[1] != 0)) &&
               ((*param_4 < *pBVar12 || (puVar19 = auStack_d8, pBVar12[1] < *param_4))))) {
          pBVar12 = pBVar12 + 2;
          bVar2 = *pBVar12;
        }
      }
      goto LAB_14013386b;
    }
    if (0 < param_7) {
      puVar19 = auStack_d8;
      if (1 < local_70.MaxCharSize) {
        pBVar12 = local_70.LeadByte;
        bVar2 = local_70.LeadByte[0];
        while (((puVar19 = auStack_d8, bVar2 != 0 && (puVar19 = auStack_d8, pBVar12[1] != 0)) &&
               ((*param_6 < *pBVar12 || (puVar19 = auStack_d8, pBVar12[1] < *param_6))))) {
          pBVar12 = pBVar12 + 2;
          bVar2 = *pBVar12;
        }
      }
      goto LAB_14013386b;
    }
  }
  local_b0 = 0;
  local_b8 = 0;
  iVar8 = FUN_1401213a0(param_8,9,param_4,param_5);
  puVar19 = auStack_d8;
  if ((iVar8 == 0) ||
     (uVar15 = (longlong)iVar8 * 2 + 0x10,
     uVar15 = -(ulonglong)((ulonglong)((longlong)iVar8 * 2) < uVar15) & uVar15, puVar19 = auStack_d8
     , uVar15 == 0)) goto LAB_14013386b;
  if (uVar15 < 0x401) {
    uVar13 = uVar15 + 0xf;
    if (uVar13 <= uVar15) {
      uVar13 = 0xffffffffffffff0;
    }
    lVar3 = -(uVar13 & 0xfffffffffffffff0);
    puVar17 = auStack_d8 + lVar3;
    puVar14 = (undefined4 *)((longlong)local_88 + lVar3);
    puVar19 = auStack_d8 + lVar3;
    if (puVar14 == (undefined4 *)0x0) goto LAB_14013386b;
    *puVar14 = 0xcccc;
LAB_1401336f4:
    puVar16 = puVar14 + 4;
    puVar18 = puVar17;
  }
  else {
    puVar14 = (undefined4 *)_malloc_base(uVar15);
    puVar16 = (undefined4 *)0x0;
    if (puVar14 != (undefined4 *)0x0) {
      *puVar14 = 0xdddd;
      goto LAB_1401336f4;
    }
  }
  puVar19 = puVar18;
  if (puVar16 == (undefined4 *)0x0) goto LAB_14013386b;
  *(int *)(puVar18 + 0x28) = iVar8;
  *(undefined4 **)(puVar18 + 0x20) = puVar16;
  *(undefined8 *)(puVar18 + -8) = 0x14013371e;
  iVar9 = FUN_1401213a0(param_8,1,param_4,param_5);
  if (iVar9 == 0) {
LAB_140133858:
    iVar8 = puVar16[-4];
  }
  else {
    *(undefined4 *)(puVar18 + 0x28) = 0;
    *(undefined8 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x140133744;
    iVar9 = FUN_1401213a0(param_8,9,param_6,param_7);
    if ((iVar9 == 0) ||
       (uVar15 = (longlong)iVar9 * 2 + 0x10,
       uVar15 = -(ulonglong)((ulonglong)((longlong)iVar9 * 2) < uVar15) & uVar15, uVar15 == 0))
    goto LAB_140133858;
    if (uVar15 < 0x401) {
      uVar13 = uVar15 + 0xf;
      if (uVar13 <= uVar15) {
        uVar13 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar18 + -8) = 0x14013378d;
      lVar3 = -(uVar13 & 0xfffffffffffffff0);
      puVar19 = puVar18 + lVar3;
      puVar14 = (undefined4 *)(puVar18 + lVar3 + 0x50);
      if (puVar14 == (undefined4 *)0x0) goto LAB_140133858;
      *puVar14 = 0xcccc;
      puVar18 = puVar18 + lVar3;
LAB_1401337b9:
      puVar20 = puVar14 + 4;
      puVar19 = puVar18;
    }
    else {
      *(undefined8 *)(puVar18 + -8) = 0x1401337ab;
      puVar14 = (undefined4 *)_malloc_base();
      puVar20 = (undefined4 *)0x0;
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = 0xdddd;
        goto LAB_1401337b9;
      }
    }
    pbVar5 = local_80;
    if (puVar20 == (undefined4 *)0x0) goto LAB_140133858;
    piVar1 = puVar20 + -4;
    *(int *)(puVar19 + 0x28) = iVar9;
    *(undefined4 **)(puVar19 + 0x20) = puVar20;
    *(undefined8 *)(puVar19 + -8) = 0x1401337e8;
    iVar10 = FUN_1401213a0(param_8,1,pbVar5,param_7);
    uVar4 = local_88[0];
    if (iVar10 != 0) {
      *(undefined8 *)(puVar19 + 0x40) = 0;
      *(undefined8 *)(puVar19 + 0x38) = 0;
      *(undefined8 *)(puVar19 + 0x30) = 0;
      uVar6 = local_78;
      *(int *)(puVar19 + 0x28) = iVar9;
      *(undefined4 **)(puVar19 + 0x20) = puVar20;
      *(undefined8 *)(puVar19 + -8) = 0x140133833;
      FUN_140121d14(uVar6,uVar4,puVar16,iVar8);
      if (*piVar1 == 0xdddd) {
        *(undefined8 *)(puVar19 + -8) = 0x140133847;
        FUN_1401212e0(piVar1);
      }
      if (puVar16[-4] == 0xdddd) {
        *(undefined8 *)(puVar19 + -8) = 0x140133854;
        FUN_1401212e0();
      }
      goto LAB_14013386b;
    }
    if (*piVar1 == 0xdddd) {
      *(undefined8 *)(puVar19 + -8) = 0x140133800;
      FUN_1401212e0(piVar1);
    }
    iVar8 = puVar16[-4];
  }
  if (iVar8 == 0xdddd) {
    *(undefined8 *)(puVar19 + -8) = 0x140133869;
    FUN_1401212e0();
  }
LAB_14013386b:
  uVar15 = local_58 ^ (ulonglong)local_88;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar19 + -8) = &UNK_140133877;
  FUN_1400d3720(uVar15);
}

