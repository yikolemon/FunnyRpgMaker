/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180073784 */

void FUN_180073784(undefined1 *param_1,undefined8 param_2)

{
  undefined1 local_1b0 [280];
  undefined1 local_98 [56];
  wchar_t *local_60;
  undefined8 local_58;
  undefined1 local_50 [32];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_18007e972(local_1b0,param_2,0x22,0x40,1);
  if (param_1 + 0x10 != local_1b0) {
    FUN_180075ab6(param_1 + 0x28);
    FUN_18007efa2(param_1 + 0x10,local_1b0);
  }
  FUN_180073b36(local_1b0);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    *param_1 = 0;
    return;
  }
  FUN_18000358a(local_50,param_2);
  local_60 = L"Failed to open file {}";
  local_58 = 0x16;
  FUN_18007e9c9(local_1b0,&local_60,local_50);
  FUN_18007ea46(local_98,local_1b0);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_98,&DAT_1803a64e0);
}

