/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00464382 */

uint __fastcall FUN_00464382(int param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  if ((*(int *)(param_1 + 0x14) == 0) || (*(char *)(param_1 + 0xd) == '\0')) {
    lVar1 = (longlong)param_2 * (longlong)*(int *)(param_1 + 0x10);
    iVar3 = (int)(lVar1 >> 0x3f);
    lVar1 = lVar1 + CONCAT44(iVar3,iVar3) + 0x8000;
    return (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar2 = *(int *)(param_1 + 0x14) - 1;
  if (uVar2 < uVar4) {
    uVar2 = uVar4;
  }
  piVar6 = (int *)(param_1 + uVar4 * 0x14 + 0x38);
  uVar4 = uVar4 - 1;
  do {
    uVar5 = uVar2;
    if (uVar4 - uVar2 == -1) break;
    uVar5 = uVar4 + 1;
    iVar3 = *piVar6;
    piVar6 = piVar6 + 5;
    uVar4 = uVar5;
  } while (iVar3 <= param_2);
  if (uVar5 != 0) {
    piVar6 = (int *)(param_1 + uVar5 * 0x14 + 0x24);
    do {
      if (*piVar6 <= param_2) {
        *(uint *)(param_1 + 0x18) = uVar5;
        goto LAB_00464426;
      }
      piVar6 = piVar6 + -5;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar5 = 0;
  if (param_2 < *(int *)(param_1 + 0x24)) {
    lVar1 = (longlong)(param_2 - *(int *)(param_1 + 0x24)) * (longlong)*(int *)(param_1 + 0x10);
    iVar3 = (int)(lVar1 >> 0x3f);
    lVar1 = lVar1 + CONCAT44(iVar3,iVar3) + 0x8000;
    uVar4 = ((int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10) +
            *(int *)(param_1 + 0x28);
  }
  else {
LAB_00464426:
    lVar1 = (longlong)(param_2 - *(int *)(param_1 + 0x24 + uVar5 * 0x14)) *
            (longlong)*(int *)(param_1 + 0x2c + uVar5 * 0x14);
    iVar3 = (int)(lVar1 >> 0x3f);
    lVar1 = lVar1 + CONCAT44(iVar3,iVar3) + 0x8000;
    uVar4 = ((int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10) +
            *(int *)(param_1 + 0x28 + uVar5 * 0x14);
  }
  return uVar4;
}

