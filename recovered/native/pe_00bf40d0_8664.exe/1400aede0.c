/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400aede0 */

/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */

void _CallSettingFrame(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_14009d520();
  (*pcVar1)();
  FUN_14009d550();
  FUN_14009d520();
  return;
}

