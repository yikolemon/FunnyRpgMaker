/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e3ac5 */

longlong FUN_1400e3ac5(longlong param_1,longlong param_2,float param_3,undefined4 param_4,
                      undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 local_e8 [8];
  longlong local_e0;
  longlong local_c0;
  longlong local_b0;
  undefined8 local_80;
  uint local_74;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  if ((DAT_140f2a910 != 0) && ((*(byte *)(DAT_140f2a910 + 0x2acd) & 1) != 0)) {
    FUN_1400772a6("[font] Created baked %.2fpx\n",(double)param_3);
  }
  lVar4 = *(longlong *)(param_1 + 0x2b0);
  FUN_1400e3ee8(local_e8);
  iVar1 = *(int *)(lVar4 + 0xc0);
  if (iVar1 == *(int *)(lVar4 + 0xc4)) {
    local_74 = iVar1 + 0x3f;
    iVar8 = iVar1 + 0x1f;
    if (-1 < iVar1) {
      iVar8 = iVar1;
    }
    iVar8 = iVar8 >> 5;
    iVar10 = (int)local_74 >> 5;
    if (iVar8 < iVar10) {
      iVar5 = *(int *)(lVar4 + 0xcc);
      if (iVar5 < iVar10) {
        if (iVar5 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar5 / 2 + iVar5;
        }
        if (iVar5 <= iVar10) {
          iVar5 = iVar10;
        }
        uVar3 = FUN_140077ab4((longlong)iVar5 << 3);
        if (*(longlong *)(lVar4 + 0xd0) != 0) {
          local_80 = uVar3;
          FUN_1401c5180(uVar3,*(longlong *)(lVar4 + 0xd0),(longlong)*(int *)(lVar4 + 200) << 3);
          FUN_140077b90(*(undefined8 *)(lVar4 + 0xd0));
          uVar3 = local_80;
        }
        *(undefined8 *)(lVar4 + 0xd0) = uVar3;
        *(int *)(lVar4 + 0xcc) = iVar5;
      }
      local_74 = local_74 & 0xffffffe0;
      *(int *)(lVar4 + 200) = iVar10;
      lVar6 = (longlong)iVar8;
      do {
        uVar3 = FUN_140077ab4(0xd00);
        *(undefined8 *)(*(longlong *)(lVar4 + 0xd0) + lVar6 * 8) = uVar3;
        lVar6 = lVar6 + 1;
      } while (lVar6 != iVar10);
      *(uint *)(lVar4 + 0xc4) = local_74;
    }
  }
  else {
    iVar8 = iVar1 + 0x1f;
    if (-1 < iVar1) {
      iVar8 = iVar1;
    }
    iVar8 = iVar8 >> 5;
  }
  lVar6 = (longlong)(iVar1 % 0x20) * 0x68 +
          *(longlong *)(*(longlong *)(lVar4 + 0xd0) + (longlong)iVar8 * 8);
  FUN_1401c5180(lVar6,local_e8);
  *(int *)(lVar4 + 0xc0) = *(int *)(lVar4 + 0xc0) + 1;
  if (local_b0 != 0) {
    FUN_140077b90();
  }
  if (local_c0 != 0) {
    FUN_140077b90();
  }
  if (local_e0 != 0) {
    FUN_140077b90();
  }
  *(float *)(lVar6 + 0x14) = param_3;
  *(undefined4 *)(lVar6 + 0x18) = param_4;
  *(undefined4 *)(lVar6 + 0x54) = param_5;
  *(longlong *)(lVar6 + 0x58) = param_2;
  *(undefined4 *)(lVar6 + 0x50) = *(undefined4 *)(*(longlong *)(param_1 + 0x2b0) + 0xa4);
  if ((longlong)*(int *)(param_2 + 0x20) != 0) {
    lVar4 = 0;
    lVar7 = 0;
    do {
      lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + lVar7) + 0x88);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x2b8);
      }
      lVar4 = lVar4 + *(longlong *)(lVar9 + 0x48);
      lVar7 = lVar7 + 8;
    } while ((longlong)*(int *)(param_2 + 0x20) * 8 != lVar7);
    if (lVar4 != 0) {
      lVar4 = FUN_140077ab4();
      goto code_r0x0001400e3d28;
    }
  }
  lVar4 = 0;
code_r0x0001400e3d28:
  *(longlong *)(lVar6 + 0x60) = lVar4;
  iVar1 = *(int *)(param_2 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x28);
    lVar9 = 0;
    do {
      lVar2 = *(longlong *)(lVar7 + lVar9);
      lVar11 = *(longlong *)(lVar2 + 0x88);
      if (lVar11 == 0) {
        lVar11 = *(longlong *)(param_1 + 0x2b8);
      }
      if (*(code **)(lVar11 + 0x30) != (code *)0x0) {
        (**(code **)(lVar11 + 0x30))(param_1,lVar2,lVar6,lVar4);
      }
      lVar4 = lVar4 + *(longlong *)(lVar11 + 0x48);
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar1 * 8 != lVar9);
  }
  FUN_1400e3f4b(param_1,lVar6);
  return lVar6;
}

