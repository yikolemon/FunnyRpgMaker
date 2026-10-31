/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140108d30 */

ulonglong FUN_140108d30(void)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong local_48;
  longlong local_40;
  char local_30;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_48,(__crt_locale_pointers *)0x0);
  uVar3 = 0;
  lVar5 = 0x2c0;
  plVar1 = *(longlong **)(local_40 + 0x120);
  uVar7 = uVar3;
  do {
    uVar6 = 0;
    iVar9 = (int)uVar7;
    if (iVar9 == 1) {
      uVar3 = _malloc_base(lVar5);
      if (uVar3 == 0) break;
      FUN_1401366a0(uVar3,0,lVar5);
      lVar5 = 0x2c0;
    }
    lVar11 = uVar3 - (longlong)plVar1;
    plVar10 = plVar1;
    do {
      if (iVar9 == 1) {
        *(ulonglong *)(lVar11 + (longlong)plVar10) = uVar3 + lVar5;
        iVar2 = FUN_140120d90();
        if (iVar2 != 0) goto LAB_1401093f0;
      }
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(*plVar10 + lVar4) != '\0');
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 1 + lVar4;
      plVar10 = plVar10 + 1;
    } while (uVar6 < 7);
    uVar7 = 0;
    plVar10 = plVar1 + 7;
    do {
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + lVar11) = uVar3 + lVar5;
        iVar2 = FUN_140120d90();
        if (iVar2 != 0) goto LAB_1401093f0;
      }
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(*plVar10 + lVar4) != '\0');
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 1 + lVar4;
      plVar10 = plVar10 + 1;
    } while (uVar7 < 7);
    uVar7 = 0;
    plVar10 = plVar1 + 0xe;
    do {
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + lVar11) = uVar3 + lVar5;
        iVar2 = FUN_140120d90();
        if (iVar2 != 0) goto LAB_1401093f0;
      }
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(*plVar10 + lVar4) != '\0');
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 1 + lVar4;
      plVar10 = plVar10 + 1;
    } while (uVar7 < 0xc);
    uVar7 = 0;
    plVar10 = plVar1 + 0x1a;
    do {
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + lVar11) = uVar3 + lVar5;
        iVar2 = FUN_140120d90();
        if (iVar2 != 0) goto LAB_1401093f0;
      }
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(*plVar10 + lVar4) != '\0');
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 1 + lVar4;
      plVar10 = plVar10 + 1;
    } while (uVar7 < 0xc);
    uVar7 = 0;
    plVar10 = plVar1 + 0x26;
    do {
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + lVar11) = uVar3 + lVar5;
        iVar2 = FUN_140120d90();
        if (iVar2 != 0) goto LAB_1401093f0;
      }
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(*plVar10 + lVar4) != '\0');
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 1 + lVar4;
      plVar10 = plVar10 + 1;
    } while (uVar7 < 2);
    if (iVar9 == 1) {
      *(ulonglong *)(uVar3 + 0x140) = uVar3 + lVar5;
      iVar2 = FUN_140120d90();
      if (iVar2 != 0) goto LAB_1401093f0;
    }
    uVar7 = 0;
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(char *)(plVar1[0x28] + lVar11) != '\0');
    lVar11 = lVar5 + 1 + lVar11;
    if (iVar9 == 1) {
      *(ulonglong *)(uVar3 + 0x148) = uVar3 + lVar11;
      iVar2 = FUN_140120d90();
      if (iVar2 != 0) goto LAB_1401093f0;
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(char *)(plVar1[0x29] + lVar5) != '\0');
    lVar5 = lVar11 + 1 + lVar5;
    if (iVar9 == 1) {
      *(ulonglong *)(uVar3 + 0x150) = uVar3 + lVar5;
      iVar2 = FUN_140120d90();
      if (iVar2 != 0) goto LAB_1401093f0;
    }
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(char *)(plVar1[0x2a] + lVar11) != '\0');
    uVar6 = lVar5 + 1 + lVar11;
    if (iVar9 == 1) {
      *(int *)(uVar3 + 0x158) = (int)plVar1[0x2b];
      *(undefined4 *)(uVar3 + 0x15c) = 0;
    }
    plVar10 = plVar1 + 0x2c;
    do {
      for (; (uVar6 & 1) != 0; uVar6 = uVar6 + 1) {
      }
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + (uVar3 - (longlong)plVar1)) =
             uVar3 + (uVar6 & 0xfffffffffffffffe);
        iVar2 = FUN_140121bd0();
        if (iVar2 != 0) goto LAB_1401093f0;
      }
      uVar8 = 0;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)(*plVar10 + lVar5 * 2) != 0);
      uVar7 = uVar7 + 1;
      uVar6 = uVar6 + lVar5 * 2 + 2;
      plVar10 = plVar10 + 1;
    } while (uVar7 < 7);
    plVar10 = plVar1 + 0x33;
    do {
      for (; (uVar6 & 1) != 0; uVar6 = uVar6 + 1) {
      }
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + (uVar3 - (longlong)plVar1)) =
             uVar3 + (uVar6 & 0xfffffffffffffffe);
        iVar2 = FUN_140121bd0();
        if (iVar2 != 0) goto LAB_1401093f0;
      }
      uVar7 = 0;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)(*plVar10 + lVar5 * 2) != 0);
      uVar8 = uVar8 + 1;
      uVar6 = uVar6 + lVar5 * 2 + 2;
      plVar10 = plVar10 + 1;
    } while (uVar8 < 7);
    plVar10 = plVar1 + 0x3a;
    do {
      for (; (uVar6 & 1) != 0; uVar6 = uVar6 + 1) {
      }
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + (uVar3 - (longlong)plVar1)) =
             uVar3 + (uVar6 & 0xfffffffffffffffe);
        iVar2 = FUN_140121bd0();
        if (iVar2 != 0) goto LAB_1401093f0;
      }
      uVar8 = 0;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)(*plVar10 + lVar5 * 2) != 0);
      uVar7 = uVar7 + 1;
      uVar6 = uVar6 + lVar5 * 2 + 2;
      plVar10 = plVar10 + 1;
    } while (uVar7 < 0xc);
    plVar10 = plVar1 + 0x46;
    do {
      for (; (uVar6 & 1) != 0; uVar6 = uVar6 + 1) {
      }
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + (uVar3 - (longlong)plVar1)) =
             uVar3 + (uVar6 & 0xfffffffffffffffe);
        iVar2 = FUN_140121bd0();
        if (iVar2 != 0) goto LAB_1401093f0;
      }
      uVar7 = 0;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)(*plVar10 + lVar5 * 2) != 0);
      uVar8 = uVar8 + 1;
      uVar6 = uVar6 + lVar5 * 2 + 2;
      plVar10 = plVar10 + 1;
    } while (uVar8 < 0xc);
    plVar10 = plVar1 + 0x52;
    do {
      for (; (uVar6 & 1) != 0; uVar6 = uVar6 + 1) {
      }
      if (iVar9 == 1) {
        *(ulonglong *)((longlong)plVar10 + (uVar3 - (longlong)plVar1)) =
             uVar3 + (uVar6 & 0xfffffffffffffffe);
        iVar2 = FUN_140121bd0();
        if (iVar2 != 0) goto LAB_1401093f0;
      }
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)(*plVar10 + lVar5 * 2) != 0);
      uVar7 = uVar7 + 1;
      uVar6 = uVar6 + lVar5 * 2 + 2;
      plVar10 = plVar10 + 1;
    } while (uVar7 < 2);
    for (; (uVar6 & 1) != 0; uVar6 = uVar6 + 1) {
    }
    if (iVar9 == 1) {
      *(ulonglong *)(uVar3 + 0x2a0) = uVar3 + (uVar6 & 0xfffffffffffffffe);
      iVar2 = FUN_140121bd0();
      if (iVar2 != 0) goto LAB_1401093f0;
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(plVar1[0x54] + lVar5 * 2) != 0);
    for (uVar7 = uVar6 + lVar5 * 2 + 2; (uVar7 & 1) != 0; uVar7 = uVar7 + 1) {
    }
    if (iVar9 == 1) {
      *(ulonglong *)(uVar3 + 0x2a8) = uVar3 + (uVar7 & 0xfffffffffffffffe);
      iVar2 = FUN_140121bd0();
      if (iVar2 != 0) goto LAB_1401093f0;
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(plVar1[0x55] + lVar5 * 2) != 0);
    for (uVar7 = uVar7 + lVar5 * 2 + 2; (uVar7 & 1) != 0; uVar7 = uVar7 + 1) {
    }
    if (iVar9 == 1) {
      *(ulonglong *)(uVar3 + 0x2b0) = uVar3 + (uVar7 & 0xfffffffffffffffe);
      iVar2 = FUN_140121bd0();
      if (iVar2 != 0) goto LAB_1401093f0;
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(plVar1[0x56] + lVar5 * 2) != 0);
    for (uVar6 = uVar7 + lVar5 * 2 + 2; (uVar6 & 1) != 0; uVar6 = uVar6 + 1) {
    }
    if (iVar9 == 1) {
      *(ulonglong *)(uVar3 + 0x2b8) = uVar3 + (uVar6 & 0xfffffffffffffffe);
      iVar2 = FUN_140121bd0();
      if (iVar2 != 0) {
LAB_1401093f0:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(plVar1[0x57] + lVar5 * 2) != 0);
    uVar7 = (ulonglong)(iVar9 + 1U);
    lVar5 = uVar6 + lVar5 * 2 + 2;
    uVar6 = uVar3;
  } while ((int)(iVar9 + 1U) < 2);
  if (local_30 != '\0') {
    *(uint *)(local_48 + 0x3a8) = *(uint *)(local_48 + 0x3a8) & 0xfffffffd;
  }
  return uVar6;
}

