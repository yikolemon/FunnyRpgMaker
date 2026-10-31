/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010bdf3 */

void __fastcall FUN_1010bdf3(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)*param_1;
  iVar3 = *piVar1;
  iVar4 = piVar1[1];
  iVar5 = *(int *)param_1[1] + iVar3;
  if (iVar4 < iVar5) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    iVar2 = FUN_100fa1fa(iVar4 * 4);
    if (piVar1[2] != 0) {
      FUN_1025b2d0(iVar2,piVar1[2],*piVar1 << 2);
      FUN_100fa2cb(piVar1[2]);
    }
    piVar1[2] = iVar2;
    piVar1[1] = iVar4;
  }
  *piVar1 = iVar5;
  piVar1 = (int *)param_1[1];
  if (*piVar1 != 0) {
    FUN_1025b2d0(iVar3 * 4 + *(int *)(*param_1 + 8),piVar1[2],*piVar1 << 2);
    if (piVar1[1] < 0) {
      iVar3 = FUN_100fa1fa(0);
      if (piVar1[2] != 0) {
        FUN_1025b2d0(iVar3,piVar1[2],*piVar1 << 2);
        FUN_100fa2cb(piVar1[2]);
      }
      piVar1[2] = iVar3;
      piVar1[1] = 0;
    }
    *piVar1 = 0;
  }
  return;
}

