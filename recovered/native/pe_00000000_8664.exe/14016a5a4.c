/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016a5a4 */

bool FUN_14016a5a4(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  uVar2 = param_2 + *(int *)(param_1 + 0x354);
  bVar3 = *(uint *)(param_1 + 0x34c) <= uVar2;
  if (!bVar3) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x360) + (ulonglong)uVar2 * 8);
    param_3[3] = uVar1;
    param_3[1] = uVar1;
    param_3[2] = *(undefined8 *)(*(longlong *)(param_1 + 0x360) + 8 + (ulonglong)uVar2 * 8);
  }
  return bVar3;
}

