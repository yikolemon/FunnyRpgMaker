/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100128b2 */

undefined4 * __thiscall FUN_100128b2(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 != param_2) {
    if (7 < (uint)param_1[5]) {
      FUN_100017aa(param_1,*param_1,param_1[5]);
    }
    param_1[4] = 0;
    param_1[5] = 7;
    *(undefined2 *)param_1 = 0;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_2[4] = 0;
    param_2[5] = 7;
    *(undefined2 *)param_2 = 0;
  }
  return param_1;
}

