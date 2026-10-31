/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026836f */

/* Library Function - Single Match
    struct __acrt_thread_parameter * __cdecl create_thread_parameter(void * const,void * const)
   
   Library: Visual Studio 2019 Release */

__acrt_thread_parameter * __cdecl create_thread_parameter(void *param_1,void *param_2)

{
  __acrt_thread_parameter *p_Var1;
  __acrt_thread_parameter *p_Var2;
  __acrt_thread_parameter *local_8;
  
  p_Var1 = (__acrt_thread_parameter *)FUN_10275d90(1,0x14);
  local_8 = p_Var1;
  FUN_10274120(0);
  p_Var2 = (__acrt_thread_parameter *)0x0;
  if (p_Var1 != (__acrt_thread_parameter *)0x0) {
    *(void **)p_Var1 = param_1;
    *(void **)(p_Var1 + 4) = param_2;
    GetModuleHandleExW(4,param_1,(HMODULE *)(p_Var1 + 0xc));
    local_8 = (__acrt_thread_parameter *)0x0;
    p_Var2 = p_Var1;
  }
  __crt_unique_heap_ptr<__acrt_thread_parameter,_anon_4E93FCDD::thread_parameter_free_policy>::
  ~__crt_unique_heap_ptr<__acrt_thread_parameter,_anon_4E93FCDD::thread_parameter_free_policy>
            ((__crt_unique_heap_ptr<__acrt_thread_parameter,_anon_4E93FCDD::thread_parameter_free_policy>
              *)&local_8);
  return p_Var2;
}

