/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012116b */

void FUN_18012116b(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,char param_6,char param_7)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined8 unaff_RBX;
  float *pfVar8;
  longlong lVar9;
  byte bVar10;
  byte bVar11;
  uint *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  float fStack_50;
  float fStack_4c;
  ulonglong local_48;
  
  lVar4 = DAT_180419160;
  local_48 = DAT_180402640 ^ (ulonglong)auStack_a8;
  if (param_4 == 0) {
    param_4 = *(longlong *)(param_3 + 0x4c8);
  }
  if (param_2 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_2;
    lVar15 = param_2;
    if ((*(byte *)(param_2 + 0xd4) & 1) == 0) {
      do {
        lVar9 = lVar15;
        lVar15 = *(longlong *)(lVar9 + 0x18);
      } while (*(longlong *)(lVar9 + 0x18) != 0);
    }
  }
  puVar12 = (uint *)(param_4 + 0x10);
  if (param_4 == 0) {
    puVar12 = (uint *)(param_3 + 0x38);
  }
  puVar13 = (uint *)(param_1 + 0x38);
  if (param_2 != 0) {
    puVar13 = (uint *)(param_2 + 0x10);
  }
  uVar16 = *puVar12;
  uVar1 = *puVar13;
  *(undefined1 *)(param_5 + 0xd9) = 1;
  if ((param_7 == '\0') && ((uVar1 >> 0x14 & 1) == 0 && *(char *)(lVar4 + 0x81) == '\0')) {
    if (((byte)((uVar1 & 4) >> 2) & param_2 != 0) == 1) {
      if ((*(byte *)(param_2 + 0x11) & 8) == 0) {
LAB_180121562:
        if ((param_4 != 0) && (*(longlong *)(param_2 + 0x20) != 0 || *(int *)(param_2 + 0x30) != 0))
        {
LAB_180121584:
          if ((*(longlong *)(param_4 + 0x20) != 0) && (*(longlong *)(param_4 + 0xa8) == 0))
          goto LAB_180121217;
        }
        if ((((uVar16 >> 0x15 & 1) == 0) ||
            (((param_2 != 0 && (*(longlong *)(param_2 + 0x20) == 0)) &&
             (*(int *)(param_2 + 0x30) == 0)))) &&
           (((param_2 == 0 || ((uVar16 & 0x400000) == 0)) ||
            ((*(longlong *)(param_2 + 0x20) != 0 || (*(int *)(param_2 + 0x30) != 0))))))
        goto LAB_180121220;
      }
      goto LAB_180121217;
    }
    if (param_2 != 0) goto LAB_180121562;
    if (param_4 != 0) goto LAB_180121584;
    if ((uVar16 >> 0x15 & 1) != 0) goto LAB_180121217;
  }
  else {
LAB_180121217:
    *(undefined1 *)(param_5 + 0xd9) = 0;
  }
