/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007e9d4 */

void __thiscall FUN_1007e9d4(int param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_130 [4];
  undefined1 local_12c [24];
  undefined1 local_114 [24];
  undefined1 local_fc [116];
  int local_88;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_130;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c2f60;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  FUN_1007eb1c(param_2,0x22,0x40,1);
  local_18 = 0;
  if (local_88 != 0) {
    FUN_1007e6c8(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),0);
    local_18 = 0xffffffff;
    FUN_1007eba6();
    *unaff_FS_OFFSET = local_20;
    return;
  }
  FUN_10003728(param_2);
  local_18 = 1;
  FUN_10075656(local_114,L"Failed to open file for dumping: ",local_12c);
  local_18 = 2;
  FUN_100756a4(local_114);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_fc,&DAT_10367d38);
}

