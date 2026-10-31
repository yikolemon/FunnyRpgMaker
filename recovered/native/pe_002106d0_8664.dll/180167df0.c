/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180167df0 */

void FUN_180167df0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  short sVar3;
  bool bVar4;
  undefined4 uVar5;
  float fVar6;
  longlong lVar7;
  char cVar8;
  byte *pbVar9;
  longlong *plVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  int local_94;
  
  lVar7 = DAT_180419160;
  if (*(char *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10e) != '\0') {
    return;
  }
  uVar12 = (uint)*(short *)(param_1 + 0x226);
  if ((*(short *)(param_1 + 0x226) < 0) || (*(int *)(param_1 + 0x6c) <= (int)uVar12)) {
    if ((param_2 & 1) == 0) goto LAB_180167e6f;
  }
  else {
    if ((param_2 & 1) == 0) {
LAB_180167e6f:
      bVar4 = false;
      goto LAB_180167f0e;
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      pbVar9 = (byte *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar12 * 0x74);
      if ((*pbVar9 & 0x20) == 0) {
        param_4 = CONCAT71((int7)((ulonglong)param_4 >> 8),pbVar9[0x66]);
      }
      else {
        param_4 = 0;
      }
      pcVar11 = "*Missing Text*";
      if (*(char **)(DAT_180419160 + 0x29e0) != (char *)0x0) {
        pcVar11 = *(char **)(DAT_180419160 + 0x29e0);
      }
      cVar8 = FUN_1801377a6(pcVar11,0,0,param_4);
      if (cVar8 != '\0') {
        FUN_18016840e(param_1,uVar12);
      }
    }
  }
  if ((*(short *)(param_1 + 0x204) == *(short *)(param_1 + 0x202)) &&
     ((*(uint *)(param_1 + 4) & 0xe000) != 0x4000)) {
    plVar10 = (longlong *)(DAT_180419160 + 0x29e8);
  }
  else {
    plVar10 = (longlong *)(DAT_180419160 + 0x29f0);
  }
  pcVar11 = "*Missing Text*";
  if ((char *)*plVar10 != (char *)0x0) {
    pcVar11 = (char *)*plVar10;
  }
  bVar4 = true;
  param_4 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
  cVar8 = FUN_1801377a6(pcVar11,0,0,param_4);
  if (cVar8 != '\0') {
    FUN_18016ac2b(param_1);
  }
LAB_180167f0e:
  if ((param_2 & 2) != 0) {
    pcVar11 = "*Missing Text*";
    if (*(char **)(DAT_180419160 + 0x29f8) != (char *)0x0) {
      pcVar11 = *(char **)(DAT_180419160 + 0x29f8);
    }
    cVar8 = FUN_1801377a6(pcVar11,0,0,
                          CONCAT71((int7)((ulonglong)param_4 >> 8),*(undefined1 *)(param_1 + 0x242))
                          ^ 1);
    bVar4 = true;
    if (cVar8 != '\0') {
      *(undefined1 *)(param_1 + 0x244) = 1;
    }
  }
  if ((param_2 & 4) == 0) {
    return;
  }
  if (bVar4) {
    FUN_180137ca1();
  }
  if ((((*(int *)(lVar7 + 0x167c) == 0) ||
       (*(longlong *)(lVar7 + 0x16a0) != *(longlong *)(lVar7 + 0x1608))) ||
      ((longlong)*(short *)(param_1 + 0x21a) == -1)) || (*(char *)(lVar7 + 0x168c) != '\x01')) {
    iVar13 = *(int *)(param_1 + 0x6c) + -1;
    local_94 = 0;
    bVar4 = false;
  }
  else {
    iVar13 = (int)*(short *)(*(longlong *)(param_1 + 0x18) + 0x56 +
                            (longlong)*(short *)(param_1 + 0x21a) * 0x74);
    local_94 = FUN_18016657b(param_1,iVar13,0);
    iVar13 = FUN_18016657b(param_1,iVar13,*(int *)(param_1 + 0x6c) + -1);
    bVar4 = true;
  }
  FUN_18011648a(0x10,0);
  fVar6 = DAT_1802dbb2c;
  uVar5 = DAT_1802bb8e0;
  if (0 < *(int *)(param_1 + 0x6c)) {
    lVar15 = 0;
    do {
      lVar16 = *(longlong *)(param_1 + 0x18);
      sVar3 = *(short *)(*(longlong *)(param_1 + 0x28) + lVar15 * 2);
      lVar17 = (longlong)sVar3 * 0x74;
      uVar12 = *(uint *)(lVar16 + lVar17);
      cVar8 = (char)uVar12;
      if ((uVar12 & 1) == 0) {
        pcVar11 = (char *)FUN_18016a483(param_1,(longlong)sVar3 & 0xffffffff);
        if ((pcVar11 == (char *)0x0) || (*pcVar11 == '\0')) {
          pcVar11 = "<Unknown>";
        }
        lVar16 = lVar16 + lVar17;
        bVar18 = -1 < cVar8;
        if (*(char *)(lVar16 + 0x67) == '\x01') {
          bVar18 = 1 < *(short *)(param_1 + 0x202) && -1 < cVar8;
        }
        if (bVar4) {
          bVar18 = (bool)(bVar18 & (*(short *)(lVar16 + 0x56) <= iVar13 &&
                                   local_94 <= *(short *)(lVar16 + 0x56)));
        }
        cVar8 = FUN_18016cb4d(pcVar11,*(char *)(lVar16 + 0x67),bVar18);
        if (cVar8 != '\0') {
          *(byte *)(lVar16 + 0x68) = *(byte *)(lVar16 + 0x67) ^ 1;
        }
        cVar8 = FUN_180110b56();
        if (((cVar8 != '\0') && (cVar8 = FUN_1801083e1(0,uVar5), cVar8 != '\0')) &&
           ((*(int *)(lVar7 + 0x169c) == 1 && ((*(byte *)(param_1 + 4) & 2) != 0)))) {
          *(undefined1 *)(lVar7 + 0x168c) = 1;
          *(short *)(param_1 + 0x21a) = sVar3;
          cVar8 = FUN_18010759c(0);
          if (cVar8 == '\0') {
            fVar1 = *(float *)(lVar7 + 0x11c);
            fVar19 = *(float *)(lVar7 + 0x1ff0);
            fVar2 = *(float *)(lVar7 + 0x1ff8);
            fVar20 = (fVar19 + fVar2) * fVar6;
            uVar12 = -(uint)(fVar1 < fVar20);
            fVar19 = (float)FUN_180283cd0((float)(~uVar12 & (uint)(fVar1 - fVar2) |
                                                 (uint)(fVar19 - fVar1) & uVar12) / (fVar2 - fVar19)
                                         );
            iVar14 = -(int)fVar19;
            if (fVar20 <= fVar1) {
              iVar14 = (int)fVar19;
            }
            FUN_180166536(param_1,(int)sVar3,iVar14 + *(short *)(lVar16 + 0x56));
          }
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 0x6c));
  }
  FUN_180116548();
  return;
}