LAB_180121220:
  *(undefined1 *)(param_5 + 0xda) = 1;
  if (((uVar1 & 0x10) == 0) && (*(char *)(lVar4 + 0x80) == '\0')) {
    if ((param_2 == 0 || param_7 != '\0') ||
       ((*(longlong *)(param_2 + 0x18) != 0 || ((*(byte *)(param_2 + 0x11) & 8) == 0)))) {
      if ((uVar16 >> 0x13 & 1) != 0) goto LAB_18012125d;
      goto LAB_180121266;
    }
    *(undefined1 *)(param_5 + 0xda) = 0;
LAB_18012126b:
    if ((*(byte *)(param_2 + 0xd4) & 8) == 0) {
      bVar11 = *(byte *)(param_5 + 0xd4) & 0xf7 | *(char *)(param_3 + 0x114) << 3;
    }
    else {
      bVar11 = *(byte *)(param_5 + 0xd4) | 8;
    }
    *(byte *)(param_5 + 0xd4) = bVar11;
    bVar10 = 0x10;
  }
  else {
LAB_18012125d:
    *(undefined1 *)(param_5 + 0xda) = 0;
LAB_180121266:
    if (param_2 != 0) goto LAB_18012126b;
    if (*(char *)(param_1 + 0x114) == '\x01') {
      bVar11 = *(byte *)(param_5 + 0xd4) | 8;
    }
    else {
      bVar11 = *(byte *)(param_5 + 0xd4) & 0xf7 | *(char *)(param_3 + 0x114) << 3;
    }
    *(byte *)(param_5 + 0xd4) = bVar11;
    bVar10 = ((*(byte *)(param_1 + 0x14) & 0x20) == 0) << 4;
  }
  *(byte *)(param_5 + 0xd4) = bVar11 & 0xef | bVar10;
  puVar14 = (undefined8 *)(lVar9 + 0x48);
  if (lVar9 == 0) {
    puVar14 = (undefined8 *)(param_1 + 0x60);
  }
  puVar6 = (undefined8 *)(param_1 + 0x68);
  if (lVar9 != 0) {
    puVar6 = (undefined8 *)(lVar9 + 0x50);
  }
  *(undefined8 *)(param_5 + 0x48) = *puVar14;
  *(undefined8 *)(param_5 + 0x50) = *puVar6;
  *(longlong *)(param_5 + 0xe0) = param_2;
  *(undefined4 *)(param_5 + 0xe8) = 0xffffffff;
  *(undefined1 *)(param_5 + 0xdb) = 0;
  if (*(char *)(param_1 + 0x10c) == '\0') {
    lVar9 = param_5 + 0xf0;
    lVar15 = 0;
    local_78 = param_3;
    do {
      if (lVar15 == 0) {
        if (*(char *)(param_5 + 0xd9) != '\0') goto LAB_1801213c2;
      }
      else if (*(char *)(param_5 + 0xda) == '\x01') {
LAB_1801213c2:
        local_58 = *(undefined8 *)(param_5 + 0x48);
        fStack_50 = (float)*(undefined8 *)(param_5 + 0x50) + *(float *)(param_5 + 0x48);
        fStack_4c = (float)((ulonglong)*(undefined8 *)(param_5 + 0x50) >> 0x20) +
                    *(float *)(param_5 + 0x4c);
        local_88 = lVar4 + 0x118;
        cVar5 = FUN_180131ba0(&local_58,lVar15 - 1U & 0xffffffff,lVar9,
                              CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_7) & 0xffffffff);
        if (cVar5 != '\0') {
          *(int *)(param_5 + 0xe8) = (int)(lVar15 - 1U);
          *(undefined1 *)(param_5 + 0xdb) = 1;
        }
      }
      lVar15 = lVar15 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar15 != 5);
    uVar16 = *(uint *)(param_5 + 0xe8);
    param_3 = local_78;
    if (uVar16 != 0xffffffff) {
      uVar7 = 1;
      bVar2 = false;
      goto LAB_18012144b;
    }
  }
  uVar7 = *(undefined1 *)(param_5 + 0xd9);
  uVar16 = 0xffffffff;
  bVar2 = true;
LAB_18012144b:
  *(undefined1 *)(param_5 + 0xd8) = uVar7;
  if (((param_6 == '\0') && (*(char *)(param_5 + 0xdb) == '\0')) &&
     (*(char *)(lVar4 + 0x82) == '\0')) {
    *(undefined1 *)(param_5 + 0xd8) = 0;
  }
  *(undefined4 *)(param_5 + 0xec) = 0;
  if (!bVar2) {
    local_58 = 0;
    local_60 = *(undefined8 *)(param_5 + 0x48);
    local_68 = 0;
    local_70 = *(undefined8 *)(param_5 + 0x50);
    local_80 = *(undefined8 *)(param_3 + 0x68);
    local_88 = CONCAT44(local_88._4_4_,uVar16);
    FUN_180131e84(&local_60,&local_70,&local_58,&local_68);
    fVar3 = DAT_1802ac570;
    pfVar8 = (float *)&local_68;
    if (1 < uVar16) {
      pfVar8 = (float *)((longlong)&local_68 + 4);
    }
    fVar17 = *pfVar8 / *(float *)(param_5 + 0x50 + (ulonglong)(1 < uVar16) * 4);
    fVar18 = DAT_1802ac570;
    if (fVar17 <= DAT_1802ac570) {
      fVar18 = fVar17;
    }
    fVar18 = (float)(~-(uint)(fVar17 < 0.0) & (uint)fVar18);
    *(undefined8 *)(param_5 + 0x48) = local_58;
    *(undefined8 *)(param_5 + 0x50) = local_68;
    if ((uVar16 & 0xfffffffd) == 1) {
      fVar18 = fVar3 - fVar18;
    }
    *(float *)(param_5 + 0xec) = fVar18;
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_a8);
  }
  return;
}

