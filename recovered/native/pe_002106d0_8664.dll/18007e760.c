/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007e760 */

void FUN_18007e760(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_e8 [136];
  undefined1 local_60 [32];
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_38 = FUN_180002218();
  local_40[0] = param_2;
  FUN_180001e92(local_60,param_1);
  FUN_18007e7fc(local_e8,local_60,param_3,param_4,local_40);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_e8,&DAT_18038e638);
}

