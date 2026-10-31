/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cb7ea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1801cb7ea(undefined8 *param_1,uint *param_2,int param_3,longlong *param_4,char param_5)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  short sVar13;
  longlong lVar14;
  undefined8 *puVar15;
  byte bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined1 uVar20;
  undefined1 auStack_b8 [32];
  uint *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined1 local_61;
  longlong local_60;
  undefined8 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_b8;
  local_60 = 0;
  if (param_2 == (uint *)0x0) {
    uVar9 = 6;
    goto LAB_1801cba46;
  }
  if ((*param_2 & 2) == 0) {
    uVar20 = false;
  }
  else {
    uVar20 = *(longlong *)(param_2 + 8) != 0;
  }
  local_61 = uVar20;
  uVar9 = FUN_1801ca52e(param_1,param_2,&local_58);
  if (uVar9 == 0) {
    if (-1 < param_3 && param_4 == (longlong *)0x0) {
      uVar9 = 6;
      uVar17 = 0;
      puVar19 = (undefined8 *)0x0;
      uVar20 = local_61;
      goto LAB_1801cb8de;
    }
    uVar17 = *param_1;
    local_80 = uVar17;
    if (((*param_2 & 8) == 0) ||
       (puVar19 = *(undefined8 **)(param_2 + 10), puVar19 == (undefined8 *)0x0)) {
      uVar2 = *(uint *)((longlong)param_1 + 0x14);
      if ((ulonglong)uVar2 == 0) {
        uVar9 = 0xb;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        puVar15 = param_1 + 3;
        uVar9 = 0xb;
        puVar11 = (undefined8 *)0x0;
        local_78 = param_4;
        do {
          puVar19 = (undefined8 *)*puVar15;
          if ((*(byte *)*puVar19 & 1) != 0) {
            if ((*param_2 & 0x10) == 0) {
              uVar9 = 0;
              local_90 = 0;
            }
            else {
              uVar9 = param_2[0xc];
              local_90 = *(undefined8 *)(param_2 + 0xe);
            }
            local_88 = &local_60;
            local_98 = (uint *)CONCAT44(local_98._4_4_,uVar9);
            uVar9 = FUN_1801cfd5e(puVar19,&local_58,&local_61,param_3);
            param_4 = local_78;
            uVar17 = local_80;
            if (uVar9 == 0) goto LAB_1801cbad4;
            puVar11 = puVar19;
            if (((param_5 != '\0') &&
                (iVar10 = strcmp(*(char **)(*(longlong *)*puVar15 + 8),"truetype"),
                uVar18 = local_58, (char)uVar9 == -0x72)) && (iVar10 == 0)) {
              uVar9 = FUN_1801ce63e(local_58,0);
              param_4 = local_78;
              if (uVar9 != 0) break;
              uVar9 = FUN_1801cff28(param_1,uVar18,param_3,local_78);
              if (uVar9 == 0) goto LAB_1801cba37;
            }
            param_4 = local_78;
            if ((char)uVar9 != '\x02') break;
          }
          puVar15 = puVar15 + 1;
          param_4 = local_78;
        } while (puVar15 < param_1 + (ulonglong)uVar2 + 3);
      }
      goto LAB_1801cb86e;
    }
    uVar9 = 0x20;
    if ((*(byte *)*puVar19 & 1) == 0) goto LAB_1801cb8de;
    if ((*param_2 & 0x10) == 0) {
      uVar9 = 0;
      local_90 = 0;
    }
    else {
      uVar9 = param_2[0xc];
      local_90 = *(undefined8 *)(param_2 + 0xe);
    }
    local_88 = &local_60;
    local_98 = (uint *)CONCAT44(local_98._4_4_,uVar9);
    uVar9 = FUN_1801cfd5e(puVar19,&local_58,&local_61,param_3);
    uVar20 = local_61;
    if (uVar9 != 0) goto LAB_1801cb8de;
LAB_1801cbad4:
    lVar12 = FUN_1801cc006(uVar17,0x18,&local_4c);
    lVar8 = local_60;
    if (local_4c == 0) {
      *(longlong *)(lVar12 + 0x10) = local_60;
      FUN_1801cc034(*(longlong *)(local_60 + 0x90) + 0x20,lVar12);
      if (-1 < param_3) {
        uVar9 = FUN_1801cabcc(lVar8,0);
        if ((uVar9 != 0) || (uVar9 = FUN_1801cbe99(lVar8,&local_70), uVar9 != 0))
        goto LAB_1801cbb44;
        *(undefined8 *)(lVar8 + 0x80) = local_70;
      }
      uVar9 = *(uint *)(lVar8 + 8);
      if ((uVar9 & 1) != 0) {
        sVar13 = *(short *)(lVar8 + 0x6e);
        if (sVar13 < 0) {
          sVar13 = -sVar13;
          *(short *)(lVar8 + 0x6e) = sVar13;
        }
        if ((uVar9 & 0x20) == 0) {
          *(short *)(lVar8 + 0x72) = sVar13;
        }
      }
      if (((uVar9 & 2) != 0) && (0 < *(int *)(lVar8 + 0x28))) {
        lVar12 = 0;
        lVar14 = 0;
        do {
          lVar3 = *(longlong *)(lVar8 + 0x30);
          psVar1 = (short *)(lVar3 + lVar12);
          if (*(short *)(lVar3 + lVar12) < 0) {
            sVar13 = -*(short *)(lVar3 + lVar12);
            *psVar1 = sVar13;
            bVar16 = (byte)((ushort)sVar13 >> 0xf);
          }
          else {
            bVar16 = 0;
          }
          iVar10 = *(int *)(lVar3 + 8 + lVar12);
          if (iVar10 < 0) {
            *(int *)(lVar3 + 8 + lVar12) = -iVar10;
          }
          iVar10 = *(int *)(lVar3 + 0xc + lVar12);
          if (iVar10 < 0) {
            *(int *)(lVar3 + 0xc + lVar12) = -iVar10;
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
          lVar14 = lVar14 + 1;
          lVar12 = lVar12 + 0x10;
        } while (lVar14 < *(int *)(lVar8 + 0x28));
      }
      uVar7 = _UNK_1803296ec;
      uVar6 = _UNK_1803296e8;
      uVar5 = _UNK_1803296e4;
      puVar4 = *(undefined4 **)(lVar8 + 0xd0);
      *puVar4 = _DAT_1803296e0;
      puVar4[1] = uVar5;
      puVar4[2] = uVar6;
      puVar4[3] = uVar7;
      *(undefined8 *)(puVar4 + 4) = 0;
      puVar4[0x18] = 1;
      *(undefined1 *)(puVar4 + 0x16) = 0xff;
      if (param_4 == (longlong *)0x0) {
        FUN_1801cbce0(lVar8);
      }
      else {
        *param_4 = lVar8;
      }
      goto LAB_1801cba44;
    }
    uVar9 = local_4c;
    if (lVar12 != 0) {
LAB_1801cbb44:
      FUN_1801cbce0(lVar8);
      goto LAB_1801cba46;
    }
  }
  else {
    local_80 = 0;
    puVar11 = (undefined8 *)0x0;
LAB_1801cb86e:
    uVar18 = local_58;
    puVar19 = puVar11;
    if ((((char)uVar9 == '\x02') || ((uVar9 & 0xff) == 0x55)) ||
       (uVar17 = local_80, uVar20 = local_61, (uVar9 & 0xff) == 0x51)) {
      if ((param_5 != '\0') &&
         (local_98 = param_2, uVar9 = FUN_1801d0094(param_1,local_58,param_3,param_4), uVar9 == 0))
      {
LAB_1801cba37:
        FUN_1801ca684(uVar18,local_61);
LAB_1801cba44:
        uVar9 = 0;
        goto LAB_1801cba46;
      }
      uVar17 = local_80;
      uVar20 = local_61;
      if ((char)uVar9 == '\x02') {
        uVar9 = 2;
      }
    }
LAB_1801cb8de:
    FUN_1801ca684(local_58,uVar20);
  }
  if (local_60 != 0) {
    FUN_1801cbdc0(uVar17,local_60,puVar19);
  }
LAB_1801cba46:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_b8);
  }
  return uVar9;
}

