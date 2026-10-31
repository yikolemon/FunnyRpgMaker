/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011c6bd */

int FUN_1011c6bd(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  undefined8 local_3c;
  undefined8 local_34 [4];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)FUN_1010ad36();
  }
  local_34[0] = 0;
  FUN_10111d56(param_2 + 8,0,local_34);
  FUN_10107cf6(param_2 + 10,0);
  FUN_10111e7d(*param_2);
  FUN_100fa4b1(local_34,0x20,"WindowOverViewport_%08X",*param_2);
  FUN_100fd0a3(3,0);
  FUN_100fd0a3(4,0);
  local_3c = 0;
  FUN_100fd3bc(2,&local_3c);
  FUN_10107d2b(local_34,0,(param_3 & 8) * 0x10 + (param_3 & 1) * 0x200 + 0xa2027);
  FUN_100fd4c4(3);
  if (param_1 == 0) {
    param_1 = FUN_10113594("DockSpace");
  }
  local_3c = 0;
  FUN_1011c2a7(param_1,&local_3c,param_3,param_4);
  FUN_1010ad44();
  if (DAT_10388d00 == (local_14 ^ (uint)&local_3c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

