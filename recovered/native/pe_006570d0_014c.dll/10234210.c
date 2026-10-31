/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10234210 */

void __thiscall FUN_10234210(int param_1,undefined4 *param_2,uint param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  if (((**(int **)(param_1 + 0x1c) == param_1 + 0x3c) && (param_5 == 1)) &&
     (*(int *)(param_1 + 0x38) == 0)) {
    bVar4 = 1 < param_3;
    param_3 = param_3 - 2;
    param_4 = param_4 + -1 + (uint)bVar4;
  }
  if ((((*(int *)(param_1 + 0x4c) != 0) && (cVar2 = FUN_102345b0(), cVar2 != '\0')) &&
      (((param_3 == 0 && param_4 == 0 && (param_5 == 1)) ||
       (iVar3 = FUN_10269197(*(undefined4 *)(param_1 + 0x4c),param_3,param_4,param_5), iVar3 == 0)))
      ) && (iVar3 = FUN_1026db5a(*(undefined4 *)(param_1 + 0x4c),&local_c), iVar3 == 0)) {
    Reset_back();
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    param_2[5] = *(undefined4 *)(param_1 + 0x44);
    param_2[4] = uVar1;
    *param_2 = local_c;
    param_2[1] = local_8;
    param_2[2] = 0;
    param_2[3] = 0;
    return;
  }
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  return;
}

