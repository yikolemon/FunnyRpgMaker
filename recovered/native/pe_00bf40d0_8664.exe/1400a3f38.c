/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a3f38 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1400a3f38(longlong param_1,longlong param_2)

{
  undefined8 in_RAX;
  
  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    in_RAX = 0;
    if (*(code **)(param_2 + -8) != (code *)0x0) {
      in_RAX = (**(code **)(param_2 + -8))(0);
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

