/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140043b0a */

void FUN_140043b0a(undefined8 param_1,undefined4 param_2)

{
  undefined1 local_d8 [136];
  undefined1 local_50 [32];
  undefined4 local_30 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = FUN_140007025();
  local_30[0] = param_2;
  FUN_14000169c(local_50,param_1);
  FUN_140043c0e(local_d8,local_50,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_d8,&DAT_14017a868);
}

