/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048d4ca */

/* Library Function - Single Match
    void (__stdcall*__cdecl __crt_fast_encode_pointer<void (__stdcall*)(void *,unsigned long,void
   *)>(void (__stdcall*const)(void *,unsigned long,void *)))(void *,unsigned long,void *)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_func_void_void_ptr_ulong_void_ptr * __cdecl
__crt_fast_encode_pointer<void_(__stdcall*)(void*,unsigned_long,void*)>
          (_func_void_void_ptr_ulong_void_ptr *param_1)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)DAT_0050e8c0 & 0x1f) & 0x1f;
  return (_func_void_void_ptr_ulong_void_ptr *)
         (((uint)param_1 >> bVar1 | (int)param_1 << 0x20 - bVar1) ^ DAT_0050e8c0);
}

