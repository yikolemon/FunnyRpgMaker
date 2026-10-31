/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14048f118 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14048f118(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  iVar2 = (*ram0x00014059df98)(0,L"tt-RU",local_res10,param_4,0xfffffffffffffffe);
  if ((iVar2 != 0) &&
     (lVar1 = (*(code *)s_GetProcAddress_14059dfac._4_8_)(local_res10[0],"urning\'"), lVar1 != 0)) {
    FUN_1404b9600(param_1);
  }
  if (local_res10[0] != 0) {
    (*(code *)s_GetFileInformationByHandleEx_14059de74._12_8_)();
  }
  return;
}

