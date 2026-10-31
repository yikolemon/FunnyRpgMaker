/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003a06e */

undefined8 FUN_14003a06e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_120 [8];
  undefined1 local_118 [224];
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_38 = param_3;
  FUN_140019bc0(local_120,1);
  uVar3 = 0;
  while( true ) {
    lVar2 = *param_2;
    lVar1 = param_2[1] - lVar2;
    if ((ulonglong)(lVar1 >> 5) <= uVar3) break;
    if (uVar3 != 0) {
      FUN_1400058b9(local_120,local_38);
      lVar2 = *param_2;
      lVar1 = param_2[1] - lVar2;
    }
    FUN_1400058b9(local_120,~uVar3 * 0x20 + lVar2 + lVar1);
    uVar3 = uVar3 + 1;
  }
  FUN_1400170f8(local_118,param_1);
  FUN_140019cf4(local_120);
  FUN_1400017de(local_38);
  return param_1;
}

