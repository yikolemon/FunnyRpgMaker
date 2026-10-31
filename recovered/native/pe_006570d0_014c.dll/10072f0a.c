/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10072f0a */

void __thiscall FUN_10072f0a(undefined1 *param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_138 [4];
  undefined1 *local_134;
  undefined1 *local_130;
  wchar_t *local_12c;
  undefined4 uStack_128;
  undefined1 local_124 [60];
  undefined1 local_e8 [192];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_138;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c28d0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  FUN_1007dcc0(param_2,0x22,0x40,1);
  local_18 = 0;
  local_130 = param_1 + 0x10;
  if (local_130 != local_e8) {
    local_134 = param_1;
    FUN_100752c4();
    param_1 = local_134;
    FUN_1007e27a(local_e8);
  }
  local_18 = 0xffffffff;
  FUN_100732dc();
  if (*(int *)(param_1 + 0x74) != 0) {
    *param_1 = 0;
    *unaff_FS_OFFSET = local_20;
    return;
  }
  FUN_10003728(param_2);
  local_18 = 1;
  local_12c = L"Failed to open file {}";
  uStack_128 = 0x16;
  FUN_1007dd49(local_e8,0x1610356138,local_124);
  local_18 = 2;
  FUN_1007dda6(local_e8);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0();
}

