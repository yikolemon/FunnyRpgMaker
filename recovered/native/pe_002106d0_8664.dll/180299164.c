/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180299164 */

undefined8 FUN_180299164(uint param_1,HANDLE param_2)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_180421800)) {
    if (*(longlong *)
         ((&DAT_180421400)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
         (ulonglong)(param_1 & 0x3f) * 0x48) == -1) {
      iVar1 = FUN_1802a6980();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1802991e5;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_1802991e5:
      *(HANDLE *)
       ((&DAT_180421400)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
       (ulonglong)(param_1 & 0x3f) * 0x48) = param_2;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_18027e66c();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_18027e690();
  *puVar2 = 0;
  return 0xffffffff;
}

