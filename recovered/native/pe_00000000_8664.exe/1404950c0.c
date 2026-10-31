/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404950c0 */

longlong _calloc_base(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    lVar4 = param_1 * param_2;
    if (lVar4 == 0) {
      lVar4 = 1;
    }
    do {
      lVar2 = (*(code *)s_GetSystemTimePreciseAsFileTime_14059e042._6_8_)(DAT_1406328c8,8,lVar4);
      if (lVar2 != 0) {
        return lVar2;
      }
      iVar1 = FUN_1404b49a0();
    } while ((iVar1 != 0) && (iVar1 = FUN_14048eff0(lVar4), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_14048fb3c();
  *puVar3 = 0xc;
  return 0;
}

