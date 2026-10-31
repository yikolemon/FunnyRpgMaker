/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e61ce */

void FUN_1400e61ce(int *param_1,ushort param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_XMM1_Da;
  undefined1 auStack_48 [44];
  int iStack_1c;
  ulonglong uStack_18;
  
  if (((int)(uint)param_2 < *param_1) &&
     (in_XMM1_Da = 0, 0.0 <= *(float *)(*(longlong *)(param_1 + 2) + (ulonglong)param_2 * 4))) {
    return;
  }
  uStack_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  if ((DAT_140e8c780 <= (float)param_1[5]) || ((*(byte *)((longlong)param_1 + 0x4f) & 0x10) != 0)) {
    iStack_1c = 0;
    lVar1 = FUN_1400e5ef0(param_1,in_XMM1_Da,&iStack_1c);
    piVar2 = (int *)(lVar1 + 4);
    if (lVar1 == 0) {
      piVar2 = &iStack_1c;
    }
    iVar3 = *piVar2;
  }
  else {
    lVar1 = FUN_1400e5ef0(param_1,in_XMM1_Da,0);
    piVar2 = param_1 + 4;
    if (lVar1 != 0) {
      piVar2 = (int *)(lVar1 + 4);
    }
    iVar3 = *piVar2;
  }
  if (DAT_140f17b40 == (uStack_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(iVar3);
}

