/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b6578 */

int __fastcall FUN_101b6578(int param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_18 = &LAB_101bcf30;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 4 + iVar1) = 0;
    *(undefined4 *)(param_1 + iVar1) = 0;
    *(undefined4 *)(param_1 + 8 + iVar1) = 0;
    iVar1 = iVar1 + 0xc;
  } while (iVar1 != 0x18);
  local_28 = param_1 + 0xc;
  local_2c = -0x14;
  local_24 = param_1;
  do {
    local_14 = 3;
    FUN_1014b032();
    local_28 = local_28 + 0x20;
    local_2c = local_2c + -0x20;
  } while (local_2c != -0x54);
  *(undefined1 *)(local_24 + 0x58) = 1;
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

