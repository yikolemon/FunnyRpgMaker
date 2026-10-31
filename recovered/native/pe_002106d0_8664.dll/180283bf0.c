/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180283bf0 */

LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_1804213f8,8,dwBytes);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_1802a34d0();
    } while ((iVar1 != 0) && (iVar1 = FUN_18027db20(dwBytes), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_18027e66c();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}

