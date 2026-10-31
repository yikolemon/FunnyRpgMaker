/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dbb7b */

ulonglong FUN_1800dbb7b(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = 0xcbf29ce484222325;
  lVar2 = 0;
  do {
    uVar1 = (uVar1 ^ *(byte *)(param_1 + lVar2)) * 0x100000001b3;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 8);
  return uVar1;
}

