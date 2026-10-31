/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f2d11 */

void FUN_100f2d11(void)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_18 = &LAB_100f55f0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_14 = 0;
  uVar1 = FUN_10235640(&stack0x00000004);
  FUN_10235380(&stack0x00000010,uVar1,&stack0xfffffffc);
  return;
}

