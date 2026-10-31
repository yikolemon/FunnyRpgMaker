/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003a311 */

undefined8 FUN_14003a311(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  *(int *)(param_1 + 0x10) = (int)param_2;
  if ((*(byte *)(lVar1 + 8) & 1) == 0) {
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2d0) + 0xe8))(lVar1,(int)param_2,param_1 + 3);
    if ((int)uVar2 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return uVar2;
    }
  }
  else {
    FUN_14001ec4d(lVar1,param_2);
    FUN_140045ec0(param_1);
  }
  return 0;
}

