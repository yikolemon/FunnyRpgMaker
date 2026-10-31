/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011bce9 */

void __fastcall
FUN_1011bce9(int param_1,int param_2,int param_3,int param_4,int param_5,char param_6,char param_7)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  ushort uVar9;
  uint *puVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  float *pfVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_50 [3];
  undefined1 local_4d;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined8 local_3c;
  float local_34 [2];
  undefined8 local_2c;
  undefined8 local_24;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  iVar15 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)auStack_50;
  if (param_4 == 0) {
    param_4 = *(int *)(param_3 + 0x434);
  }
  if (param_2 == 0) {
    iVar17 = 0;
  }
  else {
    iVar6 = param_2;
    iVar17 = param_2;
    if ((*(byte *)(param_2 + 0xac) & 1) == 0) {
      do {
        iVar17 = iVar6;
        iVar6 = *(int *)(iVar17 + 0x18);
      } while (*(int *)(iVar17 + 0x18) != 0);
    }
  }
  local_44 = DAT_1039d74c;
  puVar10 = (uint *)(param_4 + 0x10);
  if (param_4 == 0) {
    puVar10 = (uint *)(param_3 + 0x30);
  }
  puVar14 = (uint *)(param_1 + 0x30);
  if (param_2 != 0) {
    puVar14 = (uint *)(param_2 + 0x10);
  }
  uVar18 = *puVar10;
  uVar1 = *puVar14;
  *(undefined1 *)(param_5 + 0xb1) = 1;
  if ((param_7 == '\0') && ((uVar1 >> 0x14 & 1) == 0 && *(char *)(iVar15 + 0x6d) == '\0')) {
    if (((byte)((uVar1 & 4) >> 2) & param_2 != 0) == 1) {
      if ((*(byte *)(param_2 + 0x11) & 8) == 0) {
LAB_1011c070:
        bVar3 = *(int *)(param_2 + 0x24) == 0;
        bVar4 = *(int *)(param_2 + 0x1c) == 0;
        local_4d = bVar3 && bVar4;
        if ((param_4 != 0) && (!bVar3 || !bVar4)) {
LAB_1011c094:
          if ((*(int *)(param_4 + 0x1c) != 0) && (*(int *)(param_4 + 0x84) == 0)) goto LAB_1011bd93;
        }
        if ((((uVar18 >> 0x15 & 1) == 0) ||
            (((param_2 != 0 && (*(int *)(param_2 + 0x1c) == 0)) && (*(int *)(param_2 + 0x24) == 0)))
            ) && (((param_2 == 0 || ((uVar18 & 0x400000) == 0)) ||
                  ((*(int *)(param_2 + 0x1c) != 0 || (*(int *)(param_2 + 0x24) != 0))))))
        goto LAB_1011bd9a;
      }
      goto LAB_1011bd93;
    }
    if (param_2 != 0) goto LAB_1011c070;
    if (param_4 != 0) goto LAB_1011c094;
    if ((uVar18 >> 0x15 & 1) != 0) goto LAB_1011bd93;
  }
  else {
LAB_1011bd93:
    *(undefined1 *)(param_5 + 0xb1) = 0;
  }
