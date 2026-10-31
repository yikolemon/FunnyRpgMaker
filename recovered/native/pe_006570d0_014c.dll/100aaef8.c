/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100aaef8 */

void __thiscall FUN_100aaef8(int param_1,undefined4 param_2)

{
  undefined1 auStack_10 [3];
  undefined1 local_d;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_10;
  if (*(int *)(param_1 + 4) == *(int *)(param_1 + 8)) {
    FUN_100aaf5a(*(int *)(param_1 + 4),param_2);
  }
  else {
    FUN_100a92f2(param_2,&local_d);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x18;
  }
  if (DAT_10388d00 == (local_c ^ (uint)auStack_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

