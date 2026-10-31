/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028fc30 */

void FUN_14028fc30(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_e8 [136];
  undefined1 local_60 [32];
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_38 = FUN_1402136e8();
  local_40[0] = param_2;
  FUN_140213362(local_60,param_1);
  FUN_14028fccc(local_e8,local_60,param_3,param_4,local_40);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_e8,&DAT_14059fb08);
}

