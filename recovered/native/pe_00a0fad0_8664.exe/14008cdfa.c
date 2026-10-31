/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008cdfa */

void FUN_14008cdfa(longlong param_1,undefined8 param_2)

{
  undefined1 local_1a0 [136];
  longlong local_118;
  undefined1 local_98 [56];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140085d44(local_1a0,param_2,0x22,0x40,1);
  if (local_118 != 0) {
    FUN_140085d9c(local_1a0,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x2c));
    FUN_1400581a2(local_1a0);
    return;
  }
  FUN_14000892c(local_40,param_2);
  FUN_1400898bd(local_60,L"Failed to open file for dumping: ",local_40);
  FUN_140089914(local_98,local_60);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_98,&DAT_1401a5760);
}

