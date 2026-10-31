/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10019ba8 */

int __fastcall FUN_10019ba8(int param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_10;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *unaff_FS_OFFSET = iVar1;
  return param_1;
}

