/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404aa894 */

/* Library Function - Single Match
    __acrt_lowio_lock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lowio_lock_fh(uint param_1)

{
  (*(code *)s_GetEnvironmentVariableW_14059dde4._12_8_)
            ((&DAT_1406328d0)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}

