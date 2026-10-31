/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c20e2 */

undefined4 * FUN_1402c20e2(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar2 = FUN_14044ab00(0x38);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(param_1 + 2) = lVar2;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  FUN_1402342fa(param_1 + 6,0x10,lVar2);
  uVar1 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 0xe) = 8;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  return param_1;
}

