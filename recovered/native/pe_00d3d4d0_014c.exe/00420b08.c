/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00420b08 */

undefined4 __cdecl FUN_00420b08(int *param_1,uint param_2,uint *param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0x55;
  uVar2 = param_1[1] - param_2;
  if (param_2 <= (uint)param_1[1] && uVar2 != 0) {
    if ((code *)param_1[5] == (code *)0x0) {
      if (param_4 <= uVar2) {
        uVar2 = param_4;
      }
      if (param_4 != 0) {
        FUN_004878c0(param_3,(uint *)(*param_1 + param_2),uVar2);
      }
    }
    else {
      uVar2 = (*(code *)param_1[5])(param_1,param_2,param_3,param_4);
    }
    param_1[2] = param_2 + uVar2;
    uVar1 = 0x55;
    if (param_4 <= uVar2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

