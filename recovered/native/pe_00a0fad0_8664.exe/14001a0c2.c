/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001a0c2 */

undefined8 * FUN_14001a0c2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0xa4) == '\x01') {
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400d9e50();
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
  }
  return param_2;
}

