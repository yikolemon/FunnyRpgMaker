/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140117530 */

LPVOID _malloc_base(ulonglong param_1)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_1403551d8,0,param_1);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_1401155e0();
    } while ((iVar1 != 0) && (iVar1 = FUN_1401118e0(param_1), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_140113dd4();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}

