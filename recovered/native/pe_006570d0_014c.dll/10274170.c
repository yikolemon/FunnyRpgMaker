/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274170 */

LPVOID FUN_10274170(SIZE_T param_1)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_103a5228,0,param_1);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_102834e0();
    } while ((iVar1 != 0) && (iVar1 = FUN_102684d0(param_1), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_10268ffd();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}

