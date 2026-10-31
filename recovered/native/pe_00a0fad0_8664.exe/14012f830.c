/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012f830 */

/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */

void _CallSettingFrame(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)FUN_14011d5c0(param_1,*param_2);
  (*pcVar1)();
  uVar2 = FUN_14011d5f0();
  FUN_14011d5c0(uVar2,*param_2,2);
  return;
}

