/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140071c80 */

void FUN_140071c80(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  FUN_140063f00(param_1 + 8,*param_1);
  *param_1 = 2;
  local_20 = param_2[1];
  local_28 = *param_2;
  uVar1 = FUN_140071cf2();
  *(undefined8 *)(param_1 + 8) = uVar1;
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_48);
}

