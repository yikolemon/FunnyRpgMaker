/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012b9f4 */

ulonglong FUN_14012b9f4(ulonglong param_1,int param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar9 = 0;
  if (param_1 == 0) {
    puVar4 = (undefined4 *)FUN_140113dd4();
    *puVar4 = 0x16;
    return 0xffffffffffffffff;
  }
  uVar5 = FUN_140134510(param_1,0x3d);
  if ((uVar5 == 0) || (uVar5 == param_1)) {
    puVar4 = (undefined4 *)FUN_140113dd4();
    *puVar4 = 0x16;
    FUN_1401212e0(param_1);
    return 0xffffffffffffffff;
  }
  cVar2 = *(char *)(uVar5 + 1);
  if (DAT_140354cc8 == DAT_140354ce0) {
    DAT_140354cc8 = (longlong *)FUN_14012c0b0(DAT_140354cc8);
  }
  if (DAT_140354cc8 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_140354cd0 == 0)) {
      if (cVar2 == '\0') goto LAB_14012baaa;
      DAT_140354cc8 = (longlong *)_calloc_base(1,8);
      FUN_1401212e0(0);
      if (DAT_140354cc8 != (longlong *)0x0) {
        if (DAT_140354cd0 == 0) {
          DAT_140354cd0 = _calloc_base(1,8);
          FUN_1401212e0(0);
          if (DAT_140354cd0 == 0) goto LAB_14012baa6;
        }
LAB_14012bb45:
        if (DAT_140354cc8 != (longlong *)0x0) goto LAB_14012bb4e;
      }
    }
    else {
      lVar6 = FUN_140114bcc();
      if (lVar6 != 0) {
        if (DAT_140354cc8 == DAT_140354ce0) {
          DAT_140354cc8 = (longlong *)FUN_14012c0b0(DAT_140354cc8);
        }
        goto LAB_14012bb45;
      }
      puVar4 = (undefined4 *)FUN_140113dd4();
      *puVar4 = 0x16;
    }
  }
  else {
LAB_14012bb4e:
    plVar7 = DAT_140354cc8;
    lVar11 = uVar5 - param_1;
    lVar6 = *DAT_140354cc8;
    plVar8 = DAT_140354cc8;
    while (lVar6 != 0) {
      iVar3 = FUN_140129db0(param_1,lVar6,lVar11);
      if ((iVar3 == 0) &&
         ((*(char *)(lVar11 + *plVar8) == '=' || (*(char *)(lVar11 + *plVar8) == '\0')))) {
        lVar6 = (longlong)plVar8 - (longlong)plVar7 >> 3;
        goto LAB_14012bb94;
      }
      plVar8 = plVar8 + 1;
      lVar6 = *plVar8;
    }
    lVar6 = -((longlong)plVar8 - (longlong)plVar7 >> 3);
LAB_14012bb94:
    uVar10 = uVar9;
    if ((-1 < lVar6) && (*plVar7 != 0)) {
      FUN_1401212e0(plVar7[lVar6]);
      if (cVar2 == '\0') {
        for (; plVar7[lVar6] != 0; lVar6 = lVar6 + 1) {
          plVar7[lVar6] = plVar7[lVar6 + 1];
        }
        plVar7 = (longlong *)_recalloc_base(plVar7,lVar6,8);
        FUN_1401212e0(0);
        uVar10 = param_1;
        if (plVar7 != (longlong *)0x0) {
          DAT_140354cc8 = plVar7;
        }
      }
      else {
        plVar7[lVar6] = param_1;
      }
LAB_14012bc5c:
      if (param_2 == 0) {
LAB_14012bcfc:
        FUN_1401212e0(uVar10);
        return 0;
      }
      lVar6 = -1;
      do {
        lVar11 = lVar6;
        lVar6 = lVar11 + 1;
      } while (*(char *)(param_1 + lVar6) != '\0');
      lVar6 = _calloc_base(lVar11 + 3,1);
      if (lVar6 == 0) {
        FUN_1401212e0(0);
      }
      else {
        iVar3 = FUN_140120d90();
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(undefined1 *)((lVar6 - param_1) + uVar5) = 0;
        iVar3 = FUN_140134594(lVar6,-(ulonglong)(cVar2 != '\0') & uVar5 + 1 + (lVar6 - param_1));
        if (iVar3 != 0) {
          FUN_1401212e0(lVar6);
          goto LAB_14012bcfc;
        }
        puVar4 = (undefined4 *)FUN_140113dd4();
        *puVar4 = 0x2a;
        FUN_1401212e0(lVar6);
        uVar9 = 0xffffffff;
      }
      FUN_1401212e0(uVar10);
      return uVar9;
    }
    if (cVar2 == '\0') goto LAB_14012baaa;
    uVar1 = -lVar6 + 2;
    if (((ulonglong)-lVar6 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      plVar7 = (longlong *)_recalloc_base(plVar7,uVar1,8);
      FUN_1401212e0(0);
      if (plVar7 != (longlong *)0x0) {
        plVar7[-lVar6] = param_1;
        plVar7[1 - lVar6] = 0;
        DAT_140354cc8 = plVar7;
        goto LAB_14012bc5c;
      }
    }
  }
LAB_14012baa6:
  uVar9 = 0xffffffffffffffff;
LAB_14012baaa:
  FUN_1401212e0(param_1);
  return uVar9 & 0xffffffff;
}

