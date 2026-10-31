/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009b16c */

void FUN_14009b16c(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = DAT_140f2a910 + 0xee8;
  lVar2 = 0;
  do {
    uVar1 = FUN_140078692((longlong)*(int *)((longlong)&DAT_140210eb0 + lVar2) * 0x10 + lVar3);
    *(undefined4 *)(param_1 + 0x498 + lVar2) = uVar1;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x24);
  return;
}

