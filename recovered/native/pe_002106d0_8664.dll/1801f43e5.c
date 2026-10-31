/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f43e5 */

undefined4 FUN_1801f43e5(longlong param_1,uint param_2,int *param_3,char param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((*(char *)(param_1 + 0x401) != '\0') && (lVar5 = *(longlong *)(param_1 + 0x408), lVar5 != 0))
  {
    if (param_4 == '\0') {
      if (*(char *)(lVar5 + 0x40) == '\0') {
        uVar2 = FUN_1801f44c3(param_1,0);
        *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x44) = uVar2;
        lVar5 = *(longlong *)(param_1 + 0x408);
      }
      if (*(char *)(lVar5 + 0x41) == '\0') {
        return *(undefined4 *)(lVar5 + 0x44);
      }
      plVar4 = (longlong *)(lVar5 + 0x48);
    }
    else {
      if (*(char *)(lVar5 + 0x50) == '\0') {
        uVar2 = FUN_1801f44c3(param_1,1);
        *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x54) = uVar2;
        lVar5 = *(longlong *)(param_1 + 0x408);
      }
      if (*(char *)(lVar5 + 0x51) == '\0') {
        return *(undefined4 *)(lVar5 + 0x54);
      }
      plVar4 = (longlong *)(lVar5 + 0x58);
    }
    lVar5 = *plVar4;
    if (*(longlong *)(lVar5 + 0x30) == 0) {
      uVar2 = 0;
    }
    else {
      uVar1 = *(uint *)(lVar5 + 0x20) - 1;
      if (param_2 < *(uint *)(lVar5 + 0x20)) {
        uVar1 = param_2;
      }
      uVar2 = *(undefined4 *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)uVar1 * 4);
      param_2 = *(uint *)(*(longlong *)(lVar5 + 0x30) + (ulonglong)uVar1 * 4);
    }
    iVar3 = FUN_1801f1be8(param_1,lVar5,uVar2,param_2);
    if (iVar3 != 0) {
      *param_3 = *param_3 + iVar3;
    }
  }
  return 0;
}

