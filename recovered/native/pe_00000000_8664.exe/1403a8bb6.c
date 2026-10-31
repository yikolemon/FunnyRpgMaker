/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a8bb6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1403a8bb6(longlong param_1,uint param_2,uint param_3,longlong param_4)

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
  
  local_60 = ram0x000140613b10 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  iVar5 = *(int *)(param_1 + 8);
  local_90 = param_1;
  local_80 = param_4;
  uVar4 = FUN_1403118b9(*(undefined4 *)(lVar1 + 0xa8));
  *(undefined4 *)(lVar1 + 0xa8) = uVar4;
  uVar4 = FUN_1403118b9(*(undefined4 *)(lVar1 + 0xac),param_3);
  *(undefined4 *)(lVar1 + 0xac) = uVar4;
  uVar10 = iVar5 + param_2;
  uVar9 = iVar5 + param_3;
  local_68 = 0;
  local_78 = (ulonglong)uVar10 << 0x20;
  uStack_70 = (ulonglong)uVar9;
  FUN_1403ab712(lVar1,&local_78);
  if (local_68._4_4_ == 0) {
    iVar8 = -4;
    do {
      iVar8 = iVar8 + 1;
      if ((iVar8 == 0) || (*(char *)(lVar1 + 0xb8) == '\x01')) {
        if ((DAT_14062a630 != 0) && ((*(byte *)(DAT_14062a630 + 0x2acd) & 1) != 0)) {
          FUN_14030f4ba("yboardFocusHere() ignored while DragDropActive!\n",param_2,param_3);
        }
        if (ram0x000140613b10 == (local_60 ^ (ulonglong)auStack_b8)) {
          return 0xffffffff;
        }
        goto LAB_1403a8e71;
      }
      FUN_1403ab17f(local_90);
      local_68 = 0;
      local_78 = (ulonglong)uVar10 << 0x20;
      uStack_70 = (ulonglong)uVar9;
      FUN_1403ab712(lVar1,&local_78);
    } while (local_68._4_4_ == 0);
  }
  uVar3 = local_68;
  uVar2 = (ushort)local_68;
  local_84 = (uint)uStack_70._4_2_;
  uVar4 = FUN_1403118b9(*(undefined4 *)(lVar1 + 0xb0),iVar5 + (param_2 & 0xffff) + local_84);
  *(undefined4 *)(lVar1 + 0xb0) = uVar4;
  uVar4 = FUN_1403118b9(*(undefined4 *)(lVar1 + 0xb4),iVar5 + (param_3 & 0xffff) + (uint)uVar2);
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
    lVar6 = FUN_14030fcc8((longlong)iVar11 << 3);
    if (*(longlong *)(lVar1 + 0x68) != 0) {
      FUN_1404b97c0(lVar6,*(longlong *)(lVar1 + 0x68),(longlong)*(int *)(lVar1 + 0x60) << 3);
      FUN_14030fda4(*(undefined8 *)(lVar1 + 0x68));
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
    if (ram0x000140613b10 == (local_60 ^ (ulonglong)auStack_b8)) {
      uVar7 = FUN_1403ab80b(local_90);
      return uVar7;
    }
  }
  else if (ram0x000140613b10 == (local_60 ^ (ulonglong)auStack_b8)) {
    uVar7 = FUN_1403ab7cd(local_90,local_80);
    return uVar7;
  }
LAB_1403a8e71:
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_60 ^ (ulonglong)auStack_b8);
}

