/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140072040 */

undefined4 * FUN_140072040(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = FUN_1401887b0(0x30);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 2) = lVar1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  FUN_14001825e(param_1 + 6,0x10,lVar1);
  return param_1;
}

