/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012f9a1 */

void FUN_18012f9a1(undefined4 *param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  lVar4 = DAT_180419160;
  if (*(longlong *)(param_2 + 0x4c0) != 0) {
    FUN_180120b15(*(longlong *)(param_2 + 0x4c0),param_2,0);
  }
  if ((*(byte *)(lVar4 + 0x2acd) & 4) != 0) {
    FUN_1800fdfea("[docking] DockNodeAddWindow node 0x%08X window \'%s\'\n",*param_1,
                  *(undefined8 *)(param_2 + 8));
  }
  if (((*(longlong *)(param_1 + 0x24) == 0) && (param_1[0xc] == 1)) &&
     (*(char *)(**(longlong **)(param_1 + 0xe) + 0x10a) == '\0')) {
    FUN_18012213f();
  }
  iVar3 = param_1[0xc];
  if (iVar3 == param_1[0xd]) {
    if (iVar3 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar3 / 2 + iVar3;
    }
    iVar7 = iVar3 + 1;
    if (iVar3 + 1 < iVar5) {
      iVar7 = iVar5;
    }
    lVar4 = FUN_1800fe7f8((longlong)iVar7 << 3);
    if (*(longlong *)(param_1 + 0xe) != 0) {
      FUN_1802a82f0(lVar4,*(longlong *)(param_1 + 0xe),(longlong)(int)param_1[0xc] << 3);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 0xe));
    }
    *(longlong *)(param_1 + 0xe) = lVar4;
    param_1[0xd] = iVar7;
    iVar3 = param_1[0xc];
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0xe);
  }
  *(longlong *)(lVar4 + (longlong)iVar3 * 8) = param_2;
  param_1[0xc] = param_1[0xc] + 1;
  *(byte *)((longlong)param_1 + 0xd5) = *(byte *)((longlong)param_1 + 0xd5) | 2;
  *(undefined4 **)(param_2 + 0x4c0) = param_1;
  *(undefined4 *)(param_2 + 0x4d0) = *param_1;
  *(byte *)(param_2 + 0x495) = *(byte *)(param_2 + 0x495) & 0xf6 | 1 < (int)param_1[0xc];
  if (((*(longlong *)(param_1 + 0x24) == 0) && (*(longlong *)(param_1 + 6) == 0)) &&
     ((param_1[4] & 0x400) == 0)) {
    uVar2 = param_1[0x34];
    bVar8 = (uVar2 & 7) == 0;
    uVar6 = uVar2 | 2;
    if (!bVar8) {
      uVar6 = uVar2;
    }
    bVar9 = (uVar6 & 0x38) == 0;
    uVar2 = uVar6 | 0x10;
    if (!bVar9) {
      uVar2 = uVar6;
    }
    if (!(bool)(~(bVar9 || bVar8) & (uVar2 & 0x1c0) != 0)) {
      uVar6 = uVar2 | 0x80;
      if ((uVar2 & 0x1c0) != 0) {
        uVar6 = uVar2;
      }
      param_1[0x34] = uVar6;
    }
  }
  if (param_3 != '\0') {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      FUN_18012fbcb(param_1);
      uVar1 = param_1[0x31];
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x24) = uVar1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x20) = uVar1;
      if (1 < (int)param_1[0xc]) {
        lVar4 = 0;
        do {
          FUN_180153888(*(undefined8 *)(param_1 + 0x10),0,
                        *(undefined8 *)(*(longlong *)(param_1 + 0xe) + lVar4 * 8));
          lVar4 = lVar4 + 1;
        } while (lVar4 < (longlong)(int)param_1[0xc] + -1);
      }
    }
    FUN_180153888(*(undefined8 *)(param_1 + 0x10),0x800000,param_2);
  }
  FUN_18012fbf4(param_1);
  if (*(longlong *)(param_1 + 0x24) != 0) {
    FUN_180112092(param_2,*(uint *)(param_2 + 0x14) | 0x1000000);
    return;
  }
  return;
}

