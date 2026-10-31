/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c4be4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402c4be4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  local_30 = param_1[2];
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  local_38 = param_1;
  FUN_1402c541d(local_28);
  FUN_140213408(param_2,local_28,0);
  if (ram0x000140613b10 == (local_18 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_18 ^ (ulonglong)auStack_58);
}

