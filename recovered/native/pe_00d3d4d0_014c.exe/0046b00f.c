/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046b00f */

undefined4 __cdecl FUN_0046b00f(int param_1,int param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_2 == 1) {
    uVar1 = 0;
    if ((int)(uint)*(ushort *)(param_1 + 4) < *(int *)(param_1 + 0x8c)) {
      uVar1 = (uint)*(ushort *)(param_1 + 4);
    }
    param_3 = param_3 + *(int *)(*(int *)(param_1 + 0x90) + uVar1 * 4);
    uVar1 = (uint)*(ushort *)(param_1 + 0x98) << 4 | 0xc;
  }
  else if (param_2 == 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x68) + 4);
  }
  else {
    piVar2 = FUN_0046e566(param_1,param_2);
    if (piVar2 == (int *)0x0) {
      return 0x8e;
    }
    param_3 = param_3 + piVar2[2];
    uVar1 = piVar2[3];
  }
  uVar4 = uVar1;
  if ((param_5 == (uint *)0x0) || (uVar4 = *param_5, *param_5 != 0)) {
    uVar3 = FUN_00420b08(*(int **)(param_1 + 0x68),param_3,param_4,uVar4);
  }
  else {
    *param_5 = uVar1;
    uVar3 = 0;
  }
  return uVar3;
}

