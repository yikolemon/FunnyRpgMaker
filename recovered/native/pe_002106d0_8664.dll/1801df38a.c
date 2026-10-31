/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801df38a */

undefined8 FUN_1801df38a(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1801d3d29(param_2);
  if (cVar1 == '\0') {
    uVar2 = DAT_18032a3f0;
    if (*(char *)(param_2 + 0x24) == '\0') {
      uVar2 = DAT_18032a0f8;
    }
  }
  else {
    uVar2 = DAT_180330c00;
    if (*(char *)(param_2 + 0x24) == '\0') {
      uVar2 = DAT_180330c10;
    }
  }
  return uVar2;
}

