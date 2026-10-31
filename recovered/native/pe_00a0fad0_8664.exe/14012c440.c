/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012c440 */

undefined8 FUN_14012c440(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_1403555e0)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_1403551e0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 + uVar2 * 0x48)
         & 1) != 0) &&
       (*(longlong *)
         ((&DAT_1403551e0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) != -1)) {
      iVar1 = FUN_14011547c();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_14012c4c0;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_14012c4c0:
      *(undefined8 *)
       ((&DAT_1403551e0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  puVar3 = (undefined4 *)FUN_140113dd4();
  *puVar3 = 9;
  puVar3 = (undefined4 *)FUN_140113df8();
  *puVar3 = 0;
  return 0xffffffff;
}

