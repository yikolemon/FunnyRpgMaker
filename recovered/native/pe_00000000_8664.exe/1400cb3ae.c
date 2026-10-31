/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cb3ae */

ulonglong FUN_1400cb3ae(undefined8 param_1,undefined8 param_2,byte *param_3,undefined1 param_4)

{
  char cVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  
  if (param_3 == (byte *)0x0) {
    uVar2 = FUN_1400cae72(param_1,0,param_2,0,param_4);
  }
  else {
    cVar1 = FUN_1400cae72(param_1,0,param_2,
                          CONCAT71((int7)((ulonglong)in_RAX >> 8),*param_3) & 0xffffffff,param_4);
    if (cVar1 != '\0') {
      *param_3 = *param_3 ^ 1;
    }
    uVar2 = (ulonglong)(cVar1 != '\0');
  }
  return uVar2;
}

