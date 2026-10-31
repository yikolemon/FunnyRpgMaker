/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c1a9f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall
FUN_101c1a9f(undefined4 *param_1,uint *param_2,int param_3,int *param_4,char param_5)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  byte bVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined1 uVar17;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined1 local_21;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_38;
  local_20 = 0;
  if (param_2 == (uint *)0x0) {
    uVar5 = 6;
    goto LAB_101c1bd2;
  }
  local_38 = 0;
  uVar17 = false;
  if ((*param_2 & 2) != 0) {
    uVar17 = param_2[4] != 0;
  }
  local_21 = uVar17;
  uVar5 = FUN_101c091d(param_1,param_2,&local_1c);
  if (uVar5 == 0) {
    if (-1 < param_3 && param_4 == (int *)0x0) {
      uVar5 = 6;
      puVar12 = (undefined4 *)0x0;
      uVar16 = 0;
      uVar17 = local_21;
      goto LAB_101c1bad;
    }
    local_38 = *param_1;
    if (((*param_2 & 8) == 0) || (puVar12 = (undefined4 *)param_2[5], puVar12 == (undefined4 *)0x0))
    {
      if (param_1[4] == 0) {
        puVar12 = (undefined4 *)0x0;
        uVar5 = 0xb;
        local_34 = param_1;
      }
      else {
        puVar14 = param_1 + 5;
        puVar11 = param_1 + param_1[4] + 5;
        uVar5 = 0xb;
        puVar12 = (undefined4 *)0x0;
        local_34 = param_1;
        local_2c = puVar11;
        do {
          if ((**(byte **)*puVar14 & 1) != 0) {
            uVar5 = 0;
            uVar15 = 0;
            if ((*param_2 & 0x10) != 0) {
              uVar5 = param_2[6];
              uVar15 = param_2[7];
            }
            local_30 = (undefined4 *)*puVar14;
            uVar5 = FUN_101c5b1d(&local_21,param_3,uVar5,uVar15,&local_20);
            puVar12 = local_30;
            if (uVar5 == 0) goto LAB_101c1d5f;
            if (((param_5 != '\0') &&
                (iVar6 = _strcmp(*(char **)(*(int *)*puVar14 + 8),"truetype"), uVar13 = local_1c,
                (char)uVar5 == -0x72)) && (iVar6 == 0)) {
              uVar5 = FUN_101c461e(local_1c,0);
              if (uVar5 != 0) break;
              uVar5 = FUN_101c5cb2(param_3,param_4);
              if (uVar5 == 0) goto LAB_101c1cef;
            }
            puVar11 = local_2c;
            if ((char)uVar5 != '\x02') break;
          }
          puVar14 = puVar14 + 1;
        } while (puVar14 < puVar11);
      }
      goto LAB_101c1b00;
    }
    if ((*(byte *)*puVar12 & 1) == 0) {
      uVar5 = 0x20;
      uVar16 = local_38;
      local_34 = param_1;
      goto LAB_101c1bad;
    }
    uVar5 = 0;
    uVar15 = 0;
    if ((*param_2 & 0x10) != 0) {
      uVar5 = param_2[6];
      uVar15 = param_2[7];
    }
    local_34 = param_1;
    uVar5 = FUN_101c5b1d(&local_21,param_3,uVar5,uVar15,&local_20);
    uVar16 = local_38;
    uVar17 = local_21;
    if (uVar5 != 0) goto LAB_101c1bad;
LAB_101c1d5f:
    uVar16 = local_38;
    iVar7 = FUN_101c21f6(local_38,0xc,&local_18);
    iVar6 = local_20;
    if (local_18 == 0) {
      *(int *)(iVar7 + 8) = local_20;
      FUN_101c2229(*(int *)(local_20 + 0x60) + 0x10,iVar7);
      if (-1 < param_3) {
        uVar5 = FUN_101c0f0f(iVar6,0);
        if ((uVar5 != 0) || (uVar5 = FUN_101c20b4(iVar6,&local_28), uVar5 != 0)) goto LAB_101c1dc6;
        *(undefined4 *)(iVar6 + 0x58) = local_28;
      }
      uVar5 = *(uint *)(iVar6 + 8);
      if ((uVar5 & 1) != 0) {
        sVar8 = *(short *)(iVar6 + 0x4a);
        if (sVar8 < 0) {
          sVar8 = -sVar8;
          *(short *)(iVar6 + 0x4a) = sVar8;
        }
        if ((uVar5 & 0x20) == 0) {
          *(short *)(iVar6 + 0x4e) = sVar8;
        }
      }
      if (((uVar5 & 2) != 0) && (0 < *(int *)(iVar6 + 0x1c))) {
        iVar7 = 0;
        iVar9 = 0;
        do {
          iVar2 = *(int *)(iVar6 + 0x20);
          psVar1 = (short *)(iVar2 + iVar7);
          if (*(short *)(iVar2 + iVar7) < 0) {
            sVar8 = -*(short *)(iVar2 + iVar7);
            *psVar1 = sVar8;
            bVar10 = (byte)((ushort)sVar8 >> 0xf);
          }
          else {
            bVar10 = 0;
          }
          iVar3 = *(int *)(iVar2 + 8 + iVar7);
          if (iVar3 < 0) {
            *(int *)(iVar2 + 8 + iVar7) = -iVar3;
          }
          iVar3 = *(int *)(iVar2 + 0xc + iVar7);
          if (iVar3 < 0) {
            *(int *)(iVar2 + 0xc + iVar7) = -iVar3;
          }
          if (bVar10 != 0) {
            psVar1[0] = 0;
            psVar1[1] = 0;
            psVar1[2] = 0;
            psVar1[3] = 0;
            psVar1[4] = 0;
            psVar1[5] = 0;
            psVar1[6] = 0;
            psVar1[7] = 0;
          }
          iVar9 = iVar9 + 1;
          iVar7 = iVar7 + 0x10;
        } while (iVar9 < *(int *)(iVar6 + 0x1c));
      }
      uVar4 = _UNK_10302e3c;
      uVar13 = _UNK_10302e38;
      uVar16 = _UNK_10302e34;
      uVar5 = 0;
      puVar12 = *(undefined4 **)(iVar6 + 0x80);
      *puVar12 = _DAT_10302e30;
      puVar12[1] = uVar16;
      puVar12[2] = uVar13;
      puVar12[3] = uVar4;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[0x10] = 1;
      *(undefined1 *)(puVar12 + 0xe) = 0xff;
      if (param_4 == (int *)0x0) {
        FUN_101c1f3e(iVar6);
        uVar5 = 0;
      }
      else {
        *param_4 = iVar6;
      }
      goto LAB_101c1bd2;
    }
    uVar5 = local_18;
    if (iVar7 != 0) {
LAB_101c1dc6:
      FUN_101c1f3e(iVar6);
      goto LAB_101c1bd2;
    }
  }
  else {
    puVar12 = (undefined4 *)0x0;
    local_34 = param_1;
LAB_101c1b00:
    uVar13 = local_1c;
    if ((((char)uVar5 == '\x02') || ((uVar5 & 0xff) == 0x55)) ||
       (uVar16 = local_38, uVar17 = local_21, (uVar5 & 0xff) == 0x51)) {
      if ((param_5 != '\0') && (uVar5 = FUN_101c5e05(param_3,param_4,param_2), uVar5 == 0)) {
LAB_101c1cef:
        FUN_101c0a65(uVar13,local_21);
        uVar5 = 0;
        goto LAB_101c1bd2;
      }
      uVar16 = local_38;
      uVar17 = local_21;
      if ((char)uVar5 == '\x02') {
        uVar5 = 2;
      }
    }
LAB_101c1bad:
    FUN_101c0a65(local_1c,uVar17);
  }
  if (local_20 != 0) {
    FUN_101c2003(uVar16,local_20,puVar12);
  }
LAB_101c1bd2:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar5;
}

