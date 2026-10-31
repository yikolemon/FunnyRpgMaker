/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004215ad */

void __cdecl FUN_004215ad(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  if (param_2 != (uint *)0x0 && param_1 != (uint *)0x0) {
    uVar14 = param_3 << 0x10;
    uVar1 = *param_2;
    uVar2 = *param_1;
    iVar6 = FUN_0041dcda(uVar2,uVar1,uVar14);
    uVar3 = param_2[2];
    uVar4 = param_1[1];
    iVar7 = FUN_0041dcda(uVar4,uVar3,uVar14);
    uVar5 = param_2[1];
    iVar8 = FUN_0041dcda(uVar2,uVar5,uVar14);
    uVar2 = param_2[3];
    iVar9 = FUN_0041dcda(uVar4,uVar2,uVar14);
    uVar4 = param_1[2];
    iVar10 = FUN_0041dcda(uVar4,uVar1,uVar14);
    uVar1 = param_1[3];
    iVar11 = FUN_0041dcda(uVar1,uVar3,uVar14);
    iVar12 = FUN_0041dcda(uVar4,uVar5,uVar14);
    iVar13 = FUN_0041dcda(uVar1,uVar2,uVar14);
    *param_2 = iVar7 + iVar6;
    param_2[1] = iVar9 + iVar8;
    param_2[2] = iVar11 + iVar10;
    param_2[3] = iVar13 + iVar12;
  }
  return;
}

