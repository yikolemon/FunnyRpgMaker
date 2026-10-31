/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400198e7 */

undefined8 FUN_1400198e7(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_128 [8];
  undefined1 local_120 [224];
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_40 = param_3;
  FUN_140019bc0(local_128,1);
  lVar3 = *param_2;
  lVar1 = param_2[1];
  if (lVar3 != lVar1) {
    FUN_1400058b9(local_128,lVar3);
    lVar3 = lVar3 + 0x20;
  }
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
    uVar2 = FUN_1400058b9(local_128,local_40);
    FUN_1400058b9(uVar2,lVar3);
  }
  FUN_1400170f8(local_120,param_1);
  FUN_140019cf4(local_128);
  FUN_1400017de(local_40);
  return param_1;
}

