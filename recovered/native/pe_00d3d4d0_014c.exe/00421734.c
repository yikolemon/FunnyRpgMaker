/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00421734 */

void __cdecl FUN_00421734(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (param_2 != (uint *)0x0 && param_1 != (uint *)0x0) {
    uVar7 = param_3 << 0x10;
    uVar1 = *param_1;
    iVar3 = FUN_0041dcda(uVar1,*param_2,uVar7);
    uVar2 = param_1[1];
    iVar4 = FUN_0041dcda(uVar2,param_2[1],uVar7);
    iVar5 = FUN_0041dcda(uVar1,param_2[2],uVar7);
    iVar6 = FUN_0041dcda(uVar2,param_2[3],uVar7);
    *param_1 = iVar4 + iVar3;
    param_1[1] = iVar6 + iVar5;
  }
  return;
}

