/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801074e6 */

undefined8 FUN_1801074e6(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = DAT_180419160;
  if (((((((*(longlong *)(DAT_180419160 + 0x2200) == 0) ||
          (lVar3 = *(longlong *)(*(longlong *)(DAT_180419160 + 0x2200) + 0x428), lVar3 == 0)) ||
         (*(char *)(lVar3 + 0x10a) != '\x01')) || (lVar3 == *(longlong *)(param_1 + 0x428))) ||
       (((*(uint *)(lVar3 + 0x14) >> 0x1b & 1) == 0 &&
        (((param_2 & 0x20) != 0 || ((*(uint *)(lVar3 + 0x14) & 0x4000000) == 0)))))) ||
      (cVar2 = FUN_18010757d(*(undefined8 *)(param_1 + 0x418)), cVar2 != '\0')) &&
     ((lVar3 = *(longlong *)(param_1 + 0x48), lVar3 == *(longlong *)(lVar1 + 0x2190) ||
      ((lVar3 = *(longlong *)(lVar1 + 0x1628), lVar3 != 0 &&
       (*(longlong *)(param_1 + 0x428) == *(longlong *)(lVar3 + 0x428))))))) {
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  return 0;
}

