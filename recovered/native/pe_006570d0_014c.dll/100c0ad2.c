/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c0ad2 */

void __fastcall
FUN_100c0ad2(int param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,char *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    iVar6 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 3;
    if (((*(int *)(param_1 + 0x18) - iVar2 >> 2) * 0x3cf3cf3d + iVar6 * -0x4f72c235 == 0) &&
       (param_2 < (uint)(iVar6 * 0x4f72c235))) {
      iVar7 = param_2 * 0x54;
      iVar6 = *(int *)(iVar2 + 0xc + iVar7);
      if (param_3 < (uint)((*(int *)(iVar2 + 0x10 + iVar7) - iVar6 >> 2) * 0x38e38e39)) {
        iVar3 = *(int *)(iVar2 + iVar7);
        if (param_4 < (uint)(((int *)(iVar2 + iVar7))[1] - iVar3 >> 2)) {
          piVar1 = (int *)(iVar6 + param_3 * 0x24);
          uVar4 = *(uint *)(iVar3 + param_4 * 4);
          if ((int)uVar4 < 2000) {
            if (uVar4 < (piVar1[1] - *piVar1 >> 2) + 1000U) {
              *(undefined4 *)(*piVar1 + -4000 + uVar4 * 4) = param_5;
            }
          }
          else if ((uVar4 < 3000) && (uVar4 < (piVar1[4] - piVar1[3] >> 3) * -0x55555555 + 2000U)) {
            sVar5 = _strlen(param_6);
            FUN_100b85e2(param_6,sVar5);
          }
        }
      }
    }
  }
  return;
}

