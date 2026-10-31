/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100749fa */

void __thiscall FUN_100749fa(int param_1,undefined4 *param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar5 = (uint)((param_5 == 1 && **(int **)(param_1 + 0x1c) == param_1 + 0x3c) &&
                *(int *)(param_1 + 0x38) == 0);
  iVar6 = param_3 - uVar5;
  param_4 = param_4 - (uint)(param_3 < uVar5);
  if (*(int *)(param_1 + 0x4c) != 0) {
    cVar4 = FUN_10074f54();
    if (cVar4 != '\0') {
      if ((param_5 != 1) || (iVar6 != 0 || param_4 != 0)) {
        iVar6 = FUN_10269197(*(undefined4 *)(param_1 + 0x4c),iVar6,param_4,param_5);
        if (iVar6 != 0) goto LAB_10074a7d;
      }
      iVar6 = FUN_1026db5a(*(undefined4 *)(param_1 + 0x4c),&local_20);
      if (iVar6 == 0) {
        if (**(int **)(param_1 + 0xc) == param_1 + 0x3c) {
          iVar6 = *(int *)(param_1 + 0x50);
          iVar1 = *(int *)(param_1 + 0x54);
          **(int **)(param_1 + 0xc) = iVar6;
          **(int **)(param_1 + 0x1c) = iVar6;
          **(int **)(param_1 + 0x2c) = iVar1 - iVar6;
        }
        uVar2 = *(undefined4 *)(param_1 + 0x40);
        uVar3 = *(undefined4 *)(param_1 + 0x44);
        *param_2 = local_20;
        param_2[1] = local_1c;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = uVar2;
        param_2[5] = uVar3;
        goto LAB_10074a8f;
      }
    }
  }
LAB_10074a7d:
  param_2[1] = 0xffffffff;
  *param_2 = 0xffffffff;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
LAB_10074a8f:
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

