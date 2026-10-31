/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011714e */

void FUN_1011714e(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = DAT_1039d74c;
  *(undefined4 *)(DAT_1039d74c + 0x2044) = param_1;
  *(int *)(iVar5 + 0x2050) = param_2;
  FUN_101120d9(param_3);
  *(undefined4 *)(*(int *)(iVar5 + 0x2048) + 0x3c4 + param_2 * 4) = param_1;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  puVar1 = (undefined4 *)(*(int *)(iVar5 + 0x2048) + 0x3cc + param_2 * 0x10);
  *puVar1 = *param_4;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  FUN_10117123(0);
  FUN_10117123(1);
  return;
}

