/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140013d30 */

undefined8 * FUN_140013d30(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_140019246(param_3,local_38);
  if (local_28 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
  }
  else {
    FUN_140006fbc(local_58,&DAT_1401728dd,local_38);
    FUN_14000ed8c(param_2,local_58,&DAT_1401728dd);
    FUN_1400017de(local_58);
  }
  FUN_1400017de(local_38);
  return param_2;
}

