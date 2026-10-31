/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010c6b4 */

void FUN_18010c6b4(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  
  if ((*(byte *)(param_1 + 0x30) & 0x80) == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x2bc8) = 0;
  lVar3 = *(longlong *)(param_1 + 0x1618);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x4c8) == 0) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x418) + 0x4c0);
      if (lVar3 == 0) goto LAB_18010c714;
    }
    else {
      lVar3 = FUN_18011fabb(*(longlong *)(lVar3 + 0x4c8),*(undefined8 *)(param_1 + 0x118));
    }
    *(longlong *)(param_1 + 0x2bc8) = lVar3;
  }
LAB_18010c714:
  if ((longlong)*(int *)(param_1 + 0x2940) != 0) {
    piVar5 = *(int **)(param_1 + 0x2948);
    lVar3 = (longlong)*(int *)(param_1 + 0x2940) << 6;
    do {
      if (*piVar5 == 1) {
        FUN_18011fb42(param_1,piVar5);
      }
      piVar5 = piVar5 + 0x10;
      lVar3 = lVar3 + -0x40;
    } while (lVar3 != 0);
  }
  if (*(int *)(param_1 + 0x2944) < 0) {
    uVar4 = FUN_1800fe7f8(0);
    if (*(longlong *)(param_1 + 0x2948) != 0) {
      FUN_1802a82f0(uVar4,*(longlong *)(param_1 + 0x2948),(longlong)*(int *)(param_1 + 0x2940) << 6)
      ;
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x2948));
    }
    *(undefined8 *)(param_1 + 0x2948) = uVar4;
    *(undefined4 *)(param_1 + 0x2944) = 0;
  }
  *(undefined4 *)(param_1 + 0x2940) = 0;
  iVar2 = *(int *)(param_1 + 0x2930);
  if (0 < iVar2) {
    lVar6 = 8;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2938) + lVar6);
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x18) == 0)) &&
         ((*(uint *)(lVar1 + 0x10) & 0x400) == 0)) {
        FUN_18011fe52();
        iVar2 = *(int *)(param_1 + 0x2930);
      }
      lVar3 = lVar3 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar3 < iVar2);
  }
  return;
}

