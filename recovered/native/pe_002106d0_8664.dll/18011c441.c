/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011c441 */

void FUN_18011c441(void)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  longlong *plVar8;
  int *piVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  float fStack_40;
  float fStack_3c;
  ulonglong local_30;
  
  lVar1 = DAT_180419160;
  local_30 = DAT_180402640 ^ (ulonglong)auStack_78;
  if (*(int *)(DAT_180419160 + 0x22f0) == 0) {
    uVar3 = *(uint *)(DAT_180419160 + 0x22a4);
    if (((byte)(uVar3 >> 10) & *(int *)(DAT_180419160 + 0x2360) == 0) == 1) {
      if (((*(int *)(DAT_180419160 + 0x22e4) != 1) && (*(int *)(DAT_180419160 + 0x22e0) != 0)) ||
         (*(int *)(DAT_180419160 + 0x2398) == 0)) {
        bVar10 = (*(uint *)(DAT_180419160 + 0x22b0) & 0xfffffffe) == 2;
LAB_18011c80d:
        uVar3 = uVar3 | 0x4000;
        *(uint *)(DAT_180419160 + 0x22a4) = uVar3;
        goto LAB_18011c814;
      }
      plVar8 = (longlong *)(DAT_180419160 + 0x2390);
      goto LAB_18011c483;
    }
    bVar10 = (*(uint *)(DAT_180419160 + 0x22b0) & 0xfffffffe) == 2;
    if (*(int *)(DAT_180419160 + 0x2360) == 0) {
      if ((uVar3 >> 10 & 1) != 0) goto LAB_18011c80d;
LAB_18011c814:
      if ((*(int *)(lVar1 + 0x21f8) != 0) && ((uVar3 & 0x4000) == 0)) {
        FUN_18011bf57();
      }
      FUN_18011bfc0(bVar10);
      if ((*(byte *)(lVar1 + 0x2acc) & 0x10) != 0) {
        FUN_1800fdfea("[nav] NavMoveSubmitted but not led to a result!\n");
      }
      goto LAB_18011c757;
    }
    plVar8 = (longlong *)(DAT_180419160 + 0x2358);
  }
  else {
    plVar8 = (longlong *)(DAT_180419160 + 0x22e8);
    uVar3 = *(uint *)(DAT_180419160 + 0x22a4);
LAB_18011c483:
    bVar10 = (*(uint *)(DAT_180419160 + 0x22b0) & 0xfffffffe) == 2;
  }
  piVar9 = (int *)(DAT_180419160 + 0x22b0);
  puVar6 = (uint *)(DAT_180419160 + 0x22a4);
  if ((((uVar3 & 0x20) != 0) && (*(int *)(DAT_180419160 + 9000) != 0)) &&
     (*(int *)(DAT_180419160 + 9000) != *(int *)(DAT_180419160 + 0x21f8))) {
    plVar8 = (longlong *)(DAT_180419160 + 0x2320);
  }
  if (((plVar8 != (longlong *)(DAT_180419160 + 0x2358)) && (*(int *)(DAT_180419160 + 0x2360) != 0))
     && (*(longlong *)(*(longlong *)(DAT_180419160 + 0x2358) + 0x408) ==
         *(longlong *)(DAT_180419160 + 0x2200))) {
    fVar11 = *(float *)(DAT_180419160 + 0x237c);
    fVar12 = *(float *)((longlong)plVar8 + 0x24);
    if (fVar12 <= fVar11) {
      if (((fVar11 != fVar12) || (NAN(fVar11) || NAN(fVar12))) ||
         (*(float *)(plVar8 + 5) < *(float *)(DAT_180419160 + 0x2380) ||
          *(float *)(plVar8 + 5) == *(float *)(DAT_180419160 + 0x2380))) goto LAB_18011c513;
    }
    plVar8 = (longlong *)(DAT_180419160 + 0x2358);
  }
