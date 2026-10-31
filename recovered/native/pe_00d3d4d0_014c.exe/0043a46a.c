/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043a46a */

void __fastcall FUN_0043a46a(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x188) < 1) {
    *(undefined4 *)(param_1 + 0x10) = 0x88;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x188) + -1;
    *(int *)(param_1 + 0x188) = iVar4;
    iVar2 = *(int *)(param_1 + 400);
    iVar4 = iVar4 * 0x10;
    piVar1 = (int *)(iVar2 + iVar4);
    iVar3 = *(int *)(iVar2 + 8 + iVar4);
    *(int *)(iVar2 + 8 + iVar4) = iVar3 + -1;
    if (iVar3 < 2) {
      FUN_0044427c(param_1,*piVar1,piVar1[1]);
    }
    else {
      *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
      *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(piVar1[3] + 4);
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
  }
  return;
}

