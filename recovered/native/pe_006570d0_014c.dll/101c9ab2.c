/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c9ab2 */

undefined4 * __thiscall
FUN_101c9ab2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_101ca0d0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = param_2;
  param_1[1] = 0;
  local_14 = 0;
  local_24 = param_1;
  iVar2 = FUN_10228350(0x18);
  local_24[1] = iVar2;
  uVar1 = ((undefined4 *)*param_4)[1];
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)*param_4;
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

