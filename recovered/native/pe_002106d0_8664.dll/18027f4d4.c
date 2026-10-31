/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027f4d4 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18027f4d4(undefined8 *param_1,undefined8 *param_2)

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

