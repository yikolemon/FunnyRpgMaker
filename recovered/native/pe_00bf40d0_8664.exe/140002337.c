/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140002337 */

void FUN_140002337(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong local_d0 [17];
  ulonglong local_48 [4];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = *param_2;
  uStack_20 = param_2[1];
  FUN_1400029cc(local_48,param_1);
  FUN_140002cca(local_d0,local_48,param_3,&local_28);
                    /* WARNING: Subroutine does not return */
  FUN_14008c800(local_d0,&DAT_1401215b8);
}

