/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002e2cc */

undefined8 FUN_14002e2cc(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = FUN_140025269(param_2);
  if (bVar1) {
    uVar2 = DAT_1400edd30;
    if (*(char *)(param_2 + 0x24) == '\0') {
      uVar2 = DAT_1400e66d0;
    }
  }
  else {
    uVar2 = DAT_1400eddd0;
    if (*(char *)(param_2 + 0x24) == '\0') {
      uVar2 = DAT_1400e7560;
    }
  }
  return uVar2;
}

