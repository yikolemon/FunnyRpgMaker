/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e8c49 */

void FUN_1400e8c49(ulonglong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = DAT_140f308f0 + param_2;
  if (uVar1 <= DAT_140f308e0) {
    if (param_1 < DAT_140f308e8) {
      uVar1 = DAT_140f308e0 + 1;
    }
    else {
      lVar2 = 0;
      do {
        *(undefined1 *)(DAT_140f308f0 + lVar2) = *(undefined1 *)(param_1 + lVar2);
        lVar2 = lVar2 + 1;
      } while (param_2 != (uint)lVar2);
      uVar1 = DAT_140f308f0 + lVar2;
    }
  }
  DAT_140f308f0 = uVar1;
  return;
}

