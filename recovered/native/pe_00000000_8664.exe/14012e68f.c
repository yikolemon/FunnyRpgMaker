/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012e68f */

void FUN_14012e68f(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 != (int *)0x0 && param_1 != (undefined4 *)0x0) {
    param_3 = param_3 << 0x10;
    iVar7 = *param_2;
    uVar1 = *param_1;
    iVar3 = FUN_14012a478(uVar1,iVar7,param_3);
    iVar8 = param_2[2];
    uVar2 = param_1[1];
    iVar4 = FUN_14012a478(uVar2,iVar8,param_3);
    iVar9 = param_2[1];
    iVar5 = FUN_14012a478(uVar1,iVar9,param_3);
    iVar10 = param_2[3];
    iVar6 = FUN_14012a478(uVar2,iVar10,param_3);
    uVar1 = param_1[2];
    iVar7 = FUN_14012a478(uVar1,iVar7,param_3);
    uVar2 = param_1[3];
    iVar8 = FUN_14012a478(uVar2,iVar8,param_3);
    iVar9 = FUN_14012a478(uVar1,iVar9,param_3);
    iVar10 = FUN_14012a478(uVar2,iVar10,param_3);
    *param_2 = iVar4 + iVar3;
    param_2[1] = iVar6 + iVar5;
    param_2[2] = iVar8 + iVar7;
    param_2[3] = iVar10 + iVar9;
  }
  return;
}

