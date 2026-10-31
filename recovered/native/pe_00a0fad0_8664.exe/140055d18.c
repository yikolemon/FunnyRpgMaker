/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140055d18 */

undefined8 FUN_140055d18(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (((*(char *)(param_1 + 0x134) == '\x01') && (uVar2 = 1, *(char *)(param_1 + 0x130) == '\x01'))
     && (uVar2 = 7, *(char *)(param_1 + 0xe9) == '\x01')) {
    cVar1 = FUN_1400828c2(param_1 + 0x48);
    uVar2 = 999;
    if (cVar1 != '\0') {
      uVar2 = 0;
    }
  }
  return uVar2;
}

