/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006ccef */

void FUN_18006ccef(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 local_e0 [136];
  undefined1 local_58 [32];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = FUN_180002218();
  local_38[0] = param_2;
  FUN_180001e92(local_58,param_1);
  FUN_18000257c(local_e0,local_58,param_3,local_38);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_e0,&DAT_18038e638);
}

