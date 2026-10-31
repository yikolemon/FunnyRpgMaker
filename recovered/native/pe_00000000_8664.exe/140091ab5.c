/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140091ab5 */

ulonglong FUN_140091ab5(undefined8 param_1,uint param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  uint3 uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined8 unaff_RBP;
  uint uVar13;
  
  lVar4 = DAT_140f2a910;
  uVar13 = param_2 | 0xd000;
  if ((param_2 & 0x3c00) != 0) {
    uVar13 = param_2;
  }
  uVar6 = FUN_1400916c4();
  if (*(uint *)(lVar4 + 0x1f98) == uVar6) {
    pcVar2 = (code *)swi(3);
    uVar9 = (*pcVar2)();
    return uVar9;
  }
  if (((uVar13 >> 0x10 & 1) != 0) && (*(longlong *)(lVar4 + 0x2200) == 0)) goto LAB_140091c7f;
  if ((uVar13 >> 0xd & 1) != 0) {
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((*(byte *)(lVar4 + 0x2acd) & 2) != 0) {
      uVar10 = FUN_140080f66(uVar6);
      FUN_1400772a6("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> always, no register\n",
                    uVar10,uVar13,param_3);
    }
    goto LAB_140091c81;
  }
  if ((*(int *)(lVar4 + 0x167c) == 0) || (*(int *)(lVar4 + 0x167c) == param_3)) {
LAB_140091be2:
    if ((uVar13 >> 0x11 & 1) == 0) {
      puVar11 = (undefined4 *)(lVar4 + 0x1f9c);
    }
    else {
      puVar11 = (undefined4 *)(*(longlong *)(*(longlong *)(lVar4 + 0x1608) + 0x418) + 0x10);
    }
    iVar8 = FUN_140091cd9(*puVar11,param_3,uVar13);
    if ((*(byte *)(lVar4 + 0x2acd) & 2) != 0) {
      uVar10 = FUN_140080f66(uVar6);
      FUN_1400772a6("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> score %d\n",uVar10,
                    uVar13,param_3,iVar8);
    }
    if (iVar8 != 0) {
      lVar12 = FUN_14009195e(uVar6);
      if ((int)(uint)*(ushort *)(lVar12 + 6) < iVar8) {
        *(int *)(lVar12 + 0xc) = param_3;
        *(short *)(lVar12 + 6) = (short)iVar8;
      }
      if (*(int *)(lVar12 + 8) == param_3) {
        uVar3 = (uint3)((uint)iVar8 >> 8);
        uVar9 = CONCAT71((uint7)uVar3,1);
        if ((*(byte *)(lVar4 + 0x2acd) & 2) != 0) {
          FUN_1400772a6("--> granting current route\n");
          uVar9 = (ulonglong)CONCAT31(uVar3,*(int *)(lVar12 + 8) == param_3);
        }
        goto LAB_140091c81;
      }
    }
  }
  else if ((uVar13 >> 10 & 1) == 0) {
    if (*(char *)(lVar4 + 0xea) == '\x01') {
      cVar5 = FUN_140091c8e(uVar6);
      if (cVar5 != '\0') {
        if ((*(byte *)(lVar4 + 0x2acd) & 2) != 0) {
          uVar10 = FUN_140080f66(uVar6);
          FUN_1400772a6("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> filtered as potential char input\n"
                        ,uVar10,uVar13,param_3);
        }
        goto LAB_140091c7f;
      }
    }
    if ((-1 < (short)uVar13) && (*(char *)(lVar4 + 0x1f94) == '\x01')) {
      uVar7 = uVar6 & 0xffff0fff;
      if (((uVar6 & 0xffff0fff) == 0) && (uVar7 = uVar6, uVar6 - 1 < (uVar6 ^ uVar6 - 1))) {
        uVar1 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        uVar7 = uVar1 + 0x28b;
        if ((uVar1 & 0x1c) != 0xc) {
          uVar7 = uVar6;
        }
      }
      if (0xffffff87 < uVar7 - 0x278) goto LAB_140091c7f;
    }
    goto LAB_140091be2;
  }
LAB_140091c7f:
  uVar9 = 0;
LAB_140091c81:
  return uVar9 & 0xffffffff;
}

