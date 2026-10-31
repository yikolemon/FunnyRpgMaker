/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ed860 */

void FUN_100ed860(undefined4 param_1)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  FUN_1011c980(param_1);
  FUN_1011c8c9(param_1,0x400);
  FUN_1010c060(&local_30);
  FUN_1011c87e(param_1,local_30,local_2c);
  FUN_1011cae5(param_1,0,0x3e99999a,&local_18,&local_24);
  FUN_1011cae5(local_18,2,0x3f000000,&local_1c,&local_20);
  FUN_1011cae5(local_24,0,0x3edb6db7,&local_24,&local_28);
  FUN_1011c7e9(&DAT_1032f51a,local_1c);
  FUN_1011c7e9(&DAT_1032f1f9,local_20);
  FUN_1011c7e9(&DAT_1032f134,local_24);
  FUN_1011c7e9(&DAT_1032f0e0,local_28);
  FUN_1011cbfa(param_1);
  FUN_10118556();
  if (DAT_10388d00 == (local_14 ^ (uint)&local_30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

