/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045cd20 */

void __cdecl FUN_0045cd20(undefined4 *param_1,int param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined4 *)(param_2 + 100);
  if (param_4 != 0) {
    iVar1 = **(int **)(param_4 + 0x9c);
    param_1[3] = iVar1;
    param_1[4] = iVar1 + 0x14;
    param_1[5] = iVar1 + 0x38;
    FUN_0041c577(iVar1);
    param_1[0x13] = **(undefined4 **)(param_3 + 0x28);
    param_1[0x12] = 0;
    if (param_5 != '\0') {
      param_1[0x12] = *(undefined4 *)(*(int *)(param_4 + 0x9c) + 0x24);
    }
  }
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar4 = PTR_FUN_004e67f4;
  puVar3 = PTR_FUN_004e67f0;
  puVar2 = PTR_FUN_004e67ec;
  param_1[0x14] = PTR_FUN_004e67e8;
  param_1[0x15] = puVar2;
  param_1[0x16] = puVar3;
  param_1[0x17] = puVar4;
  puVar4 = PTR_LAB_004e6804;
  puVar3 = PTR_LAB_004e6800;
  puVar2 = PTR_FUN_004e67fc;
  param_1[0x18] = PTR_LAB_004e67f8;
  param_1[0x19] = puVar2;
  param_1[0x1a] = puVar3;
  param_1[0x1b] = puVar4;
  return;
}

