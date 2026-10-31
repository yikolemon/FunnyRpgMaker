/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10229580 */

void __fastcall FUN_10229580(undefined4 *param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  if ((HANDLE)*param_1 != (HANDLE)0xffffffff) {
    BVar2 = CloseHandle((HANDLE)*param_1);
    if (BVar2 == 0) {
      iVar3 = ___acrt_get_sigabrt_handler();
      if (iVar3 != 0) {
        FUN_10276ec5(0x16);
      }
      if ((DAT_1039b37c & 2) != 0) {
        BVar2 = IsProcessorFeaturePresent(0x17);
        if (BVar2 != 0) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
        }
        FUN_10273eec(3,0x40000015,1);
      }
                    /* WARNING: Subroutine does not return */
      __exit(3);
    }
  }
  return;
}

