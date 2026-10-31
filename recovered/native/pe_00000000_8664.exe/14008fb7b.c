/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008fb7b */

undefined8 FUN_14008fb7b(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(uint *)(DAT_140f2a910 + 0x15d8) + 1;
  lVar2 = (ulonglong)*(uint *)(DAT_140f2a910 + 0x15d8) * 0x78;
  do {
    lVar2 = lVar2 + -0x78;
    iVar1 = iVar1 + -1;
    if (iVar1 < 1) break;
  } while (*(longlong *)(*(longlong *)(DAT_140f2a910 + 0x15e0) + lVar2) != param_1);
  return CONCAT71((int7)((ulonglong)DAT_140f2a910 >> 8),0 < iVar1);
}

