/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027b668 */

undefined4 FUN_18027b668(byte *param_1)

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
    puVar3 = (undefined4 *)FUN_18027e66c();
    *puVar3 = 0x16;
    FUN_180290a50();
    uVar7 = 0xffffffff;
  }
  else {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      puVar3 = (undefined4 *)FUN_18027e66c();
      uVar7 = 0xffffffff;
      *puVar3 = 0x16;
    }
    else {
      do {
        cVar2 = FUN_18027aed8(param_1 + 0x20);
        if (cVar2 == '\0') break;
        cVar2 = FUN_18027b75c(param_1);
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
      piVar4 = (int *)FUN_18027e66c();
      *piVar4 = iVar1;
    }
    FUN_180290a50();
  }
  return uVar7;
}

