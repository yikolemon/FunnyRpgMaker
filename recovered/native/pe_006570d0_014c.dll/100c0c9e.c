/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c0c9e */

void __fastcall
FUN_100c0c9e(int param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,char *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar5 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 3;
    if (((*(int *)(param_1 + 0x1c) - iVar1 >> 3) * -0x33333333 + iVar5 * -0x3cf3cf3d == 0) &&
       (param_2 < (uint)(iVar5 * 0x3cf3cf3d))) {
      iVar5 = *(int *)(iVar1 + 0x14 + param_2 * 0x28);
      if (param_3 < (uint)(*(int *)(iVar1 + 0x18 + param_2 * 0x28) - iVar5 >> 5)) {
        iVar1 = iVar1 + param_2 * 0x28;
        iVar2 = *(int *)(iVar1 + 4);
        if (param_4 < (uint)(*(int *)(iVar1 + 8) - iVar2 >> 2)) {
          iVar5 = iVar5 + param_3 * 0x20;
          uVar3 = *(uint *)(iVar2 + param_4 * 4);
          if ((int)uVar3 < 2000) {
            if (uVar3 < (*(int *)(iVar5 + 8) - *(int *)(iVar5 + 4) >> 2) + 1000U) {
              *(undefined4 *)(*(int *)(iVar5 + 4) + -4000 + uVar3 * 4) = param_5;
            }
          }
          else if ((uVar3 < 3000) &&
                  (uVar3 < (*(int *)(iVar5 + 0x18) - *(int *)(iVar5 + 0x14) >> 2) * -0x49249249 +
                           2000U)) {
            sVar4 = _strlen(param_6);
            FUN_100b9f36(param_6,sVar4);
          }
        }
      }
    }
  }
  return;
}

