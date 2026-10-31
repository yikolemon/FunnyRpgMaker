/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b8f90 */

undefined8 FUN_1401b8f90(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_140f331b0)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_140f32db0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 + uVar2 * 0x48)
         & 1) != 0) &&
       (*(longlong *)
         ((&DAT_140f32db0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) != -1)) {
      iVar1 = FUN_1401a0104();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1401b9010;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1401b9010:
      *(undefined8 *)
       ((&DAT_140f32db0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  puVar3 = (undefined4 *)FUN_14019e8cc();
  *puVar3 = 9;
  puVar3 = (undefined4 *)FUN_14019e8f0();
  *puVar3 = 0;
  return 0xffffffff;
}

