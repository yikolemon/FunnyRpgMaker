/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140001d85 */

longlong * FUN_140001d85(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *local_68;
  undefined8 local_60;
  longlong local_58 [3];
  longlong local_40 [5];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_60 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_68 = param_2;
  FUN_140006704(local_40,&local_68);
  FUN_1400066e1(local_58,local_40,0x22,0x5c);
  plVar1 = FUN_1400063aa(param_1,local_58);
  FUN_140002174(local_40);
  return plVar1;
}

