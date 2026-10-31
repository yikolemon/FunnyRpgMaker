/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140487124 */

bool FUN_140487124(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_2 < 0x8000000000000000) {
    param_2 = param_2 * 2;
    if (((*(longlong *)(param_1 + 0x408) == 0) && (param_2 < 0x401)) ||
       (param_2 <= *(ulonglong *)(param_1 + 0x400))) {
      bVar2 = true;
    }
    else {
      lVar1 = _malloc_base(param_2);
      bVar2 = lVar1 != 0;
      if (bVar2) {
        FUN_1404a2310(*(undefined8 *)(param_1 + 0x408));
        *(longlong *)(param_1 + 0x408) = lVar1;
        *(ulonglong *)(param_1 + 0x400) = param_2;
      }
      FUN_1404a2310(0);
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x30) = 1;
    bVar2 = false;
    *(undefined4 *)(param_3 + 0x2c) = 0xc;
  }
  return bVar2;
}

