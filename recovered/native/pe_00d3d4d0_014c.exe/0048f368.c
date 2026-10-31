/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048f368 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0048f368(void)

{
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  __crt_seh_guarded_call<int> local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_1c = &stack0x00000004;
  local_8 = 0;
  local_18 = 2;
  local_20 = 2;
  __crt_seh_guarded_call<int>::
  operator()<<lambda_69a2805e680e0e292e8ba93315fe43a8>,<lambda_f03950bc5685219e0bcd2087efbe011e>&,<lambda_03fcd07e894ec930e3f35da366ca99d6>_>
            (local_11,(<lambda_69a2805e680e0e292e8ba93315fe43a8> *)&local_20,
             (<lambda_f03950bc5685219e0bcd2087efbe011e> *)&local_1c,
             (<lambda_03fcd07e894ec930e3f35da366ca99d6> *)&local_18);
  return;
}

