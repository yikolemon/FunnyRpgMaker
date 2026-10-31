/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f471c */

undefined8 * FUN_1800f471c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x10);
  *puVar1 = BS::move_only_function<void___cdecl(unsigned___int64)>::
            func_model<BS::thread_pool<0>::<lambda_2>_>::vftable;
  *param_1 = puVar1;
  return param_1;
}

