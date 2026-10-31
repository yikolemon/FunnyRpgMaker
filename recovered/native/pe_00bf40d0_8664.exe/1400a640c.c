/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a640c */

/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_14013bb48) {
      FUN_1400a1290(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_14013bb50) {
      FUN_1400a1290(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x28) != PTR_DAT_14013bb58) {
      FUN_1400a1290(*(undefined **)(param_1 + 0x28));
    }
    if (*(undefined **)(param_1 + 0x30) != PTR_DAT_14013bb60) {
      FUN_1400a1290(*(undefined **)(param_1 + 0x30));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_14013bb68) {
      FUN_1400a1290(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_14013bb70) {
      FUN_1400a1290(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_14013bb78) {
      FUN_1400a1290(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x68) != PTR_DAT_14013bb98) {
      FUN_1400a1290(*(undefined **)(param_1 + 0x68));
    }
    if (*(undefined **)(param_1 + 0x70) != PTR_DAT_14013bba0) {
      FUN_1400a1290(*(undefined **)(param_1 + 0x70));
    }
    if (*(undefined **)(param_1 + 0x78) != PTR_DAT_14013bba8) {
      FUN_1400a1290(*(undefined **)(param_1 + 0x78));
    }
    if (*(undefined **)(param_1 + 0x80) != PTR_DAT_14013bbb0) {
      FUN_1400a1290(*(undefined **)(param_1 + 0x80));
    }
    if (*(undefined **)(param_1 + 0x88) != PTR_DAT_14013bbb8) {
      FUN_1400a1290(*(undefined **)(param_1 + 0x88));
    }
    if (*(undefined **)(param_1 + 0x90) != PTR_DAT_14013bbc0) {
      FUN_1400a1290(*(undefined **)(param_1 + 0x90));
    }
  }
  return;
}

