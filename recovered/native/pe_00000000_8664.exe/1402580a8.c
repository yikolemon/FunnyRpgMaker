/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402580a8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402580a8(byte *param_1)

{
  byte bVar1;
  code *pcVar2;
  char *pcVar3;
  undefined1 auStack_58 [72];
  ulonglong local_10;
  
  local_10 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  bVar1 = *param_1;
  if ((ulonglong)bVar1 < 0xe) {
    pcVar3 = (char *)((longlong)&switchD_1402580da::switchdataD_1404c7e00 +
                     (longlong)(int)(&switchD_1402580da::switchdataD_1404c7e00)[bVar1]);
    switch(bVar1) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      *param_1 = *param_1;
      *pcVar3 = *pcVar3 + (char)pcVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

