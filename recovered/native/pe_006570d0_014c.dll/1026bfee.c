/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026bfee */

void FUN_1026bfee(int param_1,int param_2,short *param_3)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  short *psVar7;
  ushort *puVar8;
  short sVar9;
  undefined4 *puVar10;
  undefined **ppuVar11;
  bool bVar12;
  short *local_1d0;
  int local_1cc;
  int local_1c8;
  undefined4 local_1c4;
  undefined4 *local_1c0;
  undefined1 local_1bc [172];
  ushort local_110 [132];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_1cc = param_1;
  if (param_2 != 0) {
    if (param_3 != (short *)0x0) {
      FUN_1026baa0(param_1,param_2,param_3);
    }
    goto LAB_1026c2bd;
  }
  local_1c8 = 1;
  puVar10 = (undefined4 *)0x0;
  local_1c0 = (undefined4 *)0x0;
  if (param_3 != (short *)0x0) {
    if (((*param_3 == 0x4c) && (param_3[1] == 0x43)) && (param_3[2] == 0x5f)) {
      do {
        local_1d0 = (short *)FUN_1027a830(param_3,&DAT_1035a484);
        if (((local_1d0 == (short *)0x0) ||
            (iVar3 = (int)local_1d0 - (int)param_3 >> 1, local_1c8 = iVar3, iVar3 == 0)) ||
           (*local_1d0 == 0x3b)) goto LAB_1026c2bd;
        ppuVar11 = &PTR_u_LC_COLLATE_10324e4c;
        local_1c4 = 1;
        do {
          iVar4 = FUN_1027bdc0(*ppuVar11,param_3,iVar3);
          if (iVar4 == 0) {
            psVar7 = (short *)*ppuVar11;
            psVar1 = psVar7 + 1;
            do {
              sVar9 = *psVar7;
              psVar7 = psVar7 + 1;
            } while (sVar9 != 0);
            if (iVar3 == (int)psVar7 - (int)psVar1 >> 1) break;
          }
          local_1c4 = local_1c4 + 1;
          ppuVar11 = ppuVar11 + 3;
        } while ((int)ppuVar11 < 0x10324e7d);
        param_3 = local_1d0 + 1;
        iVar3 = FUN_1027bd70(param_3,&DAT_1035a48c);
        param_1 = local_1cc;
        if ((iVar3 == 0) && (*param_3 != 0x3b)) goto LAB_1026c2bd;
        if (local_1c4 < 6) {
          iVar4 = FUN_1027bc60(local_110,0x83,param_3,iVar3);
          if (iVar4 != 0) {
LAB_1026c2d1:
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if (0x105 < (uint)(iVar3 * 2)) {
            FUN_102348f0();
            goto LAB_1026c2d1;
          }
          local_110[iVar3] = 0;
          iVar4 = FUN_1026baa0(param_1,local_1c4,local_110);
          if (iVar4 != 0) {
            local_1c0 = (undefined4 *)((int)local_1c0 + 1);
          }
        }
        param_3 = param_3 + iVar3;
        sVar9 = 0;
        if (*param_3 != 0) {
          param_3 = param_3 + 1;
          sVar9 = *param_3;
        }
        puVar10 = local_1c0;
      } while (sVar9 != 0);
    }
    else {
      iVar3 = FUN_1026b4dc(param_3,local_110,0x83,local_1bc,0x55,&local_1d0);
      if (iVar3 == 0) goto LAB_1026c2bd;
      local_1c0 = (undefined4 *)(param_1 + 0x20);
      iVar3 = 0;
      do {
        if (iVar3 != 0) {
          puVar8 = (ushort *)*local_1c0;
          puVar5 = local_110;
          do {
            bVar12 = *puVar5 < *puVar8;
            if (*puVar5 != *puVar8) {
LAB_1026c259:
              uVar6 = -(uint)bVar12 | 1;
              goto LAB_1026c260;
            }
            if (*puVar5 == 0) break;
            uVar2 = puVar5[1];
            bVar12 = uVar2 < puVar8[1];
            local_1c4 = CONCAT22(uVar2,(undefined2)local_1c4);
            if (uVar2 != puVar8[1]) goto LAB_1026c259;
            puVar5 = puVar5 + 2;
            puVar8 = puVar8 + 2;
          } while (uVar2 != 0);
          uVar6 = 0;
LAB_1026c260:
          param_1 = local_1cc;
          if (uVar6 == 0) {
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          else {
            iVar4 = FUN_1026baa0(local_1cc,iVar3,local_110);
            if (iVar4 == 0) {
              local_1c8 = 0;
            }
            else {
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
          }
        }
        iVar3 = iVar3 + 1;
        local_1c0 = local_1c0 + 4;
      } while (iVar3 < 6);
      if (local_1c8 != 0) goto LAB_1026c2b6;
    }
    if (puVar10 == (undefined4 *)0x0) goto LAB_1026c2bd;
  }
LAB_1026c2b6:
  FUN_1026be51(param_1);
LAB_1026c2bd:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

