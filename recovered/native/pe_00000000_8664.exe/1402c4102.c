/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c4102 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402c4102(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  plVar1 = param_1 + 2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  lVar2 = (longlong)param_1 + *plVar1 * 2;
  local_28 = FUN_14021344f(param_1,lVar2);
  local_20 = lVar2 - local_28 >> 1;
  FUN_140213408(param_2,&local_28,0);
  if (ram0x000140613b10 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_18 ^ (ulonglong)auStack_48);
}

