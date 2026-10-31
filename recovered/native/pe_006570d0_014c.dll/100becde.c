/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100becde */

void FUN_100becde(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  DWORD dwMilliseconds;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_100bee20(&local_20);
  while( true ) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if ((SBORROW4(local_1c,uVar2) != SBORROW4(local_1c - uVar2,(uint)(local_20 < uVar1))) ==
        (int)((local_1c - uVar2) - (uint)(local_20 < uVar1)) < 0) break;
    local_28 = uVar1 - local_20;
    local_24 = (uVar2 - local_1c) - (uint)(uVar1 < local_20);
    dwMilliseconds = FUN_100bef0f(&local_28);
    Sleep(dwMilliseconds);
    FUN_100bee20(&local_20);
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

