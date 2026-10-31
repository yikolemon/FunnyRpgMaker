/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10003d9a */

void __thiscall FUN_10003d9a(undefined4 *param_1,char param_2)

{
  uint uVar1;
  undefined4 local_1c [2];
  int local_14;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)local_1c;
  uVar1 = param_1[4];
  if (uVar1 < (uint)param_1[5]) {
    param_1[4] = uVar1 + 1;
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    *(char *)((int)param_1 + uVar1) = param_2;
    *(undefined1 *)((int)param_1 + uVar1 + 1) = 0;
  }
  else {
    local_14 = (int)param_2;
    local_1c[0] = 1;
    FUN_10003e12();
  }
  if (DAT_10388d00 == (local_c ^ (uint)local_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

