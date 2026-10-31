/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012aec7 */

uint FUN_18012aec7(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if (*(int *)(param_2 + 0x20) < 1) {
    uVar4 = 0;
  }
  else {
    lVar7 = 0;
    uVar5 = 0;
    uVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + lVar7 * 8);
      lVar3 = *(longlong *)(lVar1 + 0x88);
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(param_1 + 0x2b8);
      }
      bVar2 = (**(code **)(lVar3 + 0x28))(param_1,lVar1,param_3);
      uVar4 = 1 << ((byte)lVar7 & 0x1f);
      uVar6 = uVar6 + bVar2;
      if (bVar2 == 0) {
        uVar4 = 0;
      }
      uVar5 = uVar5 | uVar4;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_2 + 0x20));
    uVar4 = 0;
    if (1 < uVar6) {
      uVar4 = uVar5;
    }
  }
  return uVar4;
}

