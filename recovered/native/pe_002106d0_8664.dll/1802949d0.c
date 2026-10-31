/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802949d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1802949d0(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    if (*(code **)(param_2 + -8) != (code *)0x0) {
      (**(code **)(param_2 + -8))(0);
    }
  }
  return 1;
}

