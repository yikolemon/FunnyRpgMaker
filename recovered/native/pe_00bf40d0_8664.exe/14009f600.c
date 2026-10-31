/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009f600 */

void FUN_14009f600(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong *plVar6;
  
  plVar6 = param_2;
  if (-1 < (int)*param_3) {
    plVar6 = (longlong *)((longlong)(int)param_3[2] + *param_2);
  }
  uVar2 = FUN_14009f230(param_1,param_2,param_3,param_4);
  if ((int)uVar2 == 1) {
    lVar3 = FUN_14008da60(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = FUN_14008d690();
      puVar5 = (undefined *)(lVar4 + iVar1);
    }
    FUN_14009ec70(plVar6,puVar5,lVar3);
  }
  else if ((int)uVar2 == 2) {
    lVar3 = FUN_14008da60(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = FUN_14008d690();
      puVar5 = (undefined *)(lVar4 + iVar1);
    }
    FUN_14009ec80(plVar6,puVar5,lVar3,1);
  }
  return;
}

