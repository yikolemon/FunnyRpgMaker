/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026b4dc */

void FUN_1026b4dc(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint *param_6)

{
  uint *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  short *psVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined1 local_1d4 [256];
  ushort local_d4;
  ushort local_d2;
  ushort local_d0;
  short local_ce;
  short local_cc;
  short local_ca;
  short local_b4;
  undefined1 local_b2 [170];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (param_1 == (ushort *)0x0) goto LAB_1026b896;
  if ((*param_1 == 0x43) && (param_1[1] == 0)) {
    iVar7 = FUN_102749e0(param_2,param_3,&DAT_1035a3a4);
    if (iVar7 == 0) {
      *param_6 = 0;
      goto LAB_1026b896;
    }
    goto LAB_1026b8a5;
  }
  iVar7 = FUN_102743cd();
  puVar1 = (uint *)(iVar7 + 0x68);
  puVar3 = (ushort *)(iVar7 + 0x172);
  puVar2 = (ushort *)(iVar7 + 0x6c);
  FUN_1026c8c3(param_4,param_5,iVar7 + 0x50);
  puVar9 = param_1;
  do {
    uVar4 = *puVar9;
    puVar9 = puVar9 + 1;
  } while (uVar4 != 0);
  uVar13 = (int)puVar9 - (int)(param_1 + 1) >> 1;
  puVar9 = puVar3;
  puVar10 = param_1;
  if (uVar13 < 0x83) {
    do {
      uVar4 = *puVar9;
      bVar14 = uVar4 < *puVar10;
      if (uVar4 != *puVar10) {
LAB_1026b5cc:
        uVar8 = -(uint)bVar14 | 1;
        goto LAB_1026b5d1;
      }
      if (uVar4 == 0) break;
      uVar4 = puVar9[1];
      bVar14 = uVar4 < puVar10[1];
      if (uVar4 != puVar10[1]) goto LAB_1026b5cc;
      puVar9 = puVar9 + 2;
      puVar10 = puVar10 + 2;
    } while (uVar4 != 0);
    uVar8 = 0;
LAB_1026b5d1:
    puVar9 = puVar2;
    puVar10 = param_1;
    if (uVar8 != 0) {
      do {
        uVar4 = *puVar9;
        bVar14 = uVar4 < *puVar10;
        if (uVar4 != *puVar10) {
LAB_1026b607:
          uVar8 = -(uint)bVar14 | 1;
          goto LAB_1026b60c;
        }
        if (uVar4 == 0) break;
        uVar4 = puVar9[1];
        bVar14 = uVar4 < puVar10[1];
        if (uVar4 != puVar10[1]) goto LAB_1026b607;
        puVar9 = puVar9 + 2;
        puVar10 = puVar10 + 2;
      } while (uVar4 != 0);
      uVar8 = 0;
LAB_1026b60c:
      if (uVar8 != 0) goto LAB_1026b614;
    }
LAB_1026b85d:
    *param_6 = *puVar1;
    iVar7 = FUN_102749e0(param_2,param_3,puVar3);
    if (iVar7 != 0) {
LAB_1026b8a5:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  else {
LAB_1026b614:
    cVar6 = FUN_10274f28();
    iVar7 = FUN_1026b963(local_1d4,param_1);
    if (iVar7 == 0) {
      if (cVar6 == '\0') {
        iVar7 = FUN_1027ca9d();
      }
      else {
        iVar7 = FUN_1027c19d(local_1d4,puVar1,local_1d4);
      }
      if (iVar7 == 0) goto LAB_1026b6ac;
      FUN_1026b8f3(puVar3,0x83,local_1d4);
      psVar11 = &local_b4;
      do {
        sVar5 = *psVar11;
        psVar11 = psVar11 + 1;
      } while (sVar5 != 0);
      FUN_1026c981(&local_b4,((int)psVar11 - (int)local_b2 >> 1) + 1);
LAB_1026b828:
      if ((*param_1 == 0) || (0x82 < uVar13)) {
        *puVar2 = 0;
      }
      else {
        iVar7 = FUN_1027bc60(puVar2,0x83,param_1,uVar13 + 1);
        if (iVar7 != 0) goto LAB_1026b8a5;
      }
      goto LAB_1026b85d;
    }
LAB_1026b6ac:
    iVar7 = ___acrt_IsValidLocaleName_4(param_1);
    if (iVar7 != 0) {
      uVar8 = get_default_code_page();
      *puVar1 = uVar8 & 0xffff;
      iVar7 = FUN_1027bc60(puVar3,0x83,param_1,uVar13 + 1);
      if (iVar7 != 0) goto LAB_1026b8a5;
      FUN_1026c93d(param_1,uVar13 + 1);
      goto LAB_1026b828;
    }
    cVar6 = FUN_1026c6ba(local_1d4,param_1);
    if ((cVar6 != '\0') && (iVar7 = ___acrt_IsValidLocaleName_4(&local_b4), iVar7 != 0)) {
      if (local_d4 == 0) {
        uVar8 = get_default_code_page(&local_b4);
      }
      else {
        uVar12 = (uint)local_d4;
        uVar8 = uVar12 + 0x20;
        if (0x19 < uVar12 - 0x41) {
          uVar8 = uVar12;
        }
        if (uVar8 == 0x75) {
          uVar12 = (uint)local_d2;
          uVar8 = uVar12 + 0x20;
          if (0x19 < uVar12 - 0x41) {
            uVar8 = uVar12;
          }
          if (uVar8 != 0x74) goto LAB_1026b793;
          uVar12 = (uint)local_d0;
          uVar8 = uVar12 + 0x20;
          if (0x19 < uVar12 - 0x41) {
            uVar8 = uVar12;
          }
          if (((uVar8 != 0x66) || (local_ce != 0x38)) || (local_cc != 0)) goto LAB_1026b793;
        }
        else {
LAB_1026b793:
          if (((local_ce != 0x2d) || (local_cc != 0x38)) || (local_ca != 0)) goto LAB_1026b889;
        }
        uVar8 = 0xfde9;
      }
      *puVar1 = uVar8 & 0xffff;
      iVar7 = FUN_1027bc60(puVar3,0x83,param_1,uVar13 + 1);
      if (iVar7 != 0) goto LAB_1026b8a5;
      psVar11 = &local_b4;
      do {
        sVar5 = *psVar11;
        psVar11 = psVar11 + 1;
      } while (sVar5 != 0);
      FUN_1026c93d(&local_b4,((int)psVar11 - (int)local_b2 >> 1) + 1);
      goto LAB_1026b828;
    }
  }
LAB_1026b889:
  FUN_1026c90d();
LAB_1026b896:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

