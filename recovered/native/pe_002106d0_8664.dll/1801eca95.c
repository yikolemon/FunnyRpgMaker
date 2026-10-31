/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eca95 */

undefined8 FUN_1801eca95(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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

