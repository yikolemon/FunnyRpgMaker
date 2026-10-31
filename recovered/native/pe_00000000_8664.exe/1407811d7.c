/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407811d7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1407811d7(ulonglong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  bool in_ZF;
  
  uVar2 = (ulonglong)_DAT_203540f61039d74c;
  if (in_ZF) {
    if (*(uint *)(param_1 + 0x38) != (uint)param_2) {
LAB_1407811e7:
      return (ulonglong)
             CONCAT31((int3)((uint)*(int *)(param_1 + 100) >> 8),
                      *(int *)(param_2 + 100) < *(int *)(param_1 + 100));
    }
  }
  else {
    uVar2 = param_1 & 0xffffffff;
    do {
      if ((int)uVar2 == 0) goto LAB_1407811e7;
      uVar1 = *(uint *)(uVar2 + 0x38);
      uVar2 = (ulonglong)uVar1;
      if (uVar1 == 0) goto LAB_1407811e7;
    } while (uVar1 != (uint)param_2);
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}

