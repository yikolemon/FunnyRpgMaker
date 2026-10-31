/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10263d9c */

undefined4 __fastcall FUN_10263d9c(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson(L"!_is_double",L"__crt_strtox::floating_point_value::as_float",
                  L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1e1,0);
}

