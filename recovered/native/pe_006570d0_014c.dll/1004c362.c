/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004c362 */

undefined4 __fastcall FUN_1004c362(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = FUN_1004ce60();
  if (iVar1 == 0x2f) {
    do {
      iVar1 = FUN_1004ce60();
    } while ((iVar1 + 1U < 0xf & (byte)(0x4803 >> ((byte)(iVar1 + 1U) & 0x1f))) == 0);
LAB_1004c3bd:
    uVar2 = 1;
  }
  else {
    pcVar3 = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
    if (iVar1 == 0x2a) {
      do {
        while( true ) {
          iVar1 = FUN_1004ce60();
          if (iVar1 != 0x2a) break;
          iVar1 = FUN_1004ce60();
          if (iVar1 == 0x2f) goto LAB_1004c3bd;
          FUN_1004cf0a();
        }
      } while (1 < iVar1 + 1U);
      pcVar3 = "invalid comment; missing closing \'*/\'";
    }
    *(char **)(param_1 + 0x44) = pcVar3;
    uVar2 = 0;
  }
  return uVar2;
}

