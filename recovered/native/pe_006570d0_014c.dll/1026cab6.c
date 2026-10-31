/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026cab6 */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2019 Release */

void __cdecl _abort(void)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  
  iVar2 = ___acrt_get_sigabrt_handler();
  if (iVar2 != 0) {
    FUN_10276ec5(0x16);
  }
  if ((DAT_1039b37c & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    FUN_10273eec(3,0x40000015,1);
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}

