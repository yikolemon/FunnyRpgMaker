/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113999 */

undefined1 FUN_10113999(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  iVar3 = DAT_1039d74c;
  uVar11 = param_2 | 0xd000;
  if ((param_2 & 0x3c00) != 0) {
    uVar11 = param_2;
  }
  uVar6 = FUN_101135c0(param_1);
  if (*(uint *)(iVar3 + 0x1e38) == uVar6) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if (((uVar11 >> 0x10 & 1) != 0) && (*(int *)(iVar3 + 0x2048) == 0)) {
    return false;
  }
  if ((uVar11 >> 0xd & 1) != 0) {
    if ((*(byte *)(iVar3 + 0x27b5) & 2) != 0) {
      uVar7 = FUN_10103065(uVar6);
      FUN_100f99e6("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> always, no register\n",
                   uVar7,uVar11,param_3);
      return true;
    }
    return true;
  }
  if ((*(int *)(iVar3 + 0x1528) != 0) && (*(int *)(iVar3 + 0x1528) != param_3)) {
    if ((uVar11 >> 10 & 1) != 0) {
      return false;
    }
    if ((*(char *)(iVar3 + 0xbe) == '\x01') && (cVar5 = FUN_10113b6a(), cVar5 != '\0')) {
      if ((*(byte *)(iVar3 + 0x27b5) & 2) == 0) {
        return false;
      }
      uVar7 = FUN_10103065(uVar6);
      FUN_100f99e6("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> filtered as potential char input\n"
                   ,uVar7,uVar11,param_3);
      return false;
    }
    if ((-1 < (short)uVar11) && (*(char *)(iVar3 + 0x1e34) == '\x01')) {
      uVar8 = uVar6 & 0xffff0fff;
      if (((uVar6 & 0xffff0fff) == 0) && (uVar8 = uVar6, uVar6 - 1 < (uVar6 ^ uVar6 - 1))) {
        uVar1 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        uVar8 = uVar1 + 0x28b;
        if ((uVar1 & 0x1c) != 0xc) {
          uVar8 = uVar6;
        }
      }
      if (0xffffff87 < uVar8 - 0x278) {
        return false;
      }
    }
  }
  iVar9 = FUN_10113bad(uVar11);
  if ((*(byte *)(iVar3 + 0x27b5) & 2) != 0) {
    uVar7 = FUN_10103065(uVar6);
    FUN_100f99e6("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> score %d\n",uVar7,uVar11,
                 param_3,iVar9);
  }
  if (iVar9 != 0) {
    iVar10 = FUN_10113853(uVar6);
    if ((int)(uint)*(ushort *)(iVar10 + 6) < iVar9) {
      *(int *)(iVar10 + 0xc) = param_3;
      *(short *)(iVar10 + 6) = (short)iVar9;
    }
    if (*(int *)(iVar10 + 8) == param_3) {
      if ((*(byte *)(iVar3 + 0x27b5) & 2) != 0) {
        FUN_100f99e6("--> granting current route\n");
        return *(int *)(iVar10 + 8) == param_3;
      }
      return true;
    }
  }
  return false;
}

