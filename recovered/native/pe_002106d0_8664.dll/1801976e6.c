/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801976e6 */

undefined8 FUN_1801976e6(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_b8 [40];
  longlong local_90;
  uint local_84;
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  iVar5 = *(int *)(param_1 + 8);
  local_90 = param_1;
  local_80 = param_4;
  uVar4 = FUN_1801003e9(*(undefined4 *)(lVar1 + 0xa8));
  *(undefined4 *)(lVar1 + 0xa8) = uVar4;
  uVar4 = FUN_1801003e9(*(undefined4 *)(lVar1 + 0xac),param_3);
  *(undefined4 *)(lVar1 + 0xac) = uVar4;
  uVar10 = iVar5 + param_2;
  uVar9 = iVar5 + param_3;
  local_68 = 0;
  local_78 = (ulonglong)uVar10 << 0x20;
  uStack_70 = (ulonglong)uVar9;
  FUN_18019a242(lVar1,&local_78);
  if (local_68._4_4_ == 0) {
    iVar8 = -4;
    do {
      iVar8 = iVar8 + 1;
      if ((iVar8 == 0) || (*(char *)(lVar1 + 0xb8) == '\x01')) {
        if ((DAT_180419160 != 0) && ((*(byte *)(DAT_180419160 + 0x2acd) & 1) != 0)) {
          FUN_1800fdfea("[font] Failed packing %dx%d rectangle. Returning fallback.\n",param_2,
                        param_3);
        }
        if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_b8)) {
          return 0xffffffff;
        }
        goto LAB_1801979a1;
      }
      FUN_180199caf(local_90);
      local_68 = 0;
      local_78 = (ulonglong)uVar10 << 0x20;
      uStack_70 = (ulonglong)uVar9;
      FUN_18019a242(lVar1,&local_78);
    } while (local_68._4_4_ == 0);
  }
  uVar3 = local_68;
  uVar2 = (ushort)local_68;
  local_84 = (uint)uStack_70._4_2_;
  uVar4 = FUN_1801003e9(*(undefined4 *)(lVar1 + 0xb0),iVar5 + (param_2 & 0xffff) + local_84);
  *(undefined4 *)(lVar1 + 0xb0) = uVar4;
  uVar4 = FUN_1801003e9(*(undefined4 *)(lVar1 + 0xb4),iVar5 + (param_3 & 0xffff) + (uint)uVar2);
  *(undefined4 *)(lVar1 + 0xb4) = uVar4;
  *(int *)(lVar1 + 0x94) = *(int *)(lVar1 + 0x94) + 1;
  *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + uVar10 * uVar9;
  iVar5 = *(int *)(lVar1 + 0x60);
  if (iVar5 == *(int *)(lVar1 + 100)) {
    if (iVar5 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar5 / 2 + iVar5;
    }
    iVar11 = iVar5 + 1;
    if (iVar5 + 1 < iVar8) {
      iVar11 = iVar8;
    }
    lVar6 = FUN_1800fe7f8((longlong)iVar11 << 3);
    if (*(longlong *)(lVar1 + 0x68) != 0) {
      FUN_1802a82f0(lVar6,*(longlong *)(lVar1 + 0x68),(longlong)*(int *)(lVar1 + 0x60) << 3);
      FUN_1800fe8d4(*(undefined8 *)(lVar1 + 0x68));
    }
    *(longlong *)(lVar1 + 0x68) = lVar6;
    *(int *)(lVar1 + 100) = iVar11;
    iVar5 = *(int *)(lVar1 + 0x60);
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x68);
  }
  *(ulonglong *)(lVar6 + (longlong)iVar5 * 8) =
       (ulonglong)local_84 |
       (uVar3 & 0xffff) << 0x10 |
       (ulonglong)(param_2 & 0xffff) << 0x20 | (ulonglong)(param_3 & 0xffff) << 0x30;
  *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + 1;
  if (local_80 == 0) {
    if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_b8)) {
      uVar7 = FUN_18019a33b(local_90);
      return uVar7;
    }
  }
  else if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_b8)) {
    uVar7 = FUN_18019a2fd(local_90,local_80);
    return uVar7;
  }
LAB_1801979a1:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_b8);
}

