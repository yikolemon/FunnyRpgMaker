/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043dc98 */

void __cdecl FUN_0043dc98(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x2e0);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 100);
    iVar3 = **(int **)(iVar1 + 0xc);
    FUN_0041c607(iVar2,*(int *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    FUN_0041c607(iVar2,*(int *)(iVar1 + 8));
    *(undefined4 *)(iVar1 + 8) = 0;
    FUN_0041c607(iVar2,*(int *)(iVar1 + 0x14));
    *(undefined4 *)(iVar1 + 0x14) = 0;
    FUN_0041c607(iVar2,*(int *)(iVar1 + 0xc));
    *(undefined4 *)(iVar1 + 0xc) = 0;
    piVar4 = *(int **)(iVar1 + 0x1c);
    if (piVar4 != (int *)0x0) {
      iVar5 = *piVar4;
      if (iVar5 != 0) {
        if (iVar3 != 0) {
          iVar5 = 0;
          do {
            FUN_0041c607(iVar2,*(int *)(**(int **)(iVar1 + 0x1c) + 4 + iVar5 * 8));
            *(undefined4 *)(**(int **)(iVar1 + 0x1c) + 4 + iVar5 * 8) = 0;
            iVar5 = iVar5 + 1;
          } while (iVar3 != iVar5);
          iVar5 = **(int **)(iVar1 + 0x1c);
        }
        FUN_0041c607(iVar2,iVar5);
        **(undefined4 **)(iVar1 + 0x1c) = 0;
        piVar4 = *(int **)(iVar1 + 0x1c);
      }
      FUN_0043db26(param_1,(uint *)(piVar4 + 1));
      FUN_0043dbf0(param_1,*(int *)(iVar1 + 0x1c) + 0x18);
      FUN_0041c607(iVar2,*(int *)(iVar1 + 0x1c));
      *(undefined4 *)(iVar1 + 0x1c) = 0;
    }
    if (*(uint **)(iVar1 + 0x28) != (uint *)0x0) {
      FUN_0043db26(param_1,*(uint **)(iVar1 + 0x28));
      FUN_0043dbf0(param_1,*(int *)(iVar1 + 0x28) + 0x14);
      FUN_0041c607(iVar2,*(int *)(iVar1 + 0x28));
      *(undefined4 *)(iVar1 + 0x28) = 0;
    }
    if (*(uint **)(iVar1 + 0x34) != (uint *)0x0) {
      FUN_0043db26(param_1,*(uint **)(iVar1 + 0x34));
      FUN_0043dbf0(param_1,*(int *)(iVar1 + 0x34) + 0x14);
      FUN_0041c607(iVar2,*(int *)(iVar1 + 0x34));
      *(undefined4 *)(iVar1 + 0x34) = 0;
    }
    if (*(int *)(iVar1 + 0x38) != 0) {
      FUN_0043db26(param_1,(uint *)(*(int *)(iVar1 + 0x38) + 4));
      FUN_0041c607(iVar2,*(int *)(*(int *)(iVar1 + 0x38) + 0x18));
      *(undefined4 *)(*(int *)(iVar1 + 0x38) + 0x18) = 0;
      FUN_0041c607(iVar2,*(int *)(iVar1 + 0x38));
      *(undefined4 *)(iVar1 + 0x38) = 0;
    }
    FUN_0041c607(iVar2,*(int *)(iVar1 + 0x44));
    *(undefined4 *)(iVar1 + 0x44) = 0;
    FUN_0041c607(iVar2,*(int *)(iVar1 + 0x40));
    *(undefined4 *)(iVar1 + 0x40) = 0;
    FUN_0041c607(iVar2,*(int *)(iVar1 + 0x4c));
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    FUN_0041c607(iVar2,iVar1);
  }
  return;
}

