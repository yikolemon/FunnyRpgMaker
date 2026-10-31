/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101293f2 */

void __fastcall FUN_101293f2(int param_1)

{
  undefined2 uVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_18;
  local_18 = *(float *)(param_1 + 8);
  fStack_14 = *(float *)(param_1 + 0xc);
  fStack_10 = (float)*(undefined8 *)(param_1 + 0x10) + local_18;
  fStack_c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) + fStack_14;
  uVar1 = FUN_101295b9();
  *(undefined2 *)(param_1 + 0x86) = uVar1;
  if (DAT_10388d00 == (local_8 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

