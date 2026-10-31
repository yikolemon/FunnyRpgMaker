/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008497d */

void FUN_14008497d(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_e8 [136];
  undefined1 local_60 [32];
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_38 = FUN_140007025();
  local_40[0] = param_2;
  FUN_14000169c(local_60,param_1);
  FUN_140084a18(local_e8,local_60,param_3,param_4,local_40);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_e8,&DAT_14017a868);
}

