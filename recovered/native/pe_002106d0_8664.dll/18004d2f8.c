/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004d2f8 */

undefined8 FUN_18004d2f8(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  iVar1 = FUN_18004db78();
  if (iVar1 == 0x2f) {
    do {
      iVar1 = FUN_18004db78(param_1);
    } while ((iVar1 + 1U < 0xf & (byte)(0x4803 >> ((byte)(iVar1 + 1U) & 0x1f))) == 0);
LAB_18004d358:
    uVar2 = 1;
  }
  else {
    if (iVar1 == 0x2a) {
      do {
        while( true ) {
          iVar1 = FUN_18004db78(param_1);
          if (iVar1 != 0x2a) break;
          iVar1 = FUN_18004db78(param_1);
          if (iVar1 == 0x2f) goto LAB_18004d358;
          FUN_18004dc3e(param_1);
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

