/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400071c6 */

undefined8 FUN_1400071c6(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  iVar1 = FUN_140007a46();
  if (iVar1 == 0x2f) {
    do {
      iVar1 = FUN_140007a46(param_1);
    } while ((iVar1 + 1U < 0xf & (byte)(0x4803 >> ((byte)(iVar1 + 1U) & 0x1f))) == 0);
LAB_140007226:
    uVar2 = 1;
  }
  else {
    if (iVar1 == 0x2a) {
      do {
        while( true ) {
          iVar1 = FUN_140007a46(param_1);
          if (iVar1 != 0x2a) break;
          iVar1 = FUN_140007a46(param_1);
          if (iVar1 == 0x2f) goto LAB_140007226;
          FUN_140007b0c(param_1);
        }
      } while (1 < iVar1 + 1U);
      pcVar3 = "invalid comment; missing closing \'*/\'";
    }
    else {
      pcVar3 = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
    }
    *(char **)(param_1 + 0x70) = pcVar3;
    uVar2 = 0;
  }
  return uVar2;
}

