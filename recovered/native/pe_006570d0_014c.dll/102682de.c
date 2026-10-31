/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102682de */

/* Library Function - Single Match
    __beginthreadex
   
   Library: Visual Studio 2019 Release */

uintptr_t __cdecl
__beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,
               uint _InitFlag,uint *_ThrdAddr)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  DWORD DVar3;
  uint local_c;
  __acrt_thread_parameter *local_8;
  
  if (_StartAddress == (_StartAddress *)0x0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    return 0;
  }
  local_8 = create_thread_parameter(_StartAddress,_ArgList);
  if (local_8 != (__acrt_thread_parameter *)0x0) {
    pvVar2 = CreateThread(_Security,_StackSize,(LPTHREAD_START_ROUTINE)&LAB_102683f6,local_8,
                          _InitFlag,&local_c);
    if (pvVar2 != (HANDLE)0x0) {
      if (_ThrdAddr != (uint *)0x0) {
        *_ThrdAddr = local_c;
      }
      local_8 = (__acrt_thread_parameter *)0x0;
      goto LAB_10268342;
    }
    DVar3 = GetLastError();
    ___acrt_errno_map_os_error(DVar3);
  }
  pvVar2 = (HANDLE)0x0;
LAB_10268342:
  __crt_unique_heap_ptr<__acrt_thread_parameter,_anon_4E93FCDD::thread_parameter_free_policy>::
  ~__crt_unique_heap_ptr<__acrt_thread_parameter,_anon_4E93FCDD::thread_parameter_free_policy>
            ((__crt_unique_heap_ptr<__acrt_thread_parameter,_anon_4E93FCDD::thread_parameter_free_policy>
              *)&local_8);
  return (uintptr_t)pvVar2;
}

