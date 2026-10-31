/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10190fa0 */

void __fastcall FUN_10190fa0(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_3c;
  pbVar1 = (byte *)FUN_10192f56(0x20);
  if (pbVar1 == (byte *)0x0) {
    FUN_10192f56(9);
  }
  else {
    *pbVar1 = *pbVar1 & 0xfd;
    iVar2 = FUN_10192f56(9);
    if (iVar2 == 0) {
      local_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      local_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      local_14 = 0xffffffff;
      local_3c = 0x240;
      local_38 = *(float *)(pbVar1 + 4) * DAT_102b8cb0;
      FUN_1019032a(param_1,param_2,0,&local_3c);
    }
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_3c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

