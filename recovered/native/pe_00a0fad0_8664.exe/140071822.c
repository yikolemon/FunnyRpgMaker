/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140071822 */

void FUN_140071822(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  FUN_140063f00(param_1 + 8,*param_1);
  *param_1 = 1;
  local_20 = (undefined8 *)*param_2;
  local_28 = *local_20;
  uVar1 = FUN_140071894();
  *(undefined8 *)(param_1 + 8) = uVar1;
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_48);
}

