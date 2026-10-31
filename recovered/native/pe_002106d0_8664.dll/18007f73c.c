/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007f73c */

void FUN_18007f73c(longlong param_1,undefined8 param_2)

{
  undefined1 local_1a0 [136];
  longlong local_118;
  undefined1 local_98 [56];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_18007f878(local_1a0,param_2,0x22,0x40,1);
  if (local_118 != 0) {
    FUN_18007f454(local_1a0,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x2c));
    FUN_18007f8d0(local_1a0);
    return;
  }
  FUN_18000358a(local_40,param_2);
  FUN_180075e6b(local_60,L"Failed to open file for dumping: ",local_40);
  FUN_180075ec2(local_98,local_60);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_98,&DAT_1803a6440);
}

