/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048d1ae */

/* Library Function - Single Match
    __beginthreadex
   
   Library: Visual Studio 2019 Release */

uintptr_t __cdecl
__beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,
               uint _InitFlag,uint *_ThrdAddr)

{
  __acrt_ptd *p_Var1;
  HANDLE pvVar2;
  DWORD DVar3;
  uint local_c;
  __acrt_thread_parameter *local_8;
  
  if (_StartAddress == (_StartAddress *)0x0) {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_00495c88();
    return 0;
  }
  local_8 = create_thread_parameter(_StartAddress,_ArgList);
  if (local_8 != (__acrt_thread_parameter *)0x0) {
    pvVar2 = CreateThread(_Security,_StackSize,(LPTHREAD_START_ROUTINE)&LAB_0048d2c6,local_8,
                          _InitFlag,&local_c);
    if (pvVar2 != (HANDLE)0x0) {
      if (_ThrdAddr != (uint *)0x0) {
        *_ThrdAddr = local_c;
      }
      local_8 = (__acrt_thread_parameter *)0x0;
      goto LAB_0048d212;
    }
    DVar3 = GetLastError();
    ___acrt_errno_map_os_error(DVar3);
  }
  pvVar2 = (HANDLE)0x0;
LAB_0048d212:
  __crt_unique_heap_ptr<__acrt_thread_parameter,_anon_4E93FCDD::thread_parameter_free_policy>::
  ~__crt_unique_heap_ptr<__acrt_thread_parameter,_anon_4E93FCDD::thread_parameter_free_policy>
            ((__crt_unique_heap_ptr<__acrt_thread_parameter,_anon_4E93FCDD::thread_parameter_free_policy>
              *)&local_8);
  return (uintptr_t)pvVar2;
}

