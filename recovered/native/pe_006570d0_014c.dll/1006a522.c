/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a522 */

void __fastcall FUN_1006a522(int param_1)

{
  int *unaff_FS_OFFSET;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c23c0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_24 = param_1 + 0x5c;
  FUN_100446d6();
  local_14 = 0;
  local_28 = param_1;
  FUN_1006b642();
  FUN_1006b672();
  *(undefined1 *)(local_28 + 0x58) = 0;
  local_14 = 0xffffffff;
  FUN_1022c200(local_24);
  *unaff_FS_OFFSET = local_1c;
  return;
}

