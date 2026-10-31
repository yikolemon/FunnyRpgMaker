/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400599bd */

void FUN_1400599bd(undefined8 param_1,undefined4 *param_2)

{
  undefined1 local_d0 [136];
  undefined1 local_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_14000169c(local_48,param_1);
  FUN_140043c0e(local_d0,local_48,&local_28);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_d0,&DAT_14017a868);
}

