/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048e49f */

void FUN_0048e49f(ushort *param_1,int param_2,ushort *param_3)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  ushort *puVar10;
  ushort uVar11;
  ushort *puVar12;
  int iVar13;
  undefined **ppuVar14;
  bool bVar15;
  int local_1c4;
  int local_1c0;
  short local_1bc [86];
  ushort local_110 [132];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  if (param_2 != 0) {
    if (param_3 != (ushort *)0x0) {
      FUN_0048df51((int)param_1,param_2,param_3);
    }
    goto LAB_0048e76e;
  }
  bVar3 = true;
  iVar13 = 0;
  local_1c0 = 0;
  if (param_3 != (ushort *)0x0) {
    if (((*param_3 == 0x4c) && (param_3[1] == 0x43)) && (param_3[2] == 0x5f)) {
      do {
        puVar4 = FUN_0049aae0(param_3,(ushort *)&DAT_00507fac);
        if (((puVar4 == (ushort *)0x0) || (iVar13 = (int)puVar4 - (int)param_3 >> 1, iVar13 == 0))
           || (*puVar4 == 0x3b)) goto LAB_0048e76e;
        ppuVar14 = &PTR_u_LC_COLLATE_004f90ec;
        local_1c4 = 1;
        do {
          puVar4 = (ushort *)*ppuVar14;
          puVar12 = param_3;
          iVar5 = FUN_0049aa90(puVar4,param_3,iVar13);
          if (iVar5 == 0) {
            psVar9 = (short *)*ppuVar14;
            psVar1 = psVar9 + 1;
            do {
              sVar2 = *psVar9;
              psVar9 = psVar9 + 1;
            } while (sVar2 != (short)puVar4);
            if (iVar13 == (int)psVar9 - (int)psVar1 >> 1) break;
          }
          local_1c4 = local_1c4 + 1;
          ppuVar14 = ppuVar14 + 3;
        } while ((int)ppuVar14 < 0x4f911d);
        puVar12 = puVar12 + 1;
        param_1 = (ushort *)&DAT_00507fb4;
        iVar13 = FUN_0049aa40(puVar12,(ushort *)&DAT_00507fb4);
        if ((iVar13 == 0) && (*puVar12 != 0x3b)) goto LAB_0048e76e;
        if (local_1c4 < 6) {
          iVar5 = FUN_0049a930((short *)local_110,0x83,(int)puVar12,iVar13);
          if (iVar5 != 0) {
LAB_0048e782:
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if (0x105 < (uint)(iVar13 * 2)) {
            FUN_00484380();
            goto LAB_0048e782;
          }
          local_110[iVar13] = 0;
          iVar5 = FUN_0048df51((int)param_1,local_1c4,local_110);
          if (iVar5 != 0) {
            local_1c0 = local_1c0 + 1;
          }
        }
        param_3 = puVar12 + iVar13;
        uVar11 = 0;
        if (*param_3 != 0) {
          param_3 = param_3 + 1;
          uVar11 = *param_3;
        }
      } while (uVar11 != 0);
    }
    else {
      puVar4 = param_1;
      iVar5 = FUN_0048d98d(param_3,(short *)local_110,0x83,local_1bc,0x55,(UINT *)&stack0xfffffe30);
      if (iVar5 == 0) goto LAB_0048e76e;
      puVar12 = param_1 + 0x10;
      iVar5 = 0;
      do {
        if (iVar5 != 0) {
          puVar10 = *(ushort **)puVar12;
          puVar6 = local_110;
          do {
            bVar15 = *puVar6 < *puVar10;
            if (*puVar6 != *puVar10) {
LAB_0048e70a:
              uVar7 = -(uint)bVar15 | 1;
              goto LAB_0048e711;
            }
            if (*puVar6 == 0) break;
            uVar11 = puVar6[1];
            bVar15 = uVar11 < puVar10[1];
            if (uVar11 != puVar10[1]) goto LAB_0048e70a;
            puVar6 = puVar6 + 2;
            puVar10 = puVar10 + 2;
          } while (uVar11 != 0);
          uVar7 = 0;
LAB_0048e711:
          param_1 = puVar4;
          if (uVar7 == 0) {
            iVar13 = iVar13 + 1;
          }
          else {
            puVar6 = local_110;
            iVar8 = FUN_0048df51((int)puVar4,iVar5,puVar6);
            puVar4 = puVar6;
            if (iVar8 == 0) {
              bVar3 = false;
            }
            else {
              iVar13 = iVar13 + 1;
            }
          }
        }
        iVar5 = iVar5 + 1;
        puVar12 = puVar12 + 8;
      } while (iVar5 < 6);
      local_1c0 = iVar13;
      if (bVar3) goto LAB_0048e767;
    }
    if (local_1c0 == 0) goto LAB_0048e76e;
  }
LAB_0048e767:
  FUN_0048e302((int)param_1);
LAB_0048e76e:
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

