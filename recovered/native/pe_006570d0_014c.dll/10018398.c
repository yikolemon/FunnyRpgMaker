/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018398 */

int __fastcall FUN_10018398(int param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_10;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *unaff_FS_OFFSET = iVar1;
  return param_1;
}

