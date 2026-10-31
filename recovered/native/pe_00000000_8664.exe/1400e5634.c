/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e5634 */

void FUN_1400e5634(void)

{
  char *pcVar1;
  
  if ((DAT_140f308bb & 3) == 0) {
    FUN_1400e63cb(&DAT_140f308b0,0,0x80,2);
    FUN_1400e6434(&DAT_140f308b0,0);
    pcVar1 = ".,;!?\"";
    FUN_1400e6434(&DAT_140f308b0,0);
    FUN_1400e63cb(&DAT_140f308d0,0x3000,0x300f,2,pcVar1);
    FUN_1400e6409(&DAT_140f308d0,0x3000);
    FUN_1400e6409(&DAT_140f308d0,0x3000);
    FUN_1400e6409(&DAT_140f308d0,0x3000);
  }
  return;
}

