/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10207e0b */

undefined4 __thiscall FUN_10207e0b(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 auStack_28 [3];
  char local_25;
  int local_24;
  undefined4 local_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_28;
  local_20 = 0;
  local_1c = *(undefined8 *)(param_2 + 0x10);
  FUN_102081d8();
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined1 *)(param_1 + 0xec) = 0;
    local_25 = *(char *)(param_1 + 0xb9);
    FUN_1020850d();
    local_24 = param_1 + 0x90;
    FUN_10208523(param_1 + 0x90,&local_1c,0,0,0,&local_20);
    if (*(int *)(param_1 + 4) == 0) {
      if ((local_25 != '\0') && (*(int *)(param_1 + 0xa0) < 0)) {
        *(undefined1 *)(param_1 + 0xec) = 1;
        FUN_1020850d();
        FUN_10208523(param_1 + 0x90,&local_1c,0,0,0,&local_20);
        if (*(int *)(param_1 + 4) != 0) goto LAB_10207eb4;
      }
      FUN_1020a7fa();
    }
  }
LAB_10207eb4:
  *param_3 = local_20;
  FUN_1020a812();
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return *(undefined4 *)(param_1 + 4);
}

