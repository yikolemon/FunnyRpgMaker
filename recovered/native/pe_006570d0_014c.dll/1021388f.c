/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021388f */

undefined4 FUN_1021388f(int param_1,int param_2,int param_3,undefined4 param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
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
    iVar2 = FUN_10216de6();
    if (iVar2 == 0) {
      return 0x8e;
    }
    param_3 = param_3 + *(int *)(iVar2 + 8);
    uVar1 = *(uint *)(iVar2 + 0xc);
  }
  uVar4 = uVar1;
  if ((param_5 == (uint *)0x0) || (uVar4 = *param_5, *param_5 != 0)) {
    uVar3 = FUN_101c4a90(*(undefined4 *)(param_1 + 0x68),param_3,param_4,uVar4);
  }
  else {
    *param_5 = uVar1;
    uVar3 = 0;
  }
  return uVar3;
}

