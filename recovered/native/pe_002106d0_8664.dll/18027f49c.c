/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027f49c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18027f49c(undefined8 *param_1,undefined8 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}

