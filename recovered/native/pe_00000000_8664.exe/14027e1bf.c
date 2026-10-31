/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027e1bf */

void FUN_14027e1bf(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 local_e0 [136];
  undefined1 local_58 [32];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = FUN_1402136e8();
  local_38[0] = param_2;
  FUN_140213362(local_58,param_1);
  FUN_140213a4c(local_e0,local_58,param_3,local_38);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_e0,&DAT_14059fb08);
}

