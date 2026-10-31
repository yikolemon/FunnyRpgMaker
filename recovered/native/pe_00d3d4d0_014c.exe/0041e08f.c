/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041e08f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_0041e08f(int *param_1,uint *param_2,uint param_3,int *param_4,char param_5)

{
  short *psVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint uVar16;
  byte bVar17;
  int local_38;
  int *local_34;
  undefined4 *local_30;
  int *local_2c;
  undefined4 local_28;
  byte local_21;
  int local_20;
  int *local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_38;
  local_20 = 0;
  if (param_2 == (uint *)0x0) {
    uVar9 = 6;
    goto LAB_0041e1c2;
  }
  local_38 = 0;
  bVar17 = false;
  if ((*param_2 & 2) != 0) {
    bVar17 = param_2[4] != 0;
  }
  local_21 = bVar17;
  uVar9 = FUN_0041cf0d(param_1,param_2,(uint *)&local_1c);
  if (uVar9 == 0) {
    if (-1 < (int)param_3 && param_4 == (int *)0x0) {
      uVar9 = 6;
      puVar15 = (undefined4 *)0x0;
      iVar11 = 0;
      bVar17 = local_21;
      goto LAB_0041e19d;
    }
    local_38 = *param_1;
    if (((*param_2 & 8) == 0) || (puVar15 = (undefined4 *)param_2[5], puVar15 == (undefined4 *)0x0))
    {
      if (param_1[4] == 0) {
        puVar15 = (undefined4 *)0x0;
        uVar9 = 0xb;
        local_34 = param_1;
      }
      else {
        piVar10 = param_1 + 5;
        piVar14 = param_1 + param_1[4] + 5;
        uVar9 = 0xb;
        puVar15 = (undefined4 *)0x0;
        local_34 = param_1;
        local_2c = piVar14;
        do {
          puVar2 = (undefined4 *)*piVar10;
          if ((*(byte *)*puVar2 & 1) != 0) {
            uVar9 = 0;
            uVar16 = 0;
            if ((*param_2 & 0x10) != 0) {
              uVar9 = param_2[6];
              uVar16 = param_2[7];
            }
            local_30 = puVar2;
            uVar9 = FUN_00421ba5((int)puVar2,&local_1c,&local_21,param_3,uVar9,uVar16,&local_20);
            puVar15 = local_30;
            if (uVar9 == 0) goto LAB_0041e34f;
            if (((param_5 != '\0') &&
                (uVar16 = FUN_00493010(*(byte **)(*(int *)*piVar10 + 8),(byte *)"truetype"),
                piVar14 = local_1c, (char)uVar9 == -0x72)) && (uVar16 == 0)) {
              uVar9 = FUN_00420696((int)local_1c,0);
              if (uVar9 != 0) break;
              uVar9 = FUN_00421d3a(local_34,piVar14,param_3,param_4);
              if (uVar9 == 0) goto LAB_0041e2df;
            }
            piVar14 = local_2c;
            if ((char)uVar9 != '\x02') break;
          }
          piVar10 = piVar10 + 1;
        } while (piVar10 < piVar14);
      }
      goto LAB_0041e0f0;
    }
    if ((*(byte *)*puVar15 & 1) == 0) {
      uVar9 = 0x20;
      iVar11 = local_38;
      local_34 = param_1;
      goto LAB_0041e19d;
    }
    uVar9 = 0;
    uVar16 = 0;
    if ((*param_2 & 0x10) != 0) {
      uVar9 = param_2[6];
      uVar16 = param_2[7];
    }
    local_34 = param_1;
    uVar9 = FUN_00421ba5((int)puVar15,&local_1c,&local_21,param_3,uVar9,uVar16,&local_20);
    iVar11 = local_38;
    bVar17 = local_21;
    if (uVar9 != 0) goto LAB_0041e19d;
LAB_0041e34f:
    iVar11 = local_38;
    piVar10 = (int *)FUN_0041e773(local_38,0xc,(int *)&local_18);
    iVar8 = local_20;
    if (local_18 == 0) {
      piVar10[2] = local_20;
      FUN_0041e7a6((undefined4 *)(*(int *)(local_20 + 0x60) + 0x10),piVar10);
      if (-1 < (int)param_3) {
        uVar9 = FUN_0041d4ff(iVar8,(undefined4 *)0x0);
        if ((uVar9 != 0) || (uVar9 = FUN_0041e631(iVar8,&local_28), uVar9 != 0)) goto LAB_0041e3b6;
        *(undefined4 *)(iVar8 + 0x58) = local_28;
      }
      uVar9 = *(uint *)(iVar8 + 8);
      if ((uVar9 & 1) != 0) {
        sVar12 = *(short *)(iVar8 + 0x4a);
        if (sVar12 < 0) {
          sVar12 = -sVar12;
          *(short *)(iVar8 + 0x4a) = sVar12;
        }
        if ((uVar9 & 0x20) == 0) {
          *(short *)(iVar8 + 0x4e) = sVar12;
        }
      }
      if (((uVar9 & 2) != 0) && (0 < *(int *)(iVar8 + 0x1c))) {
        iVar11 = 0;
        iVar13 = 0;
        do {
          iVar3 = *(int *)(iVar8 + 0x20);
          psVar1 = (short *)(iVar3 + iVar11);
          if (*(short *)(iVar3 + iVar11) < 0) {
            sVar12 = -*(short *)(iVar3 + iVar11);
            *psVar1 = sVar12;
            bVar17 = (byte)((ushort)sVar12 >> 0xf);
          }
          else {
            bVar17 = 0;
          }
          iVar4 = *(int *)(iVar3 + 8 + iVar11);
          if (iVar4 < 0) {
            *(int *)(iVar3 + 8 + iVar11) = -iVar4;
          }
          iVar4 = *(int *)(iVar3 + 0xc + iVar11);
          if (iVar4 < 0) {
            *(int *)(iVar3 + 0xc + iVar11) = -iVar4;
          }
          if (bVar17 != 0) {
            psVar1[0] = 0;
            psVar1[1] = 0;
            psVar1[2] = 0;
            psVar1[3] = 0;
            psVar1[4] = 0;
            psVar1[5] = 0;
            psVar1[6] = 0;
            psVar1[7] = 0;
          }
          iVar13 = iVar13 + 1;
          iVar11 = iVar11 + 0x10;
        } while (iVar13 < *(int *)(iVar8 + 0x1c));
      }
      uVar7 = _UNK_004d73dc;
      uVar6 = _UNK_004d73d8;
      uVar5 = _UNK_004d73d4;
      uVar9 = 0;
      puVar15 = *(undefined4 **)(iVar8 + 0x80);
      *puVar15 = _DAT_004d73d0;
      puVar15[1] = uVar5;
      puVar15[2] = uVar6;
      puVar15[3] = uVar7;
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[0x10] = 1;
      *(undefined1 *)(puVar15 + 0xe) = 0xff;
      if (param_4 == (int *)0x0) {
        FUN_0041e4bb(iVar8);
        uVar9 = 0;
      }
      else {
        *param_4 = iVar8;
      }
      goto LAB_0041e1c2;
    }
    uVar9 = local_18;
    if (piVar10 != (int *)0x0) {
LAB_0041e3b6:
      FUN_0041e4bb(iVar8);
      goto LAB_0041e1c2;
    }
  }
  else {
    puVar15 = (undefined4 *)0x0;
    local_34 = param_1;
LAB_0041e0f0:
    piVar14 = local_1c;
    if ((((char)uVar9 == '\x02') || ((uVar9 & 0xff) == 0x55)) ||
       (iVar11 = local_38, bVar17 = local_21, (uVar9 & 0xff) == 0x51)) {
      if ((param_5 != '\0') &&
         (uVar9 = FUN_00421e8d(local_34,local_1c,param_3,param_4,(byte *)param_2), uVar9 == 0)) {
LAB_0041e2df:
        FUN_0041d055((int)piVar14,(uint)local_21);
        uVar9 = 0;
        goto LAB_0041e1c2;
      }
      iVar11 = local_38;
      bVar17 = local_21;
      if ((char)uVar9 == '\x02') {
        uVar9 = 2;
      }
    }
LAB_0041e19d:
    FUN_0041d055((int)local_1c,(uint)bVar17);
  }
  if (local_20 != 0) {
    FUN_0041e580(iVar11,local_20,(int)puVar15);
  }
LAB_0041e1c2:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_38);
  }
  return uVar9;
}

