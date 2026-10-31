/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00481c60 */

void __fastcall FUN_00481c60(undefined4 *param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  if ((HANDLE)*param_1 != (HANDLE)0xffffffff) {
    BVar2 = CloseHandle((HANDLE)*param_1);
    if (BVar2 == 0) {
      iVar3 = ___acrt_get_sigabrt_handler();
      if (iVar3 != 0) {
        FUN_0049817c(0x16);
      }
      if ((DAT_0051adfc & 2) != 0) {
        BVar2 = IsProcessorFeaturePresent(0x17);
        if (BVar2 != 0) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
        }
        FUN_00495ccc(3,0x40000015,1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0048d3b1(3);
    }
  }
  return;
}

