/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019a0c0 */

void FUN_18019a0c0(void)

{
  char *pcVar1;
  
  if ((DAT_18041eedb & 3) == 0) {
    FUN_18019ae57(&DAT_18041eed0,0,0x80,2);
    FUN_18019aec0(&DAT_18041eed0,0);
    pcVar1 = ".,;!?\"";
    FUN_18019aec0(&DAT_18041eed0,0);
    FUN_18019ae57(&DAT_18041eef0,0x3000,0x300f,2,pcVar1);
    FUN_18019ae95(&DAT_18041eef0,0x3000);
    FUN_18019ae95(&DAT_18041eef0,0x3000);
    FUN_18019ae95(&DAT_18041eef0,0x3000);
  }
  return;
}

