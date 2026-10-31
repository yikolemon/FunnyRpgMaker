/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180173cb4 */

longlong FUN_180173cb4(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_18012be7d();
  if (lVar1 == 0) {
    FUN_1801765d0("outofmem");
  }
  else {
    if (0 < param_2 * param_3 * 4) {
      uVar2 = 0;
      do {
        *(undefined1 *)(lVar1 + uVar2) = *(undefined1 *)(param_1 + 1 + uVar2 * 2);
        uVar2 = uVar2 + 1;
      } while ((uint)(param_2 * param_3 * 4) != uVar2);
    }
    thunk_FUN_180290e40(param_1);
  }
  return lVar1;
}

