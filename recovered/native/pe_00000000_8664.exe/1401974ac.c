/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401974ac */

undefined8 FUN_1401974ac(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson(L"_is_double",L"__crt_strtox::floating_point_value::as_double",
                 L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1db,0);
}

