/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007492e */

int __thiscall FUN_1007492e(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar1 = FUN_10074d4a();
    return iVar1;
  }
  uVar3 = param_3;
  if ((**(int **)(param_1 + 0x20) != 0) &&
     (uVar2 = **(uint **)(param_1 + 0x30),
     0 < (int)uVar2 && (int)(uint)(param_3 == 0) <= (int)param_4)) {
    uVar3 = 0;
    if (param_4 < (param_3 < uVar2)) {
      uVar2 = param_3;
      uVar3 = param_4;
    }
    FUN_1025b2d0(**(int **)(param_1 + 0x20),param_2,uVar2);
    param_2 = param_2 + uVar2;
    param_4 = (param_4 - uVar3) - (uint)(param_3 < uVar2);
    **(int **)(param_1 + 0x30) = **(int **)(param_1 + 0x30) - uVar2;
    **(int **)(param_1 + 0x20) = **(int **)(param_1 + 0x20) + uVar2;
    uVar3 = param_3 - uVar2;
  }
  if (((int)(uint)(uVar3 == 0) <= (int)param_4) && (*(int *)(param_1 + 0x4c) != 0)) {
    iVar1 = FUN_1026f01a(param_2,1,uVar3,*(int *)(param_1 + 0x4c));
    uVar3 = uVar3 - iVar1;
  }
  return param_3 - uVar3;
}

