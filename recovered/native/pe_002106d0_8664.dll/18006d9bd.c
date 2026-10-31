/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006d9bd */

void FUN_18006d9bd(undefined8 param_1,undefined4 param_2)

{
  undefined1 local_d8 [136];
  undefined1 local_50 [32];
  undefined4 local_30 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = FUN_180002218();
  local_30[0] = param_2;
  FUN_180001e92(local_50,param_1);
  FUN_18006da3e(local_d8,local_50,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_d8,&DAT_18038e638);
}

