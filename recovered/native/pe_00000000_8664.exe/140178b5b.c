/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140178b5b */

void FUN_140178b5b(longlong param_1,longlong param_2,uint param_3,uint param_4,longlong param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 != 0xffffffff) {
    lVar1 = *(longlong *)(param_1 + 0x2e0);
    uVar4 = 0;
    do {
      uVar5 = param_3 + uVar4;
      if (*(longlong *)(param_2 + 0x78) == 0) {
        uVar2 = 0;
      }
      else {
        uVar3 = (ulonglong)(*(uint *)(param_2 + 0x68) - 1);
        if ((uint)uVar5 < *(uint *)(param_2 + 0x68)) {
          uVar3 = uVar5 & 0xffffffff;
        }
        uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + uVar3 * 4);
        uVar5 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x78) + uVar3 * 4);
      }
      uVar2 = (**(code **)(lVar1 + 0x70))(param_1,param_2 + 0x48,uVar2,uVar5);
      *(undefined4 *)(param_5 + uVar4 * 4) = uVar2;
      uVar4 = uVar4 + 1;
    } while (param_4 != uVar4);
    return;
  }
  FUN_1401c5830(param_5,0,param_4 << 2);
  return;
}

