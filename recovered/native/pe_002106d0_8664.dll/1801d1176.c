/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d1176 */

undefined8
FUN_1801d1176(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined4 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1801d13ec(*param_1,param_3,"resource.frk/");
  if (lVar1 == 0) {
    uVar2 = 0x40;
  }
  else {
    *param_4 = lVar1;
    *param_5 = 0;
    uVar2 = 0;
  }
  return uVar2;
}

