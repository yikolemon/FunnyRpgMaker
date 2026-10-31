/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140092138 */

void FUN_140092138(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = DAT_140f2a910;
  uVar1 = *param_1;
  *(undefined8 *)(DAT_140f2a910 + 0xaf4) = uVar1;
  *(undefined8 *)(lVar2 + 0x118) = uVar1;
  *(undefined8 *)(lVar2 + 0x104) = 0;
  *(undefined1 *)(lVar2 + 0xeb) = 1;
  return;
}

