/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180278b9c */

undefined8 FUN_180278b9c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson(L"_is_double",L"__crt_strtox::floating_point_value::as_double",
                 L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1db,0);
}

