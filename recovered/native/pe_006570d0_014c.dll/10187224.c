/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10187224 */

void __thiscall FUN_10187224(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x48);
    piVar4 = *(int **)(iVar2 + 0x50);
    piVar1 = piVar4 + iVar3;
    if (0 < iVar3) {
      do {
        if (*piVar4 == param_1) break;
        piVar4 = piVar4 + 1;
      } while (piVar4 < piVar1);
    }
    if (piVar4 < piVar1) {
      if (piVar4 < piVar1 + -1) {
        *piVar4 = piVar1[-1];
        iVar3 = *(int *)(iVar2 + 0x48);
      }
      *(int *)(iVar2 + 0x48) = iVar3 + -1;
    }
  }
  *(int *)(param_1 + 0x2c) = param_2;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0x48);
    if (iVar2 == *(int *)(param_2 + 0x4c)) {
      if (iVar2 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar2 / 2 + iVar2;
      }
      iVar5 = iVar2 + 1;
      if (iVar2 + 1 < iVar3) {
        iVar5 = iVar3;
      }
      iVar3 = FUN_100fa1fa(iVar5 * 4);
      if (*(int *)(param_2 + 0x50) != 0) {
        FUN_1025b2d0(iVar3,*(int *)(param_2 + 0x50),*(int *)(param_2 + 0x48) << 2);
        FUN_100fa2cb(*(undefined4 *)(param_2 + 0x50));
      }
      *(int *)(param_2 + 0x50) = iVar3;
      *(int *)(param_2 + 0x4c) = iVar5;
      iVar2 = *(int *)(param_2 + 0x48);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x50);
    }
    *(int *)(iVar3 + iVar2 * 4) = param_1;
    *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
  }
  return;
}

