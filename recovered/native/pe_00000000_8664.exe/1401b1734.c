/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b1734 */

/* Library Function - Single Match
    __acrt_uninitialize_lowio
   
   Library: Visual Studio 2019 Release */

undefined1 __acrt_uninitialize_lowio(void)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    if (*(longlong *)((longlong)&DAT_140f32db0 + uVar1) != 0) {
      __acrt_lowio_destroy_handle_array();
      *(undefined8 *)((longlong)&DAT_140f32db0 + uVar1) = 0;
    }
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x400);
  return 1;
}

