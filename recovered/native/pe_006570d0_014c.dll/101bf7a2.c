/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bf7a2 */

void FUN_101bf7a2(void)

{
  int iVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_40;
  iVar1 = FUN_1010331e();
  *(undefined1 **)(iVar1 + 0x88) = &LAB_101bf9f4;
  *(undefined1 **)(iVar1 + 0x8c) = &LAB_101bfb23;
  *(undefined1 **)(iVar1 + 0x90) = &LAB_101bfb69;
  *(undefined1 **)(iVar1 + 0x94) = &LAB_101bfc80;
  *(undefined1 **)(iVar1 + 0x98) = &LAB_101bfcfe;
  uStack_2c = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_14 = 0;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x1c;
  uStack_24 = 1;
  uStack_1c = 0x20;
  uStack_18 = 1;
  local_10 = 1;
  local_c = 0;
  local_8 = 0;
  FUN_101bf959(&local_40,1);
  if (DAT_10388d00 == (local_4 ^ (uint)&local_40)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

