/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140499330 */

longlong _malloc_base(ulonglong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      lVar2 = (*(code *)s_GetSystemTimePreciseAsFileTime_14059e042._6_8_)(DAT_1406328c8,0,param_1);
      if (lVar2 != 0) {
        return lVar2;
      }
      iVar1 = FUN_1404b49a0();
    } while ((iVar1 != 0) && (iVar1 = FUN_14048eff0(param_1), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_14048fb3c();
  *puVar3 = 0xc;
  return 0;
}

