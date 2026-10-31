/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10275d90 */

LPVOID FUN_10275d90(uint param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (param_1 * param_2 == 0) {
      dwBytes = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_103a5228,8,dwBytes);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_102834e0();
    } while ((iVar1 != 0) && (iVar1 = FUN_102684d0(dwBytes), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_10268ffd();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}

