/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140041f39 */

void FUN_140041f39(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 local_e0 [136];
  undefined1 local_58 [32];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = FUN_140007025();
  local_38[0] = param_2;
  FUN_14000169c(local_58,param_1);
  FUN_1400413fa(local_e0,local_58,param_3,local_38);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_e0,&DAT_14017a868);
}

