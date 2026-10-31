/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003de8b */

undefined8 FUN_14003de8b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_80 [32];
  int local_60 [2];
  undefined8 local_58;
  int local_50 [2];
  undefined8 local_48;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_50[0] = 0;
  local_48 = FUN_140002f76();
  FUN_14003efee(local_80,param_2,local_50);
  if (local_50[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14003cdf3("weakly_canonical",local_50,param_2);
  }
  local_60[0] = 0;
  local_58 = FUN_140002f76();
  FUN_14003efee(local_50,param_3,local_60);
  if (local_60[0] == 0) {
    FUN_14003e388(local_80,param_1,local_50);
    FUN_140001056(local_50);
    FUN_140001056(local_80);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14003cdf3("weakly_canonical",local_60,param_3);
}

