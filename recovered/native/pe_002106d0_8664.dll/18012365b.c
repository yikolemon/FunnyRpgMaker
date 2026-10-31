/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012365b */

void FUN_18012365b(int param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = DAT_180419160;
  FUN_18012369c();
  *(undefined4 *)(lVar3 + 0x2b10) = 0x3f000000;
  *(int *)(lVar3 + 0x20e4) = param_1;
  puVar1 = (undefined8 *)(lVar3 + 0xee8 + (longlong)param_1 * 0x10);
  uVar2 = puVar1[1];
  *(undefined8 *)(lVar3 + 0x2b14) = *puVar1;
  *(undefined8 *)(lVar3 + 0x2b1c) = uVar2;
  return;
}

