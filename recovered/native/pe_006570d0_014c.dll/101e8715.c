/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e8715 */

undefined4 __fastcall FUN_101e8715(int param_1,uint param_2,int *param_3,char param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(char *)(param_1 + 0x2dd) != '\0') && (iVar3 = *(int *)(param_1 + 0x2e0), iVar3 != 0)) {
    if (param_4 == '\0') {
      if (*(char *)(iVar3 + 0x20) == '\0') {
        uVar1 = FUN_101e87e6();
        *(undefined4 *)(*(int *)(param_1 + 0x2e0) + 0x24) = uVar1;
        iVar3 = *(int *)(param_1 + 0x2e0);
      }
      if (*(char *)(iVar3 + 0x21) == '\0') {
        return *(undefined4 *)(iVar3 + 0x24);
      }
      piVar2 = (int *)(iVar3 + 0x28);
    }
    else {
      if (*(char *)(iVar3 + 0x2c) == '\0') {
        uVar1 = FUN_101e87e6();
        *(undefined4 *)(*(int *)(param_1 + 0x2e0) + 0x30) = uVar1;
        iVar3 = *(int *)(param_1 + 0x2e0);
      }
      if (*(char *)(iVar3 + 0x2d) == '\0') {
        return *(undefined4 *)(iVar3 + 0x30);
      }
      piVar2 = (int *)(iVar3 + 0x34);
    }
    iVar3 = *piVar2;
    if (*(int *)(iVar3 + 0x1c) == 0) {
      uVar1 = 0;
    }
    else {
      uVar4 = *(uint *)(iVar3 + 0x14) - 1;
      if (param_2 < *(uint *)(iVar3 + 0x14)) {
        uVar4 = param_2;
      }
      uVar1 = *(undefined4 *)(*(int *)(iVar3 + 0x18) + uVar4 * 4);
      param_2 = *(uint *)(*(int *)(iVar3 + 0x1c) + uVar4 * 4);
    }
    iVar3 = FUN_101e6240(param_1,iVar3,uVar1,param_2);
    if (iVar3 != 0) {
      *param_3 = *param_3 + iVar3;
    }
  }
  return 0;
}

