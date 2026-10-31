/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102835c9 */

undefined4 FUN_102835c9(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = 0xe3;
  do {
    iVar4 = (iVar3 + iVar5) / 2;
    iVar2 = FUN_10285980(param_1,*(undefined4 *)(&UNK_10326938 + iVar4 * 8),0x55);
    if (iVar2 == 0) {
      return *(undefined4 *)(&UNK_1032693c + iVar4 * 8);
    }
    iVar1 = iVar4 + -1;
    if (-1 < iVar2) {
      iVar5 = iVar4 + 1;
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
  } while (iVar5 <= iVar3);
  return 0xffffffff;
}

