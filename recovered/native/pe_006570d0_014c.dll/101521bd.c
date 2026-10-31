/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101521bd */

undefined4 __fastcall FUN_101521bd(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = -0x70;
  do {
    piVar1 = (int *)(&UNK_102b9490 + iVar2);
    if (param_1 == *piVar1) break;
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + 4;
  } while (bVar3);
  return CONCAT31((int3)((uint)iVar2 >> 8),param_1 == *piVar1);
}