LAB_1011bd9a:
  *(undefined1 *)(param_5 + 0xb2) = 1;
  if (((uVar1 & 0x10) == 0) && (*(char *)(iVar15 + 0x6c) == '\0')) {
    if ((param_2 == 0 || param_7 != '\0') ||
       ((*(int *)(param_2 + 0x18) != 0 || ((*(byte *)(param_2 + 0x11) & 8) == 0)))) {
      if ((uVar18 >> 0x13 & 1) != 0) goto LAB_1011bdd7;
      goto LAB_1011bdde;
    }
    *(undefined1 *)(param_5 + 0xb2) = 0;
LAB_1011bde2:
    if ((*(byte *)(param_2 + 0xac) & 8) == 0) {
      bVar7 = *(byte *)(param_5 + 0xac) & 0xf7 | *(char *)(param_3 + 0x104) << 3;
    }
    else {
      bVar7 = *(byte *)(param_5 + 0xac) | 8;
    }
    *(byte *)(param_5 + 0xac) = bVar7;
    uVar9 = CONCAT11(0x10,bVar7);
  }
  else {
LAB_1011bdd7:
    *(undefined1 *)(param_5 + 0xb2) = 0;
LAB_1011bdde:
    if (param_2 != 0) goto LAB_1011bde2;
    if (*(char *)(param_1 + 0x104) == '\x01') {
      bVar7 = *(byte *)(param_5 + 0xac) | 8;
    }
    else {
      bVar7 = *(byte *)(param_5 + 0xac) & 0xf7 | *(char *)(param_3 + 0x104) << 3;
    }
    *(byte *)(param_5 + 0xac) = bVar7;
    uVar9 = CONCAT11(((*(byte *)(param_1 + 0xc) & 0x20) == 0) << 4,bVar7);
  }
  puVar12 = (undefined8 *)(iVar17 + 0x34);
  if (iVar17 == 0) {
    puVar12 = (undefined8 *)(param_1 + 0x50);
  }
  *(byte *)(param_5 + 0xac) = (byte)(uVar9 & 0xffffffef) | (byte)((uVar9 & 0xffffffef) >> 8);
  *(undefined8 *)(param_5 + 0x34) = *puVar12;
  puVar13 = (undefined4 *)(param_1 + 0x58);
  if (iVar17 != 0) {
    puVar13 = (undefined4 *)(iVar17 + 0x3c);
  }
  uVar2 = *puVar13;
  *(undefined4 *)(param_5 + 0x40) = puVar13[1];
  *(undefined4 *)(param_5 + 0x3c) = uVar2;
  *(int *)(param_5 + 0xb4) = param_2;
  *(undefined4 *)(param_5 + 0xb8) = 0xffffffff;
  *(undefined1 *)(param_5 + 0xb3) = 0;
  local_4c = param_2;
  local_48 = param_4;
  local_40 = param_1;
  if (*(char *)(param_1 + 0xfc) == '\0') {
    local_4c = iVar15 + 0xe4;
    iVar15 = param_5 + 0xc0;
    iVar17 = -1;
    do {
      if (iVar17 == -1) {
        if (*(char *)(param_5 + 0xb1) != '\0') goto LAB_1011bf0e;
      }
      else if (*(char *)(param_5 + 0xb2) == '\x01') {
LAB_1011bf0e:
        local_24 = *(undefined8 *)(param_5 + 0x34);
        fStack_1c = (float)*(undefined8 *)(param_5 + 0x3c) + *(float *)(param_5 + 0x34);
        fStack_18 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x3c) >> 0x20) +
                    *(float *)(param_5 + 0x38);
        cVar8 = FUN_1012b954(iVar15,param_7,local_4c);
        if (cVar8 != '\0') {
          *(int *)(param_5 + 0xb8) = iVar17;
          *(undefined1 *)(param_5 + 0xb3) = 1;
        }
      }
      iVar17 = iVar17 + 1;
      iVar15 = iVar15 + 0x10;
    } while (iVar17 != 4);
    uVar18 = *(uint *)(param_5 + 0xb8);
    if (uVar18 != 0xffffffff) {
      uVar11 = 1;
      bVar3 = false;
      goto LAB_1011bf6d;
    }
  }
  uVar11 = *(undefined1 *)(param_5 + 0xb1);
  uVar18 = 0xffffffff;
  bVar3 = true;
LAB_1011bf6d:
  *(undefined1 *)(param_5 + 0xb0) = uVar11;
  if (((param_6 == '\0') && (*(char *)(param_5 + 0xb3) == '\0')) &&
     (*(char *)(local_44 + 0x6e) == '\0')) {
    *(undefined1 *)(param_5 + 0xb0) = 0;
  }
  *(undefined4 *)(param_5 + 0xbc) = 0;
  if (!bVar3) {
    local_24 = 0;
    local_2c = *(undefined8 *)(param_5 + 0x34);
    local_34[0] = 0.0;
    local_34[1] = 0.0;
    local_3c = *(undefined8 *)(param_5 + 0x3c);
    FUN_1012bc3c(&local_24,local_34,uVar18);
    fVar5 = DAT_1028b430;
    pfVar16 = local_34;
    if (1 < uVar18) {
      pfVar16 = local_34 + 1;
    }
    fVar19 = *pfVar16 / *(float *)(param_5 + 0x3c + (uint)(1 < uVar18) * 4);
    fVar20 = DAT_1028b430;
    if (fVar19 <= DAT_1028b430) {
      fVar20 = fVar19;
    }
    fVar20 = (float)(~-(uint)(fVar19 < 0.0) & (uint)fVar20);
    *(undefined8 *)(param_5 + 0x34) = local_24;
    *(float *)(param_5 + 0x40) = local_34[1];
    *(float *)(param_5 + 0x3c) = local_34[0];
    if ((uVar18 & 0xfffffffd) == 1) {
      fVar20 = fVar5 - fVar20;
    }
    *(float *)(param_5 + 0xbc) = fVar20;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_50)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

