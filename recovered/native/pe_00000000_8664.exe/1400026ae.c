/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400026ae */

void FUN_1400026ae(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 local_e0 [136];
  undefined1 local_58 [32];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = FUN_140002f76();
  local_38[0] = param_2;
  FUN_1400027d2(local_58,param_1);
  FUN_140002832(local_e0,local_58,param_3,local_38);
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(local_e0,&DAT_140ee3a18);
}

