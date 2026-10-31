/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a8e6 */

undefined4 * __thiscall FUN_1006a8e6(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_14;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *unaff_FS_OFFSET = iVar2;
  return param_1;
}

