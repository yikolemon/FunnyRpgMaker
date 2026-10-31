/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a21d0 */

/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */

void _CallSettingFrame(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)FUN_18028d360(param_1,*param_2);
  (*pcVar1)();
  uVar2 = FUN_18028d390();
  FUN_18028d360(uVar2,*param_2,2);
  return;
}

