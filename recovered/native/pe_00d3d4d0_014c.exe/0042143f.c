/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042143f */

void __cdecl FUN_0042143f(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if (param_2 != (int *)0x0 && param_1 != (int *)0x0) {
    iVar1 = *param_2;
    iVar2 = *param_1;
    uVar6 = FUN_00421421(iVar2,iVar1);
    iVar3 = param_2[2];
    iVar4 = param_1[1];
    uVar7 = FUN_00421421(iVar4,iVar3);
    iVar5 = param_2[1];
    uVar8 = FUN_00421421(iVar2,iVar5);
    iVar2 = param_2[3];
    uVar9 = FUN_00421421(iVar4,iVar2);
    iVar4 = param_1[2];
    uVar10 = FUN_00421421(iVar4,iVar1);
    iVar1 = param_1[3];
    uVar11 = FUN_00421421(iVar1,iVar3);
    uVar12 = FUN_00421421(iVar4,iVar5);
    uVar13 = FUN_00421421(iVar1,iVar2);
    *param_2 = uVar7 + uVar6;
    param_2[1] = uVar9 + uVar8;
    param_2[2] = uVar11 + uVar10;
    param_2[3] = uVar13 + uVar12;
  }
  return;
}

