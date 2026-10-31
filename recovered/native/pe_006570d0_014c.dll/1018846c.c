/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018846c */

void __fastcall FUN_1018846c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  undefined4 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x90) + -1;
  *(int *)(param_1 + 0x90) = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x98);
    iVar2 = iVar2 * 0x10;
    uVar5 = *(undefined4 *)(iVar1 + -0x10 + iVar2);
    unaff_ESI = *(undefined4 *)(iVar1 + -0xc + iVar2);
    uVar4 = *(undefined4 *)(iVar1 + -4 + iVar2);
    uVar3 = *(undefined4 *)(iVar1 + -8 + iVar2);
  }
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(undefined4 *)(param_1 + 0x5c) = unaff_ESI;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)(param_1 + 100) = uVar4;
  FUN_10188046();
  return;
}

