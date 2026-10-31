/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001cd3a */

void FUN_14001cd3a(int *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_2;
  if (param_3 == 4) {
    iVar2 = *(int *)(lVar1 + 0x164);
    if (*(int *)(lVar1 + 0x164) < *(int *)(lVar1 + 0x15c)) {
      iVar2 = *(int *)(lVar1 + 0x15c);
    }
    if (iVar2 <= *(int *)(lVar1 + 0x16c)) {
      iVar2 = *(int *)(lVar1 + 0x16c);
    }
    *param_1 = *param_1 - iVar2;
    iVar2 = *(int *)(lVar1 + 0x164);
    if (*(int *)(lVar1 + 0x15c) < *(int *)(lVar1 + 0x164)) {
      iVar2 = *(int *)(lVar1 + 0x15c);
    }
    if (*(int *)(lVar1 + 0x16c) <= iVar2) {
      iVar2 = *(int *)(lVar1 + 0x16c);
    }
    param_1[2] = param_1[2] - iVar2;
    iVar2 = *(int *)(lVar1 + 0x160);
    if (*(int *)(lVar1 + 0x158) < *(int *)(lVar1 + 0x160)) {
      iVar2 = *(int *)(lVar1 + 0x158);
    }
    if (*(int *)(lVar1 + 0x168) <= iVar2) {
      iVar2 = *(int *)(lVar1 + 0x168);
    }
    param_1[1] = param_1[1] + iVar2;
    iVar2 = *(int *)(lVar1 + 0x160);
    if (*(int *)(lVar1 + 0x160) < *(int *)(lVar1 + 0x158)) {
      iVar2 = *(int *)(lVar1 + 0x158);
    }
    if (iVar2 <= *(int *)(lVar1 + 0x168)) {
      iVar2 = *(int *)(lVar1 + 0x168);
    }
    param_1[3] = param_1[3] + iVar2;
  }
  else if (param_3 == 3) {
    iVar2 = *(int *)(lVar1 + 0x160);
    if (*(int *)(lVar1 + 0x160) < *(int *)(lVar1 + 0x158)) {
      iVar2 = *(int *)(lVar1 + 0x158);
    }
    if (iVar2 <= *(int *)(lVar1 + 0x168)) {
      iVar2 = *(int *)(lVar1 + 0x168);
    }
    *param_1 = *param_1 - iVar2;
    iVar2 = *(int *)(lVar1 + 0x160);
    if (*(int *)(lVar1 + 0x158) < *(int *)(lVar1 + 0x160)) {
      iVar2 = *(int *)(lVar1 + 0x158);
    }
    if (*(int *)(lVar1 + 0x168) <= iVar2) {
      iVar2 = *(int *)(lVar1 + 0x168);
    }
    param_1[2] = param_1[2] - iVar2;
    iVar2 = *(int *)(lVar1 + 0x164);
    if (*(int *)(lVar1 + 0x164) < *(int *)(lVar1 + 0x15c)) {
      iVar2 = *(int *)(lVar1 + 0x15c);
    }
    if (iVar2 <= *(int *)(lVar1 + 0x16c)) {
      iVar2 = *(int *)(lVar1 + 0x16c);
    }
    param_1[1] = param_1[1] - iVar2;
    iVar2 = *(int *)(lVar1 + 0x164);
    if (*(int *)(lVar1 + 0x15c) < *(int *)(lVar1 + 0x164)) {
      iVar2 = *(int *)(lVar1 + 0x15c);
    }
    if (*(int *)(lVar1 + 0x16c) <= iVar2) {
      iVar2 = *(int *)(lVar1 + 0x16c);
    }
    param_1[3] = param_1[3] - iVar2;
    return;
  }
  return;
}

