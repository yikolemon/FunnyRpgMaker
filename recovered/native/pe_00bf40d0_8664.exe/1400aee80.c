/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400aee80 */

/* Library Function - Single Match
    _CallSettingFrameEncoded
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void _CallSettingFrameEncoded(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_14009d520();
  (*pcVar1)(param_3);
  FUN_14009d550();
  FUN_14009d520();
  return;
}

