/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400220b8 */

void FUN_1400220b8(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  *param_1 = (int)lVar1 << 0xf | *param_1 & 0xfffc7fff;
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)*param_2;
      *(undefined2 *)((longlong)param_1 + 5) = 0;
      return;
    }
    lVar2 = 0;
    do {
      *(undefined1 *)((longlong)param_1 + (ulonglong)((uint)lVar2 & 3) + 4) =
           *(undefined1 *)(*param_2 + lVar2);
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
  }
  return;
}

