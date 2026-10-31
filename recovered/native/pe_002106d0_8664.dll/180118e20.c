/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180118e20 */

void FUN_180118e20(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = DAT_180419160;
  uVar1 = *param_1;
  *(undefined8 *)(DAT_180419160 + 0xaf4) = uVar1;
  *(undefined8 *)(lVar2 + 0x118) = uVar1;
  *(undefined8 *)(lVar2 + 0x104) = 0;
  *(undefined1 *)(lVar2 + 0xeb) = 1;
  return;
}

