/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019b4b1 */

bool __fastcall FUN_1019b4b1(undefined4 param_1)

{
  char cVar1;
  int *unaff_FS_OFFSET;
  bool bVar2;
  undefined1 local_50 [16];
  int local_40;
  int local_28;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_50;
  local_14 = 0xffffffff;
  local_18 = &LAB_1019bb60;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  cVar1 = FUN_101bd00c(param_1);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_101bd096();
    FUN_1019b64c();
    local_14 = 0;
    FUN_1019b6a7();
    bVar2 = local_28 == 0 && local_40 == 0;
    local_14 = 0xffffffff;
    FUN_10001134();
    FUN_10001134();
  }
  *unaff_FS_OFFSET = local_1c;
  return bVar2;
}

