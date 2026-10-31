/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140130b30 */

undefined4 FUN_140130b30(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar4 = 0;
    iVar5 = 0xe3;
    do {
      iVar2 = (iVar5 + iVar4) / 2;
      iVar3 = FUN_140132830(param_1,(&PTR_DAT_14016a080)[(longlong)iVar2 * 2],0x55);
      if (iVar3 == 0) {
        iVar5 = *(int *)(&DAT_14016a088 + (longlong)iVar2 * 0x10);
        if (iVar5 < 0) {
          return 0;
        }
        if (0xe3 < (ulonglong)(longlong)iVar5) {
          return 0;
        }
        return *(undefined4 *)(&DAT_140169240 + (longlong)iVar5 * 0x10);
      }
      iVar1 = iVar2 + -1;
      if (-1 < iVar3) {
        iVar4 = iVar2 + 1;
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
    } while (iVar4 <= iVar5);
  }
  return 0;
}

