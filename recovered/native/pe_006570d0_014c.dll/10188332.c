/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10188332 */

void __fastcall FUN_10188332(int param_1)

{
  undefined8 local_14;
  undefined8 local_c;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_14;
  local_c = *(undefined8 *)(*(int *)(param_1 + 0x2c) + 0x34);
  local_14 = *(undefined8 *)(*(int *)(param_1 + 0x2c) + 0x2c);
  FUN_101881b4(&local_14,&local_c,0);
  if (DAT_10388d00 == (local_4 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

