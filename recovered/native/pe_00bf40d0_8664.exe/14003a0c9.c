/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003a0c9 */

undefined8 FUN_14003a0c9(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x2d0);
  *param_4 = 0;
  if ((lVar1 != 0) && (*(int *)(param_1 + 0x498) != 0)) {
    uVar2 = (**(code **)(lVar1 + 0xb0))();
    *(undefined4 *)param_4 = uVar2;
  }
  return 0;
}

