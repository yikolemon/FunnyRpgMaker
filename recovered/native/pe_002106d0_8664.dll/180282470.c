/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180282470 */

/* Library Function - Single Match
    abort
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl abort(void)

{
  code *pcVar1;
  longlong lVar2;
  BOOL BVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar4 = auStack_28;
  lVar2 = __acrt_get_sigabrt_handler();
  if (lVar2 != 0) {
    FUN_180294a5c(0x16);
  }
  if ((DAT_180415dc8 & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x1802824bb;
    FUN_180290ab8(3,0x40000015);
  }
  *(undefined8 *)(puVar4 + -8) = 0x1802824c5;
  FUN_18027dc24(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

