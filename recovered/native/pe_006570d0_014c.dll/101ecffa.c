/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ecffa */

undefined4 __fastcall FUN_101ecffa(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    cVar1 = FUN_101ed566();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = FUN_101ed599();
  return uVar2;
}

