/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140327f91 */

void FUN_140327f91(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = DAT_14062a630;
  *(uint *)(DAT_14062a630 + 0x2030) = *(uint *)(DAT_14062a630 + 0x2030) | 0x10;
  uVar1 = *param_2;
  *(undefined8 *)(lVar2 + 0x2078) = *param_1;
  *(undefined8 *)(lVar2 + 0x2080) = uVar1;
  *(undefined8 *)(lVar2 + 0x2088) = param_3;
  *(undefined8 *)(lVar2 + 0x2090) = param_4;
  return;
}

