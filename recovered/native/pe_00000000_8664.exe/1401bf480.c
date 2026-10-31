/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401bf480 */

/* Library Function - Single Match
    _CallSettingFrameEncoded
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void _CallSettingFrameEncoded
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)FUN_1401aacc0(param_1,param_2,param_4);
  (*pcVar1)(param_3);
  uVar2 = FUN_1401aacf0();
  FUN_1401aacc0(uVar2,param_2,2);
  return;
}

