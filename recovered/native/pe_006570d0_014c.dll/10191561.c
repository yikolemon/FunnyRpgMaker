/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10191561 */

int * FUN_10191561(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  piVar2 = (int *)FUN_100fa1fa(0x50);
  *piVar2 = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[6] = 0;
  piVar2[7] = 0;
  piVar2[8] = 0;
  piVar2[9] = 0;
  piVar2[10] = 0;
  piVar2[0xb] = 0;
  piVar2[0xc] = 0;
  piVar2[0xd] = 0;
  piVar2[0xe] = 0;
  piVar2[0xf] = 0;
  piVar2[0x10] = 0;
  piVar2[0x11] = 0;
  piVar2[0x12] = 0;
  piVar2[0x13] = 0;
  piVar2[1] = 1;
  iVar3 = *(int *)(param_1 + 0x27c);
  *(int *)(param_1 + 0x27c) = iVar3 + 1;
  *piVar2 = iVar3;
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 == *(int *)(param_1 + 0x38)) {
    if (iVar3 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar3 / 2 + iVar3;
    }
    iVar5 = iVar3 + 1;
    if (iVar3 + 1 < iVar4) {
      iVar5 = iVar4;
    }
    iVar4 = FUN_100fa1fa(iVar5 * 4);
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_1025b2d0(iVar4,*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x34) << 2);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x3c));
    }
    *(int *)(param_1 + 0x3c) = iVar4;
    *(int *)(param_1 + 0x38) = iVar5;
    iVar3 = *(int *)(param_1 + 0x34);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x3c);
  }
  *(int **)(iVar4 + iVar3 * 4) = piVar2;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x4f) = 1;
  }
  FUN_1018e344(*(undefined4 *)(param_1 + 4),param_2,param_3);
  *(undefined1 *)(param_1 + 0x42) = 0;
  FUN_10191655();
  return piVar2;
}

