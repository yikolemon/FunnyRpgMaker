/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043fe85 */

undefined4 __fastcall FUN_0043fe85(int param_1,uint param_2,int *param_3,char param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if ((*(char *)(param_1 + 0x2dd) != '\0') && (iVar2 = *(int *)(param_1 + 0x2e0), iVar2 != 0)) {
    if (param_4 == '\0') {
      if (*(char *)(iVar2 + 0x20) == '\0') {
        iVar2 = FUN_0043ff56(param_1,0);
        *(int *)(*(int *)(param_1 + 0x2e0) + 0x24) = iVar2;
        iVar2 = *(int *)(param_1 + 0x2e0);
      }
      if (*(char *)(iVar2 + 0x21) == '\0') {
        return *(undefined4 *)(iVar2 + 0x24);
      }
      puVar3 = (undefined4 *)(iVar2 + 0x28);
    }
    else {
      if (*(char *)(iVar2 + 0x2c) == '\0') {
        iVar2 = FUN_0043ff56(param_1,1);
        *(int *)(*(int *)(param_1 + 0x2e0) + 0x30) = iVar2;
        iVar2 = *(int *)(param_1 + 0x2e0);
      }
      if (*(char *)(iVar2 + 0x2d) == '\0') {
        return *(undefined4 *)(iVar2 + 0x30);
      }
      puVar3 = (undefined4 *)(iVar2 + 0x34);
    }
    puVar1 = (uint *)*puVar3;
    if (puVar1[7] == 0) {
      uVar4 = 0;
    }
    else {
      uVar5 = puVar1[5] - 1;
      if (param_2 < puVar1[5]) {
        uVar5 = param_2;
      }
      uVar4 = *(uint *)(puVar1[6] + uVar5 * 4);
      param_2 = *(uint *)(puVar1[7] + uVar5 * 4);
    }
    iVar2 = FUN_0043d9b0(param_1,puVar1,uVar4,param_2);
    if (iVar2 != 0) {
      *param_3 = *param_3 + iVar2;
    }
  }
  return 0;
}

