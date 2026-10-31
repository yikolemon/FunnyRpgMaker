/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140107f00 */

/* Library Function - Single Match
    _set_se_translator
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _set_se_translator(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14011d6e0();
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  lVar2 = FUN_14011d6e0();
  *(undefined8 *)(lVar2 + 0x10) = param_1;
  return uVar1;
}

