/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b904c */

undefined8 FUN_1401b904c(uint param_1,HANDLE param_2)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_140f331b0)) {
    if (*(longlong *)
         ((&DAT_140f32db0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
         (ulonglong)(param_1 & 0x3f) * 0x48) == -1) {
      iVar1 = FUN_1401a0104();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1401b90cd;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_1401b90cd:
      *(HANDLE *)
       ((&DAT_140f32db0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
       (ulonglong)(param_1 & 0x3f) * 0x48) = param_2;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_14019e8cc();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_14019e8f0();
  *puVar2 = 0;
  return 0xffffffff;
}

