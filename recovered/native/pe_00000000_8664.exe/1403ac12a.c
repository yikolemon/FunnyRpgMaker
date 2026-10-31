/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ac12a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403ac12a(int *param_1,ushort param_2)

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
  uStack_18 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  if (((float)s_0123456789abcdefghijklmnopqrstuv_140538870._16_4_ <= (float)param_1[5]) ||
     ((*(byte *)((longlong)param_1 + 0x4f) & 0x10) != 0)) {
    iStack_1c = 0;
    lVar1 = FUN_1403abe4c(param_1,in_XMM1_Da,&iStack_1c);
    piVar2 = (int *)(lVar1 + 4);
    if (lVar1 == 0) {
      piVar2 = &iStack_1c;
    }
    iVar3 = *piVar2;
  }
  else {
    lVar1 = FUN_1403abe4c(param_1,in_XMM1_Da,0);
    piVar2 = param_1 + 4;
    if (lVar1 != 0) {
      piVar2 = (int *)(lVar1 + 4);
    }
    iVar3 = *piVar2;
  }
  if (ram0x000140613b10 == (uStack_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(iVar3);
}

