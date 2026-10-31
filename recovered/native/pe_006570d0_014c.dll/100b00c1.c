/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b00c1 */

undefined4 * FUN_100b00c1(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_14;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_2[4] = 0;
  param_2[5] = 0xf;
  *(undefined1 *)param_2 = 0;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *unaff_FS_OFFSET = iVar1;
  return param_1;
}

