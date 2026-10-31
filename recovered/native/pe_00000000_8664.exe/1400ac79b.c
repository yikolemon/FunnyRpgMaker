/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ac79b */

ulonglong FUN_1400ac79b(undefined8 *param_1,int param_2,byte *param_3,undefined1 *param_4,
                       uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  byte bVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  bool bVar25;
  uint local_84;
  byte local_80;
  
  lVar5 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar12 = *(longlong *)(lVar5 + 0x1608);
  lVar9 = *(longlong *)(lVar5 + 0x1610);
  puVar15 = (uint *)(lVar5 + 0x1fa0);
  if (*(int *)(lVar5 + 0x1fe0) == param_2) {
    puVar15 = (uint *)(lVar5 + 0x1fe4);
  }
  uVar2 = *puVar15;
  uVar4 = param_5 | 0x440000;
  if ((uVar2 >> 0x11 & 1) == 0) {
    uVar4 = param_5;
  }
  bVar25 = false;
  uVar20 = (uint)((uVar2 & 8) == 0) * 0x10 + 0x10;
  if ((uVar4 & 0x3f0) != 0) {
    uVar20 = 0;
  }
  if (((uVar4 >> 0xb & 1) != 0) && (lVar9 != 0)) {
    if (*(longlong *)(lVar9 + 0x428) == *(longlong *)(lVar12 + 0x428)) {
      *(longlong *)(lVar5 + 0x1610) = lVar12;
      bVar25 = true;
    }
    else {
      bVar25 = false;
    }
  }
  local_80 = FUN_140080b88(param_1,param_2,param_5 * 4 & 0x4000 | uVar2);
  if (*(char *)(lVar5 + 0x2428) == '\x01') {
    if ((((uVar4 >> 9 & 1) == 0) || ((*(byte *)(lVar5 + 0x242c) & 4) != 0)) ||
       (cVar6 = FUN_1400808b4(), cVar6 == '\0')) {
      local_84 = 0;
    }
    else {
      FUN_140080777();
      local_84 = 0;
      local_80 = 1;
      if ((DAT_1402114e8 <= *(float *)(lVar5 + 0x1670)) &&
         (*(float *)(lVar5 + 0x1670) - *(float *)(lVar5 + 0x48) <= DAT_1402114e8)) {
        *(int *)(lVar5 + 0x24b8) = param_2;
        uVar8 = FUN_140081404(lVar12,0);
        local_80 = 1;
        local_84 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      }
    }
    bVar17 = local_80;
    if ((*(int *)(lVar5 + 0x24b0) == param_2) &&
       (bVar17 = 1, (*(byte *)(lVar5 + 0x24a5) & 0x20) == 0)) {
      bVar17 = local_80;
    }
  }
  else {
    local_84 = 0;
    bVar17 = local_80;
  }
  local_80 = bVar17;
  if (bVar25) {
    *(longlong *)(lVar5 + 0x1610) = lVar9;
  }
  uVar20 = uVar20 | (uVar4 & 7) == 0 | uVar4;
  uVar22 = 0;
  iVar21 = 0;
  if ((uVar4 >> 0x15 & 1) == 0) {
    iVar21 = param_2;
  }
  if (local_80 == 0) {
    uVar19 = (ulonglong)local_84;
  }
  else {
    uVar18 = 0xffffffff;
    uVar24 = 0xffffffff;
    do {
      if ((uVar20 >> (uVar22 & 0x1f) & 1) != 0) {
        cVar6 = FUN_140081ebc(uVar22,0,iVar21);
        uVar14 = uVar18;
        if (uVar18 == 0xffffffff) {
          uVar14 = uVar22;
        }
        if (cVar6 != '\0') {
          uVar18 = uVar14;
        }
        cVar6 = FUN_1400920ad(uVar22);
        uVar14 = uVar22;
        if (uVar24 != 0xffffffff) {
          uVar14 = uVar24;
        }
        if (cVar6 != '\0') {
          uVar24 = uVar14;
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 3);
    if (((uVar4 >> 0x10 & 1) == 0) ||
       (((*(char *)(lVar5 + 0x138) == '\0' && (*(char *)(lVar5 + 0x139) == '\0')) &&
        (*(char *)(lVar5 + 0x13a) == '\0')))) {
      if ((uVar18 != 0xffffffff) && (*(int *)(lVar5 + 0x167c) != param_2)) {
        if ((uVar4 >> 0x14 & 1) == 0) {
          FUN_140092507(uVar18 + 0x290,param_2,0);
        }
        uVar13 = (undefined1)uVar18;
        if ((uVar20 & 0x60) != 0) {
          FUN_140080508(param_2,lVar12);
          *(undefined1 *)(lVar5 + 0x168f) = uVar13;
          if ((uVar4 >> 0x12 & 1) == 0) {
            FUN_140095319(param_2,lVar12);
            uVar8 = 0;
          }
          else {
            uVar8 = 1;
            if ((uVar4 >> 0x16 & 1) != 0) goto LAB_1400acdf6;
          }
          FUN_140081404(lVar12,uVar8);
        }
LAB_1400acdf6:
        if (((uVar20 & 0x10) != 0) ||
           (((uVar4 >> 8 & 1) != 0 && (*(short *)(lVar5 + 0xb5a + (longlong)(int)uVar18 * 2) == 2)))
           ) {
          if ((uVar4 >> 0x11 & 1) == 0) {
            uVar8 = FUN_140080508(param_2,lVar12);
          }
          else {
            uVar8 = FUN_14008076e();
          }
          *(undefined1 *)(lVar5 + 0x168f) = uVar13;
          if ((uVar4 >> 0x12 & 1) == 0) {
            FUN_140095319(param_2,lVar12);
            uVar8 = 0;
          }
          else {
            local_84 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
            uVar8 = 1;
            if ((uVar4 >> 0x16 & 1) != 0) goto LAB_1400ace6b;
          }
          uVar8 = FUN_140081404(lVar12,uVar8);
          local_84 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
        }
LAB_1400ace6b:
        if ((char)uVar4 < '\0') {
          if ((uVar4 >> 0x11 & 1) == 0) {
            FUN_140080508(param_2,lVar12);
          }
          *(undefined1 *)(lVar5 + 0x168f) = uVar13;
        }
      }
      uVar19 = (ulonglong)local_84;
      if (((char)uVar4 < '\0') && (uVar24 != 0xffffffff)) {
        uVar19 = CONCAT71((uint7)(uint3)(local_84 >> 8),1);
        if ((uVar2 & 8) != 0) {
          uVar19 = 1;
          if (*(float *)(lVar5 + 0xa8) <= *(float *)(lVar5 + 0xbc0 + (longlong)(int)uVar24 * 4)) {
            uVar19 = (ulonglong)(byte)local_84;
          }
        }
        if ((uVar4 >> 0x12 & 1) == 0) {
          FUN_140095319(param_2,lVar12);
        }
        FUN_14008076e();
      }
      if ((((uVar2 & 8) != 0) && (*(int *)(lVar5 + 0x167c) == param_2)) &&
         (0.0 < *(float *)(lVar5 + 0xbac + (longlong)*(char *)(lVar5 + 0x168f) * 4))) {
        cVar6 = FUN_140081ebc((longlong)*(char *)(lVar5 + 0x168f),1,iVar21);
        uVar19 = uVar19 & 0xff;
        if (cVar6 != '\0') {
          uVar19 = 1;
        }
      }
    }
    else {
      uVar19 = (ulonglong)local_84;
    }
    if ((char)uVar19 == '\0') {
      uVar19 = 0;
    }
    else {
      uVar19 = CONCAT71((int7)(uVar19 >> 8),1);
      if (*(char *)(lVar5 + 0x7e) == '\x01') {
        *(undefined1 *)(lVar5 + 0x21f4) = 0;
      }
    }
  }
  bVar17 = local_80;
  if ((uVar2 & 0x40) == 0) {
    if ((*(int *)(lVar5 + 0x21f8) == param_2) && (*(char *)(lVar5 + 0x21f4) == '\x01')) {
      bVar17 = 1;
      if (*(char *)(lVar5 + 0x21f5) == '\0') {
        bVar17 = local_80;
      }
      if ((uVar4 >> 0x13 & 1) != 0) {
        bVar17 = local_80;
      }
    }
    local_80 = bVar17;
    bVar17 = 1;
    if (*(int *)(lVar5 + 0x2218) == param_2) {
      iVar23 = *(int *)(lVar5 + 0x2214);
      bVar25 = *(int *)(lVar5 + 0x221c) == param_2;
      if (((uVar2 & 8) != 0) && (*(int *)(lVar5 + 0x221c) != param_2)) {
        lVar9 = FUN_140076e46(DAT_140f2a910,0x20c);
        lVar10 = FUN_140076e46(DAT_140f2a910,0x20d);
        lVar11 = FUN_140076e46(DAT_140f2a910,(*(byte *)(lVar5 + 0x79) ^ 1) * 2 + 0x27b);
        uVar1 = *(undefined4 *)(lVar11 + 4);
        uVar8 = FUN_14007b71f(*(undefined4 *)(lVar9 + 4),*(undefined4 *)(lVar10 + 4));
        uVar8 = FUN_14007b71f(uVar8,uVar1);
        iVar7 = FUN_140091774((float)uVar8 - *(float *)(lVar5 + 0x48),uVar8,
                              *(undefined4 *)(lVar5 + 0xa8),*(undefined4 *)(lVar5 + 0xac));
        bVar25 = 0 < iVar7;
      }
      bVar17 = 1;
      if ((iVar23 == param_2) || (bVar25)) {
        FUN_140080508(param_2,lVar12);
        *(undefined4 *)(lVar5 + 0x169c) = *(undefined4 *)(lVar5 + 0x2250);
        if (((uVar4 >> 0x12 & 1) == 0) && ((*(byte *)(lVar5 + 0x2220) & 0x10) == 0)) {
          FUN_140095319(param_2,lVar12);
        }
        if ((*(byte *)(lVar5 + 0x2220) & 0x10) != 0) {
          *(undefined1 *)(lVar5 + 0x168e) = 1;
        }
        uVar19 = CONCAT71((uint7)(uint3)((uint)iVar23 >> 8),1);
        bVar17 = 1;
      }
    }
  }
  if (*(int *)(lVar5 + 0x167c) != param_2) {
    uVar13 = 0;
    goto LAB_1400accba;
  }
  if (*(int *)(lVar5 + 0x169c) - 2U < 2) {
    uVar13 = 1;
    if (*(int *)(lVar5 + 0x2218) != param_2) {
      FUN_14008076e();
LAB_1400acca0:
      uVar13 = 0;
    }
  }
  else {
    if (*(int *)(lVar5 + 0x169c) != 1) goto LAB_1400acca0;
    if (*(char *)(lVar5 + 0x1688) == '\x01') {
      *(ulonglong *)(lVar5 + 0x1694) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar5 + 0x118) >> 0x20) -
                    (float)((ulonglong)*param_1 >> 0x20),
                    (float)*(undefined8 *)(lVar5 + 0x118) - (float)*param_1);
    }
    iVar23 = (int)*(char *)(lVar5 + 0x168f);
    if (iVar23 == -1) {
LAB_1400acedd:
      FUN_14008076e();
      uVar13 = 0;
    }
    else {
      cVar6 = FUN_140092066(iVar23,iVar21);
      uVar13 = 1;
      if (cVar6 == '\0') {
        if ((((uVar4 & 0x40) != 0) || (((byte)uVar20 >> 5 & local_80) != 0)) &&
           (*(char *)(lVar5 + 0x2428) == '\0')) {
          lVar12 = (longlong)iVar23;
          if (((uVar4 >> 8 & 1) == 0) || (*(char *)(lVar5 + 0xb6e + lVar12) != '\x01')) {
            bVar25 = false;
          }
          else {
            bVar25 = *(short *)(lVar5 + 0xb64 + lVar12 * 2) == 2;
          }
          if ((uVar2 & 8) == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = *(float *)(lVar5 + 0xa8) <= *(float *)(lVar5 + 0xbc0 + lVar12 * 4);
          }
          cVar6 = FUN_140091dcf(iVar23 + 0x290,iVar21);
          uVar16 = uVar19 & 0xff;
          uVar19 = 1;
          if ((bool)(bVar25 | bVar3)) {
            uVar19 = uVar16;
          }
          if (cVar6 == '\0') {
            uVar19 = uVar16;
          }
        }
        goto LAB_1400acedd;
      }
    }
    if (((uVar4 >> 0x12 & 1) == 0) && (*(char *)(lVar5 + 0x7e) == '\x01')) {
      *(undefined1 *)(lVar5 + 0x21f4) = 0;
    }
  }
  if ((char)uVar19 == '\0') {
    uVar19 = 0;
  }
  else {
    *(undefined1 *)(lVar5 + 0x168b) = 1;
    uVar19 = CONCAT71((int7)(uVar19 >> 8),1);
  }
LAB_1400accba:
  if (param_3 != (byte *)0x0) {
    if (*(int *)(lVar5 + 0x2238) == param_2) {
      local_80 = bVar17;
    }
    *param_3 = local_80;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar13;
  }
  return uVar19;
}

