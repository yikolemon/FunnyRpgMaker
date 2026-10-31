/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019f7a8 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_14019f7a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  while( true ) {
    if (param_1 == param_2) {
      return 0;
    }
    if (((code *)*param_1 != (code *)0x0) && (uVar1 = (*(code *)*param_1)(), (int)uVar1 != 0))
    break;
    param_1 = param_1 + 1;
  }
  return uVar1;
}

