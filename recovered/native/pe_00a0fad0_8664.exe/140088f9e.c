/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140088f9e */

void FUN_140088f9e(undefined1 *param_1,undefined8 param_2)

{
  undefined1 local_1b0 [280];
  undefined1 local_98 [56];
  wchar_t *local_60;
  undefined8 local_58;
  undefined1 local_50 [32];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_14008c33e(local_1b0,param_2,0x22,0x40,1);
  if (param_1 + 0x10 != local_1b0) {
    FUN_14003fa34(param_1 + 0x28);
    FUN_14008c7bc(param_1 + 0x10,local_1b0);
  }
  FUN_140089350(local_1b0);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    *param_1 = 0;
    return;
  }
  FUN_14000892c(local_50,param_2);
  local_60 = L"Failed to open file {}";
  local_58 = 0x16;
  FUN_140052dd3(local_1b0,&local_60,local_50);
  FUN_14008c396(local_98,local_1b0);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_98,&DAT_1401a57a0);
}

