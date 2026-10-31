/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017fac0 */

longlong FUN_18017fac0(longlong param_1,uint param_2)

{
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x20);
  }
  return param_1;
}

