/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102061b1 */

void FUN_102061b1(undefined4 *param_1,int param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  *(undefined2 *)(param_1 + 0x10) = 0x100;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined4 *)(param_2 + 100);
  if (param_4 != 0) {
    iVar1 = **(int **)(param_4 + 0x9c);
    param_1[3] = iVar1;
    param_1[4] = iVar1 + 0x14;
    param_1[5] = iVar1 + 0x38;
    FUN_101bff87(iVar1);
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    if ((param_3 != 0 && param_5 != '\0') &&
       ((undefined4 *)**(int **)(param_3 + 0x28) != (undefined4 *)0x0)) {
      param_1[0x12] = *(undefined4 *)**(int **)(param_3 + 0x28);
      param_1[0x11] = *(undefined4 *)(*(int *)(param_4 + 0x9c) + 0x24);
    }
  }
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar4 = PTR_FUN_10312340;
  puVar3 = PTR_FUN_1031233c;
  puVar2 = PTR_FUN_10312338;
  param_1[0x13] = PTR_FUN_10312334;
  param_1[0x14] = puVar2;
  param_1[0x15] = puVar3;
  param_1[0x16] = puVar4;
  puVar4 = PTR_LAB_10312350;
  puVar3 = PTR_LAB_1031234c;
  puVar2 = PTR_FUN_10312348;
  param_1[0x17] = PTR_LAB_10312344;
  param_1[0x18] = puVar2;
  param_1[0x19] = puVar3;
  param_1[0x1a] = puVar4;
  return;
}

