/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ac5a3 */

undefined8 FUN_1400ac5a3(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  undefined1 local_40 [39];
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_60 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_68 = param_2;
  FUN_1400ac999(local_40,&local_68,&local_19);
  FUN_1400ac976(local_58,local_40,0x22,0x5c);
  uVar1 = FUN_1400ac63f(param_1,local_58);
  FUN_140005242(local_40);
  return uVar1;
}

