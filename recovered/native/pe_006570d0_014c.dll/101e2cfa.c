/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e2cfa */

void __fastcall FUN_101e2cfa(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x188) < 1) {
    *(undefined4 *)(param_1 + 0x10) = 0x88;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x188) + -1;
    *(int *)(param_1 + 0x188) = iVar3;
    iVar1 = *(int *)(param_1 + 400);
    iVar3 = iVar3 * 0x10;
    iVar2 = *(int *)(iVar1 + 8 + iVar3);
    *(int *)(iVar1 + 8 + iVar3) = iVar2 + -1;
    if (iVar2 < 2) {
      FUN_101ecb07(*(undefined4 *)(iVar1 + iVar3 + 4));
    }
    else {
      *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
      *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(*(int *)(iVar1 + iVar3 + 0xc) + 4);
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
  }
  return;
}

