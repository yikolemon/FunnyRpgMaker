/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10218dd4 */

void __fastcall FUN_10218dd4(int param_1,int param_2,int param_3,int param_4,void *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_3 == -1) {
    _memset(param_5,0,param_4 << 2);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x224);
    iVar5 = 0;
    do {
      uVar2 = param_3 + iVar5;
      if (*(int *)(param_2 + 0x44) == 0) {
        uVar3 = 0;
      }
      else {
        uVar4 = *(uint *)(param_2 + 0x3c) - 1;
        if (uVar2 < *(uint *)(param_2 + 0x3c)) {
          uVar4 = uVar2;
        }
        uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x40) + uVar4 * 4);
        uVar2 = *(uint *)(*(int *)(param_2 + 0x44) + uVar4 * 4);
      }
      uVar3 = (**(code **)(iVar1 + 0x38))(param_1,param_2 + 0x28,uVar3,uVar2);
      *(undefined4 *)((int)param_5 + iVar5 * 4) = uVar3;
      iVar5 = iVar5 + 1;
    } while (param_4 != iVar5);
  }
  return;
}

