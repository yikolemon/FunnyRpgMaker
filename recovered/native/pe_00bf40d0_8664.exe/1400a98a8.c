/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a98a8 */

undefined8 FUN_1400a98a8(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_140095e80();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_140095e5c();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1401437a0)) {
      if ((*(byte *)((&DAT_1401433a0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_1401433a0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    p_Var1 = FUN_140095e80();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_140095e5c();
    *(undefined4 *)p_Var1 = 9;
    FUN_1400a0ea0();
  }
  return 0xffffffffffffffff;
}

