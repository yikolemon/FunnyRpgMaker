/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140021c62 */

void FUN_140021c62(uint *param_1,uint *param_2,int param_3)

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
    iVar3 = FUN_14001de7c(uVar1,*param_2,uVar7);
    uVar2 = param_1[1];
    iVar4 = FUN_14001de7c(uVar2,param_2[1],uVar7);
    iVar5 = FUN_14001de7c(uVar1,param_2[2],uVar7);
    iVar6 = FUN_14001de7c(uVar2,param_2[3],uVar7);
    *param_1 = iVar4 + iVar3;
    param_1[1] = iVar6 + iVar5;
  }
  return;
}

