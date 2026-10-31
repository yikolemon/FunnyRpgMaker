/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801df402 */

undefined8 FUN_1801df402(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1801d3d1c(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_1801d3d29(param_2);
    if (cVar1 == '\0') {
      uVar2 = DAT_180330cb8;
      if (*(char *)(param_2 + 0x24) == '\0') {
        uVar2 = DAT_180330c10;
      }
    }
    else {
      uVar2 = DAT_180330c98;
      if (*(char *)(param_2 + 0x24) == '\0') {
        uVar2 = DAT_180328088;
      }
    }
    return uVar2;
  }
  uVar2 = FUN_18019efc0(param_2);
  return uVar2;
}

