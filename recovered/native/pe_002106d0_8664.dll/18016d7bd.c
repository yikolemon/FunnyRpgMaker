/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016d7bd */

void FUN_18016d7bd(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_40;
  
  lVar2 = DAT_180419160;
  local_40 = 0xfffffffffffffffe;
  lVar9 = *(longlong *)(DAT_180419160 + 0x29b0);
  iVar1 = *(int *)(DAT_180419160 + 0x29a8);
  if (lVar9 == 0) {
    iVar7 = 0;
  }
  else {
    piVar8 = (int *)(lVar9 + 4);
    iVar7 = 0;
    do {
      if (*piVar8 != 0) {
        iVar3 = FUN_18016cdd5((int)(short)piVar8[3]);
        iVar7 = iVar7 + iVar3;
      }
      piVar8 = (int *)((longlong)piVar8 + (longlong)piVar8[-1]);
    } while (piVar8 != (int *)(lVar9 + iVar1 + 4));
  }
  if (iVar7 != iVar1) {
    local_58 = 0;
    lStack_50 = 0;
    if (0 < iVar7) {
      lVar4 = FUN_1800fe7f8(iVar7);
      lVar9 = lStack_50;
      if (lStack_50 != 0) {
        FUN_1802a82f0(lVar4,lStack_50,(longlong)(int)local_58);
        FUN_1800fe8d4(lVar9);
      }
      local_58 = CONCAT44(iVar7,(int)local_58);
      lVar9 = *(longlong *)(lVar2 + 0x29b0);
      lStack_50 = lVar4;
    }
    piVar8 = (int *)(lVar9 + 4);
    if (lVar9 == 0) {
      piVar8 = (int *)0x0;
    }
    while (piVar8 != (int *)0x0) {
      if (*piVar8 != 0) {
        uVar5 = FUN_18016cdd5((int)(short)piVar8[3]);
        uVar5 = FUN_18011da68(&local_58,uVar5);
        uVar6 = FUN_18016cdd5((int)(short)piVar8[3]);
        FUN_1802a82f0(uVar5,piVar8,uVar6);
        lVar9 = *(longlong *)(lVar2 + 0x29b0);
      }
      piVar8 = (int *)((longlong)piVar8[-1] + (longlong)piVar8);
      if (piVar8 == (int *)(*(int *)(lVar2 + 0x29a8) + lVar9 + 4)) {
        piVar8 = (int *)0x0;
      }
    }
    uVar5 = *(undefined8 *)(lVar2 + 0x29a8);
    *(undefined8 *)(lVar2 + 0x29a8) = local_58;
    *(longlong *)(lVar2 + 0x29b0) = lStack_50;
    if (lVar9 != 0) {
      local_58 = uVar5;
      lStack_50 = lVar9;
      FUN_1800fe8d4();
    }
  }
  return;
}

