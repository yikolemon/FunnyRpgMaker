/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043bae5 */

void __fastcall FUN_0043bae5(int param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2[1] == 0) {
    return;
  }
  if ((*param_2 == 0) && (*(int *)(param_1 + 0x20) == 0)) {
    uVar1 = 0x84;
  }
  else {
    iVar3 = *param_2 + *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = iVar3;
    uVar1 = 0x84;
    if ((-1 < iVar3) &&
       ((*(int *)(param_1 + 0x188) < 1 ||
        (iVar3 <= *(int *)(*(int *)(*(int *)(param_1 + 400) + -4 + *(int *)(param_1 + 0x188) * 0x10)
                          + 8))))) {
      *(undefined4 *)(param_1 + 0x14c) = 0;
      if (-1 < *param_2) {
        return;
      }
      uVar2 = *(int *)(param_1 + 0x214) + 1;
      *(uint *)(param_1 + 0x214) = uVar2;
      uVar1 = 0x8b;
      if (uVar2 <= *(uint *)(param_1 + 0x218)) {
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}

