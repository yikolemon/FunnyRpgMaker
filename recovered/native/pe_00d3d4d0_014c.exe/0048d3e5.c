/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048d3e5 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __register_thread_local_exe_atexit_callback
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
__register_thread_local_exe_atexit_callback(_func_void_void_ptr_ulong_void_ptr *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_005216ec == (_func_void_void_ptr_ulong_void_ptr *)DAT_0050e8c0) {
    DAT_005216ec = __crt_fast_encode_pointer<void_(__stdcall*)(void*,unsigned_long,void*)>(param_1);
    return;
  }
  iVar2 = FUN_004961ad();
  pcVar1 = *(code **)(iVar2 + 0xc);
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00508898)();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_004903c8();
}

