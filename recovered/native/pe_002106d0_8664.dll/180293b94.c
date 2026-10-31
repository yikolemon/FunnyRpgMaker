/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180293b94 */

/* Library Function - Single Match
    __acrt_uninitialize_lowio
   
   Library: Visual Studio 2019 Release */

undefined1 __acrt_uninitialize_lowio(void)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    if (*(longlong *)((longlong)&DAT_180421400 + uVar1) != 0) {
      __acrt_lowio_destroy_handle_array();
      *(undefined8 *)((longlong)&DAT_180421400 + uVar1) = 0;
    }
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x400);
  return 1;
}

