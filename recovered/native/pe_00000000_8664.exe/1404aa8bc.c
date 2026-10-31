/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404aa8bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_lowio_unlock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lowio_unlock_fh(uint param_1)

{
  (*_DAT_14059e0c8)((&DAT_1406328d0)[(longlong)(int)param_1 >> 6] +
                    (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}

