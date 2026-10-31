/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003cdf3 */

void FUN_14003cdf3(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

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
  FUN_1400027d2(local_48,param_1);
  FUN_140002832(local_d0,local_48,param_3,&local_28);
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(local_d0,&DAT_140ee3a18);
}

