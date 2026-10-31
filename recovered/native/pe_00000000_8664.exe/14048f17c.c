/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14048f17c */

void FUN_14048f17c(undefined4 param_1,char param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_2 != '\0') {
    uVar2 = (*(code *)s_GetFullPathNameW_14059dece._2_8_)();
    (*(code *)s_K32GetMappedFileNameW_14059e210._0_8_)(uVar2,param_1);
  }
  FUN_14048f118(param_1);
  (*(code *)s_GetExitCodeProcess_14059ddfe._2_8_)(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

