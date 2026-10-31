/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026d816 */

undefined4 FUN_1026d816(char param_1)

{
  undefined4 *local_24;
  undefined1 *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  __crt_seh_guarded_call<void> local_5;
  
  local_10 = 0;
  local_24 = &local_10;
  local_c = 0;
  local_20 = &param_1;
  local_1c = &local_c;
  local_14 = 8;
  local_18 = 8;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_2cc53f568c5a2bb6f192f930a45d44ea>,<lambda_ab61a845afdef5b7c387490eaf3616ee>&,<lambda_c2ffc0b7726aa6be21d5f0026187e748>_>
            (&local_5,(<lambda_2cc53f568c5a2bb6f192f930a45d44ea> *)&local_18,
             (<lambda_ab61a845afdef5b7c387490eaf3616ee> *)&local_24,
             (<lambda_c2ffc0b7726aa6be21d5f0026187e748> *)&local_14);
  if (param_1 != '\0') {
    local_c = local_10;
  }
  return local_c;
}

