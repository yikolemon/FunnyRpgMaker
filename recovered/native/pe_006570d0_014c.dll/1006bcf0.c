/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006bcf0 */

int FUN_1006bcf0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  int *unaff_FS_OFFSET;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2510;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10002e46(param_1);
  local_28 = local_24 + 0x18;
  *(undefined4 *)(local_24 + 0x18) = 0xffffffff;
  local_14 = 1;
  iVar1 = FUN_1006bf4c(local_24,param_2,local_28,local_24 + 0x1c);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (iVar1 == 0x12) {
    uVar2 = 0;
    iVar1 = 0;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(local_24 + 0x26c) = uVar2;
  *(int *)(local_24 + 0x270) = iVar1;
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

