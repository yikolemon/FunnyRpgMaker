/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101424ec */

void __thiscall FUN_101424ec(int param_1,undefined4 param_2)

{
  size_t sVar1;
  undefined1 auStack_14 [3];
  char local_11 [5];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_14;
  FUN_100faa51(local_11,param_2);
  sVar1 = _strlen(local_11);
  FUN_10142557(local_11,sVar1);
  *(undefined1 *)(param_1 + 0x54) = 1;
  FUN_101424e4();
  if (DAT_10388d00 == (local_c ^ (uint)auStack_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

