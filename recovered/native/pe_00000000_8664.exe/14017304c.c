/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017304c */

undefined8 FUN_14017304c(longlong param_1,int param_2,int param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if (param_2 == 1) {
    uVar5 = 0;
    if ((int)(uint)*(ushort *)(param_1 + 4) < *(int *)(param_1 + 0xe0)) {
      uVar5 = (ulonglong)*(ushort *)(param_1 + 4);
    }
    param_3 = param_3 + *(int *)(*(longlong *)(param_1 + 0xe8) + uVar5 * 4);
    uVar2 = (uint)*(ushort *)(param_1 + 0xf4) << 4 | 0xc;
  }
  else if (param_2 == 0) {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 8);
  }
  else {
    lVar3 = FUN_140176926(param_1);
    if (lVar3 == 0) {
      return 0x8e;
    }
    param_3 = param_3 + *(int *)(lVar3 + 8);
    uVar2 = *(uint *)(lVar3 + 0xc);
  }
  uVar1 = uVar2;
  if ((param_5 != (uint *)0x0) && (uVar1 = *param_5, *param_5 == 0)) {
    *param_5 = uVar2;
    return 0;
  }
  uVar4 = FUN_14012db47(*(undefined8 *)(param_1 + 0xa0),param_3,param_4,uVar1);
  return uVar4;
}

