/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140199f78 */

undefined4 FUN_140199f78(byte *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if ((*(ulonglong *)(param_1 + 0x18) == 0) ||
     (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x18))) {
    puVar3 = (undefined4 *)FUN_14019e8cc();
    *puVar3 = 0x16;
    FUN_1401ae640();
    uVar7 = 0xffffffff;
  }
  else {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      puVar3 = (undefined4 *)FUN_14019e8cc();
      uVar7 = 0xffffffff;
      *puVar3 = 0x16;
    }
    else {
      do {
        cVar2 = FUN_1401997e8(param_1 + 0x20);
        if (cVar2 == '\0') break;
        cVar2 = FUN_14019a06c(param_1);
      } while (cVar2 != '\0');
      uVar7 = *(undefined4 *)(param_1 + 0x88);
      if ((*(longlong *)(param_1 + 0x88) == 0) && (*(int *)(param_1 + 0x34) != 1)) {
        pbVar5 = *(byte **)(param_1 + 0x18);
        if (pbVar5 == *(byte **)(param_1 + 0x10)) {
          uVar6 = 0xffffffff;
          uVar7 = 0xffffffff;
        }
        else {
          uVar6 = (uint)*pbVar5;
          pbVar5 = pbVar5 + 1;
          *(byte **)(param_1 + 0x18) = pbVar5;
        }
        if ((pbVar5 != *(byte **)(param_1 + 8)) &&
           ((pbVar5 != *(byte **)(param_1 + 0x10) || (uVar6 != 0xffffffff)))) {
          *(byte **)(param_1 + 0x18) = pbVar5 + -1;
        }
      }
      if ((*param_1 & 1) == 0) {
        return uVar7;
      }
      iVar1 = *(int *)(param_1 + 0x30);
      if (iVar1 == 0) {
        return uVar7;
      }
      piVar4 = (int *)FUN_14019e8cc();
      *piVar4 = iVar1;
    }
    FUN_1401ae640();
  }
  return uVar7;
}

