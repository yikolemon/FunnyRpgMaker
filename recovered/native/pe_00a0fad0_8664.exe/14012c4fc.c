/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012c4fc */

undefined8 FUN_14012c4fc(uint param_1,HANDLE param_2)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_1403555e0)) {
    if (*(longlong *)
         ((&DAT_1403551e0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
         (ulonglong)(param_1 & 0x3f) * 0x48) == -1) {
      iVar1 = FUN_14011547c();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_14012c57d;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_14012c57d:
      *(HANDLE *)
       ((&DAT_1403551e0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
       (ulonglong)(param_1 & 0x3f) * 0x48) = param_2;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_140113dd4();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_140113df8();
  *puVar2 = 0;
  return 0xffffffff;
}

