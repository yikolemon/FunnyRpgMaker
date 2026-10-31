/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140083508 */

longlong * FUN_140083508(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_140 [16];
  undefined1 local_130 [240];
  undefined1 local_40 [32];
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_2;
  FUN_1400839e6(param_2,param_3);
  if (*local_20 == local_20[1]) {
    uVar1 = FUN_1400554d2();
    FUN_14000169c(local_40,"calc_prot_key_error_msg");
    uVar1 = FUN_1400aebe4(uVar1,local_40);
    FUN_140052d74(local_140,&DAT_1401cc978,uVar1);
    FUN_140052e4f(local_130);
    FUN_140052e84(local_140);
    FUN_1400017de(local_40);
  }
  return local_20;
}

