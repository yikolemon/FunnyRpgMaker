/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400ac3b0 */

int FUN_1400ac3b0(uint param_1,LPWSTR param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  
  if (param_1 == 0xfffffffe) {
    p_Var3 = FUN_140095e80();
    *(undefined4 *)p_Var3 = 0;
    p_Var3 = FUN_140095e5c();
    *(undefined4 *)p_Var3 = 9;
    return -1;
  }
  if (((int)param_1 < 0) || (DAT_1401437a0 <= param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if ((*(byte *)((&DAT_1401433a0)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
      if (param_3 < 0x80000000) {
        FUN_1400a9b7c(param_1);
        iVar2 = -1;
        if ((*(byte *)((&DAT_1401433a0)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          p_Var3 = FUN_140095e5c();
          *(undefined4 *)p_Var3 = 9;
          p_Var3 = FUN_140095e80();
          *(undefined4 *)p_Var3 = 0;
        }
        else {
          iVar2 = FUN_1400ac4d0(param_1,param_2,param_3);
        }
        FUN_1400a9ba4(param_1);
        return iVar2;
      }
      p_Var3 = FUN_140095e80();
      *(undefined4 *)p_Var3 = 0;
      p_Var3 = FUN_140095e5c();
      *(undefined4 *)p_Var3 = 0x16;
      goto LAB_1400ac436;
    }
  }
  p_Var3 = FUN_140095e80();
  *(undefined4 *)p_Var3 = 0;
  p_Var3 = FUN_140095e5c();
  *(undefined4 *)p_Var3 = 9;
LAB_1400ac436:
  FUN_1400a0ea0();
  return -1;
}

