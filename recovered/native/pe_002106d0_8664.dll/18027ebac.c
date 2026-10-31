/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027ebac */

/* Library Function - Single Match
    struct _iobuf * __ptr64 __cdecl common_fsopen<char>(char const * __ptr64 const,char const *
   __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_iobuf * __cdecl common_fsopen<char>(char *param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  longlong local_res8;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    puVar1 = (undefined4 *)FUN_18027e66c();
    *puVar1 = 0x16;
    FUN_180290a50();
  }
  else if (*param_1 == '\0') {
    puVar1 = (undefined4 *)FUN_18027e66c();
    *puVar1 = 0x16;
  }
  else {
    FUN_1802978e0(&local_res8);
    if (local_res8 != 0) {
      p_Var2 = (_iobuf *)FUN_180297a40(param_1,param_2,param_3,local_res8,0);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(local_res8);
      }
      FUN_18027240c(local_res8);
      return p_Var2;
    }
    puVar1 = (undefined4 *)FUN_18027e66c();
    *puVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}

