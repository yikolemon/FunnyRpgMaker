/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f003a */

undefined4 * __fastcall FUN_100f003a(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_24 [8];
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = local_24;
  local_10 = 0xffffffff;
  local_14 = &LAB_100f5330;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  puVar1 = (undefined4 *)FUN_10228350(8);
  *puVar1 = BS::move_only_function<void___cdecl(unsigned_int)>::
            func_model<BS::thread_pool<0>::<lambda_2>_>::vftable;
  *param_1 = puVar1;
  ExceptionList = local_18;
  return param_1;
}

