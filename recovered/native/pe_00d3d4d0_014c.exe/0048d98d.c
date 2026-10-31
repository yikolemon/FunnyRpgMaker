/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048d98d */

void FUN_0048d98d(ushort *param_1,short *param_2,int param_3,short *param_4,int param_5,
                 UINT *param_6)

{
  ushort uVar1;
  UINT *pUVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *extraout_ECX;
  ushort *extraout_ECX_00;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  void *unaff_ESI;
  uint uVar11;
  bool bVar12;
  int local_1fc [4];
  short *local_1ec;
  UINT *local_1e8;
  undefined4 local_1e4;
  ushort *local_1e0;
  UINT *local_1dc;
  ushort *local_1d8;
  short local_1d4 [128];
  ushort local_d4;
  ushort local_d2;
  ushort local_d0;
  short local_ce;
  short local_cc;
  short local_ca;
  ushort local_b4;
  undefined1 local_b2 [170];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  local_1e8 = param_6;
  local_1ec = param_2;
  if (param_1 == (ushort *)0x0) goto LAB_0048dd47;
  local_1e4 = 0;
  if ((*param_1 == 0x43) && (param_1[1] == 0)) {
    iVar4 = FUN_00496780(param_2,param_3,0x507ecc);
    if (iVar4 == 0) {
      *local_1e8 = 0;
      goto LAB_0048dd47;
    }
    goto LAB_0048dd56;
  }
  iVar4 = FUN_004961ad();
  local_1dc = (UINT *)(iVar4 + 0x68);
  puVar10 = (ushort *)(iVar4 + 0x172);
  local_1e0 = (ushort *)(iVar4 + 0x6c);
  local_1d8 = puVar10;
  FUN_0048ed74(local_1fc,param_4,param_5,iVar4 + 0x50);
  puVar8 = param_1 + 1;
  puVar6 = param_1;
  do {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
  } while (uVar1 != 0);
  uVar11 = (int)puVar6 - (int)puVar8 >> 1;
  puVar6 = puVar10;
  puVar7 = param_1;
  if (uVar11 < 0x83) {
    do {
      uVar1 = *puVar6;
      bVar12 = uVar1 < *puVar7;
      if (uVar1 != *puVar7) {
LAB_0048da7d:
        uVar5 = -(uint)bVar12 | 1;
        goto LAB_0048da82;
      }
      if (uVar1 == 0) break;
      uVar1 = puVar6[1];
      bVar12 = uVar1 < puVar7[1];
      if (uVar1 != puVar7[1]) goto LAB_0048da7d;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 2;
    } while (uVar1 != 0);
    uVar5 = 0;
LAB_0048da82:
    puVar6 = local_1e0;
    puVar8 = param_1;
    if (uVar5 != 0) {
      do {
        uVar1 = *puVar6;
        bVar12 = uVar1 < *puVar8;
        if (uVar1 != *puVar8) {
LAB_0048dab8:
          uVar5 = -(uint)bVar12 | 1;
          goto LAB_0048dabd;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar6[1];
        bVar12 = uVar1 < puVar8[1];
        if (uVar1 != puVar8[1]) goto LAB_0048dab8;
        puVar8 = puVar8 + 2;
        puVar6 = puVar6 + 2;
      } while (uVar1 != 0);
      uVar5 = 0;
LAB_0048dabd:
      if (uVar5 != 0) goto LAB_0048dac5;
    }
LAB_0048dd0e:
    *local_1e8 = *local_1dc;
    iVar4 = FUN_00496780(local_1ec,param_3,(int)puVar10);
    if (iVar4 != 0) {
LAB_0048dd56:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  else {
LAB_0048dac5:
    bVar12 = FUN_00496c0d(puVar8);
    puVar8 = param_1;
    iVar4 = FUN_0048de14(local_1d4,param_1);
    pUVar2 = local_1dc;
    if (iVar4 == 0) {
      if (bVar12) {
        iVar4 = FUN_0049aeb9(local_1d4,local_1dc,local_1d4);
        puVar8 = extraout_ECX_00;
      }
      else {
        iVar4 = FUN_0049b7b9((int)local_1d4,local_1dc,local_1d4);
        puVar8 = extraout_ECX;
      }
      puVar10 = local_1d8;
      if (iVar4 == 0) goto LAB_0048db5d;
      FUN_0048dda4((short *)local_1d8,0x83,(int)local_1d4);
      puVar8 = &local_b4;
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
      } while (uVar1 != (ushort)local_1e4);
      FUN_0048ee32(local_1fc,(int)&local_b4,((int)puVar8 - (int)local_b2 >> 1) + 1);
LAB_0048dcd9:
      if ((*param_1 == 0) || (0x82 < uVar11)) {
        *local_1e0 = 0;
      }
      else {
        iVar4 = FUN_0049a930((short *)local_1e0,0x83,(int)param_1,uVar11 + 1);
        if (iVar4 != 0) goto LAB_0048dd56;
      }
      goto LAB_0048dd0e;
    }
LAB_0048db5d:
    iVar4 = ___acrt_IsValidLocaleName_4(puVar8,param_1);
    if (iVar4 != 0) {
      uVar5 = get_default_code_page(param_1);
      *pUVar2 = uVar5 & 0xffff;
      iVar4 = FUN_0049a930((short *)local_1d8,0x83,(int)param_1,uVar11 + 1);
      if (iVar4 != 0) goto LAB_0048dd56;
      FUN_0048edee(local_1fc,(int)param_1,uVar11 + 1);
      puVar10 = local_1d8;
      goto LAB_0048dcd9;
    }
    cVar3 = FUN_0048eb6b(local_1d4,param_1);
    if ((cVar3 != '\0') && (iVar4 = ___acrt_IsValidLocaleName_4(unaff_ESI,&local_b4), iVar4 != 0)) {
      if (local_d4 == 0) {
        uVar5 = get_default_code_page(&local_b4);
      }
      else {
        uVar9 = (uint)local_d4;
        uVar5 = uVar9 + 0x20;
        if (0x19 < uVar9 - 0x41) {
          uVar5 = uVar9;
        }
        if (uVar5 == 0x75) {
          uVar9 = (uint)local_d2;
          uVar5 = uVar9 + 0x20;
          if (0x19 < uVar9 - 0x41) {
            uVar5 = uVar9;
          }
          if (uVar5 != 0x74) goto LAB_0048dc44;
          uVar9 = (uint)local_d0;
          uVar5 = uVar9 + 0x20;
          if (0x19 < uVar9 - 0x41) {
            uVar5 = uVar9;
          }
          if (((uVar5 != 0x66) || (local_ce != 0x38)) || (local_cc != 0)) goto LAB_0048dc44;
        }
        else {
LAB_0048dc44:
          if (((local_ce != 0x2d) || (local_cc != 0x38)) || (local_ca != 0)) goto LAB_0048dd3a;
        }
        uVar5 = 0xfde9;
      }
      puVar10 = local_1d8;
      *pUVar2 = uVar5 & 0xffff;
      iVar4 = FUN_0049a930((short *)local_1d8,0x83,(int)param_1,uVar11 + 1);
      if (iVar4 != 0) goto LAB_0048dd56;
      puVar8 = &local_b4;
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
      } while (uVar1 != (ushort)local_1e4);
      FUN_0048edee(local_1fc,(int)&local_b4,((int)puVar8 - (int)local_b2 >> 1) + 1);
      goto LAB_0048dcd9;
    }
  }
LAB_0048dd3a:
  FUN_0048edbe(local_1fc);
LAB_0048dd47:
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

