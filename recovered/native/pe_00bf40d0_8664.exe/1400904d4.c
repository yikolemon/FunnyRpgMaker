/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400904d4 */

bool FUN_1400904d4(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  bool bVar3;
  
  if (param_2 < 0x8000000000000000) {
    uVar1 = param_2 * 2;
    if (((*(longlong *)(param_1 + 0x408) == 0) && (uVar1 < 0x401)) ||
       (uVar1 <= *(ulonglong *)(param_1 + 0x400))) {
      bVar3 = true;
    }
    else {
      pvVar2 = _malloc_base(uVar1);
      bVar3 = pvVar2 != (LPVOID)0x0;
      if (bVar3) {
        FUN_1400a1290(*(LPVOID *)(param_1 + 0x408));
        *(LPVOID *)(param_1 + 0x408) = pvVar2;
        *(ulonglong *)(param_1 + 0x400) = uVar1;
      }
      FUN_1400a1290((LPVOID)0x0);
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x30) = 1;
    bVar3 = false;
    *(undefined4 *)(param_3 + 0x2c) = 0xc;
  }
  return bVar3;
}

