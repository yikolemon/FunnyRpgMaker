/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012604c */

undefined8 FUN_14012604c(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14011aa5d(param_2);
  if (cVar1 == '\0') {
    uVar2 = DAT_140e94ca0;
    if (*(char *)(param_2 + 0x24) == '\0') {
      uVar2 = DAT_140e8e3f0;
    }
  }
  else {
    uVar2 = DAT_140e8e0e8;
    if (*(char *)(param_2 + 0x24) == '\0') {
      uVar2 = 0;
    }
  }
  return uVar2;
}

