/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10184184 */

void FUN_10184184(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 local_18 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_18;
  *param_1 = *param_2;
  uVar3 = param_2[3];
  param_2[3] = 0;
  uVar1 = *(undefined8 *)(param_2 + 1);
  param_2[2] = 0;
  param_2[1] = 0;
  *(undefined8 *)(param_1 + 1) = uVar1;
  param_1[3] = uVar3;
  param_1[4] = param_2[4];
  *unaff_FS_OFFSET = iVar2;
  return;
}

