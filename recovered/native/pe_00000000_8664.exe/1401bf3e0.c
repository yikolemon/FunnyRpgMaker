/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401bf3e0 */

/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */

void _CallSettingFrame(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)FUN_1401aacc0(param_1,*param_2);
  (*pcVar1)();
  uVar2 = FUN_1401aacf0();
  FUN_1401aacc0(uVar2,*param_2,2);
  return;
}

