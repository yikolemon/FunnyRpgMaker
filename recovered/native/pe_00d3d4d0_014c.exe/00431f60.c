/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00431f60 */

void __fastcall FUN_00431f60(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (1 < param_1) {
    uVar3 = 1;
    uVar4 = uVar3;
LAB_00431f6d:
    do {
      iVar1 = *(int *)(param_2 + -4 + uVar3 * 4);
      iVar2 = *(int *)(param_2 + uVar3 * 4);
      if (iVar2 < iVar1) {
        *(int *)(param_2 + uVar3 * 4) = iVar1;
        *(int *)(param_2 + -4 + uVar3 * 4) = iVar2;
        uVar3 = uVar3 - 1;
        if (uVar3 != 0) goto LAB_00431f6d;
      }
      uVar3 = uVar4 + 1;
      uVar4 = uVar3;
    } while (uVar3 != param_1);
  }
  return;
}

