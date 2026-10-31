/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d98a2 */

undefined4 __thiscall FUN_100d98a2(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_1c [8];
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_1c;
  FUN_100d98fc(auStack_1c,param_2);
  cVar1 = FUN_100d998a(local_14,param_2);
  if (cVar1 != '\0') {
    param_1 = &local_14;
  }
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_1c)) {
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

