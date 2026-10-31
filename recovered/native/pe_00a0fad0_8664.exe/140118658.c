/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140118658 */

undefined8 FUN_140118658(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson(L"!_is_double",L"__crt_strtox::floating_point_value::as_float",
                 L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1e1,0);
}

