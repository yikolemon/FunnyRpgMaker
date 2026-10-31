/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009e7ce */

void FUN_14009e7ce(char *param_1,undefined8 param_2,uint *param_3)

{
  undefined1 local_68 [56];
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  *(ulonglong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (ulonglong)*param_3;
  if (*param_1 == '\x01') {
    FUN_140085332(param_1 + 0x128,*(undefined8 *)(param_1 + 0x130),param_2,*param_3);
    return;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_140085d9c(param_1 + 0x20,param_2,*param_3);
    return;
  }
  FUN_14000169c(local_30,"FileWriter not initialized");
  FUN_14008cc42(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_68,&DAT_1401a57a0);
}

