/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a4268 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400a4268(longlong *param_1)

{
  longlong *plVar1;
  LPVOID pvVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)FUN_1400a4330((undefined *)param_1);
  if ((char)plVar1 != '\0') {
    plVar1 = (longlong *)FUN_14008e9d4(1);
    if (param_1 == plVar1) {
      plVar3 = &DAT_1401437e8;
    }
    else {
      plVar1 = (longlong *)FUN_14008e9d4(2);
      if (param_1 != plVar1) goto LAB_1400a4322;
      plVar3 = &DAT_1401437f0;
    }
    _DAT_140142be8 = _DAT_140142be8 + 1;
    plVar1 = (longlong *)(ulonglong)*(uint *)((longlong)param_1 + 0x14);
    if ((*(uint *)((longlong)param_1 + 0x14) & 0x4c0) == 0) {
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x282;
      UNLOCK();
      if (*plVar3 == 0) {
        pvVar2 = _malloc_base(0x1000);
        *plVar3 = (longlong)pvVar2;
        plVar1 = (longlong *)FUN_1400a1290((LPVOID)0x0);
      }
      if (*plVar3 == 0) {
        *(undefined4 *)(param_1 + 2) = 2;
        param_1[1] = (longlong)param_1 + 0x1c;
        *param_1 = (longlong)param_1 + 0x1c;
        *(undefined4 *)(param_1 + 4) = 2;
      }
      else {
        param_1[1] = *plVar3;
        plVar1 = (longlong *)*plVar3;
        *param_1 = (longlong)plVar1;
        *(undefined4 *)(param_1 + 2) = 0x1000;
        *(undefined4 *)(param_1 + 4) = 0x1000;
      }
      return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    }
  }
LAB_1400a4322:
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}