LAB_18011c513:
  if (*(int *)(DAT_180419160 + 0x220c) == 0) {
    fVar11 = (float)*(undefined8 *)(*plVar8 + 0x168);
    fVar12 = (float)((ulonglong)*(undefined8 *)(*plVar8 + 0x168) >> 0x20);
    fStack_40 = *(float *)(plVar8 + 3) + fVar11;
    fStack_3c = *(float *)((longlong)plVar8 + 0x1c) + fVar12;
    local_48 = CONCAT44(*(float *)((longlong)plVar8 + 0x14) + fVar12,*(float *)(plVar8 + 2) + fVar11
                       );
    FUN_1801174ae(&local_50,*plVar8,&local_48,*(undefined4 *)(DAT_180419160 + 0x22a8));
    if ((*(byte *)(lVar1 + 0x22a4) & 0x40) != 0) {
      uVar13 = 0;
      if (*piVar9 == 2) {
        uVar13 = *(undefined4 *)(*plVar8 + 0xe0);
      }
      FUN_18011a76e(*plVar8,uVar13);
    }
  }
  lVar4 = *plVar8;
  if (*(longlong *)(lVar1 + 0x2200) != lVar4) {
    if ((*(byte *)(lVar1 + 0x2acc) & 4) != 0) {
      FUN_1800fdfea("[focus] NavMoveRequest: SetNavWindow(\"%s\")\n",*(undefined8 *)(lVar4 + 8));
      lVar4 = *plVar8;
    }
    *(longlong *)(lVar1 + 0x2200) = lVar4;
    *(undefined8 *)(lVar1 + 0x2258) = 0xffffffffffffffff;
  }
  iVar2 = *(int *)(lVar1 + 0x167c);
  uVar3 = *(uint *)(lVar1 + 0x22a4);
  if ((iVar2 != (int)plVar8[1]) && (iVar2 = (int)plVar8[1], -1 < (short)uVar3)) {
    FUN_180107456();
    iVar2 = (int)plVar8[1];
    uVar3 = *puVar6;
  }
  if (((uVar3 & 0x800) != 0 || *(int *)(lVar1 + 0x21f8) != iVar2) && ((uVar3 & 0x2000) == 0)) {
    *(undefined4 *)(lVar1 + 0x23c8) = *(undefined4 *)(lVar1 + 0x2208);
    *(int *)(lVar1 + 0x23cc) = (int)plVar8[1];
    *(undefined4 *)(lVar1 + 0x23d0) = *(undefined4 *)((longlong)plVar8 + 0xc);
    *(undefined4 *)(lVar1 + 0x23d4) = *(undefined4 *)(lVar1 + 0x22ac);
    *(byte *)(lVar1 + 0x23d8) = (byte)(uVar3 >> 10) & 1;
    *(byte *)(lVar1 + 0x23d9) = (byte)(*(uint *)(plVar8 + 4) >> 0x15) & 1;
    iVar2 = (int)plVar8[1];
  }
  lVar4 = *(longlong *)(lVar1 + 0x2200);
  iVar7 = *(int *)(lVar1 + 0x220c);
  if ((*(byte *)(lVar1 + 0x2acc) & 0x10) != 0) {
    FUN_1800fdfea("[nav] NavMoveRequest: result NavID 0x%08X in Layer %d Window \"%s\"\n",iVar2,
                  iVar7,*(undefined8 *)(lVar4 + 8));
    lVar4 = *(longlong *)(lVar1 + 0x2200);
    iVar7 = *(int *)(lVar1 + 0x220c);
    iVar2 = (int)plVar8[1];
  }
  local_48 = *(undefined8 *)(*(longlong *)(lVar4 + 0x438) + 0x478 + (longlong)iVar7 * 8);
  FUN_18011bfef(iVar2,(longlong)iVar7,*(undefined4 *)((longlong)plVar8 + 0xc),plVar8 + 2);
  if (plVar8[6] != -1) {
    *(longlong *)(lVar1 + 0x2258) = plVar8[6];
  }
  uVar3 = *puVar6;
  if ((uVar3 >> 10 & 1) == 0) {
    local_50 = CONCAT44(((float)((ulonglong)plVar8[3] >> 0x20) +
                        (float)((ulonglong)plVar8[2] >> 0x20)) * DAT_1802de570._4_4_,
                        ((float)plVar8[3] + (float)plVar8[2]) * (float)DAT_1802de570);
    *(undefined4 *)((longlong)&local_48 + (ulonglong)bVar10 * 4) =
         *(undefined4 *)((longlong)&local_50 + (ulonglong)bVar10 * 4);
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(lVar1 + 0x2200) + 0x438) + 0x478 +
     (longlong)*(int *)(lVar1 + 0x220c) * 8) = local_48;
    uVar3 = *(uint *)(lVar1 + 0x22a4);
    if ((uVar3 >> 10 & 1) != 0) goto LAB_18011c711;
  }
  else {
LAB_18011c711:
    if ((*(byte *)((longlong)plVar8 + 0x22) & 0x10) == 0) {
      uVar3 = uVar3 & 0xffffefff;
      *puVar6 = uVar3;
    }
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    *(int *)(lVar1 + 0x2248) = (int)plVar8[1];
    uVar5 = uVar3 >> 4 & 0x20;
    *(uint *)(lVar1 + 0x224c) = uVar5;
    if ((uVar3 >> 10 & 1) != 0) {
      *(uint *)(lVar1 + 0x224c) = uVar5 | 0xd;
    }
  }
  if ((*(byte *)(lVar1 + 0x22a5) & 0x40) == 0) {
    FUN_18011bf57();
  }
LAB_18011c757:
  if (DAT_180402640 != (local_30 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_30 ^ (ulonglong)auStack_78);
  }
  return;
}

