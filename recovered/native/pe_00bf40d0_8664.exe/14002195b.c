/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002195b */

void FUN_14002195b(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  if (param_2 != (int *)0x0 && param_1 != (int *)0x0) {
    iVar1 = *param_2;
    iVar2 = *param_1;
    uVar6 = FUN_14002193c(iVar2,iVar1);
    iVar3 = param_2[2];
    iVar4 = param_1[1];
    uVar7 = FUN_14002193c(iVar4,iVar3);
    iVar5 = param_2[1];
    uVar8 = FUN_14002193c(iVar2,iVar5);
    iVar2 = param_2[3];
    uVar9 = FUN_14002193c(iVar4,iVar2);
    iVar4 = param_1[2];
    uVar10 = FUN_14002193c(iVar4,iVar1);
    iVar1 = param_1[3];
    uVar11 = FUN_14002193c(iVar1,iVar3);
    uVar12 = FUN_14002193c(iVar4,iVar5);
    uVar13 = FUN_14002193c(iVar1,iVar2);
    *param_2 = (int)uVar7 + (int)uVar6;
    param_2[1] = (int)uVar9 + (int)uVar8;
    param_2[2] = (int)uVar11 + (int)uVar10;
    param_2[3] = (int)uVar13 + (int)uVar12;
  }
  return;
}

