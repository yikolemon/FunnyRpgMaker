/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000219a */

void FUN_18000219a(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 local_d0 [136];
  undefined1 local_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_180001e92(local_48,param_1);
  FUN_18000257c(local_d0,local_48,param_3,&local_28);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_d0,&DAT_18038e638);
}

