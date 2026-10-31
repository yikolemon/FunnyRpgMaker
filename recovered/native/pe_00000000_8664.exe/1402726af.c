/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402726af */

ulonglong FUN_1402726af(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = 0xcbf29ce484222325;
  lVar2 = 0;
  do {
    uVar1 = (uVar1 ^ *(byte *)(param_1 + lVar2)) * 0x100000001b3;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  return uVar1;
}

