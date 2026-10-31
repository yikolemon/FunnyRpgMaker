/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401774b8 */

undefined4 FUN_1401774b8(int param_1,int param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0xfffffffffffffff4;
  while ((*(int *)((longlong)&DAT_140eb0efc + uVar1) != param_1 ||
         ((*(int *)((longlong)&DAT_140eb0f00 + uVar1) != param_2 &&
          (*(int *)((longlong)&DAT_140eb0f00 + uVar1) != -1))))) {
    uVar1 = uVar1 + 0xc;
    if (0x77 < uVar1) {
      return 0;
    }
  }
  return *(undefined4 *)((longlong)&DAT_140eb0f04 + uVar1);
}

