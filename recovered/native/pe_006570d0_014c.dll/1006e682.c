/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006e682 */

void __fastcall FUN_1006e682(int param_1)

{
  int *unaff_FS_OFFSET;
  undefined1 local_1d4 [384];
  undefined1 local_54 [24];
  undefined1 local_3c [24];
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_1d4;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2730;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_10001e84("BasicData/Game.dat",0);
    local_14 = 0;
    local_24 = param_1;
    FUN_10001cfb(local_3c,param_1,local_54);
    local_14 = 1;
    FUN_1006e18c(local_3c,local_24 + 0x19);
    local_14 = 2;
    FUN_1009c4c2(local_1d4);
    local_14 = 0xffffffff;
    FUN_1006f9a8();
    FUN_10001f04();
    FUN_10001f04();
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

