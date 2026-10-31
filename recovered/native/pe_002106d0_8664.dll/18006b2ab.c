/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006b2ab */

undefined8 FUN_18006b2ab(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_80 [32];
  int local_60 [2];
  undefined8 local_58;
  int local_50 [2];
  undefined8 local_48;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_50[0] = 0;
  local_48 = FUN_180002218();
  FUN_1800b1ec2(local_80,param_2,local_50);
  if (local_50[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18000219a("weakly_canonical",local_50,param_2);
  }
  local_60[0] = 0;
  local_58 = FUN_180002218();
  FUN_1800b1ec2(local_50,param_3,local_60);
  if (local_60[0] == 0) {
    FUN_1800b125c(local_80,param_1,local_50);
    FUN_180001e4c(local_50);
    FUN_180001e4c(local_80);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18000219a("weakly_canonical",local_60,param_3);
}

