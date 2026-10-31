/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140493940 */

/* Library Function - Single Match
    abort
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl abort(void)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar4 = auStack_28;
  lVar2 = __acrt_get_sigabrt_handler();
  if (lVar2 != 0) {
    FUN_1404a5f2c(0x16);
  }
  if ((DAT_140627298 & 2) != 0) {
    iVar3 = (*(code *)s_GetTimeFormatW_14059e088._8_8_)(0x17);
    puVar4 = auStack_28;
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x14049398b;
    FUN_1404a1f88(3,0x40000015);
  }
  *(undefined8 *)(puVar4 + -8) = 0x140493995;
  FUN_14048f0f4(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

