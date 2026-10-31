/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027ee8d */

void FUN_14027ee8d(undefined8 param_1,undefined4 param_2)

{
  undefined1 local_d8 [136];
  undefined1 local_50 [32];
  undefined4 local_30 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = FUN_1402136e8();
  local_30[0] = param_2;
  FUN_140213362(local_50,param_1);
  FUN_14027ef0e(local_d8,local_50,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_d8,&DAT_14059fb08);
}

