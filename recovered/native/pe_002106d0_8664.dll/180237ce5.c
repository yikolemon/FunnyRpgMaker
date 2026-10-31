/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180237ce5 */

undefined4 FUN_180237ce5(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar3 = *(longlong *)(lVar1 + 0x40);
  if (lVar3 == 0) {
    lVar3 = (**(code **)(param_1 + 0x30))
                      (*(undefined8 *)(param_1 + 0x40),1 << (*(byte *)(lVar1 + 0x30) & 0x1f),1);
    *(longlong *)(lVar1 + 0x40) = lVar3;
    if (lVar3 == 0) {
      return 1;
    }
  }
  uVar4 = *(uint *)(lVar1 + 0x34);
  if (uVar4 == 0) {
    uVar4 = 1 << (*(byte *)(lVar1 + 0x30) & 0x1f);
    *(uint *)(lVar1 + 0x34) = uVar4;
    *(undefined8 *)(lVar1 + 0x38) = 0;
  }
  if (param_3 < uVar4) {
    uVar4 = uVar4 - *(uint *)(lVar1 + 0x3c);
    uVar2 = param_3;
    if (uVar4 < param_3) {
      uVar2 = uVar4;
    }
    FUN_1802a82f0(lVar3 + (ulonglong)*(uint *)(lVar1 + 0x3c),param_2 - (ulonglong)param_3,uVar2);
    if (param_3 <= uVar4) {
      uVar4 = *(int *)(lVar1 + 0x3c) + uVar2;
      if (uVar4 == *(uint *)(lVar1 + 0x34)) {
        uVar4 = 0;
      }
      *(uint *)(lVar1 + 0x3c) = uVar4;
      if (*(uint *)(lVar1 + 0x34) <= *(uint *)(lVar1 + 0x38)) {
        return 0;
      }
      *(uint *)(lVar1 + 0x38) = *(uint *)(lVar1 + 0x38) + uVar2;
      return 0;
    }
    param_3 = param_3 - uVar2;
    FUN_1802a82f0(*(undefined8 *)(lVar1 + 0x40),param_2 - (ulonglong)param_3,(ulonglong)param_3);
    *(uint *)(lVar1 + 0x3c) = param_3;
  }
  else {
    FUN_1802a82f0(lVar3,param_2 - (ulonglong)uVar4);
    *(undefined4 *)(lVar1 + 0x3c) = 0;
  }
  *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar1 + 0x34);
  return 0;
}

