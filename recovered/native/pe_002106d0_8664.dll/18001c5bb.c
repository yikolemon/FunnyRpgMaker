/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001c5bb */

ulonglong FUN_18001c5bb(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0xcbf29ce484222325;
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      uVar2 = (*(byte *)(param_1 + lVar1) ^ uVar2) * 0x100000001b3;
      lVar1 = lVar1 + 1;
    } while (param_2 != lVar1);
    return uVar2;
  }
  return 0xcbf29ce484222325;
}

