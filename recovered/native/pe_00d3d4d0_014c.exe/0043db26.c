/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043db26 */

void __cdecl FUN_0043db26(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 100);
  uVar2 = param_2[1];
  if (uVar2 != 0) {
    if (*param_2 != 0) {
      iVar3 = 0;
      uVar2 = 0;
      do {
        FUN_0041c607(iVar1,*(int *)(param_2[1] + 8 + iVar3));
        *(undefined4 *)(param_2[1] + 8 + iVar3) = 0;
        FUN_0041c607(iVar1,*(int *)(param_2[1] + 0xc + iVar3));
        *(undefined4 *)(param_2[1] + 0xc + iVar3) = 0;
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar2 < *param_2);
      uVar2 = param_2[1];
    }
    FUN_0041c607(iVar1,uVar2);
    param_2[1] = 0;
  }
  uVar2 = param_2[4];
  if (uVar2 != 0) {
    if (param_2[3] != 0) {
      uVar2 = 0;
      do {
        FUN_0041c607(iVar1,*(int *)(param_2[4] + uVar2 * 4));
        *(undefined4 *)(param_2[4] + uVar2 * 4) = 0;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_2[3]);
      uVar2 = param_2[4];
    }
    FUN_0041c607(iVar1,uVar2);
    param_2[4] = 0;
  }
  return;
}

