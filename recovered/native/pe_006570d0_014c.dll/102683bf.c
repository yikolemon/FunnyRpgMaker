/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102683bf */

/* Library Function - Single Match
    public: __thiscall __crt_unique_heap_ptr<struct __acrt_thread_parameter,struct `anonymous
   namespace'::thread_parameter_free_policy>::~__crt_unique_heap_ptr<struct
   __acrt_thread_parameter,struct `anonymous namespace'::thread_parameter_free_policy>(void)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_unique_heap_ptr<__acrt_thread_parameter,_anon_4E93FCDD::thread_parameter_free_policy>::
~__crt_unique_heap_ptr<__acrt_thread_parameter,_anon_4E93FCDD::thread_parameter_free_policy>
          (__crt_unique_heap_ptr<__acrt_thread_parameter,_anon_4E93FCDD::thread_parameter_free_policy>
           *this)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      CloseHandle(*(HANDLE *)(iVar1 + 8));
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      FreeLibrary(*(HMODULE *)(iVar1 + 0xc));
    }
    FUN_10274120(iVar1);
  }
  *(undefined4 *)this = 0;
  return;
}

