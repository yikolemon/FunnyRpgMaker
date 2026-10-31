/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140126136 */

undefined8 FUN_140126136(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14011aa50(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_14011aa5d(param_2);
    if (cVar1 == '\0') {
      uVar2 = DAT_140e94ca8;
      if (*(char *)(param_2 + 0x24) == '\0') {
        uVar2 = DAT_140e94c00;
      }
    }
    else {
      uVar2 = DAT_140e94c88;
      if (*(char *)(param_2 + 0x24) == '\0') {
        uVar2 = DAT_140e8d7d0;
      }
    }
    return uVar2;
  }
  uVar2 = FUN_14010bfb4(param_2);
  return uVar2;
}

