/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c09cc */

void __fastcall FUN_100c09cc(int param_1)

{
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 local_c;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_1c;
  local_1c = *(undefined4 *)(param_1 + 4);
  uStack_18 = *(undefined4 *)(param_1 + 8);
  uStack_14 = *(undefined4 *)(param_1 + 0xc);
  uStack_10 = *(undefined4 *)(param_1 + 0x10);
  local_c = *(undefined8 *)(param_1 + 0x14);
  FUN_100c0a2f();
  if (DAT_10388d00 == (local_4 ^ (uint)&local_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

