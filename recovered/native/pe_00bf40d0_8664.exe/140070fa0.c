/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140070fa0 */

undefined8
FUN_140070fa0(longlong param_1,int param_2,uint param_3,undefined8 *param_4,uint *param_5)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if (param_2 == 1) {
    uVar4 = 0;
    if ((int)(uint)*(ushort *)(param_1 + 4) < *(int *)(param_1 + 0xe0)) {
      uVar4 = (ulonglong)*(ushort *)(param_1 + 4);
    }
    param_3 = param_3 + *(int *)(*(longlong *)(param_1 + 0xe8) + uVar4 * 4);
    uVar1 = (uint)*(ushort *)(param_1 + 0xf4) << 4 | 0xc;
  }
  else if (param_2 == 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 8);
  }
  else {
    piVar2 = FUN_14007487a(param_1,param_2);
    if (piVar2 == (int *)0x0) {
      return 0x8e;
    }
    param_3 = param_3 + piVar2[2];
    uVar1 = piVar2[3];
  }
  uVar5 = uVar1;
  if ((param_5 != (uint *)0x0) && (uVar5 = *param_5, *param_5 == 0)) {
    *param_5 = uVar1;
    return 0;
  }
  uVar3 = FUN_140020f76(*(longlong **)(param_1 + 0xa0),param_3,param_4,uVar5);
  return uVar3;
}

