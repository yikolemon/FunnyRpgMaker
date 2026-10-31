/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100045e8 */

void __thiscall FUN_100045e8(undefined4 *param_1,ushort param_2)

{
  uint uVar1;
  undefined4 local_1c [2];
  uint local_14;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)local_1c;
  uVar1 = param_1[4];
  if (uVar1 < (uint)param_1[5]) {
    param_1[4] = uVar1 + 1;
    if (7 < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    *(ushort *)((int)param_1 + uVar1 * 2) = param_2;
    *(undefined2 *)((int)param_1 + uVar1 * 2 + 2) = 0;
  }
  else {
    local_14 = (uint)param_2;
    local_1c[0] = 1;
    FUN_100047e0();
  }
  if (DAT_10388d00 == (local_c ^ (uint)local_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

