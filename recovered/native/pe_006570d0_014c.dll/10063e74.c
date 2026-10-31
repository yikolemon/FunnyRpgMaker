/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10063e74 */

undefined4 * __fastcall FUN_10063e74(undefined4 *param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_10;
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = utf8::exception::vftable;
  *param_1 = utf8::not_enough_room::vftable;
  *unaff_FS_OFFSET = iVar1;
  return param_1;
}

