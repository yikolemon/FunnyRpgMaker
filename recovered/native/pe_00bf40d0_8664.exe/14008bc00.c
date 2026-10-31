/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008bc00 */

undefined8 FUN_14008bc00(int *param_1,ulonglong param_2,ULONG_PTR param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_4[7];
  FUN_14008ba00(param_2,(longlong)param_4,(int *)(uVar1 + 4));
  if ((*(uint *)(uVar1 + 4) & ((*(byte *)(param_1 + 1) & 0x66) != 0) + 1) != 0) {
    uVar2 = FUN_14008d7f0(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 1;
}

