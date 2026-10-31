/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b5a8f */

void __fastcall FUN_101b5a8f(int param_1)

{
  char cVar1;
  float10 fVar2;
  char *local_2c;
  float *local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  char *local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_2c;
  local_28 = (float *)0x40000;
  local_2c = (char *)0x228;
  FUN_101145b7();
  local_28 = (float *)(param_1 + 8);
  local_2c = "Grid";
  FUN_1012ff1a();
  local_28 = (float *)0xbf800000;
  local_2c = (char *)0x0;
  FUN_10114a0e();
  fVar2 = (float10)FUN_10111f20();
  local_10 = (float)fVar2;
  local_2c = (char *)(local_10 * DAT_102b710c);
  FUN_100fb68f();
  local_c = *(float *)(param_1 + 0x14) * DAT_102b8c10;
  local_28 = &local_c;
  local_1c = *(float *)(param_1 + 0x1c) * DAT_102b8c10;
  local_20 = DAT_102b8c10 * *(float *)(param_1 + 0x18);
  local_14 = 0x600;
  local_18 = "%.0f%%";
  local_24 = 0x40a00000;
  local_2c = "##Zoom";
  cVar1 = FUN_10137f3c();
  if (cVar1 != '\0') {
    *(float *)(param_1 + 0x14) = local_c / DAT_102b8c10;
  }
  if (DAT_10388d00 == (local_8 ^ (uint)&local_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

