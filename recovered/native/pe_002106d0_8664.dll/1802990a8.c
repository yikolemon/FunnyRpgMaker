/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802990a8 */

undefined8 FUN_1802990a8(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_180421800)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_180421400)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 + uVar2 * 0x48)
         & 1) != 0) &&
       (*(longlong *)
         ((&DAT_180421400)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) != -1)) {
      iVar1 = FUN_1802a6980();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_180299128;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_180299128:
      *(undefined8 *)
       ((&DAT_180421400)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  puVar3 = (undefined4 *)FUN_18027e66c();
  *puVar3 = 9;
  puVar3 = (undefined4 *)FUN_18027e690();
  *puVar3 = 0;
  return 0xffffffff;
}

