/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001e1c2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14001e1c2(longlong *param_1,uint *param_2,uint param_3,longlong *param_4,char param_5)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  short sVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  byte bVar16;
  undefined1 auStackY_b8 [32];
  longlong local_80;
  undefined8 local_70;
  byte local_61;
  longlong local_60;
  longlong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_b8;
  local_60 = 0;
  if (param_2 == (uint *)0x0) {
    uVar4 = 6;
    goto LAB_14001e41e;
  }
  if ((*param_2 & 2) == 0) {
    bVar16 = false;
  }
  else {
    bVar16 = *(longlong *)(param_2 + 8) != 0;
  }
  local_61 = bVar16;
  uVar4 = FUN_14001cf06(param_1,param_2,&local_58);
  if (uVar4 == 0) {
    if (-1 < (int)param_3 && param_4 == (longlong *)0x0) {
      uVar4 = 6;
      local_80 = 0;
      puVar15 = (undefined8 *)0x0;
      bVar16 = local_61;
      goto LAB_14001e2b6;
    }
    local_80 = *param_1;
    if (((*param_2 & 8) == 0) ||
       (puVar15 = *(undefined8 **)(param_2 + 10), puVar15 == (undefined8 *)0x0)) {
      uVar2 = *(uint *)((longlong)param_1 + 0x14);
      if ((ulonglong)uVar2 == 0) {
        uVar4 = 0xb;
        puVar6 = (undefined8 *)0x0;
      }
      else {
        plVar9 = param_1 + 3;
        uVar4 = 0xb;
        puVar6 = (undefined8 *)0x0;
        do {
          puVar15 = (undefined8 *)*plVar9;
          if ((*(byte *)*puVar15 & 1) != 0) {
            if ((*param_2 & 0x10) == 0) {
              uVar4 = 0;
              lVar12 = 0;
            }
            else {
              uVar4 = param_2[0xc];
              lVar12 = *(longlong *)(param_2 + 0xe);
            }
            uVar4 = FUN_140022161((longlong)puVar15,&local_58,&local_61,param_3,uVar4,lVar12,
                                  &local_60);
            if (uVar4 == 0) goto LAB_14001e4ac;
            puVar6 = puVar15;
            if (((param_5 != '\0') &&
                (iVar5 = strcmp(*(char **)(*(longlong *)*plVar9 + 8),"truetype"), plVar14 = local_58
                , (char)uVar4 == -0x72)) && (iVar5 == 0)) {
              uVar7 = FUN_140020a41((longlong)local_58,0);
              uVar4 = (uint)uVar7;
              if (uVar4 != 0) break;
              uVar8 = FUN_14002232b(param_1,plVar14,param_3,param_4);
              uVar4 = (uint)uVar8;
              if (uVar4 == 0) goto LAB_14001e40f;
            }
            if ((char)uVar4 != '\x02') break;
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 < param_1 + (ulonglong)uVar2 + 3);
      }
      goto LAB_14001e246;
    }
    uVar4 = 0x20;
    if ((*(byte *)*puVar15 & 1) == 0) goto LAB_14001e2b6;
    if ((*param_2 & 0x10) == 0) {
      uVar4 = 0;
      lVar12 = 0;
    }
    else {
      uVar4 = param_2[0xc];
      lVar12 = *(longlong *)(param_2 + 0xe);
    }
    uVar4 = FUN_140022161((longlong)puVar15,&local_58,&local_61,param_3,uVar4,lVar12,&local_60);
    bVar16 = local_61;
    if (uVar4 != 0) goto LAB_14001e2b6;
LAB_14001e4ac:
    plVar9 = (longlong *)FUN_14001e961(local_80,0x18,(int *)&local_4c);
    lVar12 = local_60;
    if (local_4c == 0) {
      plVar9[2] = local_60;
      FUN_14001e98f((undefined8 *)(*(longlong *)(local_60 + 0x90) + 0x20),plVar9);
      if (-1 < (int)param_3) {
        uVar4 = FUN_14001d5a4(lVar12,(undefined8 *)0x0);
        if ((uVar4 != 0) || (uVar4 = FUN_14001e7f4(lVar12,&local_70), uVar4 != 0))
        goto LAB_14001e51c;
        *(undefined8 *)(lVar12 + 0x80) = local_70;
      }
      uVar4 = *(uint *)(lVar12 + 8);
      if ((uVar4 & 1) != 0) {
        sVar11 = *(short *)(lVar12 + 0x6e);
        if (sVar11 < 0) {
          sVar11 = -sVar11;
          *(short *)(lVar12 + 0x6e) = sVar11;
        }
        if ((uVar4 & 0x20) == 0) {
          *(short *)(lVar12 + 0x72) = sVar11;
        }
      }
      if (((uVar4 & 2) != 0) && (0 < *(int *)(lVar12 + 0x28))) {
        lVar10 = 0;
        lVar13 = 0;
        do {
          lVar3 = *(longlong *)(lVar12 + 0x30);
          psVar1 = (short *)(lVar3 + lVar10);
          if (*(short *)(lVar3 + lVar10) < 0) {
            sVar11 = -*(short *)(lVar3 + lVar10);
            *psVar1 = sVar11;
            bVar16 = (byte)((ushort)sVar11 >> 0xf);
          }
          else {
            bVar16 = 0;
          }
          iVar5 = *(int *)(lVar3 + 8 + lVar10);
          if (iVar5 < 0) {
            *(int *)(lVar3 + 8 + lVar10) = -iVar5;
          }
          iVar5 = *(int *)(lVar3 + 0xc + lVar10);
          if (iVar5 < 0) {
            *(int *)(lVar3 + 0xc + lVar10) = -iVar5;
          }
          if (bVar16 != 0) {
            psVar1[0] = 0;
            psVar1[1] = 0;
            psVar1[2] = 0;
            psVar1[3] = 0;
            psVar1[4] = 0;
            psVar1[5] = 0;
            psVar1[6] = 0;
            psVar1[7] = 0;
          }
          lVar13 = lVar13 + 1;
          lVar10 = lVar10 + 0x10;
        } while (lVar13 < *(int *)(lVar12 + 0x28));
      }
      uVar7 = _UNK_1400e6838;
      puVar15 = *(undefined8 **)(lVar12 + 0xd0);
      *puVar15 = _DAT_1400e6830;
      puVar15[1] = uVar7;
      puVar15[2] = 0;
      *(undefined4 *)(puVar15 + 0xc) = 1;
      *(undefined1 *)(puVar15 + 0xb) = 0xff;
      if (param_4 == (longlong *)0x0) {
        FUN_14001e63b(lVar12);
      }
      else {
        *param_4 = lVar12;
      }
      goto LAB_14001e41c;
    }
    uVar4 = local_4c;
    if (plVar9 != (longlong *)0x0) {
LAB_14001e51c:
      FUN_14001e63b(lVar12);
      goto LAB_14001e41e;
    }
  }
  else {
    local_80 = 0;
    puVar6 = (undefined8 *)0x0;
LAB_14001e246:
    plVar14 = local_58;
    puVar15 = puVar6;
    if ((((char)uVar4 == '\x02') || ((uVar4 & 0xff) == 0x55)) ||
       (bVar16 = local_61, (uVar4 & 0xff) == 0x51)) {
      if ((param_5 != '\0') &&
         (uVar4 = FUN_140022497(param_1,local_58,param_3,param_4,(byte *)param_2), uVar4 == 0)) {
LAB_14001e40f:
        FUN_14001d05c((longlong)plVar14,(uint)local_61);
LAB_14001e41c:
        uVar4 = 0;
        goto LAB_14001e41e;
      }
      bVar16 = local_61;
      if ((char)uVar4 == '\x02') {
        uVar4 = 2;
      }
    }
LAB_14001e2b6:
    FUN_14001d05c((longlong)local_58,(uint)bVar16);
  }
  if (local_60 != 0) {
    FUN_14001e71b(local_80,local_60,(longlong)puVar15);
  }
LAB_14001e41e:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_b8);
  }
  return uVar4;
}

