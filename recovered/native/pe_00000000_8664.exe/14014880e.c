/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014880e */

undefined8 FUN_14014880e(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    cVar1 = FUN_140148e2f();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = FUN_140148e73(param_1);
  return uVar2;
}

