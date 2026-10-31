/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10142dbe */

void __fastcall FUN_10142dbe(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 local_2c [4];
  int local_28;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)local_2c;
  if (*(char *)((int)param_2 + 0x17) != '\0') {
    FUN_10151b49(0);
  }
  if (param_2[1] == param_2[2]) {
    param_2[1] = *param_2;
  }
  uVar1 = FUN_101524b1();
  param_2[2] = uVar1;
  *param_2 = uVar1;
  *(bool *)(param_1 + 0x5a) = local_28 != 0;
  if (DAT_10388d00 == (local_10 ^ (uint)local_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

